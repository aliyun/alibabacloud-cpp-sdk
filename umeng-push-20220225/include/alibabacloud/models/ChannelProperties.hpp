// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHANNELPROPERTIES_HPP_
#define ALIBABACLOUD_MODELS_CHANNELPROPERTIES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace UmengPush20220225
{
namespace Models
{
  class ChannelProperties : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChannelProperties& obj) { 
      DARABONBA_PTR_TO_JSON(channelActivity, channelActivity_);
      DARABONBA_PTR_TO_JSON(channelFcm, channelFcm_);
      DARABONBA_PTR_TO_JSON(harmonyChannelCategory, harmonyChannelCategory_);
      DARABONBA_PTR_TO_JSON(huaweiChannelCategory, huaweiChannelCategory_);
      DARABONBA_PTR_TO_JSON(huaweiChannelImportance, huaweiChannelImportance_);
      DARABONBA_PTR_TO_JSON(huaweiMessageUrgency, huaweiMessageUrgency_);
      DARABONBA_PTR_TO_JSON(mainActivity, mainActivity_);
      DARABONBA_PTR_TO_JSON(oppoCategory, oppoCategory_);
      DARABONBA_PTR_TO_JSON(oppoChannelId, oppoChannelId_);
      DARABONBA_PTR_TO_JSON(oppoNotifyLevel, oppoNotifyLevel_);
      DARABONBA_PTR_TO_JSON(useHuaweiMessage, useHuaweiMessage_);
      DARABONBA_PTR_TO_JSON(useHuaweiPlainMessage, useHuaweiPlainMessage_);
      DARABONBA_PTR_TO_JSON(vivoAddBadge, vivoAddBadge_);
      DARABONBA_PTR_TO_JSON(vivoCategory, vivoCategory_);
      DARABONBA_PTR_TO_JSON(vivoPushMode, vivoPushMode_);
      DARABONBA_PTR_TO_JSON(xiaomiChannelId, xiaomiChannelId_);
    };
    friend void from_json(const Darabonba::Json& j, ChannelProperties& obj) { 
      DARABONBA_PTR_FROM_JSON(channelActivity, channelActivity_);
      DARABONBA_PTR_FROM_JSON(channelFcm, channelFcm_);
      DARABONBA_PTR_FROM_JSON(harmonyChannelCategory, harmonyChannelCategory_);
      DARABONBA_PTR_FROM_JSON(huaweiChannelCategory, huaweiChannelCategory_);
      DARABONBA_PTR_FROM_JSON(huaweiChannelImportance, huaweiChannelImportance_);
      DARABONBA_PTR_FROM_JSON(huaweiMessageUrgency, huaweiMessageUrgency_);
      DARABONBA_PTR_FROM_JSON(mainActivity, mainActivity_);
      DARABONBA_PTR_FROM_JSON(oppoCategory, oppoCategory_);
      DARABONBA_PTR_FROM_JSON(oppoChannelId, oppoChannelId_);
      DARABONBA_PTR_FROM_JSON(oppoNotifyLevel, oppoNotifyLevel_);
      DARABONBA_PTR_FROM_JSON(useHuaweiMessage, useHuaweiMessage_);
      DARABONBA_PTR_FROM_JSON(useHuaweiPlainMessage, useHuaweiPlainMessage_);
      DARABONBA_PTR_FROM_JSON(vivoAddBadge, vivoAddBadge_);
      DARABONBA_PTR_FROM_JSON(vivoCategory, vivoCategory_);
      DARABONBA_PTR_FROM_JSON(vivoPushMode, vivoPushMode_);
      DARABONBA_PTR_FROM_JSON(xiaomiChannelId, xiaomiChannelId_);
    };
    ChannelProperties() = default ;
    ChannelProperties(const ChannelProperties &) = default ;
    ChannelProperties(ChannelProperties &&) = default ;
    ChannelProperties(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChannelProperties() = default ;
    ChannelProperties& operator=(const ChannelProperties &) = default ;
    ChannelProperties& operator=(ChannelProperties &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->channelActivity_ == nullptr
        && return this->channelFcm_ == nullptr && return this->harmonyChannelCategory_ == nullptr && return this->huaweiChannelCategory_ == nullptr && return this->huaweiChannelImportance_ == nullptr && return this->huaweiMessageUrgency_ == nullptr
        && return this->mainActivity_ == nullptr && return this->oppoCategory_ == nullptr && return this->oppoChannelId_ == nullptr && return this->oppoNotifyLevel_ == nullptr && return this->useHuaweiMessage_ == nullptr
        && return this->useHuaweiPlainMessage_ == nullptr && return this->vivoAddBadge_ == nullptr && return this->vivoCategory_ == nullptr && return this->vivoPushMode_ == nullptr && return this->xiaomiChannelId_ == nullptr; };
    // channelActivity Field Functions 
    bool hasChannelActivity() const { return this->channelActivity_ != nullptr;};
    void deleteChannelActivity() { this->channelActivity_ = nullptr;};
    inline string channelActivity() const { DARABONBA_PTR_GET_DEFAULT(channelActivity_, "") };
    inline ChannelProperties& setChannelActivity(string channelActivity) { DARABONBA_PTR_SET_VALUE(channelActivity_, channelActivity) };


    // channelFcm Field Functions 
    bool hasChannelFcm() const { return this->channelFcm_ != nullptr;};
    void deleteChannelFcm() { this->channelFcm_ = nullptr;};
    inline string channelFcm() const { DARABONBA_PTR_GET_DEFAULT(channelFcm_, "") };
    inline ChannelProperties& setChannelFcm(string channelFcm) { DARABONBA_PTR_SET_VALUE(channelFcm_, channelFcm) };


    // harmonyChannelCategory Field Functions 
    bool hasHarmonyChannelCategory() const { return this->harmonyChannelCategory_ != nullptr;};
    void deleteHarmonyChannelCategory() { this->harmonyChannelCategory_ = nullptr;};
    inline string harmonyChannelCategory() const { DARABONBA_PTR_GET_DEFAULT(harmonyChannelCategory_, "") };
    inline ChannelProperties& setHarmonyChannelCategory(string harmonyChannelCategory) { DARABONBA_PTR_SET_VALUE(harmonyChannelCategory_, harmonyChannelCategory) };


    // huaweiChannelCategory Field Functions 
    bool hasHuaweiChannelCategory() const { return this->huaweiChannelCategory_ != nullptr;};
    void deleteHuaweiChannelCategory() { this->huaweiChannelCategory_ = nullptr;};
    inline string huaweiChannelCategory() const { DARABONBA_PTR_GET_DEFAULT(huaweiChannelCategory_, "") };
    inline ChannelProperties& setHuaweiChannelCategory(string huaweiChannelCategory) { DARABONBA_PTR_SET_VALUE(huaweiChannelCategory_, huaweiChannelCategory) };


    // huaweiChannelImportance Field Functions 
    bool hasHuaweiChannelImportance() const { return this->huaweiChannelImportance_ != nullptr;};
    void deleteHuaweiChannelImportance() { this->huaweiChannelImportance_ = nullptr;};
    inline string huaweiChannelImportance() const { DARABONBA_PTR_GET_DEFAULT(huaweiChannelImportance_, "") };
    inline ChannelProperties& setHuaweiChannelImportance(string huaweiChannelImportance) { DARABONBA_PTR_SET_VALUE(huaweiChannelImportance_, huaweiChannelImportance) };


    // huaweiMessageUrgency Field Functions 
    bool hasHuaweiMessageUrgency() const { return this->huaweiMessageUrgency_ != nullptr;};
    void deleteHuaweiMessageUrgency() { this->huaweiMessageUrgency_ = nullptr;};
    inline string huaweiMessageUrgency() const { DARABONBA_PTR_GET_DEFAULT(huaweiMessageUrgency_, "") };
    inline ChannelProperties& setHuaweiMessageUrgency(string huaweiMessageUrgency) { DARABONBA_PTR_SET_VALUE(huaweiMessageUrgency_, huaweiMessageUrgency) };


    // mainActivity Field Functions 
    bool hasMainActivity() const { return this->mainActivity_ != nullptr;};
    void deleteMainActivity() { this->mainActivity_ = nullptr;};
    inline string mainActivity() const { DARABONBA_PTR_GET_DEFAULT(mainActivity_, "") };
    inline ChannelProperties& setMainActivity(string mainActivity) { DARABONBA_PTR_SET_VALUE(mainActivity_, mainActivity) };


    // oppoCategory Field Functions 
    bool hasOppoCategory() const { return this->oppoCategory_ != nullptr;};
    void deleteOppoCategory() { this->oppoCategory_ = nullptr;};
    inline string oppoCategory() const { DARABONBA_PTR_GET_DEFAULT(oppoCategory_, "") };
    inline ChannelProperties& setOppoCategory(string oppoCategory) { DARABONBA_PTR_SET_VALUE(oppoCategory_, oppoCategory) };


    // oppoChannelId Field Functions 
    bool hasOppoChannelId() const { return this->oppoChannelId_ != nullptr;};
    void deleteOppoChannelId() { this->oppoChannelId_ = nullptr;};
    inline string oppoChannelId() const { DARABONBA_PTR_GET_DEFAULT(oppoChannelId_, "") };
    inline ChannelProperties& setOppoChannelId(string oppoChannelId) { DARABONBA_PTR_SET_VALUE(oppoChannelId_, oppoChannelId) };


    // oppoNotifyLevel Field Functions 
    bool hasOppoNotifyLevel() const { return this->oppoNotifyLevel_ != nullptr;};
    void deleteOppoNotifyLevel() { this->oppoNotifyLevel_ = nullptr;};
    inline string oppoNotifyLevel() const { DARABONBA_PTR_GET_DEFAULT(oppoNotifyLevel_, "") };
    inline ChannelProperties& setOppoNotifyLevel(string oppoNotifyLevel) { DARABONBA_PTR_SET_VALUE(oppoNotifyLevel_, oppoNotifyLevel) };


    // useHuaweiMessage Field Functions 
    bool hasUseHuaweiMessage() const { return this->useHuaweiMessage_ != nullptr;};
    void deleteUseHuaweiMessage() { this->useHuaweiMessage_ = nullptr;};
    inline string useHuaweiMessage() const { DARABONBA_PTR_GET_DEFAULT(useHuaweiMessage_, "") };
    inline ChannelProperties& setUseHuaweiMessage(string useHuaweiMessage) { DARABONBA_PTR_SET_VALUE(useHuaweiMessage_, useHuaweiMessage) };


    // useHuaweiPlainMessage Field Functions 
    bool hasUseHuaweiPlainMessage() const { return this->useHuaweiPlainMessage_ != nullptr;};
    void deleteUseHuaweiPlainMessage() { this->useHuaweiPlainMessage_ = nullptr;};
    inline string useHuaweiPlainMessage() const { DARABONBA_PTR_GET_DEFAULT(useHuaweiPlainMessage_, "") };
    inline ChannelProperties& setUseHuaweiPlainMessage(string useHuaweiPlainMessage) { DARABONBA_PTR_SET_VALUE(useHuaweiPlainMessage_, useHuaweiPlainMessage) };


    // vivoAddBadge Field Functions 
    bool hasVivoAddBadge() const { return this->vivoAddBadge_ != nullptr;};
    void deleteVivoAddBadge() { this->vivoAddBadge_ = nullptr;};
    inline string vivoAddBadge() const { DARABONBA_PTR_GET_DEFAULT(vivoAddBadge_, "") };
    inline ChannelProperties& setVivoAddBadge(string vivoAddBadge) { DARABONBA_PTR_SET_VALUE(vivoAddBadge_, vivoAddBadge) };


    // vivoCategory Field Functions 
    bool hasVivoCategory() const { return this->vivoCategory_ != nullptr;};
    void deleteVivoCategory() { this->vivoCategory_ = nullptr;};
    inline string vivoCategory() const { DARABONBA_PTR_GET_DEFAULT(vivoCategory_, "") };
    inline ChannelProperties& setVivoCategory(string vivoCategory) { DARABONBA_PTR_SET_VALUE(vivoCategory_, vivoCategory) };


    // vivoPushMode Field Functions 
    bool hasVivoPushMode() const { return this->vivoPushMode_ != nullptr;};
    void deleteVivoPushMode() { this->vivoPushMode_ = nullptr;};
    inline string vivoPushMode() const { DARABONBA_PTR_GET_DEFAULT(vivoPushMode_, "") };
    inline ChannelProperties& setVivoPushMode(string vivoPushMode) { DARABONBA_PTR_SET_VALUE(vivoPushMode_, vivoPushMode) };


    // xiaomiChannelId Field Functions 
    bool hasXiaomiChannelId() const { return this->xiaomiChannelId_ != nullptr;};
    void deleteXiaomiChannelId() { this->xiaomiChannelId_ = nullptr;};
    inline string xiaomiChannelId() const { DARABONBA_PTR_GET_DEFAULT(xiaomiChannelId_, "") };
    inline ChannelProperties& setXiaomiChannelId(string xiaomiChannelId) { DARABONBA_PTR_SET_VALUE(xiaomiChannelId_, xiaomiChannelId) };


  protected:
    std::shared_ptr<string> channelActivity_ = nullptr;
    std::shared_ptr<string> channelFcm_ = nullptr;
    std::shared_ptr<string> harmonyChannelCategory_ = nullptr;
    std::shared_ptr<string> huaweiChannelCategory_ = nullptr;
    std::shared_ptr<string> huaweiChannelImportance_ = nullptr;
    std::shared_ptr<string> huaweiMessageUrgency_ = nullptr;
    std::shared_ptr<string> mainActivity_ = nullptr;
    std::shared_ptr<string> oppoCategory_ = nullptr;
    std::shared_ptr<string> oppoChannelId_ = nullptr;
    std::shared_ptr<string> oppoNotifyLevel_ = nullptr;
    std::shared_ptr<string> useHuaweiMessage_ = nullptr;
    std::shared_ptr<string> useHuaweiPlainMessage_ = nullptr;
    std::shared_ptr<string> vivoAddBadge_ = nullptr;
    std::shared_ptr<string> vivoCategory_ = nullptr;
    std::shared_ptr<string> vivoPushMode_ = nullptr;
    std::shared_ptr<string> xiaomiChannelId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace UmengPush20220225
#endif
