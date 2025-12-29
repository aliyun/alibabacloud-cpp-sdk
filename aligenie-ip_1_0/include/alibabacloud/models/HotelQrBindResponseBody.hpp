// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HOTELQRBINDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_HOTELQRBINDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieip_1_0
{
namespace Models
{
  class HotelQrBindResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HotelQrBindResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(StatusCode, statusCode_);
    };
    friend void from_json(const Darabonba::Json& j, HotelQrBindResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(StatusCode, statusCode_);
    };
    HotelQrBindResponseBody() = default ;
    HotelQrBindResponseBody(const HotelQrBindResponseBody &) = default ;
    HotelQrBindResponseBody(HotelQrBindResponseBody &&) = default ;
    HotelQrBindResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HotelQrBindResponseBody() = default ;
    HotelQrBindResponseBody& operator=(const HotelQrBindResponseBody &) = default ;
    HotelQrBindResponseBody& operator=(HotelQrBindResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(OpenDeviceInfo, openDeviceInfo_);
        DARABONBA_PTR_TO_JSON(OpenUserInfo, openUserInfo_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(OpenDeviceInfo, openDeviceInfo_);
        DARABONBA_PTR_FROM_JSON(OpenUserInfo, openUserInfo_);
      };
      Result() = default ;
      Result(const Result &) = default ;
      Result(Result &&) = default ;
      Result(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Result() = default ;
      Result& operator=(const Result &) = default ;
      Result& operator=(Result &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class OpenUserInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const OpenUserInfo& obj) { 
          DARABONBA_PTR_TO_JSON(EncodeKey, encodeKey_);
          DARABONBA_PTR_TO_JSON(EncodeType, encodeType_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(IdType, idType_);
          DARABONBA_PTR_TO_JSON(OrganizationId, organizationId_);
        };
        friend void from_json(const Darabonba::Json& j, OpenUserInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(EncodeKey, encodeKey_);
          DARABONBA_PTR_FROM_JSON(EncodeType, encodeType_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(IdType, idType_);
          DARABONBA_PTR_FROM_JSON(OrganizationId, organizationId_);
        };
        OpenUserInfo() = default ;
        OpenUserInfo(const OpenUserInfo &) = default ;
        OpenUserInfo(OpenUserInfo &&) = default ;
        OpenUserInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~OpenUserInfo() = default ;
        OpenUserInfo& operator=(const OpenUserInfo &) = default ;
        OpenUserInfo& operator=(OpenUserInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->encodeKey_ == nullptr
        && this->encodeType_ == nullptr && this->id_ == nullptr && this->idType_ == nullptr && this->organizationId_ == nullptr; };
        // encodeKey Field Functions 
        bool hasEncodeKey() const { return this->encodeKey_ != nullptr;};
        void deleteEncodeKey() { this->encodeKey_ = nullptr;};
        inline string getEncodeKey() const { DARABONBA_PTR_GET_DEFAULT(encodeKey_, "") };
        inline OpenUserInfo& setEncodeKey(string encodeKey) { DARABONBA_PTR_SET_VALUE(encodeKey_, encodeKey) };


        // encodeType Field Functions 
        bool hasEncodeType() const { return this->encodeType_ != nullptr;};
        void deleteEncodeType() { this->encodeType_ = nullptr;};
        inline string getEncodeType() const { DARABONBA_PTR_GET_DEFAULT(encodeType_, "") };
        inline OpenUserInfo& setEncodeType(string encodeType) { DARABONBA_PTR_SET_VALUE(encodeType_, encodeType) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline OpenUserInfo& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // idType Field Functions 
        bool hasIdType() const { return this->idType_ != nullptr;};
        void deleteIdType() { this->idType_ = nullptr;};
        inline string getIdType() const { DARABONBA_PTR_GET_DEFAULT(idType_, "") };
        inline OpenUserInfo& setIdType(string idType) { DARABONBA_PTR_SET_VALUE(idType_, idType) };


        // organizationId Field Functions 
        bool hasOrganizationId() const { return this->organizationId_ != nullptr;};
        void deleteOrganizationId() { this->organizationId_ = nullptr;};
        inline string getOrganizationId() const { DARABONBA_PTR_GET_DEFAULT(organizationId_, "") };
        inline OpenUserInfo& setOrganizationId(string organizationId) { DARABONBA_PTR_SET_VALUE(organizationId_, organizationId) };


      protected:
        shared_ptr<string> encodeKey_ {};
        shared_ptr<string> encodeType_ {};
        shared_ptr<string> id_ {};
        shared_ptr<string> idType_ {};
        shared_ptr<string> organizationId_ {};
      };

      class OpenDeviceInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const OpenDeviceInfo& obj) { 
          DARABONBA_PTR_TO_JSON(EncodeKey, encodeKey_);
          DARABONBA_PTR_TO_JSON(EncodeType, encodeType_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(IdType, idType_);
          DARABONBA_PTR_TO_JSON(OrganizationId, organizationId_);
        };
        friend void from_json(const Darabonba::Json& j, OpenDeviceInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(EncodeKey, encodeKey_);
          DARABONBA_PTR_FROM_JSON(EncodeType, encodeType_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(IdType, idType_);
          DARABONBA_PTR_FROM_JSON(OrganizationId, organizationId_);
        };
        OpenDeviceInfo() = default ;
        OpenDeviceInfo(const OpenDeviceInfo &) = default ;
        OpenDeviceInfo(OpenDeviceInfo &&) = default ;
        OpenDeviceInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~OpenDeviceInfo() = default ;
        OpenDeviceInfo& operator=(const OpenDeviceInfo &) = default ;
        OpenDeviceInfo& operator=(OpenDeviceInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->encodeKey_ == nullptr
        && this->encodeType_ == nullptr && this->id_ == nullptr && this->idType_ == nullptr && this->organizationId_ == nullptr; };
        // encodeKey Field Functions 
        bool hasEncodeKey() const { return this->encodeKey_ != nullptr;};
        void deleteEncodeKey() { this->encodeKey_ = nullptr;};
        inline string getEncodeKey() const { DARABONBA_PTR_GET_DEFAULT(encodeKey_, "") };
        inline OpenDeviceInfo& setEncodeKey(string encodeKey) { DARABONBA_PTR_SET_VALUE(encodeKey_, encodeKey) };


        // encodeType Field Functions 
        bool hasEncodeType() const { return this->encodeType_ != nullptr;};
        void deleteEncodeType() { this->encodeType_ = nullptr;};
        inline string getEncodeType() const { DARABONBA_PTR_GET_DEFAULT(encodeType_, "") };
        inline OpenDeviceInfo& setEncodeType(string encodeType) { DARABONBA_PTR_SET_VALUE(encodeType_, encodeType) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline OpenDeviceInfo& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // idType Field Functions 
        bool hasIdType() const { return this->idType_ != nullptr;};
        void deleteIdType() { this->idType_ = nullptr;};
        inline string getIdType() const { DARABONBA_PTR_GET_DEFAULT(idType_, "") };
        inline OpenDeviceInfo& setIdType(string idType) { DARABONBA_PTR_SET_VALUE(idType_, idType) };


        // organizationId Field Functions 
        bool hasOrganizationId() const { return this->organizationId_ != nullptr;};
        void deleteOrganizationId() { this->organizationId_ = nullptr;};
        inline string getOrganizationId() const { DARABONBA_PTR_GET_DEFAULT(organizationId_, "") };
        inline OpenDeviceInfo& setOrganizationId(string organizationId) { DARABONBA_PTR_SET_VALUE(organizationId_, organizationId) };


      protected:
        shared_ptr<string> encodeKey_ {};
        shared_ptr<string> encodeType_ {};
        shared_ptr<string> id_ {};
        shared_ptr<string> idType_ {};
        shared_ptr<string> organizationId_ {};
      };

      virtual bool empty() const override { return this->openDeviceInfo_ == nullptr
        && this->openUserInfo_ == nullptr; };
      // openDeviceInfo Field Functions 
      bool hasOpenDeviceInfo() const { return this->openDeviceInfo_ != nullptr;};
      void deleteOpenDeviceInfo() { this->openDeviceInfo_ = nullptr;};
      inline const Result::OpenDeviceInfo & getOpenDeviceInfo() const { DARABONBA_PTR_GET_CONST(openDeviceInfo_, Result::OpenDeviceInfo) };
      inline Result::OpenDeviceInfo getOpenDeviceInfo() { DARABONBA_PTR_GET(openDeviceInfo_, Result::OpenDeviceInfo) };
      inline Result& setOpenDeviceInfo(const Result::OpenDeviceInfo & openDeviceInfo) { DARABONBA_PTR_SET_VALUE(openDeviceInfo_, openDeviceInfo) };
      inline Result& setOpenDeviceInfo(Result::OpenDeviceInfo && openDeviceInfo) { DARABONBA_PTR_SET_RVALUE(openDeviceInfo_, openDeviceInfo) };


      // openUserInfo Field Functions 
      bool hasOpenUserInfo() const { return this->openUserInfo_ != nullptr;};
      void deleteOpenUserInfo() { this->openUserInfo_ = nullptr;};
      inline const Result::OpenUserInfo & getOpenUserInfo() const { DARABONBA_PTR_GET_CONST(openUserInfo_, Result::OpenUserInfo) };
      inline Result::OpenUserInfo getOpenUserInfo() { DARABONBA_PTR_GET(openUserInfo_, Result::OpenUserInfo) };
      inline Result& setOpenUserInfo(const Result::OpenUserInfo & openUserInfo) { DARABONBA_PTR_SET_VALUE(openUserInfo_, openUserInfo) };
      inline Result& setOpenUserInfo(Result::OpenUserInfo && openUserInfo) { DARABONBA_PTR_SET_RVALUE(openUserInfo_, openUserInfo) };


    protected:
      shared_ptr<Result::OpenDeviceInfo> openDeviceInfo_ {};
      shared_ptr<Result::OpenUserInfo> openUserInfo_ {};
    };

    virtual bool empty() const override { return this->message_ == nullptr
        && this->requestId_ == nullptr && this->result_ == nullptr && this->statusCode_ == nullptr; };
    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline HotelQrBindResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline HotelQrBindResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const HotelQrBindResponseBody::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, HotelQrBindResponseBody::Result) };
    inline HotelQrBindResponseBody::Result getResult() { DARABONBA_PTR_GET(result_, HotelQrBindResponseBody::Result) };
    inline HotelQrBindResponseBody& setResult(const HotelQrBindResponseBody::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline HotelQrBindResponseBody& setResult(HotelQrBindResponseBody::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t getStatusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline HotelQrBindResponseBody& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


  protected:
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<HotelQrBindResponseBody::Result> result_ {};
    shared_ptr<int32_t> statusCode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieip_1_0
#endif
