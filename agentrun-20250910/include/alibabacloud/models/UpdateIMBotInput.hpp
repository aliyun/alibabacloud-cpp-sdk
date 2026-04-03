// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEIMBOTINPUT_HPP_
#define ALIBABACLOUD_MODELS_UPDATEIMBOTINPUT_HPP_
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
  class UpdateIMBotInput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateIMBotInput& obj) { 
      DARABONBA_PTR_TO_JSON(botBizId, botBizId_);
      DARABONBA_PTR_TO_JSON(botBizSecret, botBizSecret_);
      DARABONBA_PTR_TO_JSON(botBizType, botBizType_);
      DARABONBA_PTR_TO_JSON(botMode, botMode_);
      DARABONBA_PTR_TO_JSON(botName, botName_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(metadata, metadata_);
      DARABONBA_PTR_TO_JSON(minInstances, minInstances_);
      DARABONBA_PTR_TO_JSON(status, status_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateIMBotInput& obj) { 
      DARABONBA_PTR_FROM_JSON(botBizId, botBizId_);
      DARABONBA_PTR_FROM_JSON(botBizSecret, botBizSecret_);
      DARABONBA_PTR_FROM_JSON(botBizType, botBizType_);
      DARABONBA_PTR_FROM_JSON(botMode, botMode_);
      DARABONBA_PTR_FROM_JSON(botName, botName_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(metadata, metadata_);
      DARABONBA_PTR_FROM_JSON(minInstances, minInstances_);
      DARABONBA_PTR_FROM_JSON(status, status_);
    };
    UpdateIMBotInput() = default ;
    UpdateIMBotInput(const UpdateIMBotInput &) = default ;
    UpdateIMBotInput(UpdateIMBotInput &&) = default ;
    UpdateIMBotInput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateIMBotInput() = default ;
    UpdateIMBotInput& operator=(const UpdateIMBotInput &) = default ;
    UpdateIMBotInput& operator=(UpdateIMBotInput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->botBizId_ == nullptr
        && this->botBizSecret_ == nullptr && this->botBizType_ == nullptr && this->botMode_ == nullptr && this->botName_ == nullptr && this->description_ == nullptr
        && this->metadata_ == nullptr && this->minInstances_ == nullptr && this->status_ == nullptr; };
    // botBizId Field Functions 
    bool hasBotBizId() const { return this->botBizId_ != nullptr;};
    void deleteBotBizId() { this->botBizId_ = nullptr;};
    inline string getBotBizId() const { DARABONBA_PTR_GET_DEFAULT(botBizId_, "") };
    inline UpdateIMBotInput& setBotBizId(string botBizId) { DARABONBA_PTR_SET_VALUE(botBizId_, botBizId) };


    // botBizSecret Field Functions 
    bool hasBotBizSecret() const { return this->botBizSecret_ != nullptr;};
    void deleteBotBizSecret() { this->botBizSecret_ = nullptr;};
    inline string getBotBizSecret() const { DARABONBA_PTR_GET_DEFAULT(botBizSecret_, "") };
    inline UpdateIMBotInput& setBotBizSecret(string botBizSecret) { DARABONBA_PTR_SET_VALUE(botBizSecret_, botBizSecret) };


    // botBizType Field Functions 
    bool hasBotBizType() const { return this->botBizType_ != nullptr;};
    void deleteBotBizType() { this->botBizType_ = nullptr;};
    inline string getBotBizType() const { DARABONBA_PTR_GET_DEFAULT(botBizType_, "") };
    inline UpdateIMBotInput& setBotBizType(string botBizType) { DARABONBA_PTR_SET_VALUE(botBizType_, botBizType) };


    // botMode Field Functions 
    bool hasBotMode() const { return this->botMode_ != nullptr;};
    void deleteBotMode() { this->botMode_ = nullptr;};
    inline string getBotMode() const { DARABONBA_PTR_GET_DEFAULT(botMode_, "") };
    inline UpdateIMBotInput& setBotMode(string botMode) { DARABONBA_PTR_SET_VALUE(botMode_, botMode) };


    // botName Field Functions 
    bool hasBotName() const { return this->botName_ != nullptr;};
    void deleteBotName() { this->botName_ = nullptr;};
    inline string getBotName() const { DARABONBA_PTR_GET_DEFAULT(botName_, "") };
    inline UpdateIMBotInput& setBotName(string botName) { DARABONBA_PTR_SET_VALUE(botName_, botName) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateIMBotInput& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // metadata Field Functions 
    bool hasMetadata() const { return this->metadata_ != nullptr;};
    void deleteMetadata() { this->metadata_ = nullptr;};
    inline const IMBotMetadata & getMetadata() const { DARABONBA_PTR_GET_CONST(metadata_, IMBotMetadata) };
    inline IMBotMetadata getMetadata() { DARABONBA_PTR_GET(metadata_, IMBotMetadata) };
    inline UpdateIMBotInput& setMetadata(const IMBotMetadata & metadata) { DARABONBA_PTR_SET_VALUE(metadata_, metadata) };
    inline UpdateIMBotInput& setMetadata(IMBotMetadata && metadata) { DARABONBA_PTR_SET_RVALUE(metadata_, metadata) };


    // minInstances Field Functions 
    bool hasMinInstances() const { return this->minInstances_ != nullptr;};
    void deleteMinInstances() { this->minInstances_ = nullptr;};
    inline int32_t getMinInstances() const { DARABONBA_PTR_GET_DEFAULT(minInstances_, 0) };
    inline UpdateIMBotInput& setMinInstances(int32_t minInstances) { DARABONBA_PTR_SET_VALUE(minInstances_, minInstances) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline UpdateIMBotInput& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    shared_ptr<string> botBizId_ {};
    // 若提供则不可为空字符串
    shared_ptr<string> botBizSecret_ {};
    shared_ptr<string> botBizType_ {};
    // 不可与租户已固定的 deployment 模式冲突
    shared_ptr<string> botMode_ {};
    shared_ptr<string> botName_ {};
    // Bot 描述信息
    shared_ptr<string> description_ {};
    shared_ptr<IMBotMetadata> metadata_ {};
    // ≥ 1，更新账号级 FC 最小实例
    shared_ptr<int32_t> minInstances_ {};
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
