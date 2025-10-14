// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYRECORDMINUTESURLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYRECORDMINUTESURLRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryRecordMinutesUrlResponseBodyRecordMinutesUrls.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class QueryRecordMinutesUrlResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryRecordMinutesUrlResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(recordMinutesUrls, recordMinutesUrls_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(vendorRequestId, vendorRequestId_);
      DARABONBA_PTR_TO_JSON(vendorType, vendorType_);
    };
    friend void from_json(const Darabonba::Json& j, QueryRecordMinutesUrlResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(recordMinutesUrls, recordMinutesUrls_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(vendorRequestId, vendorRequestId_);
      DARABONBA_PTR_FROM_JSON(vendorType, vendorType_);
    };
    QueryRecordMinutesUrlResponseBody() = default ;
    QueryRecordMinutesUrlResponseBody(const QueryRecordMinutesUrlResponseBody &) = default ;
    QueryRecordMinutesUrlResponseBody(QueryRecordMinutesUrlResponseBody &&) = default ;
    QueryRecordMinutesUrlResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryRecordMinutesUrlResponseBody() = default ;
    QueryRecordMinutesUrlResponseBody& operator=(const QueryRecordMinutesUrlResponseBody &) = default ;
    QueryRecordMinutesUrlResponseBody& operator=(QueryRecordMinutesUrlResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->recordMinutesUrls_ == nullptr
        && return this->requestId_ == nullptr && return this->vendorRequestId_ == nullptr && return this->vendorType_ == nullptr; };
    // recordMinutesUrls Field Functions 
    bool hasRecordMinutesUrls() const { return this->recordMinutesUrls_ != nullptr;};
    void deleteRecordMinutesUrls() { this->recordMinutesUrls_ = nullptr;};
    inline const vector<QueryRecordMinutesUrlResponseBodyRecordMinutesUrls> & recordMinutesUrls() const { DARABONBA_PTR_GET_CONST(recordMinutesUrls_, vector<QueryRecordMinutesUrlResponseBodyRecordMinutesUrls>) };
    inline vector<QueryRecordMinutesUrlResponseBodyRecordMinutesUrls> recordMinutesUrls() { DARABONBA_PTR_GET(recordMinutesUrls_, vector<QueryRecordMinutesUrlResponseBodyRecordMinutesUrls>) };
    inline QueryRecordMinutesUrlResponseBody& setRecordMinutesUrls(const vector<QueryRecordMinutesUrlResponseBodyRecordMinutesUrls> & recordMinutesUrls) { DARABONBA_PTR_SET_VALUE(recordMinutesUrls_, recordMinutesUrls) };
    inline QueryRecordMinutesUrlResponseBody& setRecordMinutesUrls(vector<QueryRecordMinutesUrlResponseBodyRecordMinutesUrls> && recordMinutesUrls) { DARABONBA_PTR_SET_RVALUE(recordMinutesUrls_, recordMinutesUrls) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryRecordMinutesUrlResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // vendorRequestId Field Functions 
    bool hasVendorRequestId() const { return this->vendorRequestId_ != nullptr;};
    void deleteVendorRequestId() { this->vendorRequestId_ = nullptr;};
    inline string vendorRequestId() const { DARABONBA_PTR_GET_DEFAULT(vendorRequestId_, "") };
    inline QueryRecordMinutesUrlResponseBody& setVendorRequestId(string vendorRequestId) { DARABONBA_PTR_SET_VALUE(vendorRequestId_, vendorRequestId) };


    // vendorType Field Functions 
    bool hasVendorType() const { return this->vendorType_ != nullptr;};
    void deleteVendorType() { this->vendorType_ = nullptr;};
    inline string vendorType() const { DARABONBA_PTR_GET_DEFAULT(vendorType_, "") };
    inline QueryRecordMinutesUrlResponseBody& setVendorType(string vendorType) { DARABONBA_PTR_SET_VALUE(vendorType_, vendorType) };


  protected:
    std::shared_ptr<vector<QueryRecordMinutesUrlResponseBodyRecordMinutesUrls>> recordMinutesUrls_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> vendorRequestId_ = nullptr;
    std::shared_ptr<string> vendorType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
