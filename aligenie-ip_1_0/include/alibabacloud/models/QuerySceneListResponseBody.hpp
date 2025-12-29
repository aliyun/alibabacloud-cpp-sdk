// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYSCENELISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYSCENELISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieip_1_0
{
namespace Models
{
  class QuerySceneListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QuerySceneListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Results, results_);
      DARABONBA_PTR_TO_JSON(StatusCode, statusCode_);
    };
    friend void from_json(const Darabonba::Json& j, QuerySceneListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Results, results_);
      DARABONBA_PTR_FROM_JSON(StatusCode, statusCode_);
    };
    QuerySceneListResponseBody() = default ;
    QuerySceneListResponseBody(const QuerySceneListResponseBody &) = default ;
    QuerySceneListResponseBody(QuerySceneListResponseBody &&) = default ;
    QuerySceneListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QuerySceneListResponseBody() = default ;
    QuerySceneListResponseBody& operator=(const QuerySceneListResponseBody &) = default ;
    QuerySceneListResponseBody& operator=(QuerySceneListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Results : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Results& obj) { 
        DARABONBA_PTR_TO_JSON(Icon, icon_);
        DARABONBA_PTR_TO_JSON(SceneId, sceneId_);
        DARABONBA_PTR_TO_JSON(SceneName, sceneName_);
        DARABONBA_PTR_TO_JSON(SceneSource, sceneSource_);
        DARABONBA_PTR_TO_JSON(SceneState, sceneState_);
        DARABONBA_PTR_TO_JSON(SceneType, sceneType_);
        DARABONBA_PTR_TO_JSON(TemplateInfoDTOList, templateInfoDTOList_);
        DARABONBA_PTR_TO_JSON(UnavailableReason, unavailableReason_);
      };
      friend void from_json(const Darabonba::Json& j, Results& obj) { 
        DARABONBA_PTR_FROM_JSON(Icon, icon_);
        DARABONBA_PTR_FROM_JSON(SceneId, sceneId_);
        DARABONBA_PTR_FROM_JSON(SceneName, sceneName_);
        DARABONBA_PTR_FROM_JSON(SceneSource, sceneSource_);
        DARABONBA_PTR_FROM_JSON(SceneState, sceneState_);
        DARABONBA_PTR_FROM_JSON(SceneType, sceneType_);
        DARABONBA_PTR_FROM_JSON(TemplateInfoDTOList, templateInfoDTOList_);
        DARABONBA_PTR_FROM_JSON(UnavailableReason, unavailableReason_);
      };
      Results() = default ;
      Results(const Results &) = default ;
      Results(Results &&) = default ;
      Results(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Results() = default ;
      Results& operator=(const Results &) = default ;
      Results& operator=(Results &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class TemplateInfoDTOList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TemplateInfoDTOList& obj) { 
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Name, name_);
        };
        friend void from_json(const Darabonba::Json& j, TemplateInfoDTOList& obj) { 
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
        };
        TemplateInfoDTOList() = default ;
        TemplateInfoDTOList(const TemplateInfoDTOList &) = default ;
        TemplateInfoDTOList(TemplateInfoDTOList &&) = default ;
        TemplateInfoDTOList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TemplateInfoDTOList() = default ;
        TemplateInfoDTOList& operator=(const TemplateInfoDTOList &) = default ;
        TemplateInfoDTOList& operator=(TemplateInfoDTOList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->description_ == nullptr
        && this->id_ == nullptr && this->name_ == nullptr; };
        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline TemplateInfoDTOList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline TemplateInfoDTOList& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline TemplateInfoDTOList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      protected:
        shared_ptr<string> description_ {};
        shared_ptr<int64_t> id_ {};
        shared_ptr<string> name_ {};
      };

      virtual bool empty() const override { return this->icon_ == nullptr
        && this->sceneId_ == nullptr && this->sceneName_ == nullptr && this->sceneSource_ == nullptr && this->sceneState_ == nullptr && this->sceneType_ == nullptr
        && this->templateInfoDTOList_ == nullptr && this->unavailableReason_ == nullptr; };
      // icon Field Functions 
      bool hasIcon() const { return this->icon_ != nullptr;};
      void deleteIcon() { this->icon_ = nullptr;};
      inline string getIcon() const { DARABONBA_PTR_GET_DEFAULT(icon_, "") };
      inline Results& setIcon(string icon) { DARABONBA_PTR_SET_VALUE(icon_, icon) };


      // sceneId Field Functions 
      bool hasSceneId() const { return this->sceneId_ != nullptr;};
      void deleteSceneId() { this->sceneId_ = nullptr;};
      inline string getSceneId() const { DARABONBA_PTR_GET_DEFAULT(sceneId_, "") };
      inline Results& setSceneId(string sceneId) { DARABONBA_PTR_SET_VALUE(sceneId_, sceneId) };


      // sceneName Field Functions 
      bool hasSceneName() const { return this->sceneName_ != nullptr;};
      void deleteSceneName() { this->sceneName_ = nullptr;};
      inline string getSceneName() const { DARABONBA_PTR_GET_DEFAULT(sceneName_, "") };
      inline Results& setSceneName(string sceneName) { DARABONBA_PTR_SET_VALUE(sceneName_, sceneName) };


      // sceneSource Field Functions 
      bool hasSceneSource() const { return this->sceneSource_ != nullptr;};
      void deleteSceneSource() { this->sceneSource_ = nullptr;};
      inline string getSceneSource() const { DARABONBA_PTR_GET_DEFAULT(sceneSource_, "") };
      inline Results& setSceneSource(string sceneSource) { DARABONBA_PTR_SET_VALUE(sceneSource_, sceneSource) };


      // sceneState Field Functions 
      bool hasSceneState() const { return this->sceneState_ != nullptr;};
      void deleteSceneState() { this->sceneState_ = nullptr;};
      inline int32_t getSceneState() const { DARABONBA_PTR_GET_DEFAULT(sceneState_, 0) };
      inline Results& setSceneState(int32_t sceneState) { DARABONBA_PTR_SET_VALUE(sceneState_, sceneState) };


      // sceneType Field Functions 
      bool hasSceneType() const { return this->sceneType_ != nullptr;};
      void deleteSceneType() { this->sceneType_ = nullptr;};
      inline string getSceneType() const { DARABONBA_PTR_GET_DEFAULT(sceneType_, "") };
      inline Results& setSceneType(string sceneType) { DARABONBA_PTR_SET_VALUE(sceneType_, sceneType) };


      // templateInfoDTOList Field Functions 
      bool hasTemplateInfoDTOList() const { return this->templateInfoDTOList_ != nullptr;};
      void deleteTemplateInfoDTOList() { this->templateInfoDTOList_ = nullptr;};
      inline const vector<Results::TemplateInfoDTOList> & getTemplateInfoDTOList() const { DARABONBA_PTR_GET_CONST(templateInfoDTOList_, vector<Results::TemplateInfoDTOList>) };
      inline vector<Results::TemplateInfoDTOList> getTemplateInfoDTOList() { DARABONBA_PTR_GET(templateInfoDTOList_, vector<Results::TemplateInfoDTOList>) };
      inline Results& setTemplateInfoDTOList(const vector<Results::TemplateInfoDTOList> & templateInfoDTOList) { DARABONBA_PTR_SET_VALUE(templateInfoDTOList_, templateInfoDTOList) };
      inline Results& setTemplateInfoDTOList(vector<Results::TemplateInfoDTOList> && templateInfoDTOList) { DARABONBA_PTR_SET_RVALUE(templateInfoDTOList_, templateInfoDTOList) };


      // unavailableReason Field Functions 
      bool hasUnavailableReason() const { return this->unavailableReason_ != nullptr;};
      void deleteUnavailableReason() { this->unavailableReason_ = nullptr;};
      inline string getUnavailableReason() const { DARABONBA_PTR_GET_DEFAULT(unavailableReason_, "") };
      inline Results& setUnavailableReason(string unavailableReason) { DARABONBA_PTR_SET_VALUE(unavailableReason_, unavailableReason) };


    protected:
      shared_ptr<string> icon_ {};
      shared_ptr<string> sceneId_ {};
      shared_ptr<string> sceneName_ {};
      shared_ptr<string> sceneSource_ {};
      shared_ptr<int32_t> sceneState_ {};
      shared_ptr<string> sceneType_ {};
      shared_ptr<vector<Results::TemplateInfoDTOList>> templateInfoDTOList_ {};
      shared_ptr<string> unavailableReason_ {};
    };

    virtual bool empty() const override { return this->message_ == nullptr
        && this->requestId_ == nullptr && this->results_ == nullptr && this->statusCode_ == nullptr; };
    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QuerySceneListResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QuerySceneListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // results Field Functions 
    bool hasResults() const { return this->results_ != nullptr;};
    void deleteResults() { this->results_ = nullptr;};
    inline const vector<QuerySceneListResponseBody::Results> & getResults() const { DARABONBA_PTR_GET_CONST(results_, vector<QuerySceneListResponseBody::Results>) };
    inline vector<QuerySceneListResponseBody::Results> getResults() { DARABONBA_PTR_GET(results_, vector<QuerySceneListResponseBody::Results>) };
    inline QuerySceneListResponseBody& setResults(const vector<QuerySceneListResponseBody::Results> & results) { DARABONBA_PTR_SET_VALUE(results_, results) };
    inline QuerySceneListResponseBody& setResults(vector<QuerySceneListResponseBody::Results> && results) { DARABONBA_PTR_SET_RVALUE(results_, results) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t getStatusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline QuerySceneListResponseBody& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


  protected:
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<QuerySceneListResponseBody::Results>> results_ {};
    shared_ptr<int32_t> statusCode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieip_1_0
#endif
