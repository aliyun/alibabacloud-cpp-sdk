// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAGENTPROFILETEMPLATERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETAGENTPROFILETEMPLATERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class GetAgentProfileTemplateResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAgentProfileTemplateResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AgentProfileTemplateId, agentProfileTemplateId_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PromptSchema, promptSchema_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, GetAgentProfileTemplateResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentProfileTemplateId, agentProfileTemplateId_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PromptSchema, promptSchema_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
    };
    GetAgentProfileTemplateResponseBodyData() = default ;
    GetAgentProfileTemplateResponseBodyData(const GetAgentProfileTemplateResponseBodyData &) = default ;
    GetAgentProfileTemplateResponseBodyData(GetAgentProfileTemplateResponseBodyData &&) = default ;
    GetAgentProfileTemplateResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAgentProfileTemplateResponseBodyData() = default ;
    GetAgentProfileTemplateResponseBodyData& operator=(const GetAgentProfileTemplateResponseBodyData &) = default ;
    GetAgentProfileTemplateResponseBodyData& operator=(GetAgentProfileTemplateResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentProfileTemplateId_ == nullptr
        && return this->createTime_ == nullptr && return this->description_ == nullptr && return this->name_ == nullptr && return this->promptSchema_ == nullptr && return this->updateTime_ == nullptr; };
    // agentProfileTemplateId Field Functions 
    bool hasAgentProfileTemplateId() const { return this->agentProfileTemplateId_ != nullptr;};
    void deleteAgentProfileTemplateId() { this->agentProfileTemplateId_ = nullptr;};
    inline string agentProfileTemplateId() const { DARABONBA_PTR_GET_DEFAULT(agentProfileTemplateId_, "") };
    inline GetAgentProfileTemplateResponseBodyData& setAgentProfileTemplateId(string agentProfileTemplateId) { DARABONBA_PTR_SET_VALUE(agentProfileTemplateId_, agentProfileTemplateId) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetAgentProfileTemplateResponseBodyData& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetAgentProfileTemplateResponseBodyData& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetAgentProfileTemplateResponseBodyData& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // promptSchema Field Functions 
    bool hasPromptSchema() const { return this->promptSchema_ != nullptr;};
    void deletePromptSchema() { this->promptSchema_ = nullptr;};
    inline string promptSchema() const { DARABONBA_PTR_GET_DEFAULT(promptSchema_, "") };
    inline GetAgentProfileTemplateResponseBodyData& setPromptSchema(string promptSchema) { DARABONBA_PTR_SET_VALUE(promptSchema_, promptSchema) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline GetAgentProfileTemplateResponseBodyData& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    std::shared_ptr<string> agentProfileTemplateId_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> promptSchema_ = nullptr;
    std::shared_ptr<string> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
