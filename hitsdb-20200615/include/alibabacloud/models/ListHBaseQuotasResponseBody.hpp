// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTHBASEQUOTASRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTHBASEQUOTASRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hitsdb20200615
{
namespace Models
{
  class ListHBaseQuotasResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListHBaseQuotasResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_ANY_TO_JSON(RawData, rawData_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListHBaseQuotasResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_ANY_FROM_JSON(RawData, rawData_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListHBaseQuotasResponseBody() = default ;
    ListHBaseQuotasResponseBody(const ListHBaseQuotasResponseBody &) = default ;
    ListHBaseQuotasResponseBody(ListHBaseQuotasResponseBody &&) = default ;
    ListHBaseQuotasResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListHBaseQuotasResponseBody() = default ;
    ListHBaseQuotasResponseBody& operator=(const ListHBaseQuotasResponseBody &) = default ;
    ListHBaseQuotasResponseBody& operator=(ListHBaseQuotasResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->rawData_ == nullptr && this->requestId_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline ListHBaseQuotasResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // rawData Field Functions 
    bool hasRawData() const { return this->rawData_ != nullptr;};
    void deleteRawData() { this->rawData_ = nullptr;};
    inline     const Darabonba::Json & getRawData() const { DARABONBA_GET(rawData_) };
    Darabonba::Json & getRawData() { DARABONBA_GET(rawData_) };
    inline ListHBaseQuotasResponseBody& setRawData(const Darabonba::Json & rawData) { DARABONBA_SET_VALUE(rawData_, rawData) };
    inline ListHBaseQuotasResponseBody& setRawData(Darabonba::Json && rawData) { DARABONBA_SET_RVALUE(rawData_, rawData) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListHBaseQuotasResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> accessDeniedDetail_ {};
    Darabonba::Json rawData_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hitsdb20200615
#endif
