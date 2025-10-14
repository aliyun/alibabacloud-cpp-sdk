// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAGENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEAGENTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class CreateAgentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAgentRequest& obj) { 
      DARABONBA_PTR_TO_JSON(agentIconUrl, agentIconUrl_);
      DARABONBA_PTR_TO_JSON(agentName, agentName_);
      DARABONBA_PTR_TO_JSON(agentScene, agentScene_);
      DARABONBA_PTR_TO_JSON(characterAgeStage, characterAgeStage_);
      DARABONBA_PTR_TO_JSON(characterGender, characterGender_);
      DARABONBA_PTR_TO_JSON(characterName, characterName_);
      DARABONBA_PTR_TO_JSON(extraDescription, extraDescription_);
      DARABONBA_PTR_TO_JSON(industry, industry_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAgentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(agentIconUrl, agentIconUrl_);
      DARABONBA_PTR_FROM_JSON(agentName, agentName_);
      DARABONBA_PTR_FROM_JSON(agentScene, agentScene_);
      DARABONBA_PTR_FROM_JSON(characterAgeStage, characterAgeStage_);
      DARABONBA_PTR_FROM_JSON(characterGender, characterGender_);
      DARABONBA_PTR_FROM_JSON(characterName, characterName_);
      DARABONBA_PTR_FROM_JSON(extraDescription, extraDescription_);
      DARABONBA_PTR_FROM_JSON(industry, industry_);
    };
    CreateAgentRequest() = default ;
    CreateAgentRequest(const CreateAgentRequest &) = default ;
    CreateAgentRequest(CreateAgentRequest &&) = default ;
    CreateAgentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAgentRequest() = default ;
    CreateAgentRequest& operator=(const CreateAgentRequest &) = default ;
    CreateAgentRequest& operator=(CreateAgentRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentIconUrl_ == nullptr
        && return this->agentName_ == nullptr && return this->agentScene_ == nullptr && return this->characterAgeStage_ == nullptr && return this->characterGender_ == nullptr && return this->characterName_ == nullptr
        && return this->extraDescription_ == nullptr && return this->industry_ == nullptr; };
    // agentIconUrl Field Functions 
    bool hasAgentIconUrl() const { return this->agentIconUrl_ != nullptr;};
    void deleteAgentIconUrl() { this->agentIconUrl_ = nullptr;};
    inline string agentIconUrl() const { DARABONBA_PTR_GET_DEFAULT(agentIconUrl_, "") };
    inline CreateAgentRequest& setAgentIconUrl(string agentIconUrl) { DARABONBA_PTR_SET_VALUE(agentIconUrl_, agentIconUrl) };


    // agentName Field Functions 
    bool hasAgentName() const { return this->agentName_ != nullptr;};
    void deleteAgentName() { this->agentName_ = nullptr;};
    inline string agentName() const { DARABONBA_PTR_GET_DEFAULT(agentName_, "") };
    inline CreateAgentRequest& setAgentName(string agentName) { DARABONBA_PTR_SET_VALUE(agentName_, agentName) };


    // agentScene Field Functions 
    bool hasAgentScene() const { return this->agentScene_ != nullptr;};
    void deleteAgentScene() { this->agentScene_ = nullptr;};
    inline string agentScene() const { DARABONBA_PTR_GET_DEFAULT(agentScene_, "") };
    inline CreateAgentRequest& setAgentScene(string agentScene) { DARABONBA_PTR_SET_VALUE(agentScene_, agentScene) };


    // characterAgeStage Field Functions 
    bool hasCharacterAgeStage() const { return this->characterAgeStage_ != nullptr;};
    void deleteCharacterAgeStage() { this->characterAgeStage_ = nullptr;};
    inline string characterAgeStage() const { DARABONBA_PTR_GET_DEFAULT(characterAgeStage_, "") };
    inline CreateAgentRequest& setCharacterAgeStage(string characterAgeStage) { DARABONBA_PTR_SET_VALUE(characterAgeStage_, characterAgeStage) };


    // characterGender Field Functions 
    bool hasCharacterGender() const { return this->characterGender_ != nullptr;};
    void deleteCharacterGender() { this->characterGender_ = nullptr;};
    inline string characterGender() const { DARABONBA_PTR_GET_DEFAULT(characterGender_, "") };
    inline CreateAgentRequest& setCharacterGender(string characterGender) { DARABONBA_PTR_SET_VALUE(characterGender_, characterGender) };


    // characterName Field Functions 
    bool hasCharacterName() const { return this->characterName_ != nullptr;};
    void deleteCharacterName() { this->characterName_ = nullptr;};
    inline string characterName() const { DARABONBA_PTR_GET_DEFAULT(characterName_, "") };
    inline CreateAgentRequest& setCharacterName(string characterName) { DARABONBA_PTR_SET_VALUE(characterName_, characterName) };


    // extraDescription Field Functions 
    bool hasExtraDescription() const { return this->extraDescription_ != nullptr;};
    void deleteExtraDescription() { this->extraDescription_ = nullptr;};
    inline string extraDescription() const { DARABONBA_PTR_GET_DEFAULT(extraDescription_, "") };
    inline CreateAgentRequest& setExtraDescription(string extraDescription) { DARABONBA_PTR_SET_VALUE(extraDescription_, extraDescription) };


    // industry Field Functions 
    bool hasIndustry() const { return this->industry_ != nullptr;};
    void deleteIndustry() { this->industry_ = nullptr;};
    inline string industry() const { DARABONBA_PTR_GET_DEFAULT(industry_, "") };
    inline CreateAgentRequest& setIndustry(string industry) { DARABONBA_PTR_SET_VALUE(industry_, industry) };


  protected:
    std::shared_ptr<string> agentIconUrl_ = nullptr;
    std::shared_ptr<string> agentName_ = nullptr;
    std::shared_ptr<string> agentScene_ = nullptr;
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
