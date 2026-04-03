// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEIMBOTINPUT_HPP_
#define ALIBABACLOUD_MODELS_CREATEIMBOTINPUT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/IMBotMetadata.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class CreateIMBotInput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateIMBotInput& obj) { 
      DARABONBA_PTR_TO_JSON(botBizId, botBizId_);
      DARABONBA_PTR_TO_JSON(botBizSecret, botBizSecret_);
      DARABONBA_PTR_TO_JSON(botBizType, botBizType_);
      DARABONBA_PTR_TO_JSON(botMode, botMode_);
      DARABONBA_PTR_TO_JSON(botName, botName_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(metadata, metadata_);
      DARABONBA_PTR_TO_JSON(minInstances, minInstances_);
    };
    friend void from_json(const Darabonba::Json& j, CreateIMBotInput& obj) { 
      DARABONBA_PTR_FROM_JSON(botBizId, botBizId_);
      DARABONBA_PTR_FROM_JSON(botBizSecret, botBizSecret_);
      DARABONBA_PTR_FROM_JSON(botBizType, botBizType_);
      DARABONBA_PTR_FROM_JSON(botMode, botMode_);
      DARABONBA_PTR_FROM_JSON(botName, botName_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(metadata, metadata_);
      DARABONBA_PTR_FROM_JSON(minInstances, minInstances_);
    };
    CreateIMBotInput() = default ;
    CreateIMBotInput(const CreateIMBotInput &) = default ;
    CreateIMBotInput(CreateIMBotInput &&) = default ;
    CreateIMBotInput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateIMBotInput() = default ;
    CreateIMBotInput& operator=(const CreateIMBotInput &) = default ;
    CreateIMBotInput& operator=(CreateIMBotInput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->botBizId_ == nullptr
        && this->botBizSecret_ == nullptr && this->botBizType_ == nullptr && this->botMode_ == nullptr && this->botName_ == nullptr && this->description_ == nullptr
        && this->metadata_ == nullptr && this->minInstances_ == nullptr; };
    // botBizId Field Functions 
    bool hasBotBizId() const { return this->botBizId_ != nullptr;};
    void deleteBotBizId() { this->botBizId_ = nullptr;};
    inline string getBotBizId() const { DARABONBA_PTR_GET_DEFAULT(botBizId_, "") };
    inline CreateIMBotInput& setBotBizId(string botBizId) { DARABONBA_PTR_SET_VALUE(botBizId_, botBizId) };


    // botBizSecret Field Functions 
    bool hasBotBizSecret() const { return this->botBizSecret_ != nullptr;};
    void deleteBotBizSecret() { this->botBizSecret_ = nullptr;};
    inline string getBotBizSecret() const { DARABONBA_PTR_GET_DEFAULT(botBizSecret_, "") };
    inline CreateIMBotInput& setBotBizSecret(string botBizSecret) { DARABONBA_PTR_SET_VALUE(botBizSecret_, botBizSecret) };


    // botBizType Field Functions 
    bool hasBotBizType() const { return this->botBizType_ != nullptr;};
    void deleteBotBizType() { this->botBizType_ = nullptr;};
    inline string getBotBizType() const { DARABONBA_PTR_GET_DEFAULT(botBizType_, "") };
    inline CreateIMBotInput& setBotBizType(string botBizType) { DARABONBA_PTR_SET_VALUE(botBizType_, botBizType) };


    // botMode Field Functions 
    bool hasBotMode() const { return this->botMode_ != nullptr;};
    void deleteBotMode() { this->botMode_ = nullptr;};
    inline string getBotMode() const { DARABONBA_PTR_GET_DEFAULT(botMode_, "") };
    inline CreateIMBotInput& setBotMode(string botMode) { DARABONBA_PTR_SET_VALUE(botMode_, botMode) };


    // botName Field Functions 
    bool hasBotName() const { return this->botName_ != nullptr;};
    void deleteBotName() { this->botName_ = nullptr;};
    inline string getBotName() const { DARABONBA_PTR_GET_DEFAULT(botName_, "") };
    inline CreateIMBotInput& setBotName(string botName) { DARABONBA_PTR_SET_VALUE(botName_, botName) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateIMBotInput& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // metadata Field Functions 
    bool hasMetadata() const { return this->metadata_ != nullptr;};
    void deleteMetadata() { this->metadata_ = nullptr;};
    inline const IMBotMetadata & getMetadata() const { DARABONBA_PTR_GET_CONST(metadata_, IMBotMetadata) };
    inline IMBotMetadata getMetadata() { DARABONBA_PTR_GET(metadata_, IMBotMetadata) };
    inline CreateIMBotInput& setMetadata(const IMBotMetadata & metadata) { DARABONBA_PTR_SET_VALUE(metadata_, metadata) };
    inline CreateIMBotInput& setMetadata(IMBotMetadata && metadata) { DARABONBA_PTR_SET_RVALUE(metadata_, metadata) };


    // minInstances Field Functions 
    bool hasMinInstances() const { return this->minInstances_ != nullptr;};
    void deleteMinInstances() { this->minInstances_ = nullptr;};
    inline int32_t getMinInstances() const { DARABONBA_PTR_GET_DEFAULT(minInstances_, 0) };
    inline CreateIMBotInput& setMinInstances(int32_t minInstances) { DARABONBA_PTR_SET_VALUE(minInstances_, minInstances) };


  protected:
    // This parameter is required.
    shared_ptr<string> botBizId_ {};
    // This parameter is required.
    shared_ptr<string> botBizSecret_ {};
    // This parameter is required.
    shared_ptr<string> botBizType_ {};
    // standard、custom；不传时可能继承租户已有部署模式
    shared_ptr<string> botMode_ {};
    // This parameter is required.
    shared_ptr<string> botName_ {};
    // Bot 描述信息
    shared_ptr<string> description_ {};
    // botMode 为 standard 时条件必填；custom 模式不进行标准运行时绑定校验
    shared_ptr<IMBotMetadata> metadata_ {};
    // FC 最小实例数，≥ 1；与租户账号级配置相关
    shared_ptr<int32_t> minInstances_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
