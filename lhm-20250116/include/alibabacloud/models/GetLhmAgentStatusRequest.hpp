// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLHMAGENTSTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETLHMAGENTSTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace LHM20250116
{
namespace Models
{
  class GetLhmAgentStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLhmAgentStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(agentType, agentType_);
      DARABONBA_PTR_TO_JSON(skillName, skillName_);
    };
    friend void from_json(const Darabonba::Json& j, GetLhmAgentStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(agentType, agentType_);
      DARABONBA_PTR_FROM_JSON(skillName, skillName_);
    };
    GetLhmAgentStatusRequest() = default ;
    GetLhmAgentStatusRequest(const GetLhmAgentStatusRequest &) = default ;
    GetLhmAgentStatusRequest(GetLhmAgentStatusRequest &&) = default ;
    GetLhmAgentStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLhmAgentStatusRequest() = default ;
    GetLhmAgentStatusRequest& operator=(const GetLhmAgentStatusRequest &) = default ;
    GetLhmAgentStatusRequest& operator=(GetLhmAgentStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentType_ == nullptr
        && this->skillName_ == nullptr; };
    // agentType Field Functions 
    bool hasAgentType() const { return this->agentType_ != nullptr;};
    void deleteAgentType() { this->agentType_ = nullptr;};
    inline int32_t getAgentType() const { DARABONBA_PTR_GET_DEFAULT(agentType_, 0) };
    inline GetLhmAgentStatusRequest& setAgentType(int32_t agentType) { DARABONBA_PTR_SET_VALUE(agentType_, agentType) };


    // skillName Field Functions 
    bool hasSkillName() const { return this->skillName_ != nullptr;};
    void deleteSkillName() { this->skillName_ = nullptr;};
    inline string getSkillName() const { DARABONBA_PTR_GET_DEFAULT(skillName_, "") };
    inline GetLhmAgentStatusRequest& setSkillName(string skillName) { DARABONBA_PTR_SET_VALUE(skillName_, skillName) };


  protected:
    // The Agent type. Valid values:
    // - 0: data validation (the only type currently supported).
    // - 1: metadata.
    // 
    // This parameter is required.
    shared_ptr<int32_t> agentType_ {};
    // The skill name. This parameter is optional.
    shared_ptr<string> skillName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace LHM20250116
#endif
