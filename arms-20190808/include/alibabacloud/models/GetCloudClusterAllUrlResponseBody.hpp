// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCLOUDCLUSTERALLURLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCLOUDCLUSTERALLURLRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class GetCloudClusterAllUrlResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCloudClusterAllUrlResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetCloudClusterAllUrlResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetCloudClusterAllUrlResponseBody() = default ;
    GetCloudClusterAllUrlResponseBody(const GetCloudClusterAllUrlResponseBody &) = default ;
    GetCloudClusterAllUrlResponseBody(GetCloudClusterAllUrlResponseBody &&) = default ;
    GetCloudClusterAllUrlResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCloudClusterAllUrlResponseBody() = default ;
    GetCloudClusterAllUrlResponseBody& operator=(const GetCloudClusterAllUrlResponseBody &) = default ;
    GetCloudClusterAllUrlResponseBody& operator=(GetCloudClusterAllUrlResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
        DARABONBA_PTR_TO_JSON(Region, region_);
        DARABONBA_PTR_TO_JSON(RemoteUrl, remoteUrl_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
        DARABONBA_PTR_FROM_JSON(Region, region_);
        DARABONBA_PTR_FROM_JSON(RemoteUrl, remoteUrl_);
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
      class RemoteUrl : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RemoteUrl& obj) { 
          DARABONBA_PTR_TO_JSON(AuthToken, authToken_);
          DARABONBA_PTR_TO_JSON(GrafanaUrl, grafanaUrl_);
          DARABONBA_PTR_TO_JSON(InternetGrafanaUrl, internetGrafanaUrl_);
          DARABONBA_PTR_TO_JSON(InternetPushGatewayUrl, internetPushGatewayUrl_);
          DARABONBA_PTR_TO_JSON(InternetRemoteReadUrl, internetRemoteReadUrl_);
          DARABONBA_PTR_TO_JSON(InternetRemoteWriteUrl, internetRemoteWriteUrl_);
          DARABONBA_PTR_TO_JSON(PushGatewayUrl, pushGatewayUrl_);
          DARABONBA_PTR_TO_JSON(RemoteReadUrl, remoteReadUrl_);
          DARABONBA_PTR_TO_JSON(RemoteWriteUrl, remoteWriteUrl_);
          DARABONBA_PTR_TO_JSON(Token, token_);
        };
        friend void from_json(const Darabonba::Json& j, RemoteUrl& obj) { 
          DARABONBA_PTR_FROM_JSON(AuthToken, authToken_);
          DARABONBA_PTR_FROM_JSON(GrafanaUrl, grafanaUrl_);
          DARABONBA_PTR_FROM_JSON(InternetGrafanaUrl, internetGrafanaUrl_);
          DARABONBA_PTR_FROM_JSON(InternetPushGatewayUrl, internetPushGatewayUrl_);
          DARABONBA_PTR_FROM_JSON(InternetRemoteReadUrl, internetRemoteReadUrl_);
          DARABONBA_PTR_FROM_JSON(InternetRemoteWriteUrl, internetRemoteWriteUrl_);
          DARABONBA_PTR_FROM_JSON(PushGatewayUrl, pushGatewayUrl_);
          DARABONBA_PTR_FROM_JSON(RemoteReadUrl, remoteReadUrl_);
          DARABONBA_PTR_FROM_JSON(RemoteWriteUrl, remoteWriteUrl_);
          DARABONBA_PTR_FROM_JSON(Token, token_);
        };
        RemoteUrl() = default ;
        RemoteUrl(const RemoteUrl &) = default ;
        RemoteUrl(RemoteUrl &&) = default ;
        RemoteUrl(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RemoteUrl() = default ;
        RemoteUrl& operator=(const RemoteUrl &) = default ;
        RemoteUrl& operator=(RemoteUrl &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->authToken_ == nullptr
        && this->grafanaUrl_ == nullptr && this->internetGrafanaUrl_ == nullptr && this->internetPushGatewayUrl_ == nullptr && this->internetRemoteReadUrl_ == nullptr && this->internetRemoteWriteUrl_ == nullptr
        && this->pushGatewayUrl_ == nullptr && this->remoteReadUrl_ == nullptr && this->remoteWriteUrl_ == nullptr && this->token_ == nullptr; };
        // authToken Field Functions 
        bool hasAuthToken() const { return this->authToken_ != nullptr;};
        void deleteAuthToken() { this->authToken_ = nullptr;};
        inline bool getAuthToken() const { DARABONBA_PTR_GET_DEFAULT(authToken_, false) };
        inline RemoteUrl& setAuthToken(bool authToken) { DARABONBA_PTR_SET_VALUE(authToken_, authToken) };


        // grafanaUrl Field Functions 
        bool hasGrafanaUrl() const { return this->grafanaUrl_ != nullptr;};
        void deleteGrafanaUrl() { this->grafanaUrl_ = nullptr;};
        inline string getGrafanaUrl() const { DARABONBA_PTR_GET_DEFAULT(grafanaUrl_, "") };
        inline RemoteUrl& setGrafanaUrl(string grafanaUrl) { DARABONBA_PTR_SET_VALUE(grafanaUrl_, grafanaUrl) };


        // internetGrafanaUrl Field Functions 
        bool hasInternetGrafanaUrl() const { return this->internetGrafanaUrl_ != nullptr;};
        void deleteInternetGrafanaUrl() { this->internetGrafanaUrl_ = nullptr;};
        inline string getInternetGrafanaUrl() const { DARABONBA_PTR_GET_DEFAULT(internetGrafanaUrl_, "") };
        inline RemoteUrl& setInternetGrafanaUrl(string internetGrafanaUrl) { DARABONBA_PTR_SET_VALUE(internetGrafanaUrl_, internetGrafanaUrl) };


        // internetPushGatewayUrl Field Functions 
        bool hasInternetPushGatewayUrl() const { return this->internetPushGatewayUrl_ != nullptr;};
        void deleteInternetPushGatewayUrl() { this->internetPushGatewayUrl_ = nullptr;};
        inline string getInternetPushGatewayUrl() const { DARABONBA_PTR_GET_DEFAULT(internetPushGatewayUrl_, "") };
        inline RemoteUrl& setInternetPushGatewayUrl(string internetPushGatewayUrl) { DARABONBA_PTR_SET_VALUE(internetPushGatewayUrl_, internetPushGatewayUrl) };


        // internetRemoteReadUrl Field Functions 
        bool hasInternetRemoteReadUrl() const { return this->internetRemoteReadUrl_ != nullptr;};
        void deleteInternetRemoteReadUrl() { this->internetRemoteReadUrl_ = nullptr;};
        inline string getInternetRemoteReadUrl() const { DARABONBA_PTR_GET_DEFAULT(internetRemoteReadUrl_, "") };
        inline RemoteUrl& setInternetRemoteReadUrl(string internetRemoteReadUrl) { DARABONBA_PTR_SET_VALUE(internetRemoteReadUrl_, internetRemoteReadUrl) };


        // internetRemoteWriteUrl Field Functions 
        bool hasInternetRemoteWriteUrl() const { return this->internetRemoteWriteUrl_ != nullptr;};
        void deleteInternetRemoteWriteUrl() { this->internetRemoteWriteUrl_ = nullptr;};
        inline string getInternetRemoteWriteUrl() const { DARABONBA_PTR_GET_DEFAULT(internetRemoteWriteUrl_, "") };
        inline RemoteUrl& setInternetRemoteWriteUrl(string internetRemoteWriteUrl) { DARABONBA_PTR_SET_VALUE(internetRemoteWriteUrl_, internetRemoteWriteUrl) };


        // pushGatewayUrl Field Functions 
        bool hasPushGatewayUrl() const { return this->pushGatewayUrl_ != nullptr;};
        void deletePushGatewayUrl() { this->pushGatewayUrl_ = nullptr;};
        inline string getPushGatewayUrl() const { DARABONBA_PTR_GET_DEFAULT(pushGatewayUrl_, "") };
        inline RemoteUrl& setPushGatewayUrl(string pushGatewayUrl) { DARABONBA_PTR_SET_VALUE(pushGatewayUrl_, pushGatewayUrl) };


        // remoteReadUrl Field Functions 
        bool hasRemoteReadUrl() const { return this->remoteReadUrl_ != nullptr;};
        void deleteRemoteReadUrl() { this->remoteReadUrl_ = nullptr;};
        inline string getRemoteReadUrl() const { DARABONBA_PTR_GET_DEFAULT(remoteReadUrl_, "") };
        inline RemoteUrl& setRemoteReadUrl(string remoteReadUrl) { DARABONBA_PTR_SET_VALUE(remoteReadUrl_, remoteReadUrl) };


        // remoteWriteUrl Field Functions 
        bool hasRemoteWriteUrl() const { return this->remoteWriteUrl_ != nullptr;};
        void deleteRemoteWriteUrl() { this->remoteWriteUrl_ = nullptr;};
        inline string getRemoteWriteUrl() const { DARABONBA_PTR_GET_DEFAULT(remoteWriteUrl_, "") };
        inline RemoteUrl& setRemoteWriteUrl(string remoteWriteUrl) { DARABONBA_PTR_SET_VALUE(remoteWriteUrl_, remoteWriteUrl) };


        // token Field Functions 
        bool hasToken() const { return this->token_ != nullptr;};
        void deleteToken() { this->token_ = nullptr;};
        inline string getToken() const { DARABONBA_PTR_GET_DEFAULT(token_, "") };
        inline RemoteUrl& setToken(string token) { DARABONBA_PTR_SET_VALUE(token_, token) };


      protected:
        // Indicates whether authentication is enabled.
        shared_ptr<bool> authToken_ {};
        // The internal URL for Grafana.
        shared_ptr<string> grafanaUrl_ {};
        // The public URL for Grafana.
        shared_ptr<string> internetGrafanaUrl_ {};
        // The public URL for Pushgateway.
        shared_ptr<string> internetPushGatewayUrl_ {};
        // The public URL for remote read.
        shared_ptr<string> internetRemoteReadUrl_ {};
        // The public URL for remote write.
        shared_ptr<string> internetRemoteWriteUrl_ {};
        // The internal URL for Pushgateway.
        shared_ptr<string> pushGatewayUrl_ {};
        // The internal URL for remote read.
        shared_ptr<string> remoteReadUrl_ {};
        // The internal URL for remote write.
        shared_ptr<string> remoteWriteUrl_ {};
        // The token value used for authentication.
        shared_ptr<string> token_ {};
      };

      virtual bool empty() const override { return this->productCode_ == nullptr
        && this->region_ == nullptr && this->remoteUrl_ == nullptr; };
      // productCode Field Functions 
      bool hasProductCode() const { return this->productCode_ != nullptr;};
      void deleteProductCode() { this->productCode_ = nullptr;};
      inline string getProductCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
      inline Data& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


      // region Field Functions 
      bool hasRegion() const { return this->region_ != nullptr;};
      void deleteRegion() { this->region_ = nullptr;};
      inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
      inline Data& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


      // remoteUrl Field Functions 
      bool hasRemoteUrl() const { return this->remoteUrl_ != nullptr;};
      void deleteRemoteUrl() { this->remoteUrl_ = nullptr;};
      inline const Data::RemoteUrl & getRemoteUrl() const { DARABONBA_PTR_GET_CONST(remoteUrl_, Data::RemoteUrl) };
      inline Data::RemoteUrl getRemoteUrl() { DARABONBA_PTR_GET(remoteUrl_, Data::RemoteUrl) };
      inline Data& setRemoteUrl(const Data::RemoteUrl & remoteUrl) { DARABONBA_PTR_SET_VALUE(remoteUrl_, remoteUrl) };
      inline Data& setRemoteUrl(Data::RemoteUrl && remoteUrl) { DARABONBA_PTR_SET_RVALUE(remoteUrl_, remoteUrl) };


    protected:
      // The identifier of the cloud service.
      shared_ptr<string> productCode_ {};
      // The region ID.
      shared_ptr<string> region_ {};
      // The URLs for remote read and write. The value is a JSON string.
      shared_ptr<Data::RemoteUrl> remoteUrl_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline GetCloudClusterAllUrlResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<GetCloudClusterAllUrlResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<GetCloudClusterAllUrlResponseBody::Data>) };
    inline vector<GetCloudClusterAllUrlResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<GetCloudClusterAllUrlResponseBody::Data>) };
    inline GetCloudClusterAllUrlResponseBody& setData(const vector<GetCloudClusterAllUrlResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetCloudClusterAllUrlResponseBody& setData(vector<GetCloudClusterAllUrlResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetCloudClusterAllUrlResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetCloudClusterAllUrlResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetCloudClusterAllUrlResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The HTTP status code. The status code 200 indicates that the request was successful. Other status codes indicate that the request failed.
    shared_ptr<int32_t> code_ {};
    // An array object.
    shared_ptr<vector<GetCloudClusterAllUrlResponseBody::Data>> data_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values: true and false.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
