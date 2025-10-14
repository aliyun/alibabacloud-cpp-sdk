// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEAGENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEAGENTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class UpdateAgentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAgentRequest& obj) { 
      DARABONBA_PTR_TO_JSON(agentIconUrl, agentIconUrl_);
      DARABONBA_PTR_TO_JSON(agentId, agentId_);
      DARABONBA_PTR_TO_JSON(agentName, agentName_);
      DARABONBA_PTR_TO_JSON(characterAgeStage, characterAgeStage_);
      DARABONBA_PTR_TO_JSON(characterGender, characterGender_);
      DARABONBA_PTR_TO_JSON(characterName, characterName_);
      DARABONBA_PTR_TO_JSON(extraDescription, extraDescription_);
      DARABONBA_PTR_TO_JSON(industry, industry_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAgentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(agentIconUrl, agentIconUrl_);
      DARABONBA_PTR_FROM_JSON(agentId, agentId_);
      DARABONBA_PTR_FROM_JSON(agentName, agentName_);
      DARABONBA_PTR_FROM_JSON(characterAgeStage, characterAgeStage_);
      DARABONBA_PTR_FROM_JSON(characterGender, characterGender_);
      DARABONBA_PTR_FROM_JSON(characterName, characterName_);
      DARABONBA_PTR_FROM_JSON(extraDescription, extraDescription_);
      DARABONBA_PTR_FROM_JSON(industry, industry_);
    };
    UpdateAgentRequest() = default ;
    UpdateAgentRequest(const UpdateAgentRequest &) = default ;
    UpdateAgentRequest(UpdateAgentRequest &&) = default ;
    UpdateAgentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAgentRequest() = default ;
    UpdateAgentRequest& operator=(const UpdateAgentRequest &) = default ;
    UpdateAgentRequest& operator=(UpdateAgentRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentIconUrl_ == nullptr
        && return this->agentId_ == nullptr && return this->agentName_ == nullptr && return this->characterAgeStage_ == nullptr && return this->characterGender_ == nullptr && return this->characterName_ == nullptr
        && return this->extraDescription_ == nullptr && return this->industry_ == nullptr; };
    // agentIconUrl Field Functions 
    bool hasAgentIconUrl() const { return this->agentIconUrl_ != nullptr;};
    void deleteAgentIconUrl() { this->agentIconUrl_ = nullptr;};
    inline string agentIconUrl() const { DARABONBA_PTR_GET_DEFAULT(agentIconUrl_, "") };
    inline UpdateAgentRequest& setAgentIconUrl(string agentIconUrl) { DARABONBA_PTR_SET_VALUE(agentIconUrl_, agentIconUrl) };


    // agentId Field Functions 
    bool hasAgentId() const { return this->agentId_ != nullptr;};
    void deleteAgentId() { this->agentId_ = nullptr;};
    inline string agentId() const { DARABONBA_PTR_GET_DEFAULT(agentId_, "") };
    inline UpdateAgentRequest& setAgentId(string agentId) { DARABONBA_PTR_SET_VALUE(agentId_, agentId) };


    // agentName Field Functions 
    bool hasAgentName() const { return this->agentName_ != nullptr;};
    void deleteAgentName() { this->agentName_ = nullptr;};
    inline string agentName() const { DARABONBA_PTR_GET_DEFAULT(agentName_, "") };
    inline UpdateAgentRequest& setAgentName(string agentName) { DARABONBA_PTR_SET_VALUE(agentName_, agentName) };


    // characterAgeStage Field Functions 
    bool hasCharacterAgeStage() const { return this->characterAgeStage_ != nullptr;};
    void deleteCharacterAgeStage() { this->characterAgeStage_ = nullptr;};
    inline string characterAgeStage() const { DARABONBA_PTR_GET_DEFAULT(characterAgeStage_, "") };
    inline UpdateAgentRequest& setCharacterAgeStage(string characterAgeStage) { DARABONBA_PTR_SET_VALUE(characterAgeStage_, characterAgeStage) };


    // characterGender Field Functions 
    bool hasCharacterGender() const { return this->characterGender_ != nullptr;};
    void deleteCharacterGender() { this->characterGender_ = nullptr;};
    inline string characterGender() const { DARABONBA_PTR_GET_DEFAULT(characterGender_, "") };
    inline UpdateAgentRequest& setCharacterGender(string characterGender) { DARABONBA_PTR_SET_VALUE(characterGender_, characterGender) };


    // characterName Field Functions 
    bool hasCharacterName() const { return this->characterName_ != nullptr;};
    void deleteCharacterName() { this->characterName_ = nullptr;};
    inline string characterName() const { DARABONBA_PTR_GET_DEFAULT(characterName_, "") };
    inline UpdateAgentRequest& setCharacterName(string characterName) { DARABONBA_PTR_SET_VALUE(characterName_, characterName) };


    // extraDescription Field Functions 
    bool hasExtraDescription() const { return this->extraDescription_ != nullptr;};
    void deleteExtraDescription() { this->extraDescription_ = nullptr;};
    inline string extraDescription() const { DARABONBA_PTR_GET_DEFAULT(extraDescription_, "") };
    inline UpdateAgentRequest& setExtraDescription(string extraDescription) { DARABONBA_PTR_SET_VALUE(extraDescription_, extraDescription) };


    // industry Field Functions 
    bool hasIndustry() const { return this->industry_ != nullptr;};
    void deleteIndustry() { this->industry_ = nullptr;};
    inline string industry() const { DARABONBA_PTR_GET_DEFAULT(industry_, "") };
    inline UpdateAgentRequest& setIndustry(string industry) { DARABONBA_PTR_SET_VALUE(industry_, industry) };


  protected:
    std::shared_ptr<string> agentIconUrl_ = nullptr;
    std::shared_ptr<string> agentId_ = nullptr;
    std::shared_ptr<string> agentName_ = nullptr;
    std::shared_ptr<string> characterAgeStage_ = nullptr;
    std::shared_ptr<string> characterGender_ = nullptr;
    std::shared_ptr<string> characterName_ = nullptr;
    std::shared_ptr<string> extraDescription_ = nullptr;
    std::shared_ptr<string> industry_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif
