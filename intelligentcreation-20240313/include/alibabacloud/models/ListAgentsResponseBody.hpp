// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAGENTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAGENTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class ListAgentsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAgentsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(list, list_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(total, total_);
    };
    friend void from_json(const Darabonba::Json& j, ListAgentsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(list, list_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(total, total_);
    };
    ListAgentsResponseBody() = default ;
    ListAgentsResponseBody(const ListAgentsResponseBody &) = default ;
    ListAgentsResponseBody(ListAgentsResponseBody &&) = default ;
    ListAgentsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAgentsResponseBody() = default ;
    ListAgentsResponseBody& operator=(const ListAgentsResponseBody &) = default ;
    ListAgentsResponseBody& operator=(ListAgentsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class List : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const List& obj) { 
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
      friend void from_json(const Darabonba::Json& j, List& obj) { 
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
      List() = default ;
      List(const List &) = default ;
      List(List &&) = default ;
      List(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~List() = default ;
      List& operator=(const List &) = default ;
      List& operator=(List &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->agentId_ == nullptr
        && this->agentName_ == nullptr && this->agentScene_ == nullptr && this->charactersDescription_ == nullptr && this->enableInteraction_ == nullptr && this->industry_ == nullptr
        && this->onlineSearch_ == nullptr && this->owner_ == nullptr && this->referenceUrl_ == nullptr && this->status_ == nullptr && this->textStyle_ == nullptr
        && this->viewer_ == nullptr; };
      // agentId Field Functions 
      bool hasAgentId() const { return this->agentId_ != nullptr;};
      void deleteAgentId() { this->agentId_ = nullptr;};
      inline string getAgentId() const { DARABONBA_PTR_GET_DEFAULT(agentId_, "") };
      inline List& setAgentId(string agentId) { DARABONBA_PTR_SET_VALUE(agentId_, agentId) };


      // agentName Field Functions 
      bool hasAgentName() const { return this->agentName_ != nullptr;};
      void deleteAgentName() { this->agentName_ = nullptr;};
      inline string getAgentName() const { DARABONBA_PTR_GET_DEFAULT(agentName_, "") };
      inline List& setAgentName(string agentName) { DARABONBA_PTR_SET_VALUE(agentName_, agentName) };


      // agentScene Field Functions 
      bool hasAgentScene() const { return this->agentScene_ != nullptr;};
      void deleteAgentScene() { this->agentScene_ = nullptr;};
      inline string getAgentScene() const { DARABONBA_PTR_GET_DEFAULT(agentScene_, "") };
      inline List& setAgentScene(string agentScene) { DARABONBA_PTR_SET_VALUE(agentScene_, agentScene) };


      // charactersDescription Field Functions 
      bool hasCharactersDescription() const { return this->charactersDescription_ != nullptr;};
      void deleteCharactersDescription() { this->charactersDescription_ = nullptr;};
      inline string getCharactersDescription() const { DARABONBA_PTR_GET_DEFAULT(charactersDescription_, "") };
      inline List& setCharactersDescription(string charactersDescription) { DARABONBA_PTR_SET_VALUE(charactersDescription_, charactersDescription) };


      // enableInteraction Field Functions 
      bool hasEnableInteraction() const { return this->enableInteraction_ != nullptr;};
      void deleteEnableInteraction() { this->enableInteraction_ = nullptr;};
      inline int32_t getEnableInteraction() const { DARABONBA_PTR_GET_DEFAULT(enableInteraction_, 0) };
      inline List& setEnableInteraction(int32_t enableInteraction) { DARABONBA_PTR_SET_VALUE(enableInteraction_, enableInteraction) };


      // industry Field Functions 
      bool hasIndustry() const { return this->industry_ != nullptr;};
      void deleteIndustry() { this->industry_ = nullptr;};
      inline string getIndustry() const { DARABONBA_PTR_GET_DEFAULT(industry_, "") };
      inline List& setIndustry(string industry) { DARABONBA_PTR_SET_VALUE(industry_, industry) };


      // onlineSearch Field Functions 
      bool hasOnlineSearch() const { return this->onlineSearch_ != nullptr;};
      void deleteOnlineSearch() { this->onlineSearch_ = nullptr;};
      inline bool getOnlineSearch() const { DARABONBA_PTR_GET_DEFAULT(onlineSearch_, false) };
      inline List& setOnlineSearch(bool onlineSearch) { DARABONBA_PTR_SET_VALUE(onlineSearch_, onlineSearch) };


      // owner Field Functions 
      bool hasOwner() const { return this->owner_ != nullptr;};
      void deleteOwner() { this->owner_ = nullptr;};
      inline string getOwner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
      inline List& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


      // referenceUrl Field Functions 
      bool hasReferenceUrl() const { return this->referenceUrl_ != nullptr;};
      void deleteReferenceUrl() { this->referenceUrl_ = nullptr;};
      inline string getReferenceUrl() const { DARABONBA_PTR_GET_DEFAULT(referenceUrl_, "") };
      inline List& setReferenceUrl(string referenceUrl) { DARABONBA_PTR_SET_VALUE(referenceUrl_, referenceUrl) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
      inline List& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // textStyle Field Functions 
      bool hasTextStyle() const { return this->textStyle_ != nullptr;};
      void deleteTextStyle() { this->textStyle_ = nullptr;};
      inline string getTextStyle() const { DARABONBA_PTR_GET_DEFAULT(textStyle_, "") };
      inline List& setTextStyle(string textStyle) { DARABONBA_PTR_SET_VALUE(textStyle_, textStyle) };


      // viewer Field Functions 
      bool hasViewer() const { return this->viewer_ != nullptr;};
      void deleteViewer() { this->viewer_ = nullptr;};
      inline string getViewer() const { DARABONBA_PTR_GET_DEFAULT(viewer_, "") };
      inline List& setViewer(string viewer) { DARABONBA_PTR_SET_VALUE(viewer_, viewer) };


    protected:
      shared_ptr<string> agentId_ {};
      shared_ptr<string> agentName_ {};
      shared_ptr<string> agentScene_ {};
      shared_ptr<string> charactersDescription_ {};
      shared_ptr<int32_t> enableInteraction_ {};
      shared_ptr<string> industry_ {};
      shared_ptr<bool> onlineSearch_ {};
      shared_ptr<string> owner_ {};
      shared_ptr<string> referenceUrl_ {};
      shared_ptr<int32_t> status_ {};
      shared_ptr<string> textStyle_ {};
      shared_ptr<string> viewer_ {};
    };

    virtual bool empty() const override { return this->list_ == nullptr
        && this->requestId_ == nullptr && this->success_ == nullptr && this->total_ == nullptr; };
    // list Field Functions 
    bool hasList() const { return this->list_ != nullptr;};
    void deleteList() { this->list_ = nullptr;};
    inline const vector<ListAgentsResponseBody::List> & getList() const { DARABONBA_PTR_GET_CONST(list_, vector<ListAgentsResponseBody::List>) };
    inline vector<ListAgentsResponseBody::List> getList() { DARABONBA_PTR_GET(list_, vector<ListAgentsResponseBody::List>) };
    inline ListAgentsResponseBody& setList(const vector<ListAgentsResponseBody::List> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
    inline ListAgentsResponseBody& setList(vector<ListAgentsResponseBody::List> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAgentsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListAgentsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline ListAgentsResponseBody& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    shared_ptr<vector<ListAgentsResponseBody::List>> list_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<int32_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif
