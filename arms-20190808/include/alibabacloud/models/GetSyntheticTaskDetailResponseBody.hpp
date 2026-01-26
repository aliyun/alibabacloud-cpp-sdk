// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSYNTHETICTASKDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSYNTHETICTASKDETAILRESPONSEBODY_HPP_
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
  class GetSyntheticTaskDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSyntheticTaskDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TaskDetail, taskDetail_);
    };
    friend void from_json(const Darabonba::Json& j, GetSyntheticTaskDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TaskDetail, taskDetail_);
    };
    GetSyntheticTaskDetailResponseBody() = default ;
    GetSyntheticTaskDetailResponseBody(const GetSyntheticTaskDetailResponseBody &) = default ;
    GetSyntheticTaskDetailResponseBody(GetSyntheticTaskDetailResponseBody &&) = default ;
    GetSyntheticTaskDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSyntheticTaskDetailResponseBody() = default ;
    GetSyntheticTaskDetailResponseBody& operator=(const GetSyntheticTaskDetailResponseBody &) = default ;
    GetSyntheticTaskDetailResponseBody& operator=(GetSyntheticTaskDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TaskDetail : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TaskDetail& obj) { 
        DARABONBA_PTR_TO_JSON(CommonParam, commonParam_);
        DARABONBA_PTR_TO_JSON(Download, download_);
        DARABONBA_PTR_TO_JSON(ExtendInterval, extendInterval_);
        DARABONBA_PTR_TO_JSON(IntervalTime, intervalTime_);
        DARABONBA_PTR_TO_JSON(IntervalType, intervalType_);
        DARABONBA_PTR_TO_JSON(IpType, ipType_);
        DARABONBA_PTR_TO_JSON(MonitorList, monitorList_);
        DARABONBA_PTR_TO_JSON(MonitorListString, monitorListString_);
        DARABONBA_PTR_TO_JSON(Nav, nav_);
        DARABONBA_PTR_TO_JSON(Net, net_);
        DARABONBA_PTR_TO_JSON(Protocol, protocol_);
        DARABONBA_PTR_TO_JSON(TaskId, taskId_);
        DARABONBA_PTR_TO_JSON(TaskName, taskName_);
        DARABONBA_PTR_TO_JSON(TaskType, taskType_);
        DARABONBA_PTR_TO_JSON(Url, url_);
      };
      friend void from_json(const Darabonba::Json& j, TaskDetail& obj) { 
        DARABONBA_PTR_FROM_JSON(CommonParam, commonParam_);
        DARABONBA_PTR_FROM_JSON(Download, download_);
        DARABONBA_PTR_FROM_JSON(ExtendInterval, extendInterval_);
        DARABONBA_PTR_FROM_JSON(IntervalTime, intervalTime_);
        DARABONBA_PTR_FROM_JSON(IntervalType, intervalType_);
        DARABONBA_PTR_FROM_JSON(IpType, ipType_);
        DARABONBA_PTR_FROM_JSON(MonitorList, monitorList_);
        DARABONBA_PTR_FROM_JSON(MonitorListString, monitorListString_);
        DARABONBA_PTR_FROM_JSON(Nav, nav_);
        DARABONBA_PTR_FROM_JSON(Net, net_);
        DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
        DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
        DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
        DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
        DARABONBA_PTR_FROM_JSON(Url, url_);
      };
      TaskDetail() = default ;
      TaskDetail(const TaskDetail &) = default ;
      TaskDetail(TaskDetail &&) = default ;
      TaskDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TaskDetail() = default ;
      TaskDetail& operator=(const TaskDetail &) = default ;
      TaskDetail& operator=(TaskDetail &&) = default ;
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
          DARABONBA_PTR_TO_JSON(ProtocolConnectionTimeout, protocolConnectionTimeout_);
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
          DARABONBA_PTR_FROM_JSON(ProtocolConnectionTimeout, protocolConnectionTimeout_);
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
            // The key of the header in the request parameters.
            shared_ptr<string> key_ {};
            // The value of the header in the request parameters.
            shared_ptr<string> value_ {};
          };

          class Body : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Body& obj) { 
              DARABONBA_PTR_TO_JSON(Formdata, formdata_);
              DARABONBA_PTR_TO_JSON(Language, language_);
              DARABONBA_PTR_TO_JSON(Mode, mode_);
              DARABONBA_PTR_TO_JSON(Raw, raw_);
              DARABONBA_PTR_TO_JSON(Urlencoded, urlencoded_);
            };
            friend void from_json(const Darabonba::Json& j, Body& obj) { 
              DARABONBA_PTR_FROM_JSON(Formdata, formdata_);
              DARABONBA_PTR_FROM_JSON(Language, language_);
              DARABONBA_PTR_FROM_JSON(Mode, mode_);
              DARABONBA_PTR_FROM_JSON(Raw, raw_);
              DARABONBA_PTR_FROM_JSON(Urlencoded, urlencoded_);
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
            class Urlencoded : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const Urlencoded& obj) { 
                DARABONBA_PTR_TO_JSON(Key, key_);
                DARABONBA_PTR_TO_JSON(Value, value_);
              };
              friend void from_json(const Darabonba::Json& j, Urlencoded& obj) { 
                DARABONBA_PTR_FROM_JSON(Key, key_);
                DARABONBA_PTR_FROM_JSON(Value, value_);
              };
              Urlencoded() = default ;
              Urlencoded(const Urlencoded &) = default ;
              Urlencoded(Urlencoded &&) = default ;
              Urlencoded(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~Urlencoded() = default ;
              Urlencoded& operator=(const Urlencoded &) = default ;
              Urlencoded& operator=(Urlencoded &&) = default ;
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
              inline Urlencoded& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


              // value Field Functions 
              bool hasValue() const { return this->value_ != nullptr;};
              void deleteValue() { this->value_ = nullptr;};
              inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
              inline Urlencoded& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


            protected:
              // The tag key.
              shared_ptr<string> key_ {};
              // The tag value.
              shared_ptr<string> value_ {};
            };

            class Formdata : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const Formdata& obj) { 
                DARABONBA_PTR_TO_JSON(Key, key_);
                DARABONBA_PTR_TO_JSON(Value, value_);
              };
              friend void from_json(const Darabonba::Json& j, Formdata& obj) { 
                DARABONBA_PTR_FROM_JSON(Key, key_);
                DARABONBA_PTR_FROM_JSON(Value, value_);
              };
              Formdata() = default ;
              Formdata(const Formdata &) = default ;
              Formdata(Formdata &&) = default ;
              Formdata(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~Formdata() = default ;
              Formdata& operator=(const Formdata &) = default ;
              Formdata& operator=(Formdata &&) = default ;
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
              inline Formdata& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


              // value Field Functions 
              bool hasValue() const { return this->value_ != nullptr;};
              void deleteValue() { this->value_ = nullptr;};
              inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
              inline Formdata& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


            protected:
              // The key of the **form-data**.
              shared_ptr<string> key_ {};
              // The value of the form-data.
              shared_ptr<string> value_ {};
            };

            virtual bool empty() const override { return this->formdata_ == nullptr
        && this->language_ == nullptr && this->mode_ == nullptr && this->raw_ == nullptr && this->urlencoded_ == nullptr; };
            // formdata Field Functions 
            bool hasFormdata() const { return this->formdata_ != nullptr;};
            void deleteFormdata() { this->formdata_ = nullptr;};
            inline const Body::Formdata & getFormdata() const { DARABONBA_PTR_GET_CONST(formdata_, Body::Formdata) };
            inline Body::Formdata getFormdata() { DARABONBA_PTR_GET(formdata_, Body::Formdata) };
            inline Body& setFormdata(const Body::Formdata & formdata) { DARABONBA_PTR_SET_VALUE(formdata_, formdata) };
            inline Body& setFormdata(Body::Formdata && formdata) { DARABONBA_PTR_SET_RVALUE(formdata_, formdata) };


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


            // urlencoded Field Functions 
            bool hasUrlencoded() const { return this->urlencoded_ != nullptr;};
            void deleteUrlencoded() { this->urlencoded_ = nullptr;};
            inline const Body::Urlencoded & getUrlencoded() const { DARABONBA_PTR_GET_CONST(urlencoded_, Body::Urlencoded) };
            inline Body::Urlencoded getUrlencoded() { DARABONBA_PTR_GET(urlencoded_, Body::Urlencoded) };
            inline Body& setUrlencoded(const Body::Urlencoded & urlencoded) { DARABONBA_PTR_SET_VALUE(urlencoded_, urlencoded) };
            inline Body& setUrlencoded(Body::Urlencoded && urlencoded) { DARABONBA_PTR_SET_RVALUE(urlencoded_, urlencoded) };


          protected:
            // The data content. This parameter is returned when Mode is set to form-data.
            shared_ptr<Body::Formdata> formdata_ {};
            // The language used when Mode is set to raw. Valid values:
            // 
            // *   json
            // *   xml
            // *   javascript
            // *   html
            // *   text
            shared_ptr<string> language_ {};
            // The type of the content. Valid values:
            // 
            // *   form-data
            // *   x-www-form-urlencoded
            // *   raw
            shared_ptr<string> mode_ {};
            // The data content. This parameter is returned when **Mode** is set to **raw**.
            shared_ptr<string> raw_ {};
            // The URL of the body content.
            shared_ptr<Body::Urlencoded> urlencoded_ {};
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
          // The content of the request body.
          shared_ptr<RequestContent::Body> body_ {};
          // The request header.
          shared_ptr<vector<RequestContent::Header>> header_ {};
          // The request method. Valid values:
          // 
          // *   POST
          // *   GET
          shared_ptr<string> method_ {};
        };

        virtual bool empty() const override { return this->characterEncoding_ == nullptr
        && this->customHost_ == nullptr && this->customHostIp_ == nullptr && this->protocolConnectionTimeout_ == nullptr && this->protocolMonitorTimeout_ == nullptr && this->receivedDataSize_ == nullptr
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


        // protocolConnectionTimeout Field Functions 
        bool hasProtocolConnectionTimeout() const { return this->protocolConnectionTimeout_ != nullptr;};
        void deleteProtocolConnectionTimeout() { this->protocolConnectionTimeout_ = nullptr;};
        inline int64_t getProtocolConnectionTimeout() const { DARABONBA_PTR_GET_DEFAULT(protocolConnectionTimeout_, 0L) };
        inline Protocol& setProtocolConnectionTimeout(int64_t protocolConnectionTimeout) { DARABONBA_PTR_SET_VALUE(protocolConnectionTimeout_, protocolConnectionTimeout) };


        // protocolMonitorTimeout Field Functions 
        bool hasProtocolMonitorTimeout() const { return this->protocolMonitorTimeout_ != nullptr;};
        void deleteProtocolMonitorTimeout() { this->protocolMonitorTimeout_ = nullptr;};
        inline int64_t getProtocolMonitorTimeout() const { DARABONBA_PTR_GET_DEFAULT(protocolMonitorTimeout_, 0L) };
        inline Protocol& setProtocolMonitorTimeout(int64_t protocolMonitorTimeout) { DARABONBA_PTR_SET_VALUE(protocolMonitorTimeout_, protocolMonitorTimeout) };


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
        // The encoding format. Valid values:
        // 
        // *   0: UTF-8
        // *   1: GBK
        // *   2: GB2312
        // *   3: Unicode
        shared_ptr<int64_t> characterEncoding_ {};
        // The custom host. Valid values:
        // 
        // *   1: round robin
        // *   0: random
        shared_ptr<int64_t> customHost_ {};
        // The custom IP address of the host. Multiple IP addresses are separated with commas (,).
        shared_ptr<string> customHostIp_ {};
        // The timeout period.
        shared_ptr<int64_t> protocolConnectionTimeout_ {};
        // The timeout period of API performance monitoring. Unit: seconds.
        shared_ptr<int64_t> protocolMonitorTimeout_ {};
        // The size of the received data. This parameter is returned when **VerifyWay** is set to 2.
        shared_ptr<int64_t> receivedDataSize_ {};
        // The request content, including the header and body.
        shared_ptr<Protocol::RequestContent> requestContent_ {};
        // The verification string.
        shared_ptr<string> verifyContent_ {};
        // The method that is used to verify the response content. Valid values:
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
          DARABONBA_PTR_TO_JSON(NetDigSwitch, netDigSwitch_);
          DARABONBA_PTR_TO_JSON(NetDnsNs, netDnsNs_);
          DARABONBA_PTR_TO_JSON(NetDnsQueryMethod, netDnsQueryMethod_);
          DARABONBA_PTR_TO_JSON(NetDnsServer, netDnsServer_);
          DARABONBA_PTR_TO_JSON(NetDnsSwitch, netDnsSwitch_);
          DARABONBA_PTR_TO_JSON(NetDnsTimeout, netDnsTimeout_);
          DARABONBA_PTR_TO_JSON(NetIcmpActive, netIcmpActive_);
          DARABONBA_PTR_TO_JSON(NetIcmpDataCut, netIcmpDataCut_);
          DARABONBA_PTR_TO_JSON(NetIcmpInterval, netIcmpInterval_);
          DARABONBA_PTR_TO_JSON(NetIcmpNum, netIcmpNum_);
          DARABONBA_PTR_TO_JSON(NetIcmpSize, netIcmpSize_);
          DARABONBA_PTR_TO_JSON(NetIcmpSwitch, netIcmpSwitch_);
          DARABONBA_PTR_TO_JSON(NetIcmpTimeout, netIcmpTimeout_);
          DARABONBA_PTR_TO_JSON(NetTraceRouteNum, netTraceRouteNum_);
          DARABONBA_PTR_TO_JSON(NetTraceRouteSwitch, netTraceRouteSwitch_);
          DARABONBA_PTR_TO_JSON(NetTraceRouteTimeout, netTraceRouteTimeout_);
          DARABONBA_PTR_TO_JSON(WhiteList, whiteList_);
        };
        friend void from_json(const Darabonba::Json& j, Net& obj) { 
          DARABONBA_PTR_FROM_JSON(NetDigSwitch, netDigSwitch_);
          DARABONBA_PTR_FROM_JSON(NetDnsNs, netDnsNs_);
          DARABONBA_PTR_FROM_JSON(NetDnsQueryMethod, netDnsQueryMethod_);
          DARABONBA_PTR_FROM_JSON(NetDnsServer, netDnsServer_);
          DARABONBA_PTR_FROM_JSON(NetDnsSwitch, netDnsSwitch_);
          DARABONBA_PTR_FROM_JSON(NetDnsTimeout, netDnsTimeout_);
          DARABONBA_PTR_FROM_JSON(NetIcmpActive, netIcmpActive_);
          DARABONBA_PTR_FROM_JSON(NetIcmpDataCut, netIcmpDataCut_);
          DARABONBA_PTR_FROM_JSON(NetIcmpInterval, netIcmpInterval_);
          DARABONBA_PTR_FROM_JSON(NetIcmpNum, netIcmpNum_);
          DARABONBA_PTR_FROM_JSON(NetIcmpSize, netIcmpSize_);
          DARABONBA_PTR_FROM_JSON(NetIcmpSwitch, netIcmpSwitch_);
          DARABONBA_PTR_FROM_JSON(NetIcmpTimeout, netIcmpTimeout_);
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
        virtual bool empty() const override { return this->netDigSwitch_ == nullptr
        && this->netDnsNs_ == nullptr && this->netDnsQueryMethod_ == nullptr && this->netDnsServer_ == nullptr && this->netDnsSwitch_ == nullptr && this->netDnsTimeout_ == nullptr
        && this->netIcmpActive_ == nullptr && this->netIcmpDataCut_ == nullptr && this->netIcmpInterval_ == nullptr && this->netIcmpNum_ == nullptr && this->netIcmpSize_ == nullptr
        && this->netIcmpSwitch_ == nullptr && this->netIcmpTimeout_ == nullptr && this->netTraceRouteNum_ == nullptr && this->netTraceRouteSwitch_ == nullptr && this->netTraceRouteTimeout_ == nullptr
        && this->whiteList_ == nullptr; };
        // netDigSwitch Field Functions 
        bool hasNetDigSwitch() const { return this->netDigSwitch_ != nullptr;};
        void deleteNetDigSwitch() { this->netDigSwitch_ = nullptr;};
        inline int64_t getNetDigSwitch() const { DARABONBA_PTR_GET_DEFAULT(netDigSwitch_, 0L) };
        inline Net& setNetDigSwitch(int64_t netDigSwitch) { DARABONBA_PTR_SET_VALUE(netDigSwitch_, netDigSwitch) };


        // netDnsNs Field Functions 
        bool hasNetDnsNs() const { return this->netDnsNs_ != nullptr;};
        void deleteNetDnsNs() { this->netDnsNs_ = nullptr;};
        inline string getNetDnsNs() const { DARABONBA_PTR_GET_DEFAULT(netDnsNs_, "") };
        inline Net& setNetDnsNs(string netDnsNs) { DARABONBA_PTR_SET_VALUE(netDnsNs_, netDnsNs) };


        // netDnsQueryMethod Field Functions 
        bool hasNetDnsQueryMethod() const { return this->netDnsQueryMethod_ != nullptr;};
        void deleteNetDnsQueryMethod() { this->netDnsQueryMethod_ = nullptr;};
        inline string getNetDnsQueryMethod() const { DARABONBA_PTR_GET_DEFAULT(netDnsQueryMethod_, "") };
        inline Net& setNetDnsQueryMethod(string netDnsQueryMethod) { DARABONBA_PTR_SET_VALUE(netDnsQueryMethod_, netDnsQueryMethod) };


        // netDnsServer Field Functions 
        bool hasNetDnsServer() const { return this->netDnsServer_ != nullptr;};
        void deleteNetDnsServer() { this->netDnsServer_ = nullptr;};
        inline int64_t getNetDnsServer() const { DARABONBA_PTR_GET_DEFAULT(netDnsServer_, 0L) };
        inline Net& setNetDnsServer(int64_t netDnsServer) { DARABONBA_PTR_SET_VALUE(netDnsServer_, netDnsServer) };


        // netDnsSwitch Field Functions 
        bool hasNetDnsSwitch() const { return this->netDnsSwitch_ != nullptr;};
        void deleteNetDnsSwitch() { this->netDnsSwitch_ = nullptr;};
        inline int64_t getNetDnsSwitch() const { DARABONBA_PTR_GET_DEFAULT(netDnsSwitch_, 0L) };
        inline Net& setNetDnsSwitch(int64_t netDnsSwitch) { DARABONBA_PTR_SET_VALUE(netDnsSwitch_, netDnsSwitch) };


        // netDnsTimeout Field Functions 
        bool hasNetDnsTimeout() const { return this->netDnsTimeout_ != nullptr;};
        void deleteNetDnsTimeout() { this->netDnsTimeout_ = nullptr;};
        inline string getNetDnsTimeout() const { DARABONBA_PTR_GET_DEFAULT(netDnsTimeout_, "") };
        inline Net& setNetDnsTimeout(string netDnsTimeout) { DARABONBA_PTR_SET_VALUE(netDnsTimeout_, netDnsTimeout) };


        // netIcmpActive Field Functions 
        bool hasNetIcmpActive() const { return this->netIcmpActive_ != nullptr;};
        void deleteNetIcmpActive() { this->netIcmpActive_ = nullptr;};
        inline int64_t getNetIcmpActive() const { DARABONBA_PTR_GET_DEFAULT(netIcmpActive_, 0L) };
        inline Net& setNetIcmpActive(int64_t netIcmpActive) { DARABONBA_PTR_SET_VALUE(netIcmpActive_, netIcmpActive) };


        // netIcmpDataCut Field Functions 
        bool hasNetIcmpDataCut() const { return this->netIcmpDataCut_ != nullptr;};
        void deleteNetIcmpDataCut() { this->netIcmpDataCut_ = nullptr;};
        inline int64_t getNetIcmpDataCut() const { DARABONBA_PTR_GET_DEFAULT(netIcmpDataCut_, 0L) };
        inline Net& setNetIcmpDataCut(int64_t netIcmpDataCut) { DARABONBA_PTR_SET_VALUE(netIcmpDataCut_, netIcmpDataCut) };


        // netIcmpInterval Field Functions 
        bool hasNetIcmpInterval() const { return this->netIcmpInterval_ != nullptr;};
        void deleteNetIcmpInterval() { this->netIcmpInterval_ = nullptr;};
        inline int64_t getNetIcmpInterval() const { DARABONBA_PTR_GET_DEFAULT(netIcmpInterval_, 0L) };
        inline Net& setNetIcmpInterval(int64_t netIcmpInterval) { DARABONBA_PTR_SET_VALUE(netIcmpInterval_, netIcmpInterval) };


        // netIcmpNum Field Functions 
        bool hasNetIcmpNum() const { return this->netIcmpNum_ != nullptr;};
        void deleteNetIcmpNum() { this->netIcmpNum_ = nullptr;};
        inline int64_t getNetIcmpNum() const { DARABONBA_PTR_GET_DEFAULT(netIcmpNum_, 0L) };
        inline Net& setNetIcmpNum(int64_t netIcmpNum) { DARABONBA_PTR_SET_VALUE(netIcmpNum_, netIcmpNum) };


        // netIcmpSize Field Functions 
        bool hasNetIcmpSize() const { return this->netIcmpSize_ != nullptr;};
        void deleteNetIcmpSize() { this->netIcmpSize_ = nullptr;};
        inline int64_t getNetIcmpSize() const { DARABONBA_PTR_GET_DEFAULT(netIcmpSize_, 0L) };
        inline Net& setNetIcmpSize(int64_t netIcmpSize) { DARABONBA_PTR_SET_VALUE(netIcmpSize_, netIcmpSize) };


        // netIcmpSwitch Field Functions 
        bool hasNetIcmpSwitch() const { return this->netIcmpSwitch_ != nullptr;};
        void deleteNetIcmpSwitch() { this->netIcmpSwitch_ = nullptr;};
        inline int64_t getNetIcmpSwitch() const { DARABONBA_PTR_GET_DEFAULT(netIcmpSwitch_, 0L) };
        inline Net& setNetIcmpSwitch(int64_t netIcmpSwitch) { DARABONBA_PTR_SET_VALUE(netIcmpSwitch_, netIcmpSwitch) };


        // netIcmpTimeout Field Functions 
        bool hasNetIcmpTimeout() const { return this->netIcmpTimeout_ != nullptr;};
        void deleteNetIcmpTimeout() { this->netIcmpTimeout_ = nullptr;};
        inline int64_t getNetIcmpTimeout() const { DARABONBA_PTR_GET_DEFAULT(netIcmpTimeout_, 0L) };
        inline Net& setNetIcmpTimeout(int64_t netIcmpTimeout) { DARABONBA_PTR_SET_VALUE(netIcmpTimeout_, netIcmpTimeout) };


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
        // Indicates whether the data is displayed in the DIG format. Valid values:
        // 
        // *   0: no
        // *   1: yes
        shared_ptr<int64_t> netDigSwitch_ {};
        // The NS server.
        shared_ptr<string> netDnsNs_ {};
        // The DNS query method. Valid values:
        // 
        // *   1: recursive
        // *   2: iterative
        shared_ptr<string> netDnsQueryMethod_ {};
        // The type of the DNS server. Valid values:
        // 
        // *   0: ipv4
        // *   1: ipv6
        // *   2: A version is automatically selected.
        shared_ptr<int64_t> netDnsServer_ {};
        // Indicates whether DNS test is enabled. Valid values:
        // 
        // *   0: no
        // *   1: yes
        shared_ptr<int64_t> netDnsSwitch_ {};
        // The timeout period of DNS requests.
        shared_ptr<string> netDnsTimeout_ {};
        // The protocol type. Valid values:
        // 
        // *   0 : ICMP
        // *   1 : TCP
        shared_ptr<int64_t> netIcmpActive_ {};
        // Indicates whether packets are split. Valid values:
        // 
        // *   0: no
        // *   1: yes
        shared_ptr<int64_t> netIcmpDataCut_ {};
        // The interval at which the synthetic monitoring task is executed.
        shared_ptr<int64_t> netIcmpInterval_ {};
        // The number of packets.
        shared_ptr<int64_t> netIcmpNum_ {};
        // The packet size.
        shared_ptr<int64_t> netIcmpSize_ {};
        // Indicates whether ICMP test is enabled. Valid values:
        // 
        // *   0: no.
        // *   1: yes. If you set this parameter to 1, you must also set the Icmp parameter.
        shared_ptr<int64_t> netIcmpSwitch_ {};
        // The monitoring timeout period.
        shared_ptr<int64_t> netIcmpTimeout_ {};
        // The maximum number of active detection points.
        shared_ptr<int64_t> netTraceRouteNum_ {};
        // Indicates whether Tracert test is enabled. Valid values:
        // 
        // *   0: no
        // *   1: yes. If you set this parameter to 1, you must also set the Tracert parameter.
        shared_ptr<int64_t> netTraceRouteSwitch_ {};
        // The monitoring timeout period. Valid values: 0 to 300. Unit: seconds.
        shared_ptr<int64_t> netTraceRouteTimeout_ {};
        // The whitelisted objects that are used to avoid DNS hijacking. Format: `<domain name>:<objects>`.
        // 
        // >  WAP networks do not support hijacking.
        shared_ptr<string> whiteList_ {};
      };

      class Nav : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Nav& obj) { 
          DARABONBA_PTR_TO_JSON(DnsHijackWhitelist, dnsHijackWhitelist_);
          DARABONBA_PTR_TO_JSON(ElementBlacklist, elementBlacklist_);
          DARABONBA_PTR_TO_JSON(ExecuteActiveX, executeActiveX_);
          DARABONBA_PTR_TO_JSON(ExecuteApplet, executeApplet_);
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
          DARABONBA_PTR_TO_JSON(NavRedirect, navRedirect_);
          DARABONBA_PTR_TO_JSON(NavReturnElement, navReturnElement_);
          DARABONBA_PTR_TO_JSON(PageTampering, pageTampering_);
          DARABONBA_PTR_TO_JSON(ProcessName, processName_);
          DARABONBA_PTR_TO_JSON(QuicDomain, quicDomain_);
          DARABONBA_PTR_TO_JSON(QuicVersion, quicVersion_);
          DARABONBA_PTR_TO_JSON(RequestHeader, requestHeader_);
          DARABONBA_PTR_TO_JSON(SlowElementThreshold, slowElementThreshold_);
          DARABONBA_PTR_TO_JSON(VerifyStringBlacklist, verifyStringBlacklist_);
          DARABONBA_PTR_TO_JSON(VerifyStringWhitelist, verifyStringWhitelist_);
          DARABONBA_PTR_TO_JSON(WaitCompletionTime, waitCompletionTime_);
        };
        friend void from_json(const Darabonba::Json& j, Nav& obj) { 
          DARABONBA_PTR_FROM_JSON(DnsHijackWhitelist, dnsHijackWhitelist_);
          DARABONBA_PTR_FROM_JSON(ElementBlacklist, elementBlacklist_);
          DARABONBA_PTR_FROM_JSON(ExecuteActiveX, executeActiveX_);
          DARABONBA_PTR_FROM_JSON(ExecuteApplet, executeApplet_);
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
          DARABONBA_PTR_FROM_JSON(NavRedirect, navRedirect_);
          DARABONBA_PTR_FROM_JSON(NavReturnElement, navReturnElement_);
          DARABONBA_PTR_FROM_JSON(PageTampering, pageTampering_);
          DARABONBA_PTR_FROM_JSON(ProcessName, processName_);
          DARABONBA_PTR_FROM_JSON(QuicDomain, quicDomain_);
          DARABONBA_PTR_FROM_JSON(QuicVersion, quicVersion_);
          DARABONBA_PTR_FROM_JSON(RequestHeader, requestHeader_);
          DARABONBA_PTR_FROM_JSON(SlowElementThreshold, slowElementThreshold_);
          DARABONBA_PTR_FROM_JSON(VerifyStringBlacklist, verifyStringBlacklist_);
          DARABONBA_PTR_FROM_JSON(VerifyStringWhitelist, verifyStringWhitelist_);
          DARABONBA_PTR_FROM_JSON(WaitCompletionTime, waitCompletionTime_);
        };
        Nav() = default ;
        Nav(const Nav &) = default ;
        Nav(Nav &&) = default ;
        Nav(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Nav() = default ;
        Nav& operator=(const Nav &) = default ;
        Nav& operator=(Nav &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->dnsHijackWhitelist_ == nullptr
        && this->elementBlacklist_ == nullptr && this->executeActiveX_ == nullptr && this->executeApplet_ == nullptr && this->executeScript_ == nullptr && this->filterInvalidIP_ == nullptr
        && this->flowHijackJumpTimes_ == nullptr && this->flowHijackLogo_ == nullptr && this->monitorTimeout_ == nullptr && this->navAutomaticScrolling_ == nullptr && this->navCustomHeader_ == nullptr
        && this->navCustomHeaderContent_ == nullptr && this->navCustomHost_ == nullptr && this->navCustomHostIp_ == nullptr && this->navDisableCache_ == nullptr && this->navDisableCompression_ == nullptr
        && this->navIgnoreCertificateError_ == nullptr && this->navRedirect_ == nullptr && this->navReturnElement_ == nullptr && this->pageTampering_ == nullptr && this->processName_ == nullptr
        && this->quicDomain_ == nullptr && this->quicVersion_ == nullptr && this->requestHeader_ == nullptr && this->slowElementThreshold_ == nullptr && this->verifyStringBlacklist_ == nullptr
        && this->verifyStringWhitelist_ == nullptr && this->waitCompletionTime_ == nullptr; };
        // dnsHijackWhitelist Field Functions 
        bool hasDnsHijackWhitelist() const { return this->dnsHijackWhitelist_ != nullptr;};
        void deleteDnsHijackWhitelist() { this->dnsHijackWhitelist_ = nullptr;};
        inline string getDnsHijackWhitelist() const { DARABONBA_PTR_GET_DEFAULT(dnsHijackWhitelist_, "") };
        inline Nav& setDnsHijackWhitelist(string dnsHijackWhitelist) { DARABONBA_PTR_SET_VALUE(dnsHijackWhitelist_, dnsHijackWhitelist) };


        // elementBlacklist Field Functions 
        bool hasElementBlacklist() const { return this->elementBlacklist_ != nullptr;};
        void deleteElementBlacklist() { this->elementBlacklist_ = nullptr;};
        inline string getElementBlacklist() const { DARABONBA_PTR_GET_DEFAULT(elementBlacklist_, "") };
        inline Nav& setElementBlacklist(string elementBlacklist) { DARABONBA_PTR_SET_VALUE(elementBlacklist_, elementBlacklist) };


        // executeActiveX Field Functions 
        bool hasExecuteActiveX() const { return this->executeActiveX_ != nullptr;};
        void deleteExecuteActiveX() { this->executeActiveX_ = nullptr;};
        inline int64_t getExecuteActiveX() const { DARABONBA_PTR_GET_DEFAULT(executeActiveX_, 0L) };
        inline Nav& setExecuteActiveX(int64_t executeActiveX) { DARABONBA_PTR_SET_VALUE(executeActiveX_, executeActiveX) };


        // executeApplet Field Functions 
        bool hasExecuteApplet() const { return this->executeApplet_ != nullptr;};
        void deleteExecuteApplet() { this->executeApplet_ = nullptr;};
        inline int64_t getExecuteApplet() const { DARABONBA_PTR_GET_DEFAULT(executeApplet_, 0L) };
        inline Nav& setExecuteApplet(int64_t executeApplet) { DARABONBA_PTR_SET_VALUE(executeApplet_, executeApplet) };


        // executeScript Field Functions 
        bool hasExecuteScript() const { return this->executeScript_ != nullptr;};
        void deleteExecuteScript() { this->executeScript_ = nullptr;};
        inline int64_t getExecuteScript() const { DARABONBA_PTR_GET_DEFAULT(executeScript_, 0L) };
        inline Nav& setExecuteScript(int64_t executeScript) { DARABONBA_PTR_SET_VALUE(executeScript_, executeScript) };


        // filterInvalidIP Field Functions 
        bool hasFilterInvalidIP() const { return this->filterInvalidIP_ != nullptr;};
        void deleteFilterInvalidIP() { this->filterInvalidIP_ = nullptr;};
        inline int64_t getFilterInvalidIP() const { DARABONBA_PTR_GET_DEFAULT(filterInvalidIP_, 0L) };
        inline Nav& setFilterInvalidIP(int64_t filterInvalidIP) { DARABONBA_PTR_SET_VALUE(filterInvalidIP_, filterInvalidIP) };


        // flowHijackJumpTimes Field Functions 
        bool hasFlowHijackJumpTimes() const { return this->flowHijackJumpTimes_ != nullptr;};
        void deleteFlowHijackJumpTimes() { this->flowHijackJumpTimes_ = nullptr;};
        inline int64_t getFlowHijackJumpTimes() const { DARABONBA_PTR_GET_DEFAULT(flowHijackJumpTimes_, 0L) };
        inline Nav& setFlowHijackJumpTimes(int64_t flowHijackJumpTimes) { DARABONBA_PTR_SET_VALUE(flowHijackJumpTimes_, flowHijackJumpTimes) };


        // flowHijackLogo Field Functions 
        bool hasFlowHijackLogo() const { return this->flowHijackLogo_ != nullptr;};
        void deleteFlowHijackLogo() { this->flowHijackLogo_ = nullptr;};
        inline string getFlowHijackLogo() const { DARABONBA_PTR_GET_DEFAULT(flowHijackLogo_, "") };
        inline Nav& setFlowHijackLogo(string flowHijackLogo) { DARABONBA_PTR_SET_VALUE(flowHijackLogo_, flowHijackLogo) };


        // monitorTimeout Field Functions 
        bool hasMonitorTimeout() const { return this->monitorTimeout_ != nullptr;};
        void deleteMonitorTimeout() { this->monitorTimeout_ = nullptr;};
        inline int64_t getMonitorTimeout() const { DARABONBA_PTR_GET_DEFAULT(monitorTimeout_, 0L) };
        inline Nav& setMonitorTimeout(int64_t monitorTimeout) { DARABONBA_PTR_SET_VALUE(monitorTimeout_, monitorTimeout) };


        // navAutomaticScrolling Field Functions 
        bool hasNavAutomaticScrolling() const { return this->navAutomaticScrolling_ != nullptr;};
        void deleteNavAutomaticScrolling() { this->navAutomaticScrolling_ = nullptr;};
        inline int64_t getNavAutomaticScrolling() const { DARABONBA_PTR_GET_DEFAULT(navAutomaticScrolling_, 0L) };
        inline Nav& setNavAutomaticScrolling(int64_t navAutomaticScrolling) { DARABONBA_PTR_SET_VALUE(navAutomaticScrolling_, navAutomaticScrolling) };


        // navCustomHeader Field Functions 
        bool hasNavCustomHeader() const { return this->navCustomHeader_ != nullptr;};
        void deleteNavCustomHeader() { this->navCustomHeader_ = nullptr;};
        inline string getNavCustomHeader() const { DARABONBA_PTR_GET_DEFAULT(navCustomHeader_, "") };
        inline Nav& setNavCustomHeader(string navCustomHeader) { DARABONBA_PTR_SET_VALUE(navCustomHeader_, navCustomHeader) };


        // navCustomHeaderContent Field Functions 
        bool hasNavCustomHeaderContent() const { return this->navCustomHeaderContent_ != nullptr;};
        void deleteNavCustomHeaderContent() { this->navCustomHeaderContent_ = nullptr;};
        inline string getNavCustomHeaderContent() const { DARABONBA_PTR_GET_DEFAULT(navCustomHeaderContent_, "") };
        inline Nav& setNavCustomHeaderContent(string navCustomHeaderContent) { DARABONBA_PTR_SET_VALUE(navCustomHeaderContent_, navCustomHeaderContent) };


        // navCustomHost Field Functions 
        bool hasNavCustomHost() const { return this->navCustomHost_ != nullptr;};
        void deleteNavCustomHost() { this->navCustomHost_ = nullptr;};
        inline int64_t getNavCustomHost() const { DARABONBA_PTR_GET_DEFAULT(navCustomHost_, 0L) };
        inline Nav& setNavCustomHost(int64_t navCustomHost) { DARABONBA_PTR_SET_VALUE(navCustomHost_, navCustomHost) };


        // navCustomHostIp Field Functions 
        bool hasNavCustomHostIp() const { return this->navCustomHostIp_ != nullptr;};
        void deleteNavCustomHostIp() { this->navCustomHostIp_ = nullptr;};
        inline string getNavCustomHostIp() const { DARABONBA_PTR_GET_DEFAULT(navCustomHostIp_, "") };
        inline Nav& setNavCustomHostIp(string navCustomHostIp) { DARABONBA_PTR_SET_VALUE(navCustomHostIp_, navCustomHostIp) };


        // navDisableCache Field Functions 
        bool hasNavDisableCache() const { return this->navDisableCache_ != nullptr;};
        void deleteNavDisableCache() { this->navDisableCache_ = nullptr;};
        inline int64_t getNavDisableCache() const { DARABONBA_PTR_GET_DEFAULT(navDisableCache_, 0L) };
        inline Nav& setNavDisableCache(int64_t navDisableCache) { DARABONBA_PTR_SET_VALUE(navDisableCache_, navDisableCache) };


        // navDisableCompression Field Functions 
        bool hasNavDisableCompression() const { return this->navDisableCompression_ != nullptr;};
        void deleteNavDisableCompression() { this->navDisableCompression_ = nullptr;};
        inline int64_t getNavDisableCompression() const { DARABONBA_PTR_GET_DEFAULT(navDisableCompression_, 0L) };
        inline Nav& setNavDisableCompression(int64_t navDisableCompression) { DARABONBA_PTR_SET_VALUE(navDisableCompression_, navDisableCompression) };


        // navIgnoreCertificateError Field Functions 
        bool hasNavIgnoreCertificateError() const { return this->navIgnoreCertificateError_ != nullptr;};
        void deleteNavIgnoreCertificateError() { this->navIgnoreCertificateError_ = nullptr;};
        inline int64_t getNavIgnoreCertificateError() const { DARABONBA_PTR_GET_DEFAULT(navIgnoreCertificateError_, 0L) };
        inline Nav& setNavIgnoreCertificateError(int64_t navIgnoreCertificateError) { DARABONBA_PTR_SET_VALUE(navIgnoreCertificateError_, navIgnoreCertificateError) };


        // navRedirect Field Functions 
        bool hasNavRedirect() const { return this->navRedirect_ != nullptr;};
        void deleteNavRedirect() { this->navRedirect_ = nullptr;};
        inline int64_t getNavRedirect() const { DARABONBA_PTR_GET_DEFAULT(navRedirect_, 0L) };
        inline Nav& setNavRedirect(int64_t navRedirect) { DARABONBA_PTR_SET_VALUE(navRedirect_, navRedirect) };


        // navReturnElement Field Functions 
        bool hasNavReturnElement() const { return this->navReturnElement_ != nullptr;};
        void deleteNavReturnElement() { this->navReturnElement_ = nullptr;};
        inline int64_t getNavReturnElement() const { DARABONBA_PTR_GET_DEFAULT(navReturnElement_, 0L) };
        inline Nav& setNavReturnElement(int64_t navReturnElement) { DARABONBA_PTR_SET_VALUE(navReturnElement_, navReturnElement) };


        // pageTampering Field Functions 
        bool hasPageTampering() const { return this->pageTampering_ != nullptr;};
        void deletePageTampering() { this->pageTampering_ = nullptr;};
        inline string getPageTampering() const { DARABONBA_PTR_GET_DEFAULT(pageTampering_, "") };
        inline Nav& setPageTampering(string pageTampering) { DARABONBA_PTR_SET_VALUE(pageTampering_, pageTampering) };


        // processName Field Functions 
        bool hasProcessName() const { return this->processName_ != nullptr;};
        void deleteProcessName() { this->processName_ = nullptr;};
        inline string getProcessName() const { DARABONBA_PTR_GET_DEFAULT(processName_, "") };
        inline Nav& setProcessName(string processName) { DARABONBA_PTR_SET_VALUE(processName_, processName) };


        // quicDomain Field Functions 
        bool hasQuicDomain() const { return this->quicDomain_ != nullptr;};
        void deleteQuicDomain() { this->quicDomain_ = nullptr;};
        inline string getQuicDomain() const { DARABONBA_PTR_GET_DEFAULT(quicDomain_, "") };
        inline Nav& setQuicDomain(string quicDomain) { DARABONBA_PTR_SET_VALUE(quicDomain_, quicDomain) };


        // quicVersion Field Functions 
        bool hasQuicVersion() const { return this->quicVersion_ != nullptr;};
        void deleteQuicVersion() { this->quicVersion_ = nullptr;};
        inline int64_t getQuicVersion() const { DARABONBA_PTR_GET_DEFAULT(quicVersion_, 0L) };
        inline Nav& setQuicVersion(int64_t quicVersion) { DARABONBA_PTR_SET_VALUE(quicVersion_, quicVersion) };


        // requestHeader Field Functions 
        bool hasRequestHeader() const { return this->requestHeader_ != nullptr;};
        void deleteRequestHeader() { this->requestHeader_ = nullptr;};
        inline int64_t getRequestHeader() const { DARABONBA_PTR_GET_DEFAULT(requestHeader_, 0L) };
        inline Nav& setRequestHeader(int64_t requestHeader) { DARABONBA_PTR_SET_VALUE(requestHeader_, requestHeader) };


        // slowElementThreshold Field Functions 
        bool hasSlowElementThreshold() const { return this->slowElementThreshold_ != nullptr;};
        void deleteSlowElementThreshold() { this->slowElementThreshold_ = nullptr;};
        inline int64_t getSlowElementThreshold() const { DARABONBA_PTR_GET_DEFAULT(slowElementThreshold_, 0L) };
        inline Nav& setSlowElementThreshold(int64_t slowElementThreshold) { DARABONBA_PTR_SET_VALUE(slowElementThreshold_, slowElementThreshold) };


        // verifyStringBlacklist Field Functions 
        bool hasVerifyStringBlacklist() const { return this->verifyStringBlacklist_ != nullptr;};
        void deleteVerifyStringBlacklist() { this->verifyStringBlacklist_ = nullptr;};
        inline string getVerifyStringBlacklist() const { DARABONBA_PTR_GET_DEFAULT(verifyStringBlacklist_, "") };
        inline Nav& setVerifyStringBlacklist(string verifyStringBlacklist) { DARABONBA_PTR_SET_VALUE(verifyStringBlacklist_, verifyStringBlacklist) };


        // verifyStringWhitelist Field Functions 
        bool hasVerifyStringWhitelist() const { return this->verifyStringWhitelist_ != nullptr;};
        void deleteVerifyStringWhitelist() { this->verifyStringWhitelist_ = nullptr;};
        inline string getVerifyStringWhitelist() const { DARABONBA_PTR_GET_DEFAULT(verifyStringWhitelist_, "") };
        inline Nav& setVerifyStringWhitelist(string verifyStringWhitelist) { DARABONBA_PTR_SET_VALUE(verifyStringWhitelist_, verifyStringWhitelist) };


        // waitCompletionTime Field Functions 
        bool hasWaitCompletionTime() const { return this->waitCompletionTime_ != nullptr;};
        void deleteWaitCompletionTime() { this->waitCompletionTime_ = nullptr;};
        inline int64_t getWaitCompletionTime() const { DARABONBA_PTR_GET_DEFAULT(waitCompletionTime_, 0L) };
        inline Nav& setWaitCompletionTime(int64_t waitCompletionTime) { DARABONBA_PTR_SET_VALUE(waitCompletionTime_, waitCompletionTime) };


      protected:
        // The DNS whitelist.
        shared_ptr<string> dnsHijackWhitelist_ {};
        // The element blacklist.
        shared_ptr<string> elementBlacklist_ {};
        // Indicates whether ActiveX is executed. Valid values:
        // 
        // *   3: yes
        // *   0: no
        // 
        // >  Only IE elements support this parameter.
        shared_ptr<int64_t> executeActiveX_ {};
        // Indicates whether the applet is executed. Valid values:
        // 
        // *   0: no
        // *   1: yes
        shared_ptr<int64_t> executeApplet_ {};
        // Indicates whether scripts are executed. Valid values:
        // 
        // *   1: yes
        // *   0: no
        // 
        // >  Only IE elements support this parameter.
        shared_ptr<int64_t> executeScript_ {};
        // Indicates whether invalid IP addresses are excluded. Valid values:
        // 
        // *   1: no
        // *   0: yes
        shared_ptr<int64_t> filterInvalidIP_ {};
        // The element that is used in DNS hijacking.
        shared_ptr<int64_t> flowHijackJumpTimes_ {};
        // The tag that is used in DNS hijacking.
        shared_ptr<string> flowHijackLogo_ {};
        // The monitoring timeout period.
        shared_ptr<int64_t> monitorTimeout_ {};
        // Indicates whether the screen is automatically scrolled up and down to load a page. Valid values:
        // 
        // *   1: yes
        // *   0: no
        shared_ptr<int64_t> navAutomaticScrolling_ {};
        // Indicates whether a custom header is created. Valid values:
        // 
        // *   0: no
        // *   1: A custom header is created for the first packet.
        // *   2: A custom header is created for all packets.
        shared_ptr<string> navCustomHeader_ {};
        // The format of the custom header. Multiple fields are separated with vertical bars (|).
        shared_ptr<string> navCustomHeaderContent_ {};
        // The custom host mode. Valid values:
        // 
        // *   1: round robin
        // *   0: random
        shared_ptr<int64_t> navCustomHost_ {};
        // The custom IP address of the host. Multiple IP addresses are separated with commas (,).
        shared_ptr<string> navCustomHostIp_ {};
        // Indicates whether caching is disabled. Valid values:
        // 
        // *   1: Caching is disabled.
        // *   0: Caching is enabled.
        shared_ptr<int64_t> navDisableCache_ {};
        // Indicates whether compression is disabled. Valid values:
        // 
        // *   0: Compression is enabled.
        // *   1: Compression is disabled.
        shared_ptr<int64_t> navDisableCompression_ {};
        // Indicates whether certificate errors are ignored during certificate verification in the SSL handshake. Valid values:
        // 
        // *   1: yes
        // *   0: no
        shared_ptr<int64_t> navIgnoreCertificateError_ {};
        // Indicates whether redirection is enabled. Valid values:
        // 
        // *   0: no
        // *   1: yes
        shared_ptr<int64_t> navRedirect_ {};
        // Indicates whether the elements on the page are returned.
        // 
        // *   1: no. The basic document data is returned.
        // *   2: yes. All document data is returned.
        shared_ptr<int64_t> navReturnElement_ {};
        // The page tampering.
        shared_ptr<string> pageTampering_ {};
        // The process ID.
        shared_ptr<string> processName_ {};
        // The domain name of the QUIC request element.
        shared_ptr<string> quicDomain_ {};
        // The QUIC version. Default value: 0. Valid values:
        // 
        // *   35
        // *   39
        // *   43
        // *   44
        // 
        // >  Only Chrome elements support this parameter.
        shared_ptr<int64_t> quicVersion_ {};
        // Indicates whether request headers are returned. Valid values:
        // 
        // *   0: no
        // *   1: The headers of base documents are returned.
        // *   2: All headers are returned.
        shared_ptr<int64_t> requestHeader_ {};
        // The time threshold that is used to define a slow element. Unit: seconds.
        shared_ptr<int64_t> slowElementThreshold_ {};
        // The blacklist for string verification.
        shared_ptr<string> verifyStringBlacklist_ {};
        // The whitelist for string verification.
        shared_ptr<string> verifyStringWhitelist_ {};
        // The timeout period of waiting for the monitoring to complete.
        shared_ptr<int64_t> waitCompletionTime_ {};
      };

      class MonitorList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const MonitorList& obj) { 
          DARABONBA_PTR_TO_JSON(CityCode, cityCode_);
          DARABONBA_PTR_TO_JSON(MonitorType, monitorType_);
          DARABONBA_PTR_TO_JSON(NetServiceId, netServiceId_);
          DARABONBA_PTR_TO_JSON(SendCount, sendCount_);
        };
        friend void from_json(const Darabonba::Json& j, MonitorList& obj) { 
          DARABONBA_PTR_FROM_JSON(CityCode, cityCode_);
          DARABONBA_PTR_FROM_JSON(MonitorType, monitorType_);
          DARABONBA_PTR_FROM_JSON(NetServiceId, netServiceId_);
          DARABONBA_PTR_FROM_JSON(SendCount, sendCount_);
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
        && this->monitorType_ == nullptr && this->netServiceId_ == nullptr && this->sendCount_ == nullptr; };
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


        // sendCount Field Functions 
        bool hasSendCount() const { return this->sendCount_ != nullptr;};
        void deleteSendCount() { this->sendCount_ = nullptr;};
        inline int64_t getSendCount() const { DARABONBA_PTR_GET_DEFAULT(sendCount_, 0L) };
        inline MonitorList& setSendCount(int64_t sendCount) { DARABONBA_PTR_SET_VALUE(sendCount_, sendCount) };


      protected:
        // The city code.
        shared_ptr<int64_t> cityCode_ {};
        // The type of the detection point.
        shared_ptr<int64_t> monitorType_ {};
        // The ID of the network service.
        shared_ptr<int64_t> netServiceId_ {};
        // The number of times that the system sends detection requests.
        shared_ptr<int64_t> sendCount_ {};
      };

      class ExtendInterval : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ExtendInterval& obj) { 
          DARABONBA_PTR_TO_JSON(Days, days_);
          DARABONBA_PTR_TO_JSON(EndMinute, endMinute_);
          DARABONBA_PTR_TO_JSON(EndTime, endTime_);
          DARABONBA_PTR_TO_JSON(Endhour, endhour_);
          DARABONBA_PTR_TO_JSON(StartHour, startHour_);
          DARABONBA_PTR_TO_JSON(StartMinute, startMinute_);
          DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        };
        friend void from_json(const Darabonba::Json& j, ExtendInterval& obj) { 
          DARABONBA_PTR_FROM_JSON(Days, days_);
          DARABONBA_PTR_FROM_JSON(EndMinute, endMinute_);
          DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
          DARABONBA_PTR_FROM_JSON(Endhour, endhour_);
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
        && this->endMinute_ == nullptr && this->endTime_ == nullptr && this->endhour_ == nullptr && this->startHour_ == nullptr && this->startMinute_ == nullptr
        && this->startTime_ == nullptr; };
        // days Field Functions 
        bool hasDays() const { return this->days_ != nullptr;};
        void deleteDays() { this->days_ = nullptr;};
        inline const vector<int64_t> & getDays() const { DARABONBA_PTR_GET_CONST(days_, vector<int64_t>) };
        inline vector<int64_t> getDays() { DARABONBA_PTR_GET(days_, vector<int64_t>) };
        inline ExtendInterval& setDays(const vector<int64_t> & days) { DARABONBA_PTR_SET_VALUE(days_, days) };
        inline ExtendInterval& setDays(vector<int64_t> && days) { DARABONBA_PTR_SET_RVALUE(days_, days) };


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


        // endhour Field Functions 
        bool hasEndhour() const { return this->endhour_ != nullptr;};
        void deleteEndhour() { this->endhour_ = nullptr;};
        inline int64_t getEndhour() const { DARABONBA_PTR_GET_DEFAULT(endhour_, 0L) };
        inline ExtendInterval& setEndhour(int64_t endhour) { DARABONBA_PTR_SET_VALUE(endhour_, endhour) };


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
        // The day on which synthetic monitoring is performed. Valid values:
        // 
        // *   \\-1: every day
        // *   0: Sunday
        // *   1: Monday
        // *   2: Tuesday
        // *   3: Wednesday
        // *   4: Thursday
        // *   5: Friday
        // *   6: Saturday
        shared_ptr<vector<int64_t>> days_ {};
        // The minute at which synthetic monitoring ends.
        shared_ptr<int64_t> endMinute_ {};
        // The time when synthetic monitoring ends. Format: `yyyy-MM-dd HH`.
        shared_ptr<string> endTime_ {};
        // The hour at which synthetic monitoring ends.
        shared_ptr<int64_t> endhour_ {};
        // The hour at which synthetic monitoring starts.
        shared_ptr<int64_t> startHour_ {};
        // The minute at which synthetic monitoring starts.
        shared_ptr<int64_t> startMinute_ {};
        // The time when synthetic monitoring starts. Format: yyyy-MM-dd HH.
        shared_ptr<string> startTime_ {};
      };

      class Download : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Download& obj) { 
          DARABONBA_PTR_TO_JSON(ConnectionTimeout, connectionTimeout_);
          DARABONBA_PTR_TO_JSON(DownloadCustomHeaderContent, downloadCustomHeaderContent_);
          DARABONBA_PTR_TO_JSON(DownloadCustomHost, downloadCustomHost_);
          DARABONBA_PTR_TO_JSON(DownloadCustomHostIp, downloadCustomHostIp_);
          DARABONBA_PTR_TO_JSON(DownloadKernel, downloadKernel_);
          DARABONBA_PTR_TO_JSON(DownloadRedirect, downloadRedirect_);
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
          DARABONBA_PTR_FROM_JSON(DownloadKernel, downloadKernel_);
          DARABONBA_PTR_FROM_JSON(DownloadRedirect, downloadRedirect_);
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
        && this->downloadCustomHeaderContent_ == nullptr && this->downloadCustomHost_ == nullptr && this->downloadCustomHostIp_ == nullptr && this->downloadKernel_ == nullptr && this->downloadRedirect_ == nullptr
        && this->downloadTransmissionSize_ == nullptr && this->monitorTimeout_ == nullptr && this->quickProtocol_ == nullptr && this->validateKeywords_ == nullptr && this->verifyWay_ == nullptr
        && this->whiteList_ == nullptr; };
        // connectionTimeout Field Functions 
        bool hasConnectionTimeout() const { return this->connectionTimeout_ != nullptr;};
        void deleteConnectionTimeout() { this->connectionTimeout_ = nullptr;};
        inline int64_t getConnectionTimeout() const { DARABONBA_PTR_GET_DEFAULT(connectionTimeout_, 0L) };
        inline Download& setConnectionTimeout(int64_t connectionTimeout) { DARABONBA_PTR_SET_VALUE(connectionTimeout_, connectionTimeout) };


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


        // downloadKernel Field Functions 
        bool hasDownloadKernel() const { return this->downloadKernel_ != nullptr;};
        void deleteDownloadKernel() { this->downloadKernel_ = nullptr;};
        inline int64_t getDownloadKernel() const { DARABONBA_PTR_GET_DEFAULT(downloadKernel_, 0L) };
        inline Download& setDownloadKernel(int64_t downloadKernel) { DARABONBA_PTR_SET_VALUE(downloadKernel_, downloadKernel) };


        // downloadRedirect Field Functions 
        bool hasDownloadRedirect() const { return this->downloadRedirect_ != nullptr;};
        void deleteDownloadRedirect() { this->downloadRedirect_ = nullptr;};
        inline int64_t getDownloadRedirect() const { DARABONBA_PTR_GET_DEFAULT(downloadRedirect_, 0L) };
        inline Download& setDownloadRedirect(int64_t downloadRedirect) { DARABONBA_PTR_SET_VALUE(downloadRedirect_, downloadRedirect) };


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
        // The timeout period of the file download task.
        shared_ptr<int64_t> connectionTimeout_ {};
        // The items to be ignored in a certificate error. Multiple values are concatenated with vertical bars (|).
        shared_ptr<string> downloadCustomHeaderContent_ {};
        // The custom host. Valid values:
        // 
        // *   1: round robin
        // *   0: random
        shared_ptr<int64_t> downloadCustomHost_ {};
        // The custom IP address of the host. Multiple IP addresses are separated with commas (,).
        shared_ptr<string> downloadCustomHostIp_ {};
        // The kernel type. Valid values:
        // 
        // *   1: curl
        // *   0: WinInet
        shared_ptr<int64_t> downloadKernel_ {};
        // Indicates whether redirection is supported.
        shared_ptr<int64_t> downloadRedirect_ {};
        // The file size. Unit: KB.
        shared_ptr<int64_t> downloadTransmissionSize_ {};
        // The monitoring duration.
        shared_ptr<int64_t> monitorTimeout_ {};
        // The QUIC protocol type. Valid values:
        // 
        // *   1: HTTP/1
        // *   2: HTTP/2
        // *   3: http3
        shared_ptr<string> quickProtocol_ {};
        // The keyword that is used in verification.
        shared_ptr<string> validateKeywords_ {};
        // The method that is used to verify the response content. Valid values:
        // 
        // *   0: no verification.
        // *   1: exact match with the verification string.
        // *   2: partial match with the verification string.
        // *   3: MD5 verification.
        shared_ptr<int64_t> verifyWay_ {};
        // The whitelisted objects that are used to avoid DNS hijacking. Format: `<domain name>:<objects>`.
        // 
        // >  WAP networks do not support hijacking.
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
            DARABONBA_PTR_TO_JSON(GeneralAlert, generalAlert_);
            DARABONBA_PTR_TO_JSON(IsCritical, isCritical_);
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(SeriousAlert, seriousAlert_);
            DARABONBA_PTR_TO_JSON(Symbols, symbols_);
          };
          friend void from_json(const Darabonba::Json& j, AlertList& obj) { 
            DARABONBA_PTR_FROM_JSON(GeneralAlert, generalAlert_);
            DARABONBA_PTR_FROM_JSON(IsCritical, isCritical_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(SeriousAlert, seriousAlert_);
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
          virtual bool empty() const override { return this->generalAlert_ == nullptr
        && this->isCritical_ == nullptr && this->name_ == nullptr && this->seriousAlert_ == nullptr && this->symbols_ == nullptr; };
          // generalAlert Field Functions 
          bool hasGeneralAlert() const { return this->generalAlert_ != nullptr;};
          void deleteGeneralAlert() { this->generalAlert_ = nullptr;};
          inline string getGeneralAlert() const { DARABONBA_PTR_GET_DEFAULT(generalAlert_, "") };
          inline AlertList& setGeneralAlert(string generalAlert) { DARABONBA_PTR_SET_VALUE(generalAlert_, generalAlert) };


          // isCritical Field Functions 
          bool hasIsCritical() const { return this->isCritical_ != nullptr;};
          void deleteIsCritical() { this->isCritical_ = nullptr;};
          inline string getIsCritical() const { DARABONBA_PTR_GET_DEFAULT(isCritical_, "") };
          inline AlertList& setIsCritical(string isCritical) { DARABONBA_PTR_SET_VALUE(isCritical_, isCritical) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline AlertList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // seriousAlert Field Functions 
          bool hasSeriousAlert() const { return this->seriousAlert_ != nullptr;};
          void deleteSeriousAlert() { this->seriousAlert_ = nullptr;};
          inline string getSeriousAlert() const { DARABONBA_PTR_GET_DEFAULT(seriousAlert_, "") };
          inline AlertList& setSeriousAlert(string seriousAlert) { DARABONBA_PTR_SET_VALUE(seriousAlert_, seriousAlert) };


          // symbols Field Functions 
          bool hasSymbols() const { return this->symbols_ != nullptr;};
          void deleteSymbols() { this->symbols_ = nullptr;};
          inline string getSymbols() const { DARABONBA_PTR_GET_DEFAULT(symbols_, "") };
          inline AlertList& setSymbols(string symbols) { DARABONBA_PTR_SET_VALUE(symbols_, symbols) };


        protected:
          // The low-risk alert.
          shared_ptr<string> generalAlert_ {};
          // Indicates whether the condition is essential.
          shared_ptr<string> isCritical_ {};
          // The alert name.
          shared_ptr<string> name_ {};
          // The Critical-level alert.
          shared_ptr<string> seriousAlert_ {};
          // Greater than or less than.
          shared_ptr<string> symbols_ {};
        };

        virtual bool empty() const override { return this->alarmFlag_ == nullptr
        && this->alertList_ == nullptr && this->alertNotifierId_ == nullptr && this->alertPolicyId_ == nullptr && this->monitorSamples_ == nullptr && this->startExecutionTime_ == nullptr; };
        // alarmFlag Field Functions 
        bool hasAlarmFlag() const { return this->alarmFlag_ != nullptr;};
        void deleteAlarmFlag() { this->alarmFlag_ = nullptr;};
        inline int64_t getAlarmFlag() const { DARABONBA_PTR_GET_DEFAULT(alarmFlag_, 0L) };
        inline CommonParam& setAlarmFlag(int64_t alarmFlag) { DARABONBA_PTR_SET_VALUE(alarmFlag_, alarmFlag) };


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
        inline string getMonitorSamples() const { DARABONBA_PTR_GET_DEFAULT(monitorSamples_, "") };
        inline CommonParam& setMonitorSamples(string monitorSamples) { DARABONBA_PTR_SET_VALUE(monitorSamples_, monitorSamples) };


        // startExecutionTime Field Functions 
        bool hasStartExecutionTime() const { return this->startExecutionTime_ != nullptr;};
        void deleteStartExecutionTime() { this->startExecutionTime_ = nullptr;};
        inline string getStartExecutionTime() const { DARABONBA_PTR_GET_DEFAULT(startExecutionTime_, "") };
        inline CommonParam& setStartExecutionTime(string startExecutionTime) { DARABONBA_PTR_SET_VALUE(startExecutionTime_, startExecutionTime) };


      protected:
        // The identifier of the alert.
        shared_ptr<int64_t> alarmFlag_ {};
        // The list of alerts.
        shared_ptr<vector<CommonParam::AlertList>> alertList_ {};
        // The ID of the alert identifier.
        shared_ptr<string> alertNotifierId_ {};
        // The ID of the alert policy.
        shared_ptr<string> alertPolicyId_ {};
        // The monitoring samples.
        shared_ptr<string> monitorSamples_ {};
        // The start time of the execution.
        shared_ptr<string> startExecutionTime_ {};
      };

      virtual bool empty() const override { return this->commonParam_ == nullptr
        && this->download_ == nullptr && this->extendInterval_ == nullptr && this->intervalTime_ == nullptr && this->intervalType_ == nullptr && this->ipType_ == nullptr
        && this->monitorList_ == nullptr && this->monitorListString_ == nullptr && this->nav_ == nullptr && this->net_ == nullptr && this->protocol_ == nullptr
        && this->taskId_ == nullptr && this->taskName_ == nullptr && this->taskType_ == nullptr && this->url_ == nullptr; };
      // commonParam Field Functions 
      bool hasCommonParam() const { return this->commonParam_ != nullptr;};
      void deleteCommonParam() { this->commonParam_ = nullptr;};
      inline const TaskDetail::CommonParam & getCommonParam() const { DARABONBA_PTR_GET_CONST(commonParam_, TaskDetail::CommonParam) };
      inline TaskDetail::CommonParam getCommonParam() { DARABONBA_PTR_GET(commonParam_, TaskDetail::CommonParam) };
      inline TaskDetail& setCommonParam(const TaskDetail::CommonParam & commonParam) { DARABONBA_PTR_SET_VALUE(commonParam_, commonParam) };
      inline TaskDetail& setCommonParam(TaskDetail::CommonParam && commonParam) { DARABONBA_PTR_SET_RVALUE(commonParam_, commonParam) };


      // download Field Functions 
      bool hasDownload() const { return this->download_ != nullptr;};
      void deleteDownload() { this->download_ = nullptr;};
      inline const TaskDetail::Download & getDownload() const { DARABONBA_PTR_GET_CONST(download_, TaskDetail::Download) };
      inline TaskDetail::Download getDownload() { DARABONBA_PTR_GET(download_, TaskDetail::Download) };
      inline TaskDetail& setDownload(const TaskDetail::Download & download) { DARABONBA_PTR_SET_VALUE(download_, download) };
      inline TaskDetail& setDownload(TaskDetail::Download && download) { DARABONBA_PTR_SET_RVALUE(download_, download) };


      // extendInterval Field Functions 
      bool hasExtendInterval() const { return this->extendInterval_ != nullptr;};
      void deleteExtendInterval() { this->extendInterval_ = nullptr;};
      inline const TaskDetail::ExtendInterval & getExtendInterval() const { DARABONBA_PTR_GET_CONST(extendInterval_, TaskDetail::ExtendInterval) };
      inline TaskDetail::ExtendInterval getExtendInterval() { DARABONBA_PTR_GET(extendInterval_, TaskDetail::ExtendInterval) };
      inline TaskDetail& setExtendInterval(const TaskDetail::ExtendInterval & extendInterval) { DARABONBA_PTR_SET_VALUE(extendInterval_, extendInterval) };
      inline TaskDetail& setExtendInterval(TaskDetail::ExtendInterval && extendInterval) { DARABONBA_PTR_SET_RVALUE(extendInterval_, extendInterval) };


      // intervalTime Field Functions 
      bool hasIntervalTime() const { return this->intervalTime_ != nullptr;};
      void deleteIntervalTime() { this->intervalTime_ = nullptr;};
      inline int64_t getIntervalTime() const { DARABONBA_PTR_GET_DEFAULT(intervalTime_, 0L) };
      inline TaskDetail& setIntervalTime(int64_t intervalTime) { DARABONBA_PTR_SET_VALUE(intervalTime_, intervalTime) };


      // intervalType Field Functions 
      bool hasIntervalType() const { return this->intervalType_ != nullptr;};
      void deleteIntervalType() { this->intervalType_ = nullptr;};
      inline int64_t getIntervalType() const { DARABONBA_PTR_GET_DEFAULT(intervalType_, 0L) };
      inline TaskDetail& setIntervalType(int64_t intervalType) { DARABONBA_PTR_SET_VALUE(intervalType_, intervalType) };


      // ipType Field Functions 
      bool hasIpType() const { return this->ipType_ != nullptr;};
      void deleteIpType() { this->ipType_ = nullptr;};
      inline int64_t getIpType() const { DARABONBA_PTR_GET_DEFAULT(ipType_, 0L) };
      inline TaskDetail& setIpType(int64_t ipType) { DARABONBA_PTR_SET_VALUE(ipType_, ipType) };


      // monitorList Field Functions 
      bool hasMonitorList() const { return this->monitorList_ != nullptr;};
      void deleteMonitorList() { this->monitorList_ = nullptr;};
      inline const vector<TaskDetail::MonitorList> & getMonitorList() const { DARABONBA_PTR_GET_CONST(monitorList_, vector<TaskDetail::MonitorList>) };
      inline vector<TaskDetail::MonitorList> getMonitorList() { DARABONBA_PTR_GET(monitorList_, vector<TaskDetail::MonitorList>) };
      inline TaskDetail& setMonitorList(const vector<TaskDetail::MonitorList> & monitorList) { DARABONBA_PTR_SET_VALUE(monitorList_, monitorList) };
      inline TaskDetail& setMonitorList(vector<TaskDetail::MonitorList> && monitorList) { DARABONBA_PTR_SET_RVALUE(monitorList_, monitorList) };


      // monitorListString Field Functions 
      bool hasMonitorListString() const { return this->monitorListString_ != nullptr;};
      void deleteMonitorListString() { this->monitorListString_ = nullptr;};
      inline string getMonitorListString() const { DARABONBA_PTR_GET_DEFAULT(monitorListString_, "") };
      inline TaskDetail& setMonitorListString(string monitorListString) { DARABONBA_PTR_SET_VALUE(monitorListString_, monitorListString) };


      // nav Field Functions 
      bool hasNav() const { return this->nav_ != nullptr;};
      void deleteNav() { this->nav_ = nullptr;};
      inline const TaskDetail::Nav & getNav() const { DARABONBA_PTR_GET_CONST(nav_, TaskDetail::Nav) };
      inline TaskDetail::Nav getNav() { DARABONBA_PTR_GET(nav_, TaskDetail::Nav) };
      inline TaskDetail& setNav(const TaskDetail::Nav & nav) { DARABONBA_PTR_SET_VALUE(nav_, nav) };
      inline TaskDetail& setNav(TaskDetail::Nav && nav) { DARABONBA_PTR_SET_RVALUE(nav_, nav) };


      // net Field Functions 
      bool hasNet() const { return this->net_ != nullptr;};
      void deleteNet() { this->net_ = nullptr;};
      inline const TaskDetail::Net & getNet() const { DARABONBA_PTR_GET_CONST(net_, TaskDetail::Net) };
      inline TaskDetail::Net getNet() { DARABONBA_PTR_GET(net_, TaskDetail::Net) };
      inline TaskDetail& setNet(const TaskDetail::Net & net) { DARABONBA_PTR_SET_VALUE(net_, net) };
      inline TaskDetail& setNet(TaskDetail::Net && net) { DARABONBA_PTR_SET_RVALUE(net_, net) };


      // protocol Field Functions 
      bool hasProtocol() const { return this->protocol_ != nullptr;};
      void deleteProtocol() { this->protocol_ = nullptr;};
      inline const TaskDetail::Protocol & getProtocol() const { DARABONBA_PTR_GET_CONST(protocol_, TaskDetail::Protocol) };
      inline TaskDetail::Protocol getProtocol() { DARABONBA_PTR_GET(protocol_, TaskDetail::Protocol) };
      inline TaskDetail& setProtocol(const TaskDetail::Protocol & protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };
      inline TaskDetail& setProtocol(TaskDetail::Protocol && protocol) { DARABONBA_PTR_SET_RVALUE(protocol_, protocol) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline int64_t getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0L) };
      inline TaskDetail& setTaskId(int64_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


      // taskName Field Functions 
      bool hasTaskName() const { return this->taskName_ != nullptr;};
      void deleteTaskName() { this->taskName_ = nullptr;};
      inline string getTaskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
      inline TaskDetail& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


      // taskType Field Functions 
      bool hasTaskType() const { return this->taskType_ != nullptr;};
      void deleteTaskType() { this->taskType_ = nullptr;};
      inline int64_t getTaskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, 0L) };
      inline TaskDetail& setTaskType(int64_t taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


      // url Field Functions 
      bool hasUrl() const { return this->url_ != nullptr;};
      void deleteUrl() { this->url_ = nullptr;};
      inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
      inline TaskDetail& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


    protected:
      // The list of common parameters.
      shared_ptr<TaskDetail::CommonParam> commonParam_ {};
      // The file download task.
      shared_ptr<TaskDetail::Download> download_ {};
      // The frequency.
      shared_ptr<TaskDetail::ExtendInterval> extendInterval_ {};
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
      shared_ptr<int64_t> intervalTime_ {};
      // The interval type. Valid values:
      // 
      // *   0: daily
      // *   1: custom frequency
      shared_ptr<int64_t> intervalType_ {};
      // The IP version. Valid values:
      // 
      // *   0: A version is automatically selected.
      // *   1: IPv4.
      // *   2: IPv6.
      shared_ptr<int64_t> ipType_ {};
      // The detection points.
      shared_ptr<vector<TaskDetail::MonitorList>> monitorList_ {};
      // The detection points.
      shared_ptr<string> monitorListString_ {};
      // The browser test task.
      shared_ptr<TaskDetail::Nav> nav_ {};
      // The network synthetic monitoring task.
      shared_ptr<TaskDetail::Net> net_ {};
      // The synthetic monitoring task of the API performance type.
      shared_ptr<TaskDetail::Protocol> protocol_ {};
      // The ID of the synthetic monitoring task.
      shared_ptr<int64_t> taskId_ {};
      // The name of the task.
      shared_ptr<string> taskName_ {};
      // The type of the task. Valid values:
      // 
      // 1.  3: web page performance - IE
      // 2.  34: web page performance - Chrome
      // 3.  0: network quality
      // 4.  40: file download
      // 5.  7: API performance
      shared_ptr<int64_t> taskType_ {};
      // The URL for synthetic monitoring.
      shared_ptr<string> url_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->taskDetail_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSyntheticTaskDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // taskDetail Field Functions 
    bool hasTaskDetail() const { return this->taskDetail_ != nullptr;};
    void deleteTaskDetail() { this->taskDetail_ = nullptr;};
    inline const GetSyntheticTaskDetailResponseBody::TaskDetail & getTaskDetail() const { DARABONBA_PTR_GET_CONST(taskDetail_, GetSyntheticTaskDetailResponseBody::TaskDetail) };
    inline GetSyntheticTaskDetailResponseBody::TaskDetail getTaskDetail() { DARABONBA_PTR_GET(taskDetail_, GetSyntheticTaskDetailResponseBody::TaskDetail) };
    inline GetSyntheticTaskDetailResponseBody& setTaskDetail(const GetSyntheticTaskDetailResponseBody::TaskDetail & taskDetail) { DARABONBA_PTR_SET_VALUE(taskDetail_, taskDetail) };
    inline GetSyntheticTaskDetailResponseBody& setTaskDetail(GetSyntheticTaskDetailResponseBody::TaskDetail && taskDetail) { DARABONBA_PTR_SET_RVALUE(taskDetail_, taskDetail) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The details of the task.
    shared_ptr<GetSyntheticTaskDetailResponseBody::TaskDetail> taskDetail_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
