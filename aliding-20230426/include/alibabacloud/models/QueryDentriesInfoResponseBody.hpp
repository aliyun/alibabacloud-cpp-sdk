// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYDENTRIESINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYDENTRIESINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryDentriesInfoResponseBodyDentry.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class QueryDentriesInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryDentriesInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Dentry, dentry_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(vendorRequestId, vendorRequestId_);
      DARABONBA_PTR_TO_JSON(vendorType, vendorType_);
    };
    friend void from_json(const Darabonba::Json& j, QueryDentriesInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Dentry, dentry_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(vendorRequestId, vendorRequestId_);
      DARABONBA_PTR_FROM_JSON(vendorType, vendorType_);
    };
    QueryDentriesInfoResponseBody() = default ;
    QueryDentriesInfoResponseBody(const QueryDentriesInfoResponseBody &) = default ;
    QueryDentriesInfoResponseBody(QueryDentriesInfoResponseBody &&) = default ;
    QueryDentriesInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryDentriesInfoResponseBody() = default ;
    QueryDentriesInfoResponseBody& operator=(const QueryDentriesInfoResponseBody &) = default ;
    QueryDentriesInfoResponseBody& operator=(QueryDentriesInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dentry_ != nullptr
        && this->requestId_ != nullptr && this->vendorRequestId_ != nullptr && this->vendorType_ != nullptr; };
    // dentry Field Functions 
    bool hasDentry() const { return this->dentry_ != nullptr;};
    void deleteDentry() { this->dentry_ = nullptr;};
    inline const QueryDentriesInfoResponseBodyDentry & dentry() const { DARABONBA_PTR_GET_CONST(dentry_, QueryDentriesInfoResponseBodyDentry) };
    inline QueryDentriesInfoResponseBodyDentry dentry() { DARABONBA_PTR_GET(dentry_, QueryDentriesInfoResponseBodyDentry) };
    inline QueryDentriesInfoResponseBody& setDentry(const QueryDentriesInfoResponseBodyDentry & dentry) { DARABONBA_PTR_SET_VALUE(dentry_, dentry) };
    inline QueryDentriesInfoResponseBody& setDentry(QueryDentriesInfoResponseBodyDentry && dentry) { DARABONBA_PTR_SET_RVALUE(dentry_, dentry) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryDentriesInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // vendorRequestId Field Functions 
    bool hasVendorRequestId() const { return this->vendorRequestId_ != nullptr;};
    void deleteVendorRequestId() { this->vendorRequestId_ = nullptr;};
    inline string vendorRequestId() const { DARABONBA_PTR_GET_DEFAULT(vendorRequestId_, "") };
    inline QueryDentriesInfoResponseBody& setVendorRequestId(string vendorRequestId) { DARABONBA_PTR_SET_VALUE(vendorRequestId_, vendorRequestId) };


    // vendorType Field Functions 
    bool hasVendorType() const { return this->vendorType_ != nullptr;};
    void deleteVendorType() { this->vendorType_ = nullptr;};
    inline string vendorType() const { DARABONBA_PTR_GET_DEFAULT(vendorType_, "") };
    inline QueryDentriesInfoResponseBody& setVendorType(string vendorType) { DARABONBA_PTR_SET_VALUE(vendorType_, vendorType) };


  protected:
    std::shared_ptr<QueryDentriesInfoResponseBodyDentry> dentry_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> vendorRequestId_ = nullptr;
    std::shared_ptr<string> vendorType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
