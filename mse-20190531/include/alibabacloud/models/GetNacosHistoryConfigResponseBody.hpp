// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETNACOSHISTORYCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETNACOSHISTORYCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class GetNacosHistoryConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetNacosHistoryConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Configuration, configuration_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetNacosHistoryConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Configuration, configuration_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetNacosHistoryConfigResponseBody() = default ;
    GetNacosHistoryConfigResponseBody(const GetNacosHistoryConfigResponseBody &) = default ;
    GetNacosHistoryConfigResponseBody(GetNacosHistoryConfigResponseBody &&) = default ;
    GetNacosHistoryConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetNacosHistoryConfigResponseBody() = default ;
    GetNacosHistoryConfigResponseBody& operator=(const GetNacosHistoryConfigResponseBody &) = default ;
    GetNacosHistoryConfigResponseBody& operator=(GetNacosHistoryConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Configuration : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Configuration& obj) { 
        DARABONBA_PTR_TO_JSON(AppName, appName_);
        DARABONBA_PTR_TO_JSON(Content, content_);
        DARABONBA_PTR_TO_JSON(DataId, dataId_);
        DARABONBA_PTR_TO_JSON(EncryptedDataKey, encryptedDataKey_);
        DARABONBA_PTR_TO_JSON(Group, group_);
        DARABONBA_PTR_TO_JSON(Md5, md5_);
        DARABONBA_PTR_TO_JSON(OpType, opType_);
      };
      friend void from_json(const Darabonba::Json& j, Configuration& obj) { 
        DARABONBA_PTR_FROM_JSON(AppName, appName_);
        DARABONBA_PTR_FROM_JSON(Content, content_);
        DARABONBA_PTR_FROM_JSON(DataId, dataId_);
        DARABONBA_PTR_FROM_JSON(EncryptedDataKey, encryptedDataKey_);
        DARABONBA_PTR_FROM_JSON(Group, group_);
        DARABONBA_PTR_FROM_JSON(Md5, md5_);
        DARABONBA_PTR_FROM_JSON(OpType, opType_);
      };
      Configuration() = default ;
      Configuration(const Configuration &) = default ;
      Configuration(Configuration &&) = default ;
      Configuration(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Configuration() = default ;
      Configuration& operator=(const Configuration &) = default ;
      Configuration& operator=(Configuration &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->appName_ == nullptr
        && this->content_ == nullptr && this->dataId_ == nullptr && this->encryptedDataKey_ == nullptr && this->group_ == nullptr && this->md5_ == nullptr
        && this->opType_ == nullptr; };
      // appName Field Functions 
      bool hasAppName() const { return this->appName_ != nullptr;};
      void deleteAppName() { this->appName_ = nullptr;};
      inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
      inline Configuration& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


      // content Field Functions 
      bool hasContent() const { return this->content_ != nullptr;};
      void deleteContent() { this->content_ = nullptr;};
      inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
      inline Configuration& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


      // dataId Field Functions 
      bool hasDataId() const { return this->dataId_ != nullptr;};
      void deleteDataId() { this->dataId_ = nullptr;};
      inline string getDataId() const { DARABONBA_PTR_GET_DEFAULT(dataId_, "") };
      inline Configuration& setDataId(string dataId) { DARABONBA_PTR_SET_VALUE(dataId_, dataId) };


      // encryptedDataKey Field Functions 
      bool hasEncryptedDataKey() const { return this->encryptedDataKey_ != nullptr;};
      void deleteEncryptedDataKey() { this->encryptedDataKey_ = nullptr;};
      inline string getEncryptedDataKey() const { DARABONBA_PTR_GET_DEFAULT(encryptedDataKey_, "") };
      inline Configuration& setEncryptedDataKey(string encryptedDataKey) { DARABONBA_PTR_SET_VALUE(encryptedDataKey_, encryptedDataKey) };


      // group Field Functions 
      bool hasGroup() const { return this->group_ != nullptr;};
      void deleteGroup() { this->group_ = nullptr;};
      inline string getGroup() const { DARABONBA_PTR_GET_DEFAULT(group_, "") };
      inline Configuration& setGroup(string group) { DARABONBA_PTR_SET_VALUE(group_, group) };


      // md5 Field Functions 
      bool hasMd5() const { return this->md5_ != nullptr;};
      void deleteMd5() { this->md5_ = nullptr;};
      inline string getMd5() const { DARABONBA_PTR_GET_DEFAULT(md5_, "") };
      inline Configuration& setMd5(string md5) { DARABONBA_PTR_SET_VALUE(md5_, md5) };


      // opType Field Functions 
      bool hasOpType() const { return this->opType_ != nullptr;};
      void deleteOpType() { this->opType_ = nullptr;};
      inline string getOpType() const { DARABONBA_PTR_GET_DEFAULT(opType_, "") };
      inline Configuration& setOpType(string opType) { DARABONBA_PTR_SET_VALUE(opType_, opType) };


    protected:
      // The name of the application.
      shared_ptr<string> appName_ {};
      // The content of the configuration.
      shared_ptr<string> content_ {};
      // The ID of the configuration.
      shared_ptr<string> dataId_ {};
      // The encryption key.
      shared_ptr<string> encryptedDataKey_ {};
      // The name of the configuration group.
      shared_ptr<string> group_ {};
      // The MD5 value of the configuration.
      shared_ptr<string> md5_ {};
      // The configuration type.
      shared_ptr<string> opType_ {};
    };

    virtual bool empty() const override { return this->configuration_ == nullptr
        && this->errorCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // configuration Field Functions 
    bool hasConfiguration() const { return this->configuration_ != nullptr;};
    void deleteConfiguration() { this->configuration_ = nullptr;};
    inline const GetNacosHistoryConfigResponseBody::Configuration & getConfiguration() const { DARABONBA_PTR_GET_CONST(configuration_, GetNacosHistoryConfigResponseBody::Configuration) };
    inline GetNacosHistoryConfigResponseBody::Configuration getConfiguration() { DARABONBA_PTR_GET(configuration_, GetNacosHistoryConfigResponseBody::Configuration) };
    inline GetNacosHistoryConfigResponseBody& setConfiguration(const GetNacosHistoryConfigResponseBody::Configuration & configuration) { DARABONBA_PTR_SET_VALUE(configuration_, configuration) };
    inline GetNacosHistoryConfigResponseBody& setConfiguration(GetNacosHistoryConfigResponseBody::Configuration && configuration) { DARABONBA_PTR_SET_RVALUE(configuration_, configuration) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetNacosHistoryConfigResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetNacosHistoryConfigResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetNacosHistoryConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetNacosHistoryConfigResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The configuration information.
    shared_ptr<GetNacosHistoryConfigResponseBody::Configuration> configuration_ {};
    // The error code returned if the request failed.
    shared_ptr<string> errorCode_ {};
    // The message returned.
    shared_ptr<string> message_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   `true`: The request was successful.
    // *   `false`: The request failed.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
