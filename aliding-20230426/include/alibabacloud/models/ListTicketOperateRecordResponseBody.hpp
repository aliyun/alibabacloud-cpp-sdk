// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTICKETOPERATERECORDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTTICKETOPERATERECORDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListTicketOperateRecordResponseBodyRecords.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class ListTicketOperateRecordResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTicketOperateRecordResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(records, records_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(vendorRequestId, vendorRequestId_);
      DARABONBA_PTR_TO_JSON(vendorType, vendorType_);
    };
    friend void from_json(const Darabonba::Json& j, ListTicketOperateRecordResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(records, records_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(vendorRequestId, vendorRequestId_);
      DARABONBA_PTR_FROM_JSON(vendorType, vendorType_);
    };
    ListTicketOperateRecordResponseBody() = default ;
    ListTicketOperateRecordResponseBody(const ListTicketOperateRecordResponseBody &) = default ;
    ListTicketOperateRecordResponseBody(ListTicketOperateRecordResponseBody &&) = default ;
    ListTicketOperateRecordResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTicketOperateRecordResponseBody() = default ;
    ListTicketOperateRecordResponseBody& operator=(const ListTicketOperateRecordResponseBody &) = default ;
    ListTicketOperateRecordResponseBody& operator=(ListTicketOperateRecordResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->records_ == nullptr
        && return this->requestId_ == nullptr && return this->vendorRequestId_ == nullptr && return this->vendorType_ == nullptr; };
    // records Field Functions 
    bool hasRecords() const { return this->records_ != nullptr;};
    void deleteRecords() { this->records_ = nullptr;};
    inline const vector<ListTicketOperateRecordResponseBodyRecords> & records() const { DARABONBA_PTR_GET_CONST(records_, vector<ListTicketOperateRecordResponseBodyRecords>) };
    inline vector<ListTicketOperateRecordResponseBodyRecords> records() { DARABONBA_PTR_GET(records_, vector<ListTicketOperateRecordResponseBodyRecords>) };
    inline ListTicketOperateRecordResponseBody& setRecords(const vector<ListTicketOperateRecordResponseBodyRecords> & records) { DARABONBA_PTR_SET_VALUE(records_, records) };
    inline ListTicketOperateRecordResponseBody& setRecords(vector<ListTicketOperateRecordResponseBodyRecords> && records) { DARABONBA_PTR_SET_RVALUE(records_, records) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListTicketOperateRecordResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // vendorRequestId Field Functions 
    bool hasVendorRequestId() const { return this->vendorRequestId_ != nullptr;};
    void deleteVendorRequestId() { this->vendorRequestId_ = nullptr;};
    inline string vendorRequestId() const { DARABONBA_PTR_GET_DEFAULT(vendorRequestId_, "") };
    inline ListTicketOperateRecordResponseBody& setVendorRequestId(string vendorRequestId) { DARABONBA_PTR_SET_VALUE(vendorRequestId_, vendorRequestId) };


    // vendorType Field Functions 
    bool hasVendorType() const { return this->vendorType_ != nullptr;};
    void deleteVendorType() { this->vendorType_ = nullptr;};
    inline string vendorType() const { DARABONBA_PTR_GET_DEFAULT(vendorType_, "") };
    inline ListTicketOperateRecordResponseBody& setVendorType(string vendorType) { DARABONBA_PTR_SET_VALUE(vendorType_, vendorType) };


  protected:
    std::shared_ptr<vector<ListTicketOperateRecordResponseBodyRecords>> records_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> vendorRequestId_ = nullptr;
    std::shared_ptr<string> vendorType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
