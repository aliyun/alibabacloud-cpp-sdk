// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEBOTSPECREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEBOTSPECREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class UpdateBotSpecRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateBotSpecRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BotInstanceLevel, botInstanceLevel_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateBotSpecRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BotInstanceLevel, botInstanceLevel_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    UpdateBotSpecRequest() = default ;
    UpdateBotSpecRequest(const UpdateBotSpecRequest &) = default ;
    UpdateBotSpecRequest(UpdateBotSpecRequest &&) = default ;
    UpdateBotSpecRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateBotSpecRequest() = default ;
    UpdateBotSpecRequest& operator=(const UpdateBotSpecRequest &) = default ;
    UpdateBotSpecRequest& operator=(UpdateBotSpecRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->botInstanceLevel_ == nullptr
        && this->instanceId_ == nullptr; };
    // botInstanceLevel Field Functions 
    bool hasBotInstanceLevel() const { return this->botInstanceLevel_ != nullptr;};
    void deleteBotInstanceLevel() { this->botInstanceLevel_ = nullptr;};
    inline string getBotInstanceLevel() const { DARABONBA_PTR_GET_DEFAULT(botInstanceLevel_, "") };
    inline UpdateBotSpecRequest& setBotInstanceLevel(string botInstanceLevel) { DARABONBA_PTR_SET_VALUE(botInstanceLevel_, botInstanceLevel) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline UpdateBotSpecRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    // The bot instance specifications.
    // 
    // This parameter is required.
    shared_ptr<string> botInstanceLevel_ {};
    // The bot instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
