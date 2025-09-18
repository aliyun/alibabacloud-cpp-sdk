// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMMAPPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMMAPPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeMmAppResponseBodyConversationConfig.hpp>
#include <alibabacloud/models/DescribeMmAppResponseBodyModelConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SfmMultiModalApp20250909
{
namespace Models
{
  class DescribeMmAppResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMmAppResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(ConversationConfig, conversationConfig_);
      DARABONBA_PTR_TO_JSON(CreateUserId, createUserId_);
      DARABONBA_PTR_TO_JSON(CreateUserName, createUserName_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(ModelConfig, modelConfig_);
      DARABONBA_PTR_TO_JSON(ModifyUserId, modifyUserId_);
      DARABONBA_PTR_TO_JSON(ModifyUserName, modifyUserName_);
      DARABONBA_PTR_TO_JSON(Prompt, prompt_);
      DARABONBA_PTR_TO_JSON(PublishVersion, publishVersion_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMmAppResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(ConversationConfig, conversationConfig_);
      DARABONBA_PTR_FROM_JSON(CreateUserId, createUserId_);
      DARABONBA_PTR_FROM_JSON(CreateUserName, createUserName_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(ModelConfig, modelConfig_);
      DARABONBA_PTR_FROM_JSON(ModifyUserId, modifyUserId_);
      DARABONBA_PTR_FROM_JSON(ModifyUserName, modifyUserName_);
      DARABONBA_PTR_FROM_JSON(Prompt, prompt_);
      DARABONBA_PTR_FROM_JSON(PublishVersion, publishVersion_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeMmAppResponseBody() = default ;
    DescribeMmAppResponseBody(const DescribeMmAppResponseBody &) = default ;
    DescribeMmAppResponseBody(DescribeMmAppResponseBody &&) = default ;
    DescribeMmAppResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMmAppResponseBody() = default ;
    DescribeMmAppResponseBody& operator=(const DescribeMmAppResponseBody &) = default ;
    DescribeMmAppResponseBody& operator=(DescribeMmAppResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appId_ != nullptr
        && this->appName_ != nullptr && this->conversationConfig_ != nullptr && this->createUserId_ != nullptr && this->createUserName_ != nullptr && this->gmtCreate_ != nullptr
        && this->gmtModified_ != nullptr && this->modelConfig_ != nullptr && this->modifyUserId_ != nullptr && this->modifyUserName_ != nullptr && this->prompt_ != nullptr
        && this->publishVersion_ != nullptr && this->requestId_ != nullptr && this->status_ != nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline DescribeMmAppResponseBody& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline DescribeMmAppResponseBody& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // conversationConfig Field Functions 
    bool hasConversationConfig() const { return this->conversationConfig_ != nullptr;};
    void deleteConversationConfig() { this->conversationConfig_ = nullptr;};
    inline const DescribeMmAppResponseBodyConversationConfig & conversationConfig() const { DARABONBA_PTR_GET_CONST(conversationConfig_, DescribeMmAppResponseBodyConversationConfig) };
    inline DescribeMmAppResponseBodyConversationConfig conversationConfig() { DARABONBA_PTR_GET(conversationConfig_, DescribeMmAppResponseBodyConversationConfig) };
    inline DescribeMmAppResponseBody& setConversationConfig(const DescribeMmAppResponseBodyConversationConfig & conversationConfig) { DARABONBA_PTR_SET_VALUE(conversationConfig_, conversationConfig) };
    inline DescribeMmAppResponseBody& setConversationConfig(DescribeMmAppResponseBodyConversationConfig && conversationConfig) { DARABONBA_PTR_SET_RVALUE(conversationConfig_, conversationConfig) };


    // createUserId Field Functions 
    bool hasCreateUserId() const { return this->createUserId_ != nullptr;};
    void deleteCreateUserId() { this->createUserId_ = nullptr;};
    inline string createUserId() const { DARABONBA_PTR_GET_DEFAULT(createUserId_, "") };
    inline DescribeMmAppResponseBody& setCreateUserId(string createUserId) { DARABONBA_PTR_SET_VALUE(createUserId_, createUserId) };


    // createUserName Field Functions 
    bool hasCreateUserName() const { return this->createUserName_ != nullptr;};
    void deleteCreateUserName() { this->createUserName_ = nullptr;};
    inline string createUserName() const { DARABONBA_PTR_GET_DEFAULT(createUserName_, "") };
    inline DescribeMmAppResponseBody& setCreateUserName(string createUserName) { DARABONBA_PTR_SET_VALUE(createUserName_, createUserName) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline DescribeMmAppResponseBody& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline DescribeMmAppResponseBody& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // modelConfig Field Functions 
    bool hasModelConfig() const { return this->modelConfig_ != nullptr;};
    void deleteModelConfig() { this->modelConfig_ = nullptr;};
    inline const DescribeMmAppResponseBodyModelConfig & modelConfig() const { DARABONBA_PTR_GET_CONST(modelConfig_, DescribeMmAppResponseBodyModelConfig) };
    inline DescribeMmAppResponseBodyModelConfig modelConfig() { DARABONBA_PTR_GET(modelConfig_, DescribeMmAppResponseBodyModelConfig) };
    inline DescribeMmAppResponseBody& setModelConfig(const DescribeMmAppResponseBodyModelConfig & modelConfig) { DARABONBA_PTR_SET_VALUE(modelConfig_, modelConfig) };
    inline DescribeMmAppResponseBody& setModelConfig(DescribeMmAppResponseBodyModelConfig && modelConfig) { DARABONBA_PTR_SET_RVALUE(modelConfig_, modelConfig) };


    // modifyUserId Field Functions 
    bool hasModifyUserId() const { return this->modifyUserId_ != nullptr;};
    void deleteModifyUserId() { this->modifyUserId_ = nullptr;};
    inline string modifyUserId() const { DARABONBA_PTR_GET_DEFAULT(modifyUserId_, "") };
    inline DescribeMmAppResponseBody& setModifyUserId(string modifyUserId) { DARABONBA_PTR_SET_VALUE(modifyUserId_, modifyUserId) };


    // modifyUserName Field Functions 
    bool hasModifyUserName() const { return this->modifyUserName_ != nullptr;};
    void deleteModifyUserName() { this->modifyUserName_ = nullptr;};
    inline string modifyUserName() const { DARABONBA_PTR_GET_DEFAULT(modifyUserName_, "") };
    inline DescribeMmAppResponseBody& setModifyUserName(string modifyUserName) { DARABONBA_PTR_SET_VALUE(modifyUserName_, modifyUserName) };


    // prompt Field Functions 
    bool hasPrompt() const { return this->prompt_ != nullptr;};
    void deletePrompt() { this->prompt_ = nullptr;};
    inline string prompt() const { DARABONBA_PTR_GET_DEFAULT(prompt_, "") };
    inline DescribeMmAppResponseBody& setPrompt(string prompt) { DARABONBA_PTR_SET_VALUE(prompt_, prompt) };


    // publishVersion Field Functions 
    bool hasPublishVersion() const { return this->publishVersion_ != nullptr;};
    void deletePublishVersion() { this->publishVersion_ = nullptr;};
    inline int64_t publishVersion() const { DARABONBA_PTR_GET_DEFAULT(publishVersion_, 0L) };
    inline DescribeMmAppResponseBody& setPublishVersion(int64_t publishVersion) { DARABONBA_PTR_SET_VALUE(publishVersion_, publishVersion) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeMmAppResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeMmAppResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<string> appId_ = nullptr;
    std::shared_ptr<string> appName_ = nullptr;
    std::shared_ptr<DescribeMmAppResponseBodyConversationConfig> conversationConfig_ = nullptr;
    std::shared_ptr<string> createUserId_ = nullptr;
    std::shared_ptr<string> createUserName_ = nullptr;
    std::shared_ptr<string> gmtCreate_ = nullptr;
    std::shared_ptr<string> gmtModified_ = nullptr;
    std::shared_ptr<DescribeMmAppResponseBodyModelConfig> modelConfig_ = nullptr;
    std::shared_ptr<string> modifyUserId_ = nullptr;
    std::shared_ptr<string> modifyUserName_ = nullptr;
    std::shared_ptr<string> prompt_ = nullptr;
    std::shared_ptr<int64_t> publishVersion_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SfmMultiModalApp20250909
#endif
