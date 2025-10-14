// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAGENTSRESPONSEBODYLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTAGENTSRESPONSEBODYLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class ListAgentsResponseBodyList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAgentsResponseBodyList& obj) { 
      DARABONBA_PTR_TO_JSON(agentId, agentId_);
      DARABONBA_PTR_TO_JSON(agentName, agentName_);
      DARABONBA_PTR_TO_JSON(agentScene, agentScene_);
      DARABONBA_PTR_TO_JSON(charactersDescription, charactersDescription_);
      DARABONBA_PTR_TO_JSON(enableInteraction, enableInteraction_);
      DARABONBA_PTR_TO_JSON(industry, industry_);
      DARABONBA_PTR_TO_JSON(onlineSearch, onlineSearch_);
      DARABONBA_PTR_TO_JSON(owner, owner_);
      DARABONBA_PTR_TO_JSON(referenceUrl, referenceUrl_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(textStyle, textStyle_);
      DARABONBA_PTR_TO_JSON(viewer, viewer_);
    };
    friend void from_json(const Darabonba::Json& j, ListAgentsResponseBodyList& obj) { 
      DARABONBA_PTR_FROM_JSON(agentId, agentId_);
      DARABONBA_PTR_FROM_JSON(agentName, agentName_);
      DARABONBA_PTR_FROM_JSON(agentScene, agentScene_);
      DARABONBA_PTR_FROM_JSON(charactersDescription, charactersDescription_);
      DARABONBA_PTR_FROM_JSON(enableInteraction, enableInteraction_);
      DARABONBA_PTR_FROM_JSON(industry, industry_);
      DARABONBA_PTR_FROM_JSON(onlineSearch, onlineSearch_);
      DARABONBA_PTR_FROM_JSON(owner, owner_);
      DARABONBA_PTR_FROM_JSON(referenceUrl, referenceUrl_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(textStyle, textStyle_);
      DARABONBA_PTR_FROM_JSON(viewer, viewer_);
    };
    ListAgentsResponseBodyList() = default ;
    ListAgentsResponseBodyList(const ListAgentsResponseBodyList &) = default ;
    ListAgentsResponseBodyList(ListAgentsResponseBodyList &&) = default ;
    ListAgentsResponseBodyList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAgentsResponseBodyList() = default ;
    ListAgentsResponseBodyList& operator=(const ListAgentsResponseBodyList &) = default ;
    ListAgentsResponseBodyList& operator=(ListAgentsResponseBodyList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentId_ == nullptr
        && return this->agentName_ == nullptr && return this->agentScene_ == nullptr && return this->charactersDescription_ == nullptr && return this->enableInteraction_ == nullptr && return this->industry_ == nullptr
        && return this->onlineSearch_ == nullptr && return this->owner_ == nullptr && return this->referenceUrl_ == nullptr && return this->status_ == nullptr && return this->textStyle_ == nullptr
        && return this->viewer_ == nullptr; };
    // agentId Field Functions 
    bool hasAgentId() const { return this->agentId_ != nullptr;};
    void deleteAgentId() { this->agentId_ = nullptr;};
    inline string agentId() const { DARABONBA_PTR_GET_DEFAULT(agentId_, "") };
    inline ListAgentsResponseBodyList& setAgentId(string agentId) { DARABONBA_PTR_SET_VALUE(agentId_, agentId) };


    // agentName Field Functions 
    bool hasAgentName() const { return this->agentName_ != nullptr;};
    void deleteAgentName() { this->agentName_ = nullptr;};
    inline string agentName() const { DARABONBA_PTR_GET_DEFAULT(agentName_, "") };
    inline ListAgentsResponseBodyList& setAgentName(string agentName) { DARABONBA_PTR_SET_VALUE(agentName_, agentName) };


    // agentScene Field Functions 
    bool hasAgentScene() const { return this->agentScene_ != nullptr;};
    void deleteAgentScene() { this->agentScene_ = nullptr;};
    inline string agentScene() const { DARABONBA_PTR_GET_DEFAULT(agentScene_, "") };
    inline ListAgentsResponseBodyList& setAgentScene(string agentScene) { DARABONBA_PTR_SET_VALUE(agentScene_, agentScene) };


    // charactersDescription Field Functions 
    bool hasCharactersDescription() const { return this->charactersDescription_ != nullptr;};
    void deleteCharactersDescription() { this->charactersDescription_ = nullptr;};
    inline string charactersDescription() const { DARABONBA_PTR_GET_DEFAULT(charactersDescription_, "") };
    inline ListAgentsResponseBodyList& setCharactersDescription(string charactersDescription) { DARABONBA_PTR_SET_VALUE(charactersDescription_, charactersDescription) };


    // enableInteraction Field Functions 
    bool hasEnableInteraction() const { return this->enableInteraction_ != nullptr;};
    void deleteEnableInteraction() { this->enableInteraction_ = nullptr;};
    inline int32_t enableInteraction() const { DARABONBA_PTR_GET_DEFAULT(enableInteraction_, 0) };
    inline ListAgentsResponseBodyList& setEnableInteraction(int32_t enableInteraction) { DARABONBA_PTR_SET_VALUE(enableInteraction_, enableInteraction) };


    // industry Field Functions 
    bool hasIndustry() const { return this->industry_ != nullptr;};
    void deleteIndustry() { this->industry_ = nullptr;};
    inline string industry() const { DARABONBA_PTR_GET_DEFAULT(industry_, "") };
    inline ListAgentsResponseBodyList& setIndustry(string industry) { DARABONBA_PTR_SET_VALUE(industry_, industry) };


    // onlineSearch Field Functions 
    bool hasOnlineSearch() const { return this->onlineSearch_ != nullptr;};
    void deleteOnlineSearch() { this->onlineSearch_ = nullptr;};
    inline bool onlineSearch() const { DARABONBA_PTR_GET_DEFAULT(onlineSearch_, false) };
    inline ListAgentsResponseBodyList& setOnlineSearch(bool onlineSearch) { DARABONBA_PTR_SET_VALUE(onlineSearch_, onlineSearch) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline string owner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
    inline ListAgentsResponseBodyList& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


    // referenceUrl Field Functions 
    bool hasReferenceUrl() const { return this->referenceUrl_ != nullptr;};
    void deleteReferenceUrl() { this->referenceUrl_ = nullptr;};
    inline string referenceUrl() const { DARABONBA_PTR_GET_DEFAULT(referenceUrl_, "") };
    inline ListAgentsResponseBodyList& setReferenceUrl(string referenceUrl) { DARABONBA_PTR_SET_VALUE(referenceUrl_, referenceUrl) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline ListAgentsResponseBodyList& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // textStyle Field Functions 
    bool hasTextStyle() const { return this->textStyle_ != nullptr;};
    void deleteTextStyle() { this->textStyle_ = nullptr;};
    inline string textStyle() const { DARABONBA_PTR_GET_DEFAULT(textStyle_, "") };
    inline ListAgentsResponseBodyList& setTextStyle(string textStyle) { DARABONBA_PTR_SET_VALUE(textStyle_, textStyle) };


    // viewer Field Functions 
    bool hasViewer() const { return this->viewer_ != nullptr;};
    void deleteViewer() { this->viewer_ = nullptr;};
    inline string viewer() const { DARABONBA_PTR_GET_DEFAULT(viewer_, "") };
    inline ListAgentsResponseBodyList& setViewer(string viewer) { DARABONBA_PTR_SET_VALUE(viewer_, viewer) };


  protected:
    std::shared_ptr<string> agentId_ = nullptr;
    std::shared_ptr<string> agentName_ = nullptr;
    std::shared_ptr<string> agentScene_ = nullptr;
    std::shared_ptr<string> charactersDescription_ = nullptr;
    std::shared_ptr<int32_t> enableInteraction_ = nullptr;
    std::shared_ptr<string> industry_ = nullptr;
    std::shared_ptr<bool> onlineSearch_ = nullptr;
    std::shared_ptr<string> owner_ = nullptr;
    std::shared_ptr<string> referenceUrl_ = nullptr;
    std::shared_ptr<int32_t> status_ = nullptr;
    std::shared_ptr<string> textStyle_ = nullptr;
    std::shared_ptr<string> viewer_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif
