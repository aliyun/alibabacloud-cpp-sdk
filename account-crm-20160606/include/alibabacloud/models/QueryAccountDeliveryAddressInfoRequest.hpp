// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYACCOUNTDELIVERYADDRESSINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYACCOUNTDELIVERYADDRESSINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AccountCrm20160606
{
namespace Models
{
  class QueryAccountDeliveryAddressInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryAccountDeliveryAddressInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(Pk, pk_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryAccountDeliveryAddressInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(Pk, pk_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    QueryAccountDeliveryAddressInfoRequest() = default ;
    QueryAccountDeliveryAddressInfoRequest(const QueryAccountDeliveryAddressInfoRequest &) = default ;
    QueryAccountDeliveryAddressInfoRequest(QueryAccountDeliveryAddressInfoRequest &&) = default ;
    QueryAccountDeliveryAddressInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryAccountDeliveryAddressInfoRequest() = default ;
    QueryAccountDeliveryAddressInfoRequest& operator=(const QueryAccountDeliveryAddressInfoRequest &) = default ;
    QueryAccountDeliveryAddressInfoRequest& operator=(QueryAccountDeliveryAddressInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appName_ == nullptr
        && this->pk_ == nullptr && this->requestId_ == nullptr; };
    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline QueryAccountDeliveryAddressInfoRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // pk Field Functions 
    bool hasPk() const { return this->pk_ != nullptr;};
    void deletePk() { this->pk_ = nullptr;};
    inline string getPk() const { DARABONBA_PTR_GET_DEFAULT(pk_, "") };
    inline QueryAccountDeliveryAddressInfoRequest& setPk(string pk) { DARABONBA_PTR_SET_VALUE(pk_, pk) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryAccountDeliveryAddressInfoRequest& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // This parameter is required.
    shared_ptr<string> appName_ {};
    // This parameter is required.
    shared_ptr<string> pk_ {};
    // This parameter is required.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AccountCrm20160606
#endif
