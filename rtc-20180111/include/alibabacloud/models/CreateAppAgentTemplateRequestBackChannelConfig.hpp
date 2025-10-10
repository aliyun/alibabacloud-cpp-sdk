// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPPAGENTTEMPLATEREQUESTBACKCHANNELCONFIG_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPPAGENTTEMPLATEREQUESTBACKCHANNELCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class CreateAppAgentTemplateRequestBackChannelConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAppAgentTemplateRequestBackChannelConfig& obj) { 
      DARABONBA_PTR_TO_JSON(UserTurnEnd, userTurnEnd_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAppAgentTemplateRequestBackChannelConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(UserTurnEnd, userTurnEnd_);
    };
    CreateAppAgentTemplateRequestBackChannelConfig() = default ;
    CreateAppAgentTemplateRequestBackChannelConfig(const CreateAppAgentTemplateRequestBackChannelConfig &) = default ;
    CreateAppAgentTemplateRequestBackChannelConfig(CreateAppAgentTemplateRequestBackChannelConfig &&) = default ;
    CreateAppAgentTemplateRequestBackChannelConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAppAgentTemplateRequestBackChannelConfig() = default ;
    CreateAppAgentTemplateRequestBackChannelConfig& operator=(const CreateAppAgentTemplateRequestBackChannelConfig &) = default ;
    CreateAppAgentTemplateRequestBackChannelConfig& operator=(CreateAppAgentTemplateRequestBackChannelConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->userTurnEnd_ != nullptr; };
    // userTurnEnd Field Functions 
    bool hasUserTurnEnd() const { return this->userTurnEnd_ != nullptr;};
    void deleteUserTurnEnd() { this->userTurnEnd_ = nullptr;};
    inline bool userTurnEnd() const { DARABONBA_PTR_GET_DEFAULT(userTurnEnd_, false) };
    inline CreateAppAgentTemplateRequestBackChannelConfig& setUserTurnEnd(bool userTurnEnd) { DARABONBA_PTR_SET_VALUE(userTurnEnd_, userTurnEnd) };


  protected:
    std::shared_ptr<bool> userTurnEnd_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
