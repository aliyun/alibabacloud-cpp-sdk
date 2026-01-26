// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESYNTHETICTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESYNTHETICTASKREQUEST_HPP_
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
  class CreateSyntheticTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSyntheticTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CommonParam, commonParam_);
      DARABONBA_PTR_TO_JSON(Download, download_);
      DARABONBA_PTR_TO_JSON(ExtendInterval, extendInterval_);
      DARABONBA_PTR_TO_JSON(IntervalTime, intervalTime_);
      DARABONBA_PTR_TO_JSON(IntervalType, intervalType_);
      DARABONBA_PTR_TO_JSON(IpType, ipType_);
      DARABONBA_PTR_TO_JSON(MonitorList, monitorList_);
      DARABONBA_PTR_TO_JSON(Navigation, navigation_);
      DARABONBA_PTR_TO_JSON(Net, net_);
      DARABONBA_PTR_TO_JSON(Protocol, protocol_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(TaskName, taskName_);
      DARABONBA_PTR_TO_JSON(TaskType, taskType_);
      DARABONBA_PTR_TO_JSON(UpdateTask, updateTask_);
      DARABONBA_PTR_TO_JSON(Url, url_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSyntheticTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CommonParam, commonParam_);
      DARABONBA_PTR_FROM_JSON(Download, download_);
      DARABONBA_PTR_FROM_JSON(ExtendInterval, extendInterval_);
      DARABONBA_PTR_FROM_JSON(IntervalTime, intervalTime_);
      DARABONBA_PTR_FROM_JSON(IntervalType, intervalType_);
      DARABONBA_PTR_FROM_JSON(IpType, ipType_);
      DARABONBA_PTR_FROM_JSON(MonitorList, monitorList_);
      DARABONBA_PTR_FROM_JSON(Navigation, navigation_);
      DARABONBA_PTR_FROM_JSON(Net, net_);
      DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
      DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
      DARABONBA_PTR_FROM_JSON(UpdateTask, updateTask_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
    };
    CreateSyntheticTaskRequest() = default ;
    CreateSyntheticTaskRequest(const CreateSyntheticTaskRequest &) = default ;
    CreateSyntheticTaskRequest(CreateSyntheticTaskRequest &&) = default ;
    CreateSyntheticTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSyntheticTaskRequest() = default ;
    CreateSyntheticTaskRequest& operator=(const CreateSyntheticTaskRequest &) = default ;
    CreateSyntheticTaskRequest& operator=(CreateSyntheticTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Protocol : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Protocol& obj) { 
        DARABONBA_PTR_TO_JSON(CharacterEncoding, characterEncoding_);
        DARABONBA_PTR_TO_JSON(CustomHost, customHost_);
        DARABONBA_PTR_TO_JSON(CustomHostIp, customHostIp_);
        DARABONBA_PTR_TO_JSON(ProtocolConnectionTime, protocolConnectionTime_);
        DARABONBA_PTR_TO_JSON(ProtocolMonitorTimeout, protocolMonitorTimeout_);
        DARABONBA_PTR_TO_JSON(ReceivedDataSize, receivedDataSize_);
        DARABONBA_PTR_TO_JSON(RequestContent, requestContent_);
        DARABONBA_PTR_TO_JSON(VerifyContent, verifyContent_);
        DARABONBA_PTR_TO_JSON(VerifyWay, verifyWay_);
      };
      friend void from_json(const Darabonba::Json& j, Protocol& obj) { 
        DARABONBA_PTR_FROM_JSON(CharacterEncoding, characterEncoding_);
        DARABONBA_PTR_FROM_JSON(CustomHost, customHost_);
        DARABONBA_PTR_FROM_JSON(CustomHostIp, customHostIp_);
        DARABONBA_PTR_FROM_JSON(ProtocolConnectionTime, protocolConnectionTime_);
        DARABONBA_PTR_FROM_JSON(ProtocolMonitorTimeout, protocolMonitorTimeout_);
        DARABONBA_PTR_FROM_JSON(ReceivedDataSize, receivedDataSize_);
        DARABONBA_PTR_FROM_JSON(RequestContent, requestContent_);
        DARABONBA_PTR_FROM_JSON(VerifyContent, verifyContent_);
        DARABONBA_PTR_FROM_JSON(VerifyWay, verifyWay_);
      };
      Protocol() = default ;
      Protocol(const Protocol &) = default ;
      Protocol(Protocol &&) = default ;
      Protocol(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Protocol() = default ;
      Protocol& operator=(const Protocol &) = default ;
      Protocol& operator=(Protocol &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class RequestContent : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RequestContent& obj) { 
          DARABONBA_PTR_TO_JSON(Body, body_);
          DARABONBA_PTR_TO_JSON(Header, header_);
          DARABONBA_PTR_TO_JSON(Method, method_);
        };
        friend void from_json(const Darabonba::Json& j, RequestContent& obj) { 
          DARABONBA_PTR_FROM_JSON(Body, body_);
          DARABONBA_PTR_FROM_JSON(Header, header_);
          DARABONBA_PTR_FROM_JSON(Method, method_);
        };
        RequestContent() = default ;
        RequestContent(const RequestContent &) = default ;
        RequestContent(RequestContent &&) = default ;
        RequestContent(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RequestContent() = default ;
        RequestContent& operator=(const RequestContent &) = default ;
        RequestContent& operator=(RequestContent &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Header : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Header& obj) { 
            DARABONBA_PTR_TO_JSON(Key, key_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, Header& obj) { 
            DARABONBA_PTR_FROM_JSON(Key, key_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          Header() = default ;
          Header(const Header &) = default ;
          Header(Header &&) = default ;
          Header(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Header() = default ;
          Header& operator=(const Header &) = default ;
          Header& operator=(Header &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
          // key Field Functions 
          bool hasKey() const { return this->key_ != nullptr;};
          void deleteKey() { this->key_ = nullptr;};
          inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
          inline Header& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline Header& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          // The key of the request header.
          shared_ptr<string> key_ {};
          // The value of the request header.
          shared_ptr<string> value_ {};
        };

        class Body : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Body& obj) { 
            DARABONBA_PTR_TO_JSON(FormData, formData_);
            DARABONBA_PTR_TO_JSON(Language, language_);
            DARABONBA_PTR_TO_JSON(Mode, mode_);
            DARABONBA_PTR_TO_JSON(Raw, raw_);
            DARABONBA_PTR_TO_JSON(UrlEncoding, urlEncoding_);
          };
          friend void from_json(const Darabonba::Json& j, Body& obj) { 
            DARABONBA_PTR_FROM_JSON(FormData, formData_);
            DARABONBA_PTR_FROM_JSON(Language, language_);
            DARABONBA_PTR_FROM_JSON(Mode, mode_);
            DARABONBA_PTR_FROM_JSON(Raw, raw_);
            DARABONBA_PTR_FROM_JSON(UrlEncoding, urlEncoding_);
          };
          Body() = default ;
          Body(const Body &) = default ;
          Body(Body &&) = default ;
          Body(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Body() = default ;
          Body& operator=(const Body &) = default ;
          Body& operator=(Body &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class UrlEncoding : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const UrlEncoding& obj) { 
              DARABONBA_PTR_TO_JSON(Key, key_);
              DARABONBA_PTR_TO_JSON(Value, value_);
            };
            friend void from_json(const Darabonba::Json& j, UrlEncoding& obj) { 
              DARABONBA_PTR_FROM_JSON(Key, key_);
              DARABONBA_PTR_FROM_JSON(Value, value_);
            };
            UrlEncoding() = default ;
            UrlEncoding(const UrlEncoding &) = default ;
            UrlEncoding(UrlEncoding &&) = default ;
            UrlEncoding(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~UrlEncoding() = default ;
            UrlEncoding& operator=(const UrlEncoding &) = default ;
            UrlEncoding& operator=(UrlEncoding &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
            // key Field Functions 
            bool hasKey() const { return this->key_ != nullptr;};
            void deleteKey() { this->key_ = nullptr;};
            inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
            inline UrlEncoding& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


            // value Field Functions 
            bool hasValue() const { return this->value_ != nullptr;};
            void deleteValue() { this->value_ = nullptr;};
            inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
            inline UrlEncoding& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


          protected:
            // The key of **x-www-form-urlencoded**.
            shared_ptr<string> key_ {};
            // The value of **x-www-form-urlencoded**.
            shared_ptr<string> value_ {};
          };

          class FormData : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const FormData& obj) { 
              DARABONBA_PTR_TO_JSON(Key, key_);
              DARABONBA_PTR_TO_JSON(Value, value_);
            };
            friend void from_json(const Darabonba::Json& j, FormData& obj) { 
              DARABONBA_PTR_FROM_JSON(Key, key_);
              DARABONBA_PTR_FROM_JSON(Value, value_);
            };
            FormData() = default ;
            FormData(const FormData &) = default ;
            FormData(FormData &&) = default ;
            FormData(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~FormData() = default ;
            FormData& operator=(const FormData &) = default ;
            FormData& operator=(FormData &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
            // key Field Functions 
            bool hasKey() const { return this->key_ != nullptr;};
            void deleteKey() { this->key_ = nullptr;};
            inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
            inline FormData& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


            // value Field Functions 
            bool hasValue() const { return this->value_ != nullptr;};
            void deleteValue() { this->value_ = nullptr;};
            inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
            inline FormData& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


          protected:
            // The key of **form-data**.
            shared_ptr<string> key_ {};
            // The value of **form-data**.
            shared_ptr<string> value_ {};
          };

          virtual bool empty() const override { return this->formData_ == nullptr
        && this->language_ == nullptr && this->mode_ == nullptr && this->raw_ == nullptr && this->urlEncoding_ == nullptr; };
          // formData Field Functions 
          bool hasFormData() const { return this->formData_ != nullptr;};
          void deleteFormData() { this->formData_ = nullptr;};
          inline const vector<Body::FormData> & getFormData() const { DARABONBA_PTR_GET_CONST(formData_, vector<Body::FormData>) };
          inline vector<Body::FormData> getFormData() { DARABONBA_PTR_GET(formData_, vector<Body::FormData>) };
          inline Body& setFormData(const vector<Body::FormData> & formData) { DARABONBA_PTR_SET_VALUE(formData_, formData) };
          inline Body& setFormData(vector<Body::FormData> && formData) { DARABONBA_PTR_SET_RVALUE(formData_, formData) };


          // language Field Functions 
          bool hasLanguage() const { return this->language_ != nullptr;};
          void deleteLanguage() { this->language_ = nullptr;};
          inline string getLanguage() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
          inline Body& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


          // mode Field Functions 
          bool hasMode() const { return this->mode_ != nullptr;};
          void deleteMode() { this->mode_ = nullptr;};
          inline string getMode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
          inline Body& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


          // raw Field Functions 
          bool hasRaw() const { return this->raw_ != nullptr;};
          void deleteRaw() { this->raw_ = nullptr;};
          inline string getRaw() const { DARABONBA_PTR_GET_DEFAULT(raw_, "") };
          inline Body& setRaw(string raw) { DARABONBA_PTR_SET_VALUE(raw_, raw) };


          // urlEncoding Field Functions 
          bool hasUrlEncoding() const { return this->urlEncoding_ != nullptr;};
          void deleteUrlEncoding() { this->urlEncoding_ = nullptr;};
          inline const vector<Body::UrlEncoding> & getUrlEncoding() const { DARABONBA_PTR_GET_CONST(urlEncoding_, vector<Body::UrlEncoding>) };
          inline vector<Body::UrlEncoding> getUrlEncoding() { DARABONBA_PTR_GET(urlEncoding_, vector<Body::UrlEncoding>) };
          inline Body& setUrlEncoding(const vector<Body::UrlEncoding> & urlEncoding) { DARABONBA_PTR_SET_VALUE(urlEncoding_, urlEncoding) };
          inline Body& setUrlEncoding(vector<Body::UrlEncoding> && urlEncoding) { DARABONBA_PTR_SET_RVALUE(urlEncoding_, urlEncoding) };


        protected:
          // The data that is passed when the **Mode** parameter is set to **form-data**.
          shared_ptr<vector<Body::FormData>> formData_ {};
          // The language that is selected when the Mode parameter is set to raw.
          // 
          // *   json
          // *   xml
          // *   javascript
          // *   html
          // *   text
          shared_ptr<string> language_ {};
          // The data type of the content.
          // 
          // *   form-data
          // *   x-www-form-urlencoded
          // *   raw
          shared_ptr<string> mode_ {};
          // The data that is passed when the **Mode** parameter is set to **raw**.
          shared_ptr<string> raw_ {};
          // The data that is passed when the **Mode** parameter is set to **x-www-form-urlencoded**.
          shared_ptr<vector<Body::UrlEncoding>> urlEncoding_ {};
        };

        virtual bool empty() const override { return this->body_ == nullptr
        && this->header_ == nullptr && this->method_ == nullptr; };
        // body Field Functions 
        bool hasBody() const { return this->body_ != nullptr;};
        void deleteBody() { this->body_ = nullptr;};
        inline const RequestContent::Body & getBody() const { DARABONBA_PTR_GET_CONST(body_, RequestContent::Body) };
        inline RequestContent::Body getBody() { DARABONBA_PTR_GET(body_, RequestContent::Body) };
        inline RequestContent& setBody(const RequestContent::Body & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
        inline RequestContent& setBody(RequestContent::Body && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


        // header Field Functions 
        bool hasHeader() const { return this->header_ != nullptr;};
        void deleteHeader() { this->header_ = nullptr;};
        inline const vector<RequestContent::Header> & getHeader() const { DARABONBA_PTR_GET_CONST(header_, vector<RequestContent::Header>) };
        inline vector<RequestContent::Header> getHeader() { DARABONBA_PTR_GET(header_, vector<RequestContent::Header>) };
        inline RequestContent& setHeader(const vector<RequestContent::Header> & header) { DARABONBA_PTR_SET_VALUE(header_, header) };
        inline RequestContent& setHeader(vector<RequestContent::Header> && header) { DARABONBA_PTR_SET_RVALUE(header_, header) };


        // method Field Functions 
        bool hasMethod() const { return this->method_ != nullptr;};
        void deleteMethod() { this->method_ = nullptr;};
        inline string getMethod() const { DARABONBA_PTR_GET_DEFAULT(method_, "") };
        inline RequestContent& setMethod(string method) { DARABONBA_PTR_SET_VALUE(method_, method) };


      protected:
        // The custom body of a request to initiate an API performance synthetic monitoring task.
        shared_ptr<RequestContent::Body> body_ {};
        // The custom header of a request to initiate an API performance synthetic monitoring task.
        shared_ptr<vector<RequestContent::Header>> header_ {};
        // The request method.
        // 
        // *   POST
        // *   GET
        shared_ptr<string> method_ {};
      };

      virtual bool empty() const override { return this->characterEncoding_ == nullptr
        && this->customHost_ == nullptr && this->customHostIp_ == nullptr && this->protocolConnectionTime_ == nullptr && this->protocolMonitorTimeout_ == nullptr && this->receivedDataSize_ == nullptr
        && this->requestContent_ == nullptr && this->verifyContent_ == nullptr && this->verifyWay_ == nullptr; };
      // characterEncoding Field Functions 
      bool hasCharacterEncoding() const { return this->characterEncoding_ != nullptr;};
      void deleteCharacterEncoding() { this->characterEncoding_ = nullptr;};
      inline int64_t getCharacterEncoding() const { DARABONBA_PTR_GET_DEFAULT(characterEncoding_, 0L) };
      inline Protocol& setCharacterEncoding(int64_t characterEncoding) { DARABONBA_PTR_SET_VALUE(characterEncoding_, characterEncoding) };


      // customHost Field Functions 
      bool hasCustomHost() const { return this->customHost_ != nullptr;};
      void deleteCustomHost() { this->customHost_ = nullptr;};
      inline int64_t getCustomHost() const { DARABONBA_PTR_GET_DEFAULT(customHost_, 0L) };
      inline Protocol& setCustomHost(int64_t customHost) { DARABONBA_PTR_SET_VALUE(customHost_, customHost) };


      // customHostIp Field Functions 
      bool hasCustomHostIp() const { return this->customHostIp_ != nullptr;};
      void deleteCustomHostIp() { this->customHostIp_ = nullptr;};
      inline string getCustomHostIp() const { DARABONBA_PTR_GET_DEFAULT(customHostIp_, "") };
      inline Protocol& setCustomHostIp(string customHostIp) { DARABONBA_PTR_SET_VALUE(customHostIp_, customHostIp) };


      // protocolConnectionTime Field Functions 
      bool hasProtocolConnectionTime() const { return this->protocolConnectionTime_ != nullptr;};
      void deleteProtocolConnectionTime() { this->protocolConnectionTime_ = nullptr;};
      inline int64_t getProtocolConnectionTime() const { DARABONBA_PTR_GET_DEFAULT(protocolConnectionTime_, 0L) };
      inline Protocol& setProtocolConnectionTime(int64_t protocolConnectionTime) { DARABONBA_PTR_SET_VALUE(protocolConnectionTime_, protocolConnectionTime) };


      // protocolMonitorTimeout Field Functions 
      bool hasProtocolMonitorTimeout() const { return this->protocolMonitorTimeout_ != nullptr;};
      void deleteProtocolMonitorTimeout() { this->protocolMonitorTimeout_ = nullptr;};
      inline string getProtocolMonitorTimeout() const { DARABONBA_PTR_GET_DEFAULT(protocolMonitorTimeout_, "") };
      inline Protocol& setProtocolMonitorTimeout(string protocolMonitorTimeout) { DARABONBA_PTR_SET_VALUE(protocolMonitorTimeout_, protocolMonitorTimeout) };


      // receivedDataSize Field Functions 
      bool hasReceivedDataSize() const { return this->receivedDataSize_ != nullptr;};
      void deleteReceivedDataSize() { this->receivedDataSize_ = nullptr;};
      inline int64_t getReceivedDataSize() const { DARABONBA_PTR_GET_DEFAULT(receivedDataSize_, 0L) };
      inline Protocol& setReceivedDataSize(int64_t receivedDataSize) { DARABONBA_PTR_SET_VALUE(receivedDataSize_, receivedDataSize) };


      // requestContent Field Functions 
      bool hasRequestContent() const { return this->requestContent_ != nullptr;};
      void deleteRequestContent() { this->requestContent_ = nullptr;};
      inline const Protocol::RequestContent & getRequestContent() const { DARABONBA_PTR_GET_CONST(requestContent_, Protocol::RequestContent) };
      inline Protocol::RequestContent getRequestContent() { DARABONBA_PTR_GET(requestContent_, Protocol::RequestContent) };
      inline Protocol& setRequestContent(const Protocol::RequestContent & requestContent) { DARABONBA_PTR_SET_VALUE(requestContent_, requestContent) };
      inline Protocol& setRequestContent(Protocol::RequestContent && requestContent) { DARABONBA_PTR_SET_RVALUE(requestContent_, requestContent) };


      // verifyContent Field Functions 
      bool hasVerifyContent() const { return this->verifyContent_ != nullptr;};
      void deleteVerifyContent() { this->verifyContent_ = nullptr;};
      inline string getVerifyContent() const { DARABONBA_PTR_GET_DEFAULT(verifyContent_, "") };
      inline Protocol& setVerifyContent(string verifyContent) { DARABONBA_PTR_SET_VALUE(verifyContent_, verifyContent) };


      // verifyWay Field Functions 
      bool hasVerifyWay() const { return this->verifyWay_ != nullptr;};
      void deleteVerifyWay() { this->verifyWay_ = nullptr;};
      inline int64_t getVerifyWay() const { DARABONBA_PTR_GET_DEFAULT(verifyWay_, 0L) };
      inline Protocol& setVerifyWay(int64_t verifyWay) { DARABONBA_PTR_SET_VALUE(verifyWay_, verifyWay) };


    protected:
      // The encoding format.
      // 
      // *   0: UTF-8
      // *   1: GBK
      // *   2: GB2312
      // *   3: Unicode
      shared_ptr<int64_t> characterEncoding_ {};
      // The custom host mode.
      // 
      // *   1: round robin
      // *   0: random
      shared_ptr<int64_t> customHost_ {};
      // The custom host IP address. You can enter multiple IP addresses. Separate the IP addresses with commas (,).
      shared_ptr<string> customHostIp_ {};
      // The connection timeout period of the protocol. Unit: seconds.
      shared_ptr<int64_t> protocolConnectionTime_ {};
      // The timeout period of API performance synthetic monitoring. Unit: seconds.
      shared_ptr<string> protocolMonitorTimeout_ {};
      // The size of the received data. This parameter is required when you set the value of the VerifyWay parameter to 2.
      shared_ptr<int64_t> receivedDataSize_ {};
      // The request content, including the request header and request body.
      shared_ptr<Protocol::RequestContent> requestContent_ {};
      // The verification string.
      shared_ptr<string> verifyContent_ {};
      // The method that is used to verify the response content.
      // 
      // *   0: no verification.
      // *   1: exact match with the verification string.
      // *   2: partial match with the verification string.
      // *   3: MD5 verification.
      shared_ptr<int64_t> verifyWay_ {};
    };

    class Net : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Net& obj) { 
        DARABONBA_PTR_TO_JSON(NetDNSNs, netDNSNs_);
        DARABONBA_PTR_TO_JSON(NetDNSQueryMethod, netDNSQueryMethod_);
        DARABONBA_PTR_TO_JSON(NetDNSServer, netDNSServer_);
        DARABONBA_PTR_TO_JSON(NetDNSSwitch, netDNSSwitch_);
        DARABONBA_PTR_TO_JSON(NetDNSTimeout, netDNSTimeout_);
        DARABONBA_PTR_TO_JSON(NetDigSwitch, netDigSwitch_);
        DARABONBA_PTR_TO_JSON(NetICMPActive, netICMPActive_);
        DARABONBA_PTR_TO_JSON(NetICMPDataCut, netICMPDataCut_);
        DARABONBA_PTR_TO_JSON(NetICMPInterval, netICMPInterval_);
        DARABONBA_PTR_TO_JSON(NetICMPNum, netICMPNum_);
        DARABONBA_PTR_TO_JSON(NetICMPSize, netICMPSize_);
        DARABONBA_PTR_TO_JSON(NetICMPSwitch, netICMPSwitch_);
        DARABONBA_PTR_TO_JSON(NetICMPTimeout, netICMPTimeout_);
        DARABONBA_PTR_TO_JSON(NetTraceRouteNum, netTraceRouteNum_);
        DARABONBA_PTR_TO_JSON(NetTraceRouteSwitch, netTraceRouteSwitch_);
        DARABONBA_PTR_TO_JSON(NetTraceRouteTimeout, netTraceRouteTimeout_);
        DARABONBA_PTR_TO_JSON(WhiteList, whiteList_);
      };
      friend void from_json(const Darabonba::Json& j, Net& obj) { 
        DARABONBA_PTR_FROM_JSON(NetDNSNs, netDNSNs_);
        DARABONBA_PTR_FROM_JSON(NetDNSQueryMethod, netDNSQueryMethod_);
        DARABONBA_PTR_FROM_JSON(NetDNSServer, netDNSServer_);
        DARABONBA_PTR_FROM_JSON(NetDNSSwitch, netDNSSwitch_);
        DARABONBA_PTR_FROM_JSON(NetDNSTimeout, netDNSTimeout_);
        DARABONBA_PTR_FROM_JSON(NetDigSwitch, netDigSwitch_);
        DARABONBA_PTR_FROM_JSON(NetICMPActive, netICMPActive_);
        DARABONBA_PTR_FROM_JSON(NetICMPDataCut, netICMPDataCut_);
        DARABONBA_PTR_FROM_JSON(NetICMPInterval, netICMPInterval_);
        DARABONBA_PTR_FROM_JSON(NetICMPNum, netICMPNum_);
        DARABONBA_PTR_FROM_JSON(NetICMPSize, netICMPSize_);
        DARABONBA_PTR_FROM_JSON(NetICMPSwitch, netICMPSwitch_);
        DARABONBA_PTR_FROM_JSON(NetICMPTimeout, netICMPTimeout_);
        DARABONBA_PTR_FROM_JSON(NetTraceRouteNum, netTraceRouteNum_);
        DARABONBA_PTR_FROM_JSON(NetTraceRouteSwitch, netTraceRouteSwitch_);
        DARABONBA_PTR_FROM_JSON(NetTraceRouteTimeout, netTraceRouteTimeout_);
        DARABONBA_PTR_FROM_JSON(WhiteList, whiteList_);
      };
      Net() = default ;
      Net(const Net &) = default ;
      Net(Net &&) = default ;
      Net(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Net() = default ;
      Net& operator=(const Net &) = default ;
      Net& operator=(Net &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->netDNSNs_ == nullptr
        && this->netDNSQueryMethod_ == nullptr && this->netDNSServer_ == nullptr && this->netDNSSwitch_ == nullptr && this->netDNSTimeout_ == nullptr && this->netDigSwitch_ == nullptr
        && this->netICMPActive_ == nullptr && this->netICMPDataCut_ == nullptr && this->netICMPInterval_ == nullptr && this->netICMPNum_ == nullptr && this->netICMPSize_ == nullptr
        && this->netICMPSwitch_ == nullptr && this->netICMPTimeout_ == nullptr && this->netTraceRouteNum_ == nullptr && this->netTraceRouteSwitch_ == nullptr && this->netTraceRouteTimeout_ == nullptr
        && this->whiteList_ == nullptr; };
      // netDNSNs Field Functions 
      bool hasNetDNSNs() const { return this->netDNSNs_ != nullptr;};
      void deleteNetDNSNs() { this->netDNSNs_ = nullptr;};
      inline string getNetDNSNs() const { DARABONBA_PTR_GET_DEFAULT(netDNSNs_, "") };
      inline Net& setNetDNSNs(string netDNSNs) { DARABONBA_PTR_SET_VALUE(netDNSNs_, netDNSNs) };


      // netDNSQueryMethod Field Functions 
      bool hasNetDNSQueryMethod() const { return this->netDNSQueryMethod_ != nullptr;};
      void deleteNetDNSQueryMethod() { this->netDNSQueryMethod_ = nullptr;};
      inline int64_t getNetDNSQueryMethod() const { DARABONBA_PTR_GET_DEFAULT(netDNSQueryMethod_, 0L) };
      inline Net& setNetDNSQueryMethod(int64_t netDNSQueryMethod) { DARABONBA_PTR_SET_VALUE(netDNSQueryMethod_, netDNSQueryMethod) };


      // netDNSServer Field Functions 
      bool hasNetDNSServer() const { return this->netDNSServer_ != nullptr;};
      void deleteNetDNSServer() { this->netDNSServer_ = nullptr;};
      inline int64_t getNetDNSServer() const { DARABONBA_PTR_GET_DEFAULT(netDNSServer_, 0L) };
      inline Net& setNetDNSServer(int64_t netDNSServer) { DARABONBA_PTR_SET_VALUE(netDNSServer_, netDNSServer) };


      // netDNSSwitch Field Functions 
      bool hasNetDNSSwitch() const { return this->netDNSSwitch_ != nullptr;};
      void deleteNetDNSSwitch() { this->netDNSSwitch_ = nullptr;};
      inline int64_t getNetDNSSwitch() const { DARABONBA_PTR_GET_DEFAULT(netDNSSwitch_, 0L) };
      inline Net& setNetDNSSwitch(int64_t netDNSSwitch) { DARABONBA_PTR_SET_VALUE(netDNSSwitch_, netDNSSwitch) };


      // netDNSTimeout Field Functions 
      bool hasNetDNSTimeout() const { return this->netDNSTimeout_ != nullptr;};
      void deleteNetDNSTimeout() { this->netDNSTimeout_ = nullptr;};
      inline int64_t getNetDNSTimeout() const { DARABONBA_PTR_GET_DEFAULT(netDNSTimeout_, 0L) };
      inline Net& setNetDNSTimeout(int64_t netDNSTimeout) { DARABONBA_PTR_SET_VALUE(netDNSTimeout_, netDNSTimeout) };


      // netDigSwitch Field Functions 
      bool hasNetDigSwitch() const { return this->netDigSwitch_ != nullptr;};
      void deleteNetDigSwitch() { this->netDigSwitch_ = nullptr;};
      inline int64_t getNetDigSwitch() const { DARABONBA_PTR_GET_DEFAULT(netDigSwitch_, 0L) };
      inline Net& setNetDigSwitch(int64_t netDigSwitch) { DARABONBA_PTR_SET_VALUE(netDigSwitch_, netDigSwitch) };


      // netICMPActive Field Functions 
      bool hasNetICMPActive() const { return this->netICMPActive_ != nullptr;};
      void deleteNetICMPActive() { this->netICMPActive_ = nullptr;};
      inline int64_t getNetICMPActive() const { DARABONBA_PTR_GET_DEFAULT(netICMPActive_, 0L) };
      inline Net& setNetICMPActive(int64_t netICMPActive) { DARABONBA_PTR_SET_VALUE(netICMPActive_, netICMPActive) };


      // netICMPDataCut Field Functions 
      bool hasNetICMPDataCut() const { return this->netICMPDataCut_ != nullptr;};
      void deleteNetICMPDataCut() { this->netICMPDataCut_ = nullptr;};
      inline int64_t getNetICMPDataCut() const { DARABONBA_PTR_GET_DEFAULT(netICMPDataCut_, 0L) };
      inline Net& setNetICMPDataCut(int64_t netICMPDataCut) { DARABONBA_PTR_SET_VALUE(netICMPDataCut_, netICMPDataCut) };


      // netICMPInterval Field Functions 
      bool hasNetICMPInterval() const { return this->netICMPInterval_ != nullptr;};
      void deleteNetICMPInterval() { this->netICMPInterval_ = nullptr;};
      inline int64_t getNetICMPInterval() const { DARABONBA_PTR_GET_DEFAULT(netICMPInterval_, 0L) };
      inline Net& setNetICMPInterval(int64_t netICMPInterval) { DARABONBA_PTR_SET_VALUE(netICMPInterval_, netICMPInterval) };


      // netICMPNum Field Functions 
      bool hasNetICMPNum() const { return this->netICMPNum_ != nullptr;};
      void deleteNetICMPNum() { this->netICMPNum_ = nullptr;};
      inline int64_t getNetICMPNum() const { DARABONBA_PTR_GET_DEFAULT(netICMPNum_, 0L) };
      inline Net& setNetICMPNum(int64_t netICMPNum) { DARABONBA_PTR_SET_VALUE(netICMPNum_, netICMPNum) };


      // netICMPSize Field Functions 
      bool hasNetICMPSize() const { return this->netICMPSize_ != nullptr;};
      void deleteNetICMPSize() { this->netICMPSize_ = nullptr;};
      inline int64_t getNetICMPSize() const { DARABONBA_PTR_GET_DEFAULT(netICMPSize_, 0L) };
      inline Net& setNetICMPSize(int64_t netICMPSize) { DARABONBA_PTR_SET_VALUE(netICMPSize_, netICMPSize) };


      // netICMPSwitch Field Functions 
      bool hasNetICMPSwitch() const { return this->netICMPSwitch_ != nullptr;};
      void deleteNetICMPSwitch() { this->netICMPSwitch_ = nullptr;};
      inline int64_t getNetICMPSwitch() const { DARABONBA_PTR_GET_DEFAULT(netICMPSwitch_, 0L) };
      inline Net& setNetICMPSwitch(int64_t netICMPSwitch) { DARABONBA_PTR_SET_VALUE(netICMPSwitch_, netICMPSwitch) };


      // netICMPTimeout Field Functions 
      bool hasNetICMPTimeout() const { return this->netICMPTimeout_ != nullptr;};
      void deleteNetICMPTimeout() { this->netICMPTimeout_ = nullptr;};
      inline int64_t getNetICMPTimeout() const { DARABONBA_PTR_GET_DEFAULT(netICMPTimeout_, 0L) };
      inline Net& setNetICMPTimeout(int64_t netICMPTimeout) { DARABONBA_PTR_SET_VALUE(netICMPTimeout_, netICMPTimeout) };


      // netTraceRouteNum Field Functions 
      bool hasNetTraceRouteNum() const { return this->netTraceRouteNum_ != nullptr;};
      void deleteNetTraceRouteNum() { this->netTraceRouteNum_ = nullptr;};
      inline int64_t getNetTraceRouteNum() const { DARABONBA_PTR_GET_DEFAULT(netTraceRouteNum_, 0L) };
      inline Net& setNetTraceRouteNum(int64_t netTraceRouteNum) { DARABONBA_PTR_SET_VALUE(netTraceRouteNum_, netTraceRouteNum) };


      // netTraceRouteSwitch Field Functions 
      bool hasNetTraceRouteSwitch() const { return this->netTraceRouteSwitch_ != nullptr;};
      void deleteNetTraceRouteSwitch() { this->netTraceRouteSwitch_ = nullptr;};
      inline int64_t getNetTraceRouteSwitch() const { DARABONBA_PTR_GET_DEFAULT(netTraceRouteSwitch_, 0L) };
      inline Net& setNetTraceRouteSwitch(int64_t netTraceRouteSwitch) { DARABONBA_PTR_SET_VALUE(netTraceRouteSwitch_, netTraceRouteSwitch) };


      // netTraceRouteTimeout Field Functions 
      bool hasNetTraceRouteTimeout() const { return this->netTraceRouteTimeout_ != nullptr;};
      void deleteNetTraceRouteTimeout() { this->netTraceRouteTimeout_ = nullptr;};
      inline int64_t getNetTraceRouteTimeout() const { DARABONBA_PTR_GET_DEFAULT(netTraceRouteTimeout_, 0L) };
      inline Net& setNetTraceRouteTimeout(int64_t netTraceRouteTimeout) { DARABONBA_PTR_SET_VALUE(netTraceRouteTimeout_, netTraceRouteTimeout) };


      // whiteList Field Functions 
      bool hasWhiteList() const { return this->whiteList_ != nullptr;};
      void deleteWhiteList() { this->whiteList_ = nullptr;};
      inline string getWhiteList() const { DARABONBA_PTR_GET_DEFAULT(whiteList_, "") };
      inline Net& setWhiteList(string whiteList) { DARABONBA_PTR_SET_VALUE(whiteList_, whiteList) };


    protected:
      // The DNS server.
      shared_ptr<string> netDNSNs_ {};
      // The DNS query method. Valid values:
      // 
      // *   1: recursion
      // *   2: iteration
      shared_ptr<int64_t> netDNSQueryMethod_ {};
      // The IP address type of the DNS server.
      // 
      // *   0: IPv4
      // *   1: IPv6
      // *   2: an automatic IP address
      shared_ptr<int64_t> netDNSServer_ {};
      // Specifies whether to enable domain name system (DNS) monitoring.
      // 
      // *   0: Off.
      // *   1: On. You must set DNS parameters if you want to enable DNS monitoring.
      shared_ptr<int64_t> netDNSSwitch_ {};
      // The timeout period of DNS monitoring. Default value: 5 seconds. Valid values: 0 to 45 seconds.
      shared_ptr<int64_t> netDNSTimeout_ {};
      // Specifies whether to display the data in the DIG format. Valid values:
      // 
      // *   0: no
      // *   1: yes
      shared_ptr<int64_t> netDigSwitch_ {};
      // The protocol type. Valid values:
      // 
      // *   0: ICMP
      // *   1: TCP
      shared_ptr<int64_t> netICMPActive_ {};
      // Specifies whether to split packages.
      // 
      // *   0: no
      // *   1: yes
      shared_ptr<int64_t> netICMPDataCut_ {};
      // The interval at which the network synthetic monitoring task is executed. Unit: seconds.
      shared_ptr<int64_t> netICMPInterval_ {};
      // The number of packages.
      shared_ptr<int64_t> netICMPNum_ {};
      // The package size.
      shared_ptr<int64_t> netICMPSize_ {};
      // Specifies whether to enable ping monitoring.
      // 
      // *   0: Off.
      // *   1: On. You must set Internet control message protocol (ICMP) parameters if you want to enable ping monitoring.
      shared_ptr<int64_t> netICMPSwitch_ {};
      // The timeout period of Ping monitoring.
      shared_ptr<int64_t> netICMPTimeout_ {};
      // The maximum number of active monitoring points.
      shared_ptr<int64_t> netTraceRouteNum_ {};
      // Specifies whether to enable tracert monitoring.
      // 
      // *   0: Off.
      // *   1: On. You must set the tracert parameters if you want to enable tracert monitoring.
      shared_ptr<int64_t> netTraceRouteSwitch_ {};
      // The timeout period of tracert monitoring. Valid values: 0 to 300 seconds.
      shared_ptr<int64_t> netTraceRouteTimeout_ {};
      // The whitelist for DNS hijacking. The format is `Domain name: Matching rule`.
      // 
      // >  Wireless application protocol (WAP) networks do not support DNS hijacking.
      shared_ptr<string> whiteList_ {};
    };

    class Navigation : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Navigation& obj) { 
        DARABONBA_PTR_TO_JSON(DNSHijackWhiteList, DNSHijackWhiteList_);
        DARABONBA_PTR_TO_JSON(ElementBlacklist, elementBlacklist_);
        DARABONBA_PTR_TO_JSON(ExecuteActiveX, executeActiveX_);
        DARABONBA_PTR_TO_JSON(ExecuteApplication, executeApplication_);
        DARABONBA_PTR_TO_JSON(ExecuteScript, executeScript_);
        DARABONBA_PTR_TO_JSON(FilterInvalidIP, filterInvalidIP_);
        DARABONBA_PTR_TO_JSON(FlowHijackJumpTimes, flowHijackJumpTimes_);
        DARABONBA_PTR_TO_JSON(FlowHijackLogo, flowHijackLogo_);
        DARABONBA_PTR_TO_JSON(MonitorTimeout, monitorTimeout_);
        DARABONBA_PTR_TO_JSON(NavAutomaticScrolling, navAutomaticScrolling_);
        DARABONBA_PTR_TO_JSON(NavCustomHeader, navCustomHeader_);
        DARABONBA_PTR_TO_JSON(NavCustomHeaderContent, navCustomHeaderContent_);
        DARABONBA_PTR_TO_JSON(NavCustomHost, navCustomHost_);
        DARABONBA_PTR_TO_JSON(NavCustomHostIp, navCustomHostIp_);
        DARABONBA_PTR_TO_JSON(NavDisableCache, navDisableCache_);
        DARABONBA_PTR_TO_JSON(NavDisableCompression, navDisableCompression_);
        DARABONBA_PTR_TO_JSON(NavIgnoreCertificateError, navIgnoreCertificateError_);
        DARABONBA_PTR_TO_JSON(NavRedirection, navRedirection_);
        DARABONBA_PTR_TO_JSON(NavReturnElement, navReturnElement_);
        DARABONBA_PTR_TO_JSON(PageTamper, pageTamper_);
        DARABONBA_PTR_TO_JSON(ProcessName, processName_);
        DARABONBA_PTR_TO_JSON(QUICDomain, QUICDomain_);
        DARABONBA_PTR_TO_JSON(QUICVersion, QUICVersion_);
        DARABONBA_PTR_TO_JSON(RequestHeader, requestHeader_);
        DARABONBA_PTR_TO_JSON(ResponseHeader, responseHeader_);
        DARABONBA_PTR_TO_JSON(SlowElementThreshold, slowElementThreshold_);
        DARABONBA_PTR_TO_JSON(VerifyStringBlacklist, verifyStringBlacklist_);
        DARABONBA_PTR_TO_JSON(VerifyStringWhiteList, verifyStringWhiteList_);
        DARABONBA_PTR_TO_JSON(WaitCompletionTime, waitCompletionTime_);
      };
      friend void from_json(const Darabonba::Json& j, Navigation& obj) { 
        DARABONBA_PTR_FROM_JSON(DNSHijackWhiteList, DNSHijackWhiteList_);
        DARABONBA_PTR_FROM_JSON(ElementBlacklist, elementBlacklist_);
        DARABONBA_PTR_FROM_JSON(ExecuteActiveX, executeActiveX_);
        DARABONBA_PTR_FROM_JSON(ExecuteApplication, executeApplication_);
        DARABONBA_PTR_FROM_JSON(ExecuteScript, executeScript_);
        DARABONBA_PTR_FROM_JSON(FilterInvalidIP, filterInvalidIP_);
        DARABONBA_PTR_FROM_JSON(FlowHijackJumpTimes, flowHijackJumpTimes_);
        DARABONBA_PTR_FROM_JSON(FlowHijackLogo, flowHijackLogo_);
        DARABONBA_PTR_FROM_JSON(MonitorTimeout, monitorTimeout_);
        DARABONBA_PTR_FROM_JSON(NavAutomaticScrolling, navAutomaticScrolling_);
        DARABONBA_PTR_FROM_JSON(NavCustomHeader, navCustomHeader_);
        DARABONBA_PTR_FROM_JSON(NavCustomHeaderContent, navCustomHeaderContent_);
        DARABONBA_PTR_FROM_JSON(NavCustomHost, navCustomHost_);
        DARABONBA_PTR_FROM_JSON(NavCustomHostIp, navCustomHostIp_);
        DARABONBA_PTR_FROM_JSON(NavDisableCache, navDisableCache_);
        DARABONBA_PTR_FROM_JSON(NavDisableCompression, navDisableCompression_);
        DARABONBA_PTR_FROM_JSON(NavIgnoreCertificateError, navIgnoreCertificateError_);
        DARABONBA_PTR_FROM_JSON(NavRedirection, navRedirection_);
        DARABONBA_PTR_FROM_JSON(NavReturnElement, navReturnElement_);
        DARABONBA_PTR_FROM_JSON(PageTamper, pageTamper_);
        DARABONBA_PTR_FROM_JSON(ProcessName, processName_);
        DARABONBA_PTR_FROM_JSON(QUICDomain, QUICDomain_);
        DARABONBA_PTR_FROM_JSON(QUICVersion, QUICVersion_);
        DARABONBA_PTR_FROM_JSON(RequestHeader, requestHeader_);
        DARABONBA_PTR_FROM_JSON(ResponseHeader, responseHeader_);
        DARABONBA_PTR_FROM_JSON(SlowElementThreshold, slowElementThreshold_);
        DARABONBA_PTR_FROM_JSON(VerifyStringBlacklist, verifyStringBlacklist_);
        DARABONBA_PTR_FROM_JSON(VerifyStringWhiteList, verifyStringWhiteList_);
        DARABONBA_PTR_FROM_JSON(WaitCompletionTime, waitCompletionTime_);
      };
      Navigation() = default ;
      Navigation(const Navigation &) = default ;
      Navigation(Navigation &&) = default ;
      Navigation(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Navigation() = default ;
      Navigation& operator=(const Navigation &) = default ;
      Navigation& operator=(Navigation &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->DNSHijackWhiteList_ == nullptr
        && this->elementBlacklist_ == nullptr && this->executeActiveX_ == nullptr && this->executeApplication_ == nullptr && this->executeScript_ == nullptr && this->filterInvalidIP_ == nullptr
        && this->flowHijackJumpTimes_ == nullptr && this->flowHijackLogo_ == nullptr && this->monitorTimeout_ == nullptr && this->navAutomaticScrolling_ == nullptr && this->navCustomHeader_ == nullptr
        && this->navCustomHeaderContent_ == nullptr && this->navCustomHost_ == nullptr && this->navCustomHostIp_ == nullptr && this->navDisableCache_ == nullptr && this->navDisableCompression_ == nullptr
        && this->navIgnoreCertificateError_ == nullptr && this->navRedirection_ == nullptr && this->navReturnElement_ == nullptr && this->pageTamper_ == nullptr && this->processName_ == nullptr
        && this->QUICDomain_ == nullptr && this->QUICVersion_ == nullptr && this->requestHeader_ == nullptr && this->responseHeader_ == nullptr && this->slowElementThreshold_ == nullptr
        && this->verifyStringBlacklist_ == nullptr && this->verifyStringWhiteList_ == nullptr && this->waitCompletionTime_ == nullptr; };
      // DNSHijackWhiteList Field Functions 
      bool hasDNSHijackWhiteList() const { return this->DNSHijackWhiteList_ != nullptr;};
      void deleteDNSHijackWhiteList() { this->DNSHijackWhiteList_ = nullptr;};
      inline string getDNSHijackWhiteList() const { DARABONBA_PTR_GET_DEFAULT(DNSHijackWhiteList_, "") };
      inline Navigation& setDNSHijackWhiteList(string DNSHijackWhiteList) { DARABONBA_PTR_SET_VALUE(DNSHijackWhiteList_, DNSHijackWhiteList) };


      // elementBlacklist Field Functions 
      bool hasElementBlacklist() const { return this->elementBlacklist_ != nullptr;};
      void deleteElementBlacklist() { this->elementBlacklist_ = nullptr;};
      inline string getElementBlacklist() const { DARABONBA_PTR_GET_DEFAULT(elementBlacklist_, "") };
      inline Navigation& setElementBlacklist(string elementBlacklist) { DARABONBA_PTR_SET_VALUE(elementBlacklist_, elementBlacklist) };


      // executeActiveX Field Functions 
      bool hasExecuteActiveX() const { return this->executeActiveX_ != nullptr;};
      void deleteExecuteActiveX() { this->executeActiveX_ = nullptr;};
      inline int64_t getExecuteActiveX() const { DARABONBA_PTR_GET_DEFAULT(executeActiveX_, 0L) };
      inline Navigation& setExecuteActiveX(int64_t executeActiveX) { DARABONBA_PTR_SET_VALUE(executeActiveX_, executeActiveX) };


      // executeApplication Field Functions 
      bool hasExecuteApplication() const { return this->executeApplication_ != nullptr;};
      void deleteExecuteApplication() { this->executeApplication_ = nullptr;};
      inline int64_t getExecuteApplication() const { DARABONBA_PTR_GET_DEFAULT(executeApplication_, 0L) };
      inline Navigation& setExecuteApplication(int64_t executeApplication) { DARABONBA_PTR_SET_VALUE(executeApplication_, executeApplication) };


      // executeScript Field Functions 
      bool hasExecuteScript() const { return this->executeScript_ != nullptr;};
      void deleteExecuteScript() { this->executeScript_ = nullptr;};
      inline int64_t getExecuteScript() const { DARABONBA_PTR_GET_DEFAULT(executeScript_, 0L) };
      inline Navigation& setExecuteScript(int64_t executeScript) { DARABONBA_PTR_SET_VALUE(executeScript_, executeScript) };


      // filterInvalidIP Field Functions 
      bool hasFilterInvalidIP() const { return this->filterInvalidIP_ != nullptr;};
      void deleteFilterInvalidIP() { this->filterInvalidIP_ = nullptr;};
      inline int64_t getFilterInvalidIP() const { DARABONBA_PTR_GET_DEFAULT(filterInvalidIP_, 0L) };
      inline Navigation& setFilterInvalidIP(int64_t filterInvalidIP) { DARABONBA_PTR_SET_VALUE(filterInvalidIP_, filterInvalidIP) };


      // flowHijackJumpTimes Field Functions 
      bool hasFlowHijackJumpTimes() const { return this->flowHijackJumpTimes_ != nullptr;};
      void deleteFlowHijackJumpTimes() { this->flowHijackJumpTimes_ = nullptr;};
      inline int64_t getFlowHijackJumpTimes() const { DARABONBA_PTR_GET_DEFAULT(flowHijackJumpTimes_, 0L) };
      inline Navigation& setFlowHijackJumpTimes(int64_t flowHijackJumpTimes) { DARABONBA_PTR_SET_VALUE(flowHijackJumpTimes_, flowHijackJumpTimes) };


      // flowHijackLogo Field Functions 
      bool hasFlowHijackLogo() const { return this->flowHijackLogo_ != nullptr;};
      void deleteFlowHijackLogo() { this->flowHijackLogo_ = nullptr;};
      inline string getFlowHijackLogo() const { DARABONBA_PTR_GET_DEFAULT(flowHijackLogo_, "") };
      inline Navigation& setFlowHijackLogo(string flowHijackLogo) { DARABONBA_PTR_SET_VALUE(flowHijackLogo_, flowHijackLogo) };


      // monitorTimeout Field Functions 
      bool hasMonitorTimeout() const { return this->monitorTimeout_ != nullptr;};
      void deleteMonitorTimeout() { this->monitorTimeout_ = nullptr;};
      inline string getMonitorTimeout() const { DARABONBA_PTR_GET_DEFAULT(monitorTimeout_, "") };
      inline Navigation& setMonitorTimeout(string monitorTimeout) { DARABONBA_PTR_SET_VALUE(monitorTimeout_, monitorTimeout) };


      // navAutomaticScrolling Field Functions 
      bool hasNavAutomaticScrolling() const { return this->navAutomaticScrolling_ != nullptr;};
      void deleteNavAutomaticScrolling() { this->navAutomaticScrolling_ = nullptr;};
      inline string getNavAutomaticScrolling() const { DARABONBA_PTR_GET_DEFAULT(navAutomaticScrolling_, "") };
      inline Navigation& setNavAutomaticScrolling(string navAutomaticScrolling) { DARABONBA_PTR_SET_VALUE(navAutomaticScrolling_, navAutomaticScrolling) };


      // navCustomHeader Field Functions 
      bool hasNavCustomHeader() const { return this->navCustomHeader_ != nullptr;};
      void deleteNavCustomHeader() { this->navCustomHeader_ = nullptr;};
      inline string getNavCustomHeader() const { DARABONBA_PTR_GET_DEFAULT(navCustomHeader_, "") };
      inline Navigation& setNavCustomHeader(string navCustomHeader) { DARABONBA_PTR_SET_VALUE(navCustomHeader_, navCustomHeader) };


      // navCustomHeaderContent Field Functions 
      bool hasNavCustomHeaderContent() const { return this->navCustomHeaderContent_ != nullptr;};
      void deleteNavCustomHeaderContent() { this->navCustomHeaderContent_ = nullptr;};
      inline string getNavCustomHeaderContent() const { DARABONBA_PTR_GET_DEFAULT(navCustomHeaderContent_, "") };
      inline Navigation& setNavCustomHeaderContent(string navCustomHeaderContent) { DARABONBA_PTR_SET_VALUE(navCustomHeaderContent_, navCustomHeaderContent) };


      // navCustomHost Field Functions 
      bool hasNavCustomHost() const { return this->navCustomHost_ != nullptr;};
      void deleteNavCustomHost() { this->navCustomHost_ = nullptr;};
      inline int64_t getNavCustomHost() const { DARABONBA_PTR_GET_DEFAULT(navCustomHost_, 0L) };
      inline Navigation& setNavCustomHost(int64_t navCustomHost) { DARABONBA_PTR_SET_VALUE(navCustomHost_, navCustomHost) };


      // navCustomHostIp Field Functions 
      bool hasNavCustomHostIp() const { return this->navCustomHostIp_ != nullptr;};
      void deleteNavCustomHostIp() { this->navCustomHostIp_ = nullptr;};
      inline string getNavCustomHostIp() const { DARABONBA_PTR_GET_DEFAULT(navCustomHostIp_, "") };
      inline Navigation& setNavCustomHostIp(string navCustomHostIp) { DARABONBA_PTR_SET_VALUE(navCustomHostIp_, navCustomHostIp) };


      // navDisableCache Field Functions 
      bool hasNavDisableCache() const { return this->navDisableCache_ != nullptr;};
      void deleteNavDisableCache() { this->navDisableCache_ = nullptr;};
      inline int64_t getNavDisableCache() const { DARABONBA_PTR_GET_DEFAULT(navDisableCache_, 0L) };
      inline Navigation& setNavDisableCache(int64_t navDisableCache) { DARABONBA_PTR_SET_VALUE(navDisableCache_, navDisableCache) };


      // navDisableCompression Field Functions 
      bool hasNavDisableCompression() const { return this->navDisableCompression_ != nullptr;};
      void deleteNavDisableCompression() { this->navDisableCompression_ = nullptr;};
      inline string getNavDisableCompression() const { DARABONBA_PTR_GET_DEFAULT(navDisableCompression_, "") };
      inline Navigation& setNavDisableCompression(string navDisableCompression) { DARABONBA_PTR_SET_VALUE(navDisableCompression_, navDisableCompression) };


      // navIgnoreCertificateError Field Functions 
      bool hasNavIgnoreCertificateError() const { return this->navIgnoreCertificateError_ != nullptr;};
      void deleteNavIgnoreCertificateError() { this->navIgnoreCertificateError_ = nullptr;};
      inline int64_t getNavIgnoreCertificateError() const { DARABONBA_PTR_GET_DEFAULT(navIgnoreCertificateError_, 0L) };
      inline Navigation& setNavIgnoreCertificateError(int64_t navIgnoreCertificateError) { DARABONBA_PTR_SET_VALUE(navIgnoreCertificateError_, navIgnoreCertificateError) };


      // navRedirection Field Functions 
      bool hasNavRedirection() const { return this->navRedirection_ != nullptr;};
      void deleteNavRedirection() { this->navRedirection_ = nullptr;};
      inline int64_t getNavRedirection() const { DARABONBA_PTR_GET_DEFAULT(navRedirection_, 0L) };
      inline Navigation& setNavRedirection(int64_t navRedirection) { DARABONBA_PTR_SET_VALUE(navRedirection_, navRedirection) };


      // navReturnElement Field Functions 
      bool hasNavReturnElement() const { return this->navReturnElement_ != nullptr;};
      void deleteNavReturnElement() { this->navReturnElement_ = nullptr;};
      inline int64_t getNavReturnElement() const { DARABONBA_PTR_GET_DEFAULT(navReturnElement_, 0L) };
      inline Navigation& setNavReturnElement(int64_t navReturnElement) { DARABONBA_PTR_SET_VALUE(navReturnElement_, navReturnElement) };


      // pageTamper Field Functions 
      bool hasPageTamper() const { return this->pageTamper_ != nullptr;};
      void deletePageTamper() { this->pageTamper_ = nullptr;};
      inline string getPageTamper() const { DARABONBA_PTR_GET_DEFAULT(pageTamper_, "") };
      inline Navigation& setPageTamper(string pageTamper) { DARABONBA_PTR_SET_VALUE(pageTamper_, pageTamper) };


      // processName Field Functions 
      bool hasProcessName() const { return this->processName_ != nullptr;};
      void deleteProcessName() { this->processName_ = nullptr;};
      inline string getProcessName() const { DARABONBA_PTR_GET_DEFAULT(processName_, "") };
      inline Navigation& setProcessName(string processName) { DARABONBA_PTR_SET_VALUE(processName_, processName) };


      // QUICDomain Field Functions 
      bool hasQUICDomain() const { return this->QUICDomain_ != nullptr;};
      void deleteQUICDomain() { this->QUICDomain_ = nullptr;};
      inline string getQUICDomain() const { DARABONBA_PTR_GET_DEFAULT(QUICDomain_, "") };
      inline Navigation& setQUICDomain(string QUICDomain) { DARABONBA_PTR_SET_VALUE(QUICDomain_, QUICDomain) };


      // QUICVersion Field Functions 
      bool hasQUICVersion() const { return this->QUICVersion_ != nullptr;};
      void deleteQUICVersion() { this->QUICVersion_ = nullptr;};
      inline int64_t getQUICVersion() const { DARABONBA_PTR_GET_DEFAULT(QUICVersion_, 0L) };
      inline Navigation& setQUICVersion(int64_t QUICVersion) { DARABONBA_PTR_SET_VALUE(QUICVersion_, QUICVersion) };


      // requestHeader Field Functions 
      bool hasRequestHeader() const { return this->requestHeader_ != nullptr;};
      void deleteRequestHeader() { this->requestHeader_ = nullptr;};
      inline int64_t getRequestHeader() const { DARABONBA_PTR_GET_DEFAULT(requestHeader_, 0L) };
      inline Navigation& setRequestHeader(int64_t requestHeader) { DARABONBA_PTR_SET_VALUE(requestHeader_, requestHeader) };


      // responseHeader Field Functions 
      bool hasResponseHeader() const { return this->responseHeader_ != nullptr;};
      void deleteResponseHeader() { this->responseHeader_ = nullptr;};
      inline int64_t getResponseHeader() const { DARABONBA_PTR_GET_DEFAULT(responseHeader_, 0L) };
      inline Navigation& setResponseHeader(int64_t responseHeader) { DARABONBA_PTR_SET_VALUE(responseHeader_, responseHeader) };


      // slowElementThreshold Field Functions 
      bool hasSlowElementThreshold() const { return this->slowElementThreshold_ != nullptr;};
      void deleteSlowElementThreshold() { this->slowElementThreshold_ = nullptr;};
      inline double getSlowElementThreshold() const { DARABONBA_PTR_GET_DEFAULT(slowElementThreshold_, 0.0) };
      inline Navigation& setSlowElementThreshold(double slowElementThreshold) { DARABONBA_PTR_SET_VALUE(slowElementThreshold_, slowElementThreshold) };


      // verifyStringBlacklist Field Functions 
      bool hasVerifyStringBlacklist() const { return this->verifyStringBlacklist_ != nullptr;};
      void deleteVerifyStringBlacklist() { this->verifyStringBlacklist_ = nullptr;};
      inline string getVerifyStringBlacklist() const { DARABONBA_PTR_GET_DEFAULT(verifyStringBlacklist_, "") };
      inline Navigation& setVerifyStringBlacklist(string verifyStringBlacklist) { DARABONBA_PTR_SET_VALUE(verifyStringBlacklist_, verifyStringBlacklist) };


      // verifyStringWhiteList Field Functions 
      bool hasVerifyStringWhiteList() const { return this->verifyStringWhiteList_ != nullptr;};
      void deleteVerifyStringWhiteList() { this->verifyStringWhiteList_ = nullptr;};
      inline string getVerifyStringWhiteList() const { DARABONBA_PTR_GET_DEFAULT(verifyStringWhiteList_, "") };
      inline Navigation& setVerifyStringWhiteList(string verifyStringWhiteList) { DARABONBA_PTR_SET_VALUE(verifyStringWhiteList_, verifyStringWhiteList) };


      // waitCompletionTime Field Functions 
      bool hasWaitCompletionTime() const { return this->waitCompletionTime_ != nullptr;};
      void deleteWaitCompletionTime() { this->waitCompletionTime_ = nullptr;};
      inline double getWaitCompletionTime() const { DARABONBA_PTR_GET_DEFAULT(waitCompletionTime_, 0.0) };
      inline Navigation& setWaitCompletionTime(double waitCompletionTime) { DARABONBA_PTR_SET_VALUE(waitCompletionTime_, waitCompletionTime) };


    protected:
      // The whitelist for DNS hijacking.
      shared_ptr<string> DNSHijackWhiteList_ {};
      // The element blacklist.
      shared_ptr<string> elementBlacklist_ {};
      // Specifies whether to execute ActiveX.
      // 
      // *   3: yes
      // *   0: no
      // 
      // >  This parameter is supported only by IE Full Elements.
      shared_ptr<int64_t> executeActiveX_ {};
      // Specifies whether to run applets.
      // 
      // *   1: yes
      // *   0: no
      // 
      // >  This parameter is supported only by IE Full Elements.
      shared_ptr<int64_t> executeApplication_ {};
      // Specifies whether to execute scripts.
      // 
      // *   1: yes
      // *   0: no
      // 
      // >  This parameter is supported only by IE Full Elements.
      shared_ptr<int64_t> executeScript_ {};
      // Specifies whether to filter invalid IP addresses.
      // 
      // *   1: no
      // *   0: yes
      shared_ptr<int64_t> filterInvalidIP_ {};
      // The element that is used in DNS hijacking.
      shared_ptr<int64_t> flowHijackJumpTimes_ {};
      // The tag that is used in DNS hijacking.
      shared_ptr<string> flowHijackLogo_ {};
      // The timeout period of monitoring. Unit: seconds.
      shared_ptr<string> monitorTimeout_ {};
      // Specifies whether to automatically scroll up and down the screen to load a page.
      // 
      // *   1: yes
      // *   0: no
      shared_ptr<string> navAutomaticScrolling_ {};
      // The method that is used to customize the header. Valid values:
      // 
      // *   0: disables the customer header.
      // *   1: modifies the first package.
      // *   2: modifies all packages.
      shared_ptr<string> navCustomHeader_ {};
      // The format of the custom header. You can specify multiple fields. Separate the fields with vertical bars (|).
      shared_ptr<string> navCustomHeaderContent_ {};
      // The custom host mode.
      // 
      // *   1: round robin
      // *   0: random
      shared_ptr<int64_t> navCustomHost_ {};
      // The custom host IP address. You can enter multiple IP addresses. Separate the IP addresses with commas (,).
      shared_ptr<string> navCustomHostIp_ {};
      // Specifies whether to disable caching.
      // 
      // *   1: disable
      // *   0: enable
      shared_ptr<int64_t> navDisableCache_ {};
      // Specifies whether to enable the feature of using the Accept-Encoding field to determine whether to accept compressed files.
      // 
      // *   1: disable
      // *   0: enable
      shared_ptr<string> navDisableCompression_ {};
      // Specifies whether to ignore certificate errors during certificate verification in the SSL handshake and continue browsing.
      // 
      // *   1: ignore
      // *   0: does not ignore
      shared_ptr<int64_t> navIgnoreCertificateError_ {};
      // Specifies whether to continue browsing after a redirection occurs.
      // 
      // *   1: yes
      // *   0: no
      shared_ptr<int64_t> navRedirection_ {};
      // Specifies whether to return the elements on the page.
      // 
      // *   1: no. Returns the basic document data.
      // *   2: yes. Returns all document data.
      shared_ptr<int64_t> navReturnElement_ {};
      // The web page defacement.
      shared_ptr<string> pageTamper_ {};
      // The process ID.
      shared_ptr<string> processName_ {};
      // The domain name of the QUIC request element.
      // 
      // >  This parameter is supported by all elements of only Chrome
      shared_ptr<string> QUICDomain_ {};
      // The Quick UDP Internet Connections (QUIC) protocol version. Default value: 0. Valid values:
      // 
      // *
      // *   35
      // *   39
      // *   43
      // *   44
      // 
      // >  This parameter is supported by all elements of only Chrome
      shared_ptr<int64_t> QUICVersion_ {};
      // Specifies whether to return the request header.
      // 
      // *   0: does not return the response header.
      // *   1: returns the basic document header.
      // *   2: returns all headers.
      shared_ptr<int64_t> requestHeader_ {};
      // The method that is used to return the response header. Valid values:
      // 
      // *   0: does not return the response header.
      // *   1: returns the basic document header.
      // *   2: returns all headers.
      shared_ptr<int64_t> responseHeader_ {};
      // The time threshold that is used to define a slow element. Unit: seconds.
      shared_ptr<double> slowElementThreshold_ {};
      // The blacklist for string verification.
      shared_ptr<string> verifyStringBlacklist_ {};
      // The whitelist for string verification.
      shared_ptr<string> verifyStringWhiteList_ {};
      // The timeout period of waiting for the monitoring to complete.
      shared_ptr<double> waitCompletionTime_ {};
    };

    class MonitorList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MonitorList& obj) { 
        DARABONBA_PTR_TO_JSON(CityCode, cityCode_);
        DARABONBA_PTR_TO_JSON(MonitorType, monitorType_);
        DARABONBA_PTR_TO_JSON(NetServiceId, netServiceId_);
      };
      friend void from_json(const Darabonba::Json& j, MonitorList& obj) { 
        DARABONBA_PTR_FROM_JSON(CityCode, cityCode_);
        DARABONBA_PTR_FROM_JSON(MonitorType, monitorType_);
        DARABONBA_PTR_FROM_JSON(NetServiceId, netServiceId_);
      };
      MonitorList() = default ;
      MonitorList(const MonitorList &) = default ;
      MonitorList(MonitorList &&) = default ;
      MonitorList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~MonitorList() = default ;
      MonitorList& operator=(const MonitorList &) = default ;
      MonitorList& operator=(MonitorList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->cityCode_ == nullptr
        && this->monitorType_ == nullptr && this->netServiceId_ == nullptr; };
      // cityCode Field Functions 
      bool hasCityCode() const { return this->cityCode_ != nullptr;};
      void deleteCityCode() { this->cityCode_ = nullptr;};
      inline int64_t getCityCode() const { DARABONBA_PTR_GET_DEFAULT(cityCode_, 0L) };
      inline MonitorList& setCityCode(int64_t cityCode) { DARABONBA_PTR_SET_VALUE(cityCode_, cityCode) };


      // monitorType Field Functions 
      bool hasMonitorType() const { return this->monitorType_ != nullptr;};
      void deleteMonitorType() { this->monitorType_ = nullptr;};
      inline int64_t getMonitorType() const { DARABONBA_PTR_GET_DEFAULT(monitorType_, 0L) };
      inline MonitorList& setMonitorType(int64_t monitorType) { DARABONBA_PTR_SET_VALUE(monitorType_, monitorType) };


      // netServiceId Field Functions 
      bool hasNetServiceId() const { return this->netServiceId_ != nullptr;};
      void deleteNetServiceId() { this->netServiceId_ = nullptr;};
      inline int64_t getNetServiceId() const { DARABONBA_PTR_GET_DEFAULT(netServiceId_, 0L) };
      inline MonitorList& setNetServiceId(int64_t netServiceId) { DARABONBA_PTR_SET_VALUE(netServiceId_, netServiceId) };


    protected:
      // The ID of the city to which the monitoring point belongs.
      // 
      // This parameter is required.
      shared_ptr<int64_t> cityCode_ {};
      // The carrier type:
      // 
      // *   IDC
      // *   LastMilie
      // 
      // This parameter is required.
      shared_ptr<int64_t> monitorType_ {};
      // The ID of the carrier.
      // 
      // This parameter is required.
      shared_ptr<int64_t> netServiceId_ {};
    };

    class ExtendInterval : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ExtendInterval& obj) { 
        DARABONBA_PTR_TO_JSON(Days, days_);
        DARABONBA_PTR_TO_JSON(EndHour, endHour_);
        DARABONBA_PTR_TO_JSON(EndMinute, endMinute_);
        DARABONBA_PTR_TO_JSON(EndTime, endTime_);
        DARABONBA_PTR_TO_JSON(StartHour, startHour_);
        DARABONBA_PTR_TO_JSON(StartMinute, startMinute_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      };
      friend void from_json(const Darabonba::Json& j, ExtendInterval& obj) { 
        DARABONBA_PTR_FROM_JSON(Days, days_);
        DARABONBA_PTR_FROM_JSON(EndHour, endHour_);
        DARABONBA_PTR_FROM_JSON(EndMinute, endMinute_);
        DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
        DARABONBA_PTR_FROM_JSON(StartHour, startHour_);
        DARABONBA_PTR_FROM_JSON(StartMinute, startMinute_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      };
      ExtendInterval() = default ;
      ExtendInterval(const ExtendInterval &) = default ;
      ExtendInterval(ExtendInterval &&) = default ;
      ExtendInterval(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ExtendInterval() = default ;
      ExtendInterval& operator=(const ExtendInterval &) = default ;
      ExtendInterval& operator=(ExtendInterval &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->days_ == nullptr
        && this->endHour_ == nullptr && this->endMinute_ == nullptr && this->endTime_ == nullptr && this->startHour_ == nullptr && this->startMinute_ == nullptr
        && this->startTime_ == nullptr; };
      // days Field Functions 
      bool hasDays() const { return this->days_ != nullptr;};
      void deleteDays() { this->days_ = nullptr;};
      inline const vector<int64_t> & getDays() const { DARABONBA_PTR_GET_CONST(days_, vector<int64_t>) };
      inline vector<int64_t> getDays() { DARABONBA_PTR_GET(days_, vector<int64_t>) };
      inline ExtendInterval& setDays(const vector<int64_t> & days) { DARABONBA_PTR_SET_VALUE(days_, days) };
      inline ExtendInterval& setDays(vector<int64_t> && days) { DARABONBA_PTR_SET_RVALUE(days_, days) };


      // endHour Field Functions 
      bool hasEndHour() const { return this->endHour_ != nullptr;};
      void deleteEndHour() { this->endHour_ = nullptr;};
      inline int64_t getEndHour() const { DARABONBA_PTR_GET_DEFAULT(endHour_, 0L) };
      inline ExtendInterval& setEndHour(int64_t endHour) { DARABONBA_PTR_SET_VALUE(endHour_, endHour) };


      // endMinute Field Functions 
      bool hasEndMinute() const { return this->endMinute_ != nullptr;};
      void deleteEndMinute() { this->endMinute_ = nullptr;};
      inline int64_t getEndMinute() const { DARABONBA_PTR_GET_DEFAULT(endMinute_, 0L) };
      inline ExtendInterval& setEndMinute(int64_t endMinute) { DARABONBA_PTR_SET_VALUE(endMinute_, endMinute) };


      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
      inline ExtendInterval& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // startHour Field Functions 
      bool hasStartHour() const { return this->startHour_ != nullptr;};
      void deleteStartHour() { this->startHour_ = nullptr;};
      inline int64_t getStartHour() const { DARABONBA_PTR_GET_DEFAULT(startHour_, 0L) };
      inline ExtendInterval& setStartHour(int64_t startHour) { DARABONBA_PTR_SET_VALUE(startHour_, startHour) };


      // startMinute Field Functions 
      bool hasStartMinute() const { return this->startMinute_ != nullptr;};
      void deleteStartMinute() { this->startMinute_ = nullptr;};
      inline int64_t getStartMinute() const { DARABONBA_PTR_GET_DEFAULT(startMinute_, 0L) };
      inline ExtendInterval& setStartMinute(int64_t startMinute) { DARABONBA_PTR_SET_VALUE(startMinute_, startMinute) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
      inline ExtendInterval& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    protected:
      // The day on which synthetic monitoring is performed.
      shared_ptr<vector<int64_t>> days_ {};
      // The hour at which synthetic monitoring ends.
      shared_ptr<int64_t> endHour_ {};
      // The minute at which synthetic monitoring ends.
      shared_ptr<int64_t> endMinute_ {};
      // The time when synthetic monitoring ends. The format is `yyyy-MM-dd HH`.
      shared_ptr<string> endTime_ {};
      // The hour at which synthetic monitoring starts.
      shared_ptr<int64_t> startHour_ {};
      // The minute at which synthetic monitoring starts.
      shared_ptr<int64_t> startMinute_ {};
      // The time when synthetic monitoring starts. The format is `yyyy-MM-dd HH`.
      shared_ptr<string> startTime_ {};
    };

    class Download : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Download& obj) { 
        DARABONBA_PTR_TO_JSON(ConnectionTimeout, connectionTimeout_);
        DARABONBA_PTR_TO_JSON(DownloadCustomHeaderContent, downloadCustomHeaderContent_);
        DARABONBA_PTR_TO_JSON(DownloadCustomHost, downloadCustomHost_);
        DARABONBA_PTR_TO_JSON(DownloadCustomHostIp, downloadCustomHostIp_);
        DARABONBA_PTR_TO_JSON(DownloadIgnoreCertificateError, downloadIgnoreCertificateError_);
        DARABONBA_PTR_TO_JSON(DownloadKernel, downloadKernel_);
        DARABONBA_PTR_TO_JSON(DownloadRedirection, downloadRedirection_);
        DARABONBA_PTR_TO_JSON(DownloadTransmissionSize, downloadTransmissionSize_);
        DARABONBA_PTR_TO_JSON(MonitorTimeout, monitorTimeout_);
        DARABONBA_PTR_TO_JSON(QuickProtocol, quickProtocol_);
        DARABONBA_PTR_TO_JSON(ValidateKeywords, validateKeywords_);
        DARABONBA_PTR_TO_JSON(VerifyWay, verifyWay_);
        DARABONBA_PTR_TO_JSON(WhiteList, whiteList_);
      };
      friend void from_json(const Darabonba::Json& j, Download& obj) { 
        DARABONBA_PTR_FROM_JSON(ConnectionTimeout, connectionTimeout_);
        DARABONBA_PTR_FROM_JSON(DownloadCustomHeaderContent, downloadCustomHeaderContent_);
        DARABONBA_PTR_FROM_JSON(DownloadCustomHost, downloadCustomHost_);
        DARABONBA_PTR_FROM_JSON(DownloadCustomHostIp, downloadCustomHostIp_);
        DARABONBA_PTR_FROM_JSON(DownloadIgnoreCertificateError, downloadIgnoreCertificateError_);
        DARABONBA_PTR_FROM_JSON(DownloadKernel, downloadKernel_);
        DARABONBA_PTR_FROM_JSON(DownloadRedirection, downloadRedirection_);
        DARABONBA_PTR_FROM_JSON(DownloadTransmissionSize, downloadTransmissionSize_);
        DARABONBA_PTR_FROM_JSON(MonitorTimeout, monitorTimeout_);
        DARABONBA_PTR_FROM_JSON(QuickProtocol, quickProtocol_);
        DARABONBA_PTR_FROM_JSON(ValidateKeywords, validateKeywords_);
        DARABONBA_PTR_FROM_JSON(VerifyWay, verifyWay_);
        DARABONBA_PTR_FROM_JSON(WhiteList, whiteList_);
      };
      Download() = default ;
      Download(const Download &) = default ;
      Download(Download &&) = default ;
      Download(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Download() = default ;
      Download& operator=(const Download &) = default ;
      Download& operator=(Download &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->connectionTimeout_ == nullptr
        && this->downloadCustomHeaderContent_ == nullptr && this->downloadCustomHost_ == nullptr && this->downloadCustomHostIp_ == nullptr && this->downloadIgnoreCertificateError_ == nullptr && this->downloadKernel_ == nullptr
        && this->downloadRedirection_ == nullptr && this->downloadTransmissionSize_ == nullptr && this->monitorTimeout_ == nullptr && this->quickProtocol_ == nullptr && this->validateKeywords_ == nullptr
        && this->verifyWay_ == nullptr && this->whiteList_ == nullptr; };
      // connectionTimeout Field Functions 
      bool hasConnectionTimeout() const { return this->connectionTimeout_ != nullptr;};
      void deleteConnectionTimeout() { this->connectionTimeout_ = nullptr;};
      inline double getConnectionTimeout() const { DARABONBA_PTR_GET_DEFAULT(connectionTimeout_, 0.0) };
      inline Download& setConnectionTimeout(double connectionTimeout) { DARABONBA_PTR_SET_VALUE(connectionTimeout_, connectionTimeout) };


      // downloadCustomHeaderContent Field Functions 
      bool hasDownloadCustomHeaderContent() const { return this->downloadCustomHeaderContent_ != nullptr;};
      void deleteDownloadCustomHeaderContent() { this->downloadCustomHeaderContent_ = nullptr;};
      inline string getDownloadCustomHeaderContent() const { DARABONBA_PTR_GET_DEFAULT(downloadCustomHeaderContent_, "") };
      inline Download& setDownloadCustomHeaderContent(string downloadCustomHeaderContent) { DARABONBA_PTR_SET_VALUE(downloadCustomHeaderContent_, downloadCustomHeaderContent) };


      // downloadCustomHost Field Functions 
      bool hasDownloadCustomHost() const { return this->downloadCustomHost_ != nullptr;};
      void deleteDownloadCustomHost() { this->downloadCustomHost_ = nullptr;};
      inline int64_t getDownloadCustomHost() const { DARABONBA_PTR_GET_DEFAULT(downloadCustomHost_, 0L) };
      inline Download& setDownloadCustomHost(int64_t downloadCustomHost) { DARABONBA_PTR_SET_VALUE(downloadCustomHost_, downloadCustomHost) };


      // downloadCustomHostIp Field Functions 
      bool hasDownloadCustomHostIp() const { return this->downloadCustomHostIp_ != nullptr;};
      void deleteDownloadCustomHostIp() { this->downloadCustomHostIp_ = nullptr;};
      inline string getDownloadCustomHostIp() const { DARABONBA_PTR_GET_DEFAULT(downloadCustomHostIp_, "") };
      inline Download& setDownloadCustomHostIp(string downloadCustomHostIp) { DARABONBA_PTR_SET_VALUE(downloadCustomHostIp_, downloadCustomHostIp) };


      // downloadIgnoreCertificateError Field Functions 
      bool hasDownloadIgnoreCertificateError() const { return this->downloadIgnoreCertificateError_ != nullptr;};
      void deleteDownloadIgnoreCertificateError() { this->downloadIgnoreCertificateError_ = nullptr;};
      inline string getDownloadIgnoreCertificateError() const { DARABONBA_PTR_GET_DEFAULT(downloadIgnoreCertificateError_, "") };
      inline Download& setDownloadIgnoreCertificateError(string downloadIgnoreCertificateError) { DARABONBA_PTR_SET_VALUE(downloadIgnoreCertificateError_, downloadIgnoreCertificateError) };


      // downloadKernel Field Functions 
      bool hasDownloadKernel() const { return this->downloadKernel_ != nullptr;};
      void deleteDownloadKernel() { this->downloadKernel_ = nullptr;};
      inline int64_t getDownloadKernel() const { DARABONBA_PTR_GET_DEFAULT(downloadKernel_, 0L) };
      inline Download& setDownloadKernel(int64_t downloadKernel) { DARABONBA_PTR_SET_VALUE(downloadKernel_, downloadKernel) };


      // downloadRedirection Field Functions 
      bool hasDownloadRedirection() const { return this->downloadRedirection_ != nullptr;};
      void deleteDownloadRedirection() { this->downloadRedirection_ = nullptr;};
      inline int64_t getDownloadRedirection() const { DARABONBA_PTR_GET_DEFAULT(downloadRedirection_, 0L) };
      inline Download& setDownloadRedirection(int64_t downloadRedirection) { DARABONBA_PTR_SET_VALUE(downloadRedirection_, downloadRedirection) };


      // downloadTransmissionSize Field Functions 
      bool hasDownloadTransmissionSize() const { return this->downloadTransmissionSize_ != nullptr;};
      void deleteDownloadTransmissionSize() { this->downloadTransmissionSize_ = nullptr;};
      inline int64_t getDownloadTransmissionSize() const { DARABONBA_PTR_GET_DEFAULT(downloadTransmissionSize_, 0L) };
      inline Download& setDownloadTransmissionSize(int64_t downloadTransmissionSize) { DARABONBA_PTR_SET_VALUE(downloadTransmissionSize_, downloadTransmissionSize) };


      // monitorTimeout Field Functions 
      bool hasMonitorTimeout() const { return this->monitorTimeout_ != nullptr;};
      void deleteMonitorTimeout() { this->monitorTimeout_ = nullptr;};
      inline int64_t getMonitorTimeout() const { DARABONBA_PTR_GET_DEFAULT(monitorTimeout_, 0L) };
      inline Download& setMonitorTimeout(int64_t monitorTimeout) { DARABONBA_PTR_SET_VALUE(monitorTimeout_, monitorTimeout) };


      // quickProtocol Field Functions 
      bool hasQuickProtocol() const { return this->quickProtocol_ != nullptr;};
      void deleteQuickProtocol() { this->quickProtocol_ = nullptr;};
      inline string getQuickProtocol() const { DARABONBA_PTR_GET_DEFAULT(quickProtocol_, "") };
      inline Download& setQuickProtocol(string quickProtocol) { DARABONBA_PTR_SET_VALUE(quickProtocol_, quickProtocol) };


      // validateKeywords Field Functions 
      bool hasValidateKeywords() const { return this->validateKeywords_ != nullptr;};
      void deleteValidateKeywords() { this->validateKeywords_ = nullptr;};
      inline string getValidateKeywords() const { DARABONBA_PTR_GET_DEFAULT(validateKeywords_, "") };
      inline Download& setValidateKeywords(string validateKeywords) { DARABONBA_PTR_SET_VALUE(validateKeywords_, validateKeywords) };


      // verifyWay Field Functions 
      bool hasVerifyWay() const { return this->verifyWay_ != nullptr;};
      void deleteVerifyWay() { this->verifyWay_ = nullptr;};
      inline int64_t getVerifyWay() const { DARABONBA_PTR_GET_DEFAULT(verifyWay_, 0L) };
      inline Download& setVerifyWay(int64_t verifyWay) { DARABONBA_PTR_SET_VALUE(verifyWay_, verifyWay) };


      // whiteList Field Functions 
      bool hasWhiteList() const { return this->whiteList_ != nullptr;};
      void deleteWhiteList() { this->whiteList_ = nullptr;};
      inline string getWhiteList() const { DARABONBA_PTR_GET_DEFAULT(whiteList_, "") };
      inline Download& setWhiteList(string whiteList) { DARABONBA_PTR_SET_VALUE(whiteList_, whiteList) };


    protected:
      // The connection timeout period.
      shared_ptr<double> connectionTimeout_ {};
      // The items to be ignored in a certificate error. Pass the values of the check boxes that are separated with vertical bars (|).
      shared_ptr<string> downloadCustomHeaderContent_ {};
      // The custom host mode.
      // 
      // *   1: round robin
      // *   0: random
      shared_ptr<int64_t> downloadCustomHost_ {};
      // The custom host IP address. You can enter multiple IP addresses. Separate the IP addresses with commas (,).
      shared_ptr<string> downloadCustomHostIp_ {};
      // The items to be ignored in a certificate error. Pass the values of the check boxes that are separated with vertical bars (|).
      shared_ptr<string> downloadIgnoreCertificateError_ {};
      // The kernel type.
      // 
      // *   1: curl
      // *   0: WinInet
      shared_ptr<int64_t> downloadKernel_ {};
      // Specifies whether to support redirection.
      shared_ptr<int64_t> downloadRedirection_ {};
      // The size of the download file. Unit: KB.
      shared_ptr<int64_t> downloadTransmissionSize_ {};
      // The monitoring duration.
      shared_ptr<int64_t> monitorTimeout_ {};
      // The QUIC protocol type.
      // 
      // *   1: http1
      // *   2: http2
      // *   3: http3
      shared_ptr<string> quickProtocol_ {};
      // The keyword that is used in verification.
      shared_ptr<string> validateKeywords_ {};
      // The verification method.
      // 
      // *   0: no verification
      // *   1: string verification
      // *   2: MD5 verification
      shared_ptr<int64_t> verifyWay_ {};
      // The whitelist for DNS hijacking.
      shared_ptr<string> whiteList_ {};
    };

    class CommonParam : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CommonParam& obj) { 
        DARABONBA_PTR_TO_JSON(AlarmFlag, alarmFlag_);
        DARABONBA_PTR_TO_JSON(AlertList, alertList_);
        DARABONBA_PTR_TO_JSON(AlertNotifierId, alertNotifierId_);
        DARABONBA_PTR_TO_JSON(AlertPolicyId, alertPolicyId_);
        DARABONBA_PTR_TO_JSON(MonitorSamples, monitorSamples_);
        DARABONBA_PTR_TO_JSON(StartExecutionTime, startExecutionTime_);
      };
      friend void from_json(const Darabonba::Json& j, CommonParam& obj) { 
        DARABONBA_PTR_FROM_JSON(AlarmFlag, alarmFlag_);
        DARABONBA_PTR_FROM_JSON(AlertList, alertList_);
        DARABONBA_PTR_FROM_JSON(AlertNotifierId, alertNotifierId_);
        DARABONBA_PTR_FROM_JSON(AlertPolicyId, alertPolicyId_);
        DARABONBA_PTR_FROM_JSON(MonitorSamples, monitorSamples_);
        DARABONBA_PTR_FROM_JSON(StartExecutionTime, startExecutionTime_);
      };
      CommonParam() = default ;
      CommonParam(const CommonParam &) = default ;
      CommonParam(CommonParam &&) = default ;
      CommonParam(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CommonParam() = default ;
      CommonParam& operator=(const CommonParam &) = default ;
      CommonParam& operator=(CommonParam &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class AlertList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AlertList& obj) { 
          DARABONBA_PTR_TO_JSON(IsCritical, isCritical_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Symbols, symbols_);
        };
        friend void from_json(const Darabonba::Json& j, AlertList& obj) { 
          DARABONBA_PTR_FROM_JSON(IsCritical, isCritical_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Symbols, symbols_);
        };
        AlertList() = default ;
        AlertList(const AlertList &) = default ;
        AlertList(AlertList &&) = default ;
        AlertList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AlertList() = default ;
        AlertList& operator=(const AlertList &) = default ;
        AlertList& operator=(AlertList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->isCritical_ == nullptr
        && this->name_ == nullptr && this->symbols_ == nullptr; };
        // isCritical Field Functions 
        bool hasIsCritical() const { return this->isCritical_ != nullptr;};
        void deleteIsCritical() { this->isCritical_ = nullptr;};
        inline int64_t getIsCritical() const { DARABONBA_PTR_GET_DEFAULT(isCritical_, 0L) };
        inline AlertList& setIsCritical(int64_t isCritical) { DARABONBA_PTR_SET_VALUE(isCritical_, isCritical) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline AlertList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // symbols Field Functions 
        bool hasSymbols() const { return this->symbols_ != nullptr;};
        void deleteSymbols() { this->symbols_ = nullptr;};
        inline int64_t getSymbols() const { DARABONBA_PTR_GET_DEFAULT(symbols_, 0L) };
        inline AlertList& setSymbols(int64_t symbols) { DARABONBA_PTR_SET_VALUE(symbols_, symbols) };


      protected:
        // Specifies whether the condition must be met.
        shared_ptr<int64_t> isCritical_ {};
        // The name of the alert rule.
        // 
        // For network synthetic monitoring, use the following names:
        // 
        // *   Latency: PING_SET
        // *   Packet loss rate: PING_LOST_RATE
        // *   Hijacking: HIJACKPER
        shared_ptr<string> name_ {};
        // Specifies how the condition is evaluated. Valid values:
        // 
        // *   1: greater than
        // *   0: less than
        shared_ptr<int64_t> symbols_ {};
      };

      virtual bool empty() const override { return this->alarmFlag_ == nullptr
        && this->alertList_ == nullptr && this->alertNotifierId_ == nullptr && this->alertPolicyId_ == nullptr && this->monitorSamples_ == nullptr && this->startExecutionTime_ == nullptr; };
      // alarmFlag Field Functions 
      bool hasAlarmFlag() const { return this->alarmFlag_ != nullptr;};
      void deleteAlarmFlag() { this->alarmFlag_ = nullptr;};
      inline string getAlarmFlag() const { DARABONBA_PTR_GET_DEFAULT(alarmFlag_, "") };
      inline CommonParam& setAlarmFlag(string alarmFlag) { DARABONBA_PTR_SET_VALUE(alarmFlag_, alarmFlag) };


      // alertList Field Functions 
      bool hasAlertList() const { return this->alertList_ != nullptr;};
      void deleteAlertList() { this->alertList_ = nullptr;};
      inline const vector<CommonParam::AlertList> & getAlertList() const { DARABONBA_PTR_GET_CONST(alertList_, vector<CommonParam::AlertList>) };
      inline vector<CommonParam::AlertList> getAlertList() { DARABONBA_PTR_GET(alertList_, vector<CommonParam::AlertList>) };
      inline CommonParam& setAlertList(const vector<CommonParam::AlertList> & alertList) { DARABONBA_PTR_SET_VALUE(alertList_, alertList) };
      inline CommonParam& setAlertList(vector<CommonParam::AlertList> && alertList) { DARABONBA_PTR_SET_RVALUE(alertList_, alertList) };


      // alertNotifierId Field Functions 
      bool hasAlertNotifierId() const { return this->alertNotifierId_ != nullptr;};
      void deleteAlertNotifierId() { this->alertNotifierId_ = nullptr;};
      inline string getAlertNotifierId() const { DARABONBA_PTR_GET_DEFAULT(alertNotifierId_, "") };
      inline CommonParam& setAlertNotifierId(string alertNotifierId) { DARABONBA_PTR_SET_VALUE(alertNotifierId_, alertNotifierId) };


      // alertPolicyId Field Functions 
      bool hasAlertPolicyId() const { return this->alertPolicyId_ != nullptr;};
      void deleteAlertPolicyId() { this->alertPolicyId_ = nullptr;};
      inline string getAlertPolicyId() const { DARABONBA_PTR_GET_DEFAULT(alertPolicyId_, "") };
      inline CommonParam& setAlertPolicyId(string alertPolicyId) { DARABONBA_PTR_SET_VALUE(alertPolicyId_, alertPolicyId) };


      // monitorSamples Field Functions 
      bool hasMonitorSamples() const { return this->monitorSamples_ != nullptr;};
      void deleteMonitorSamples() { this->monitorSamples_ = nullptr;};
      inline int64_t getMonitorSamples() const { DARABONBA_PTR_GET_DEFAULT(monitorSamples_, 0L) };
      inline CommonParam& setMonitorSamples(int64_t monitorSamples) { DARABONBA_PTR_SET_VALUE(monitorSamples_, monitorSamples) };


      // startExecutionTime Field Functions 
      bool hasStartExecutionTime() const { return this->startExecutionTime_ != nullptr;};
      void deleteStartExecutionTime() { this->startExecutionTime_ = nullptr;};
      inline int64_t getStartExecutionTime() const { DARABONBA_PTR_GET_DEFAULT(startExecutionTime_, 0L) };
      inline CommonParam& setStartExecutionTime(int64_t startExecutionTime) { DARABONBA_PTR_SET_VALUE(startExecutionTime_, startExecutionTime) };


    protected:
      // Specifies whether to create an alert rule.
      // 
      // *   1: creates an alert.
      // *   0: does not create an alert.
      shared_ptr<string> alarmFlag_ {};
      // The alert parameters.
      shared_ptr<vector<CommonParam::AlertList>> alertList_ {};
      // The ID of the alert recipient. Separate multiple recipients with commas (,).
      shared_ptr<string> alertNotifierId_ {};
      // The ID of the notification policy.
      shared_ptr<string> alertPolicyId_ {};
      // Specifies whether to evenly distribute monitoring samples. Valid values:
      // 
      // *   0: no
      // *   1: yes
      shared_ptr<int64_t> monitorSamples_ {};
      // The time when execution starts.
      shared_ptr<int64_t> startExecutionTime_ {};
    };

    virtual bool empty() const override { return this->commonParam_ == nullptr
        && this->download_ == nullptr && this->extendInterval_ == nullptr && this->intervalTime_ == nullptr && this->intervalType_ == nullptr && this->ipType_ == nullptr
        && this->monitorList_ == nullptr && this->navigation_ == nullptr && this->net_ == nullptr && this->protocol_ == nullptr && this->regionId_ == nullptr
        && this->taskName_ == nullptr && this->taskType_ == nullptr && this->updateTask_ == nullptr && this->url_ == nullptr; };
    // commonParam Field Functions 
    bool hasCommonParam() const { return this->commonParam_ != nullptr;};
    void deleteCommonParam() { this->commonParam_ = nullptr;};
    inline const CreateSyntheticTaskRequest::CommonParam & getCommonParam() const { DARABONBA_PTR_GET_CONST(commonParam_, CreateSyntheticTaskRequest::CommonParam) };
    inline CreateSyntheticTaskRequest::CommonParam getCommonParam() { DARABONBA_PTR_GET(commonParam_, CreateSyntheticTaskRequest::CommonParam) };
    inline CreateSyntheticTaskRequest& setCommonParam(const CreateSyntheticTaskRequest::CommonParam & commonParam) { DARABONBA_PTR_SET_VALUE(commonParam_, commonParam) };
    inline CreateSyntheticTaskRequest& setCommonParam(CreateSyntheticTaskRequest::CommonParam && commonParam) { DARABONBA_PTR_SET_RVALUE(commonParam_, commonParam) };


    // download Field Functions 
    bool hasDownload() const { return this->download_ != nullptr;};
    void deleteDownload() { this->download_ = nullptr;};
    inline const CreateSyntheticTaskRequest::Download & getDownload() const { DARABONBA_PTR_GET_CONST(download_, CreateSyntheticTaskRequest::Download) };
    inline CreateSyntheticTaskRequest::Download getDownload() { DARABONBA_PTR_GET(download_, CreateSyntheticTaskRequest::Download) };
    inline CreateSyntheticTaskRequest& setDownload(const CreateSyntheticTaskRequest::Download & download) { DARABONBA_PTR_SET_VALUE(download_, download) };
    inline CreateSyntheticTaskRequest& setDownload(CreateSyntheticTaskRequest::Download && download) { DARABONBA_PTR_SET_RVALUE(download_, download) };


    // extendInterval Field Functions 
    bool hasExtendInterval() const { return this->extendInterval_ != nullptr;};
    void deleteExtendInterval() { this->extendInterval_ = nullptr;};
    inline const CreateSyntheticTaskRequest::ExtendInterval & getExtendInterval() const { DARABONBA_PTR_GET_CONST(extendInterval_, CreateSyntheticTaskRequest::ExtendInterval) };
    inline CreateSyntheticTaskRequest::ExtendInterval getExtendInterval() { DARABONBA_PTR_GET(extendInterval_, CreateSyntheticTaskRequest::ExtendInterval) };
    inline CreateSyntheticTaskRequest& setExtendInterval(const CreateSyntheticTaskRequest::ExtendInterval & extendInterval) { DARABONBA_PTR_SET_VALUE(extendInterval_, extendInterval) };
    inline CreateSyntheticTaskRequest& setExtendInterval(CreateSyntheticTaskRequest::ExtendInterval && extendInterval) { DARABONBA_PTR_SET_RVALUE(extendInterval_, extendInterval) };


    // intervalTime Field Functions 
    bool hasIntervalTime() const { return this->intervalTime_ != nullptr;};
    void deleteIntervalTime() { this->intervalTime_ = nullptr;};
    inline string getIntervalTime() const { DARABONBA_PTR_GET_DEFAULT(intervalTime_, "") };
    inline CreateSyntheticTaskRequest& setIntervalTime(string intervalTime) { DARABONBA_PTR_SET_VALUE(intervalTime_, intervalTime) };


    // intervalType Field Functions 
    bool hasIntervalType() const { return this->intervalType_ != nullptr;};
    void deleteIntervalType() { this->intervalType_ = nullptr;};
    inline string getIntervalType() const { DARABONBA_PTR_GET_DEFAULT(intervalType_, "") };
    inline CreateSyntheticTaskRequest& setIntervalType(string intervalType) { DARABONBA_PTR_SET_VALUE(intervalType_, intervalType) };


    // ipType Field Functions 
    bool hasIpType() const { return this->ipType_ != nullptr;};
    void deleteIpType() { this->ipType_ = nullptr;};
    inline int64_t getIpType() const { DARABONBA_PTR_GET_DEFAULT(ipType_, 0L) };
    inline CreateSyntheticTaskRequest& setIpType(int64_t ipType) { DARABONBA_PTR_SET_VALUE(ipType_, ipType) };


    // monitorList Field Functions 
    bool hasMonitorList() const { return this->monitorList_ != nullptr;};
    void deleteMonitorList() { this->monitorList_ = nullptr;};
    inline const vector<CreateSyntheticTaskRequest::MonitorList> & getMonitorList() const { DARABONBA_PTR_GET_CONST(monitorList_, vector<CreateSyntheticTaskRequest::MonitorList>) };
    inline vector<CreateSyntheticTaskRequest::MonitorList> getMonitorList() { DARABONBA_PTR_GET(monitorList_, vector<CreateSyntheticTaskRequest::MonitorList>) };
    inline CreateSyntheticTaskRequest& setMonitorList(const vector<CreateSyntheticTaskRequest::MonitorList> & monitorList) { DARABONBA_PTR_SET_VALUE(monitorList_, monitorList) };
    inline CreateSyntheticTaskRequest& setMonitorList(vector<CreateSyntheticTaskRequest::MonitorList> && monitorList) { DARABONBA_PTR_SET_RVALUE(monitorList_, monitorList) };


    // navigation Field Functions 
    bool hasNavigation() const { return this->navigation_ != nullptr;};
    void deleteNavigation() { this->navigation_ = nullptr;};
    inline const CreateSyntheticTaskRequest::Navigation & getNavigation() const { DARABONBA_PTR_GET_CONST(navigation_, CreateSyntheticTaskRequest::Navigation) };
    inline CreateSyntheticTaskRequest::Navigation getNavigation() { DARABONBA_PTR_GET(navigation_, CreateSyntheticTaskRequest::Navigation) };
    inline CreateSyntheticTaskRequest& setNavigation(const CreateSyntheticTaskRequest::Navigation & navigation) { DARABONBA_PTR_SET_VALUE(navigation_, navigation) };
    inline CreateSyntheticTaskRequest& setNavigation(CreateSyntheticTaskRequest::Navigation && navigation) { DARABONBA_PTR_SET_RVALUE(navigation_, navigation) };


    // net Field Functions 
    bool hasNet() const { return this->net_ != nullptr;};
    void deleteNet() { this->net_ = nullptr;};
    inline const CreateSyntheticTaskRequest::Net & getNet() const { DARABONBA_PTR_GET_CONST(net_, CreateSyntheticTaskRequest::Net) };
    inline CreateSyntheticTaskRequest::Net getNet() { DARABONBA_PTR_GET(net_, CreateSyntheticTaskRequest::Net) };
    inline CreateSyntheticTaskRequest& setNet(const CreateSyntheticTaskRequest::Net & net) { DARABONBA_PTR_SET_VALUE(net_, net) };
    inline CreateSyntheticTaskRequest& setNet(CreateSyntheticTaskRequest::Net && net) { DARABONBA_PTR_SET_RVALUE(net_, net) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline const CreateSyntheticTaskRequest::Protocol & getProtocol() const { DARABONBA_PTR_GET_CONST(protocol_, CreateSyntheticTaskRequest::Protocol) };
    inline CreateSyntheticTaskRequest::Protocol getProtocol() { DARABONBA_PTR_GET(protocol_, CreateSyntheticTaskRequest::Protocol) };
    inline CreateSyntheticTaskRequest& setProtocol(const CreateSyntheticTaskRequest::Protocol & protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };
    inline CreateSyntheticTaskRequest& setProtocol(CreateSyntheticTaskRequest::Protocol && protocol) { DARABONBA_PTR_SET_RVALUE(protocol_, protocol) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateSyntheticTaskRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string getTaskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline CreateSyntheticTaskRequest& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


    // taskType Field Functions 
    bool hasTaskType() const { return this->taskType_ != nullptr;};
    void deleteTaskType() { this->taskType_ = nullptr;};
    inline int64_t getTaskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, 0L) };
    inline CreateSyntheticTaskRequest& setTaskType(int64_t taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


    // updateTask Field Functions 
    bool hasUpdateTask() const { return this->updateTask_ != nullptr;};
    void deleteUpdateTask() { this->updateTask_ = nullptr;};
    inline bool getUpdateTask() const { DARABONBA_PTR_GET_DEFAULT(updateTask_, false) };
    inline CreateSyntheticTaskRequest& setUpdateTask(bool updateTask) { DARABONBA_PTR_SET_VALUE(updateTask_, updateTask) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline CreateSyntheticTaskRequest& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    // The common parameters.
    shared_ptr<CreateSyntheticTaskRequest::CommonParam> commonParam_ {};
    // The file download task.
    shared_ptr<CreateSyntheticTaskRequest::Download> download_ {};
    // The frequency.
    shared_ptr<CreateSyntheticTaskRequest::ExtendInterval> extendInterval_ {};
    // The interval at which synthetic monitoring is performed. Unit: minutes. Valid values:
    // 
    // *   1
    // *   5
    // *   10
    // *   15
    // *   20
    // *   30
    // *   60
    // *   120
    // *   180
    // *   240
    // *   360
    // *   480
    // *   720
    // *   1440
    // 
    // This parameter is required.
    shared_ptr<string> intervalTime_ {};
    // The interval type.
    // 
    // *   0: daily
    // *   1: custom frequency
    // 
    // This parameter is required.
    shared_ptr<string> intervalType_ {};
    // The IP address type:
    // 
    // *   0: an automatic IP address
    // *   1: IPv4
    // *   2: IPv6
    // 
    // This parameter is required.
    shared_ptr<int64_t> ipType_ {};
    // The list of monitoring points.
    // 
    // This parameter is required.
    shared_ptr<vector<CreateSyntheticTaskRequest::MonitorList>> monitorList_ {};
    // The monitoring items that are associated with the browse tasks.
    shared_ptr<CreateSyntheticTaskRequest::Navigation> navigation_ {};
    // The network synthetic monitoring task.
    shared_ptr<CreateSyntheticTaskRequest::Net> net_ {};
    // The API performance synthetic monitoring task.
    shared_ptr<CreateSyntheticTaskRequest::Protocol> protocol_ {};
    // The ID of the region in which the application is located.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The name of the task. To update a synthetic monitoring task, enter the task name and set the **UpdateTask** parameter to **true**.
    // 
    // This parameter is required.
    shared_ptr<string> taskName_ {};
    // The type of the monitoring task. Valid values:
    // 
    // 1.  3: web page performance - IE
    // 2.  34: web Page Performance - Chrome
    // 3.  0: network quality
    // 4.  40: file download
    // 5.  7:API performance
    // 
    // This parameter is required.
    shared_ptr<int64_t> taskType_ {};
    // Specifies whether to update existing synthetic monitoring tasks.
    // 
    // *   true: updates existing synthetic monitoring tasks.
    // *   false: creates new synthetic monitoring tasks.
    shared_ptr<bool> updateTask_ {};
    // The URL for synthetic monitoring.
    // 
    // This parameter is required.
    shared_ptr<string> url_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
