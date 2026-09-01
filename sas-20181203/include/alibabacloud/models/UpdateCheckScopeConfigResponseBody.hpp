// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECHECKSCOPECONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATECHECKSCOPECONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class UpdateCheckScopeConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateCheckScopeConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateCheckScopeConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    UpdateCheckScopeConfigResponseBody() = default ;
    UpdateCheckScopeConfigResponseBody(const UpdateCheckScopeConfigResponseBody &) = default ;
    UpdateCheckScopeConfigResponseBody(UpdateCheckScopeConfigResponseBody &&) = default ;
    UpdateCheckScopeConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateCheckScopeConfigResponseBody() = default ;
    UpdateCheckScopeConfigResponseBody& operator=(const UpdateCheckScopeConfigResponseBody &) = default ;
    UpdateCheckScopeConfigResponseBody& operator=(UpdateCheckScopeConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AutoConfig, autoConfig_);
        DARABONBA_PTR_TO_JSON(AutoType, autoType_);
        DARABONBA_PTR_TO_JSON(ConfigId, configId_);
        DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AutoConfig, autoConfig_);
        DARABONBA_PTR_FROM_JSON(AutoType, autoType_);
        DARABONBA_PTR_FROM_JSON(ConfigId, configId_);
        DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
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
      virtual bool empty() const override { return this->autoConfig_ == nullptr
        && this->autoType_ == nullptr && this->configId_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->type_ == nullptr; };
      // autoConfig Field Functions 
      bool hasAutoConfig() const { return this->autoConfig_ != nullptr;};
      void deleteAutoConfig() { this->autoConfig_ = nullptr;};
      inline string getAutoConfig() const { DARABONBA_PTR_GET_DEFAULT(autoConfig_, "") };
      inline Data& setAutoConfig(string autoConfig) { DARABONBA_PTR_SET_VALUE(autoConfig_, autoConfig) };


      // autoType Field Functions 
      bool hasAutoType() const { return this->autoType_ != nullptr;};
      void deleteAutoType() { this->autoType_ = nullptr;};
      inline int32_t getAutoType() const { DARABONBA_PTR_GET_DEFAULT(autoType_, 0) };
      inline Data& setAutoType(int32_t autoType) { DARABONBA_PTR_SET_VALUE(autoType_, autoType) };


      // configId Field Functions 
      bool hasConfigId() const { return this->configId_ != nullptr;};
      void deleteConfigId() { this->configId_ = nullptr;};
      inline string getConfigId() const { DARABONBA_PTR_GET_DEFAULT(configId_, "") };
      inline Data& setConfigId(string configId) { DARABONBA_PTR_SET_VALUE(configId_, configId) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
      inline Data& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
      inline Data& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline int32_t getType() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
      inline Data& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The automatic scan configuration as a JSON string. The following fields are included:
      // 
      // - **autoInclude**: specifies whether to enable automatic scan. Valid values: **true**: enabled. **false**: disabled.
      // - **autoRule**: the enablement configuration.
      // - **ruleOperator**: the enablement configuration rule. Set the value to **include**.
      // - **operator**: the logical operator. Set the value to **or**.
      // - **rule**: the rule.
      // - **condition**: the rule condition. Valid values: **vendor**: vendor. **assetType**: level-1 asset type. **assetSubType**: level-2 asset type.
      // > For more information, refer to the [GetCloudAssetCriteria](~~GetCloudAssetCriteria~~) operation.
      shared_ptr<string> autoConfig_ {};
      // The automatic scan configuration type. Valid values:
      // - **0**: disable automatic scan
      // - **1**: automatically scan newly added cloud assets
      shared_ptr<int32_t> autoType_ {};
      // The ID of the configuration.
      shared_ptr<string> configId_ {};
      // The creation time.
      shared_ptr<string> gmtCreate_ {};
      // The modification time.
      shared_ptr<string> gmtModified_ {};
      // The scan scope configuration type. Valid values:
      // - **1**: scan by instance
      // - **3**: scan all
      shared_ptr<int32_t> type_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline UpdateCheckScopeConfigResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const UpdateCheckScopeConfigResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, UpdateCheckScopeConfigResponseBody::Data) };
    inline UpdateCheckScopeConfigResponseBody::Data getData() { DARABONBA_PTR_GET(data_, UpdateCheckScopeConfigResponseBody::Data) };
    inline UpdateCheckScopeConfigResponseBody& setData(const UpdateCheckScopeConfigResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline UpdateCheckScopeConfigResponseBody& setData(UpdateCheckScopeConfigResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline UpdateCheckScopeConfigResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateCheckScopeConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline UpdateCheckScopeConfigResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The result code. A value of **200** indicates success. Other values indicate failure. You can use this field to determine the cause of the failure.
    shared_ptr<string> code_ {};
    // The returned data.
    shared_ptr<UpdateCheckScopeConfigResponseBody::Data> data_ {};
    // The response message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // - **true**: The request was successful.
    // - **false**: The request failed.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
