// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMODELSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTMODELSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ada20260701
{
namespace Models
{
  class ListModelsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListModelsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(Models, models_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, ListModelsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(Models, models_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    ListModelsResponseBody() = default ;
    ListModelsResponseBody(const ListModelsResponseBody &) = default ;
    ListModelsResponseBody(ListModelsResponseBody &&) = default ;
    ListModelsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListModelsResponseBody() = default ;
    ListModelsResponseBody& operator=(const ListModelsResponseBody &) = default ;
    ListModelsResponseBody& operator=(ListModelsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Models : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Models& obj) { 
        DARABONBA_PTR_TO_JSON(Capabilities, capabilities_);
        DARABONBA_PTR_TO_JSON(ContextWindow, contextWindow_);
        DARABONBA_PTR_TO_JSON(Created, created_);
        DARABONBA_PTR_TO_JSON(CreditsCoefficient, creditsCoefficient_);
        DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(MaxContextWindow, maxContextWindow_);
        DARABONBA_PTR_TO_JSON(Object, object_);
        DARABONBA_PTR_TO_JSON(OwnedBy, ownedBy_);
        DARABONBA_PTR_TO_JSON(SupportsThinking, supportsThinking_);
        DARABONBA_PTR_TO_JSON(ThinkingLevel, thinkingLevel_);
        DARABONBA_PTR_TO_JSON(ThinkingLevels, thinkingLevels_);
        DARABONBA_PTR_TO_JSON(ThinkingMode, thinkingMode_);
      };
      friend void from_json(const Darabonba::Json& j, Models& obj) { 
        DARABONBA_PTR_FROM_JSON(Capabilities, capabilities_);
        DARABONBA_PTR_FROM_JSON(ContextWindow, contextWindow_);
        DARABONBA_PTR_FROM_JSON(Created, created_);
        DARABONBA_PTR_FROM_JSON(CreditsCoefficient, creditsCoefficient_);
        DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(MaxContextWindow, maxContextWindow_);
        DARABONBA_PTR_FROM_JSON(Object, object_);
        DARABONBA_PTR_FROM_JSON(OwnedBy, ownedBy_);
        DARABONBA_PTR_FROM_JSON(SupportsThinking, supportsThinking_);
        DARABONBA_PTR_FROM_JSON(ThinkingLevel, thinkingLevel_);
        DARABONBA_PTR_FROM_JSON(ThinkingLevels, thinkingLevels_);
        DARABONBA_PTR_FROM_JSON(ThinkingMode, thinkingMode_);
      };
      Models() = default ;
      Models(const Models &) = default ;
      Models(Models &&) = default ;
      Models(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Models() = default ;
      Models& operator=(const Models &) = default ;
      Models& operator=(Models &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Capabilities : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Capabilities& obj) { 
          DARABONBA_PTR_TO_JSON(InputModalities, inputModalities_);
        };
        friend void from_json(const Darabonba::Json& j, Capabilities& obj) { 
          DARABONBA_PTR_FROM_JSON(InputModalities, inputModalities_);
        };
        Capabilities() = default ;
        Capabilities(const Capabilities &) = default ;
        Capabilities(Capabilities &&) = default ;
        Capabilities(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Capabilities() = default ;
        Capabilities& operator=(const Capabilities &) = default ;
        Capabilities& operator=(Capabilities &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->inputModalities_ == nullptr; };
        // inputModalities Field Functions 
        bool hasInputModalities() const { return this->inputModalities_ != nullptr;};
        void deleteInputModalities() { this->inputModalities_ = nullptr;};
        inline const vector<string> & getInputModalities() const { DARABONBA_PTR_GET_CONST(inputModalities_, vector<string>) };
        inline vector<string> getInputModalities() { DARABONBA_PTR_GET(inputModalities_, vector<string>) };
        inline Capabilities& setInputModalities(const vector<string> & inputModalities) { DARABONBA_PTR_SET_VALUE(inputModalities_, inputModalities) };
        inline Capabilities& setInputModalities(vector<string> && inputModalities) { DARABONBA_PTR_SET_RVALUE(inputModalities_, inputModalities) };


      protected:
        // The supported input modalities. For text sessions, select a model that includes text.
        shared_ptr<vector<string>> inputModalities_ {};
      };

      virtual bool empty() const override { return this->capabilities_ == nullptr
        && this->contextWindow_ == nullptr && this->created_ == nullptr && this->creditsCoefficient_ == nullptr && this->displayName_ == nullptr && this->id_ == nullptr
        && this->maxContextWindow_ == nullptr && this->object_ == nullptr && this->ownedBy_ == nullptr && this->supportsThinking_ == nullptr && this->thinkingLevel_ == nullptr
        && this->thinkingLevels_ == nullptr && this->thinkingMode_ == nullptr; };
      // capabilities Field Functions 
      bool hasCapabilities() const { return this->capabilities_ != nullptr;};
      void deleteCapabilities() { this->capabilities_ = nullptr;};
      inline const Models::Capabilities & getCapabilities() const { DARABONBA_PTR_GET_CONST(capabilities_, Models::Capabilities) };
      inline Models::Capabilities getCapabilities() { DARABONBA_PTR_GET(capabilities_, Models::Capabilities) };
      inline Models& setCapabilities(const Models::Capabilities & capabilities) { DARABONBA_PTR_SET_VALUE(capabilities_, capabilities) };
      inline Models& setCapabilities(Models::Capabilities && capabilities) { DARABONBA_PTR_SET_RVALUE(capabilities_, capabilities) };


      // contextWindow Field Functions 
      bool hasContextWindow() const { return this->contextWindow_ != nullptr;};
      void deleteContextWindow() { this->contextWindow_ = nullptr;};
      inline int64_t getContextWindow() const { DARABONBA_PTR_GET_DEFAULT(contextWindow_, 0L) };
      inline Models& setContextWindow(int64_t contextWindow) { DARABONBA_PTR_SET_VALUE(contextWindow_, contextWindow) };


      // created Field Functions 
      bool hasCreated() const { return this->created_ != nullptr;};
      void deleteCreated() { this->created_ = nullptr;};
      inline int64_t getCreated() const { DARABONBA_PTR_GET_DEFAULT(created_, 0L) };
      inline Models& setCreated(int64_t created) { DARABONBA_PTR_SET_VALUE(created_, created) };


      // creditsCoefficient Field Functions 
      bool hasCreditsCoefficient() const { return this->creditsCoefficient_ != nullptr;};
      void deleteCreditsCoefficient() { this->creditsCoefficient_ = nullptr;};
      inline string getCreditsCoefficient() const { DARABONBA_PTR_GET_DEFAULT(creditsCoefficient_, "") };
      inline Models& setCreditsCoefficient(string creditsCoefficient) { DARABONBA_PTR_SET_VALUE(creditsCoefficient_, creditsCoefficient) };


      // displayName Field Functions 
      bool hasDisplayName() const { return this->displayName_ != nullptr;};
      void deleteDisplayName() { this->displayName_ = nullptr;};
      inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
      inline Models& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline Models& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // maxContextWindow Field Functions 
      bool hasMaxContextWindow() const { return this->maxContextWindow_ != nullptr;};
      void deleteMaxContextWindow() { this->maxContextWindow_ = nullptr;};
      inline int64_t getMaxContextWindow() const { DARABONBA_PTR_GET_DEFAULT(maxContextWindow_, 0L) };
      inline Models& setMaxContextWindow(int64_t maxContextWindow) { DARABONBA_PTR_SET_VALUE(maxContextWindow_, maxContextWindow) };


      // object Field Functions 
      bool hasObject() const { return this->object_ != nullptr;};
      void deleteObject() { this->object_ = nullptr;};
      inline string getObject() const { DARABONBA_PTR_GET_DEFAULT(object_, "") };
      inline Models& setObject(string object) { DARABONBA_PTR_SET_VALUE(object_, object) };


      // ownedBy Field Functions 
      bool hasOwnedBy() const { return this->ownedBy_ != nullptr;};
      void deleteOwnedBy() { this->ownedBy_ = nullptr;};
      inline string getOwnedBy() const { DARABONBA_PTR_GET_DEFAULT(ownedBy_, "") };
      inline Models& setOwnedBy(string ownedBy) { DARABONBA_PTR_SET_VALUE(ownedBy_, ownedBy) };


      // supportsThinking Field Functions 
      bool hasSupportsThinking() const { return this->supportsThinking_ != nullptr;};
      void deleteSupportsThinking() { this->supportsThinking_ = nullptr;};
      inline int32_t getSupportsThinking() const { DARABONBA_PTR_GET_DEFAULT(supportsThinking_, 0) };
      inline Models& setSupportsThinking(int32_t supportsThinking) { DARABONBA_PTR_SET_VALUE(supportsThinking_, supportsThinking) };


      // thinkingLevel Field Functions 
      bool hasThinkingLevel() const { return this->thinkingLevel_ != nullptr;};
      void deleteThinkingLevel() { this->thinkingLevel_ = nullptr;};
      inline string getThinkingLevel() const { DARABONBA_PTR_GET_DEFAULT(thinkingLevel_, "") };
      inline Models& setThinkingLevel(string thinkingLevel) { DARABONBA_PTR_SET_VALUE(thinkingLevel_, thinkingLevel) };


      // thinkingLevels Field Functions 
      bool hasThinkingLevels() const { return this->thinkingLevels_ != nullptr;};
      void deleteThinkingLevels() { this->thinkingLevels_ = nullptr;};
      inline const vector<string> & getThinkingLevels() const { DARABONBA_PTR_GET_CONST(thinkingLevels_, vector<string>) };
      inline vector<string> getThinkingLevels() { DARABONBA_PTR_GET(thinkingLevels_, vector<string>) };
      inline Models& setThinkingLevels(const vector<string> & thinkingLevels) { DARABONBA_PTR_SET_VALUE(thinkingLevels_, thinkingLevels) };
      inline Models& setThinkingLevels(vector<string> && thinkingLevels) { DARABONBA_PTR_SET_RVALUE(thinkingLevels_, thinkingLevels) };


      // thinkingMode Field Functions 
      bool hasThinkingMode() const { return this->thinkingMode_ != nullptr;};
      void deleteThinkingMode() { this->thinkingMode_ = nullptr;};
      inline int32_t getThinkingMode() const { DARABONBA_PTR_GET_DEFAULT(thinkingMode_, 0) };
      inline Models& setThinkingMode(int32_t thinkingMode) { DARABONBA_PTR_SET_VALUE(thinkingMode_, thinkingMode) };


    protected:
      // The model capabilities structure.
      shared_ptr<Models::Capabilities> capabilities_ {};
      // The deprecated compatibility field. This field is not returned. Do not rely on this field for integration.
      shared_ptr<int64_t> contextWindow_ {};
      // The time when the model was created. The value is a UNIX timestamp in seconds.
      shared_ptr<int64_t> created_ {};
      // The credits coefficient of the model. The value is returned as a decimal string. This parameter is not returned if it is not configured.
      shared_ptr<string> creditsCoefficient_ {};
      // The display name of the model. Do not pass this value as the model identifier.
      shared_ptr<string> displayName_ {};
      // The model identifier. Used as Params.modelId for SetAgentSessionModel. Use the actual returned value.
      shared_ptr<string> id_ {};
      // The deprecated compatibility field. This field is not returned. Do not rely on this field for integration.
      shared_ptr<int64_t> maxContextWindow_ {};
      // The object type. The value is fixed to model.
      shared_ptr<string> object_ {};
      // The identifier of the model provider.
      shared_ptr<string> ownedBy_ {};
      // The deprecated compatibility field. This field is not returned. Use ThinkingLevels instead.
      shared_ptr<int32_t> supportsThinking_ {};
      // The default thinking level in the model catalog. This value does not represent the current value of the session. Query the current value by using GetAgentSessionModel.
      shared_ptr<string> thinkingLevel_ {};
      // The thinking levels supported by the model. An empty array does not indicate that all levels are supported. The target session still requires validation.
      shared_ptr<vector<string>> thinkingLevels_ {};
      // The deprecated compatibility field. This field is not returned. Use ThinkingLevel instead.
      shared_ptr<int32_t> thinkingMode_ {};
    };

    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->models_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->total_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListModelsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // models Field Functions 
    bool hasModels() const { return this->models_ != nullptr;};
    void deleteModels() { this->models_ = nullptr;};
    inline const vector<ListModelsResponseBody::Models> & getModels() const { DARABONBA_PTR_GET_CONST(models_, vector<ListModelsResponseBody::Models>) };
    inline vector<ListModelsResponseBody::Models> getModels() { DARABONBA_PTR_GET(models_, vector<ListModelsResponseBody::Models>) };
    inline ListModelsResponseBody& setModels(const vector<ListModelsResponseBody::Models> & models) { DARABONBA_PTR_SET_VALUE(models_, models) };
    inline ListModelsResponseBody& setModels(vector<ListModelsResponseBody::Models> && models) { DARABONBA_PTR_SET_RVALUE(models_, models) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListModelsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListModelsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline ListModelsResponseBody& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The maximum number of results used for the current pagination. If pagination is not used, this value is the total number of results. This value is not the actual number of entries returned on the current page.
    shared_ptr<int32_t> maxResults_ {};
    // The array of model structures. For nested fields, refer to the supplementary description of response parameters.
    shared_ptr<vector<ListModelsResponseBody::Models>> models_ {};
    // The token for the next page. An empty value indicates that no more pages exist.
    shared_ptr<string> nextToken_ {};
    // The ID of the request. You can use the ID to troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // The total number of models that meet the filter conditions.
    shared_ptr<int64_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ada20260701
#endif
