// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSPARKAPPWEBUIADDRESSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSPARKAPPWEBUIADDRESSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class GetSparkAppWebUiAddressResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSparkAppWebUiAddressResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetSparkAppWebUiAddressResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetSparkAppWebUiAddressResponseBody() = default ;
    GetSparkAppWebUiAddressResponseBody(const GetSparkAppWebUiAddressResponseBody &) = default ;
    GetSparkAppWebUiAddressResponseBody(GetSparkAppWebUiAddressResponseBody &&) = default ;
    GetSparkAppWebUiAddressResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSparkAppWebUiAddressResponseBody() = default ;
    GetSparkAppWebUiAddressResponseBody& operator=(const GetSparkAppWebUiAddressResponseBody &) = default ;
    GetSparkAppWebUiAddressResponseBody& operator=(GetSparkAppWebUiAddressResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AppId, appId_);
        DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
        DARABONBA_PTR_TO_JSON(ExpirationTimeInMillis, expirationTimeInMillis_);
        DARABONBA_PTR_TO_JSON(WebUiAddress, webUiAddress_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AppId, appId_);
        DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
        DARABONBA_PTR_FROM_JSON(ExpirationTimeInMillis, expirationTimeInMillis_);
        DARABONBA_PTR_FROM_JSON(WebUiAddress, webUiAddress_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->appId_ == nullptr
        && this->DBClusterId_ == nullptr && this->expirationTimeInMillis_ == nullptr && this->webUiAddress_ == nullptr; };
      // appId Field Functions 
      bool hasAppId() const { return this->appId_ != nullptr;};
      void deleteAppId() { this->appId_ = nullptr;};
      inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
      inline Data& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


      // DBClusterId Field Functions 
      bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
      void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
      inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
      inline Data& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


      // expirationTimeInMillis Field Functions 
      bool hasExpirationTimeInMillis() const { return this->expirationTimeInMillis_ != nullptr;};
      void deleteExpirationTimeInMillis() { this->expirationTimeInMillis_ = nullptr;};
      inline int64_t getExpirationTimeInMillis() const { DARABONBA_PTR_GET_DEFAULT(expirationTimeInMillis_, 0L) };
      inline Data& setExpirationTimeInMillis(int64_t expirationTimeInMillis) { DARABONBA_PTR_SET_VALUE(expirationTimeInMillis_, expirationTimeInMillis) };


      // webUiAddress Field Functions 
      bool hasWebUiAddress() const { return this->webUiAddress_ != nullptr;};
      void deleteWebUiAddress() { this->webUiAddress_ = nullptr;};
      inline string getWebUiAddress() const { DARABONBA_PTR_GET_DEFAULT(webUiAddress_, "") };
      inline Data& setWebUiAddress(string webUiAddress) { DARABONBA_PTR_SET_VALUE(webUiAddress_, webUiAddress) };


    protected:
      // The Spark application ID.
      shared_ptr<string> appId_ {};
      // The database ID.
      shared_ptr<string> DBClusterId_ {};
      // The expiration time. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
      shared_ptr<int64_t> expirationTimeInMillis_ {};
      // The URL of the web UI for the Spark application.
      shared_ptr<string> webUiAddress_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetSparkAppWebUiAddressResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetSparkAppWebUiAddressResponseBody::Data) };
    inline GetSparkAppWebUiAddressResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetSparkAppWebUiAddressResponseBody::Data) };
    inline GetSparkAppWebUiAddressResponseBody& setData(const GetSparkAppWebUiAddressResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetSparkAppWebUiAddressResponseBody& setData(GetSparkAppWebUiAddressResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSparkAppWebUiAddressResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned data.
    shared_ptr<GetSparkAppWebUiAddressResponseBody::Data> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
