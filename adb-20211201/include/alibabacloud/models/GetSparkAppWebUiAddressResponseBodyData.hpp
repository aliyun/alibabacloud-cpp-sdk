// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSPARKAPPWEBUIADDRESSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETSPARKAPPWEBUIADDRESSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class GetSparkAppWebUiAddressResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSparkAppWebUiAddressResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(ExpirationTimeInMillis, expirationTimeInMillis_);
      DARABONBA_PTR_TO_JSON(WebUiAddress, webUiAddress_);
    };
    friend void from_json(const Darabonba::Json& j, GetSparkAppWebUiAddressResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(ExpirationTimeInMillis, expirationTimeInMillis_);
      DARABONBA_PTR_FROM_JSON(WebUiAddress, webUiAddress_);
    };
    GetSparkAppWebUiAddressResponseBodyData() = default ;
    GetSparkAppWebUiAddressResponseBodyData(const GetSparkAppWebUiAddressResponseBodyData &) = default ;
    GetSparkAppWebUiAddressResponseBodyData(GetSparkAppWebUiAddressResponseBodyData &&) = default ;
    GetSparkAppWebUiAddressResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSparkAppWebUiAddressResponseBodyData() = default ;
    GetSparkAppWebUiAddressResponseBodyData& operator=(const GetSparkAppWebUiAddressResponseBodyData &) = default ;
    GetSparkAppWebUiAddressResponseBodyData& operator=(GetSparkAppWebUiAddressResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appId_ != nullptr
        && this->DBClusterId_ != nullptr && this->expirationTimeInMillis_ != nullptr && this->webUiAddress_ != nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline GetSparkAppWebUiAddressResponseBodyData& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline GetSparkAppWebUiAddressResponseBodyData& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // expirationTimeInMillis Field Functions 
    bool hasExpirationTimeInMillis() const { return this->expirationTimeInMillis_ != nullptr;};
    void deleteExpirationTimeInMillis() { this->expirationTimeInMillis_ = nullptr;};
    inline int64_t expirationTimeInMillis() const { DARABONBA_PTR_GET_DEFAULT(expirationTimeInMillis_, 0L) };
    inline GetSparkAppWebUiAddressResponseBodyData& setExpirationTimeInMillis(int64_t expirationTimeInMillis) { DARABONBA_PTR_SET_VALUE(expirationTimeInMillis_, expirationTimeInMillis) };


    // webUiAddress Field Functions 
    bool hasWebUiAddress() const { return this->webUiAddress_ != nullptr;};
    void deleteWebUiAddress() { this->webUiAddress_ = nullptr;};
    inline string webUiAddress() const { DARABONBA_PTR_GET_DEFAULT(webUiAddress_, "") };
    inline GetSparkAppWebUiAddressResponseBodyData& setWebUiAddress(string webUiAddress) { DARABONBA_PTR_SET_VALUE(webUiAddress_, webUiAddress) };


  protected:
    // The Spark application ID.
    std::shared_ptr<string> appId_ = nullptr;
    // The database ID.
    std::shared_ptr<string> DBClusterId_ = nullptr;
    // The expiration time. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<int64_t> expirationTimeInMillis_ = nullptr;
    // The URL of the web UI for the Spark application.
    std::shared_ptr<string> webUiAddress_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
