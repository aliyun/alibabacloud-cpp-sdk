// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSCENESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSCENESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class ListScenesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListScenesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Scenes, scenes_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListScenesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Scenes, scenes_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListScenesResponseBody() = default ;
    ListScenesResponseBody(const ListScenesResponseBody &) = default ;
    ListScenesResponseBody(ListScenesResponseBody &&) = default ;
    ListScenesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListScenesResponseBody() = default ;
    ListScenesResponseBody& operator=(const ListScenesResponseBody &) = default ;
    ListScenesResponseBody& operator=(ListScenesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Scenes : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Scenes& obj) { 
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(Flows, flows_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(SceneId, sceneId_);
      };
      friend void from_json(const Darabonba::Json& j, Scenes& obj) { 
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(Flows, flows_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(SceneId, sceneId_);
      };
      Scenes() = default ;
      Scenes(const Scenes &) = default ;
      Scenes(Scenes &&) = default ;
      Scenes(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Scenes() = default ;
      Scenes& operator=(const Scenes &) = default ;
      Scenes& operator=(Scenes &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Flows : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Flows& obj) { 
          DARABONBA_PTR_TO_JSON(FlowCode, flowCode_);
          DARABONBA_PTR_TO_JSON(FlowName, flowName_);
        };
        friend void from_json(const Darabonba::Json& j, Flows& obj) { 
          DARABONBA_PTR_FROM_JSON(FlowCode, flowCode_);
          DARABONBA_PTR_FROM_JSON(FlowName, flowName_);
        };
        Flows() = default ;
        Flows(const Flows &) = default ;
        Flows(Flows &&) = default ;
        Flows(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Flows() = default ;
        Flows& operator=(const Flows &) = default ;
        Flows& operator=(Flows &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->flowCode_ == nullptr
        && this->flowName_ == nullptr; };
        // flowCode Field Functions 
        bool hasFlowCode() const { return this->flowCode_ != nullptr;};
        void deleteFlowCode() { this->flowCode_ = nullptr;};
        inline string getFlowCode() const { DARABONBA_PTR_GET_DEFAULT(flowCode_, "") };
        inline Flows& setFlowCode(string flowCode) { DARABONBA_PTR_SET_VALUE(flowCode_, flowCode) };


        // flowName Field Functions 
        bool hasFlowName() const { return this->flowName_ != nullptr;};
        void deleteFlowName() { this->flowName_ = nullptr;};
        inline string getFlowName() const { DARABONBA_PTR_GET_DEFAULT(flowName_, "") };
        inline Flows& setFlowName(string flowName) { DARABONBA_PTR_SET_VALUE(flowName_, flowName) };


      protected:
        shared_ptr<string> flowCode_ {};
        shared_ptr<string> flowName_ {};
      };

      virtual bool empty() const override { return this->description_ == nullptr
        && this->flows_ == nullptr && this->name_ == nullptr && this->sceneId_ == nullptr; };
      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Scenes& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // flows Field Functions 
      bool hasFlows() const { return this->flows_ != nullptr;};
      void deleteFlows() { this->flows_ = nullptr;};
      inline const vector<Scenes::Flows> & getFlows() const { DARABONBA_PTR_GET_CONST(flows_, vector<Scenes::Flows>) };
      inline vector<Scenes::Flows> getFlows() { DARABONBA_PTR_GET(flows_, vector<Scenes::Flows>) };
      inline Scenes& setFlows(const vector<Scenes::Flows> & flows) { DARABONBA_PTR_SET_VALUE(flows_, flows) };
      inline Scenes& setFlows(vector<Scenes::Flows> && flows) { DARABONBA_PTR_SET_RVALUE(flows_, flows) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Scenes& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // sceneId Field Functions 
      bool hasSceneId() const { return this->sceneId_ != nullptr;};
      void deleteSceneId() { this->sceneId_ = nullptr;};
      inline string getSceneId() const { DARABONBA_PTR_GET_DEFAULT(sceneId_, "") };
      inline Scenes& setSceneId(string sceneId) { DARABONBA_PTR_SET_VALUE(sceneId_, sceneId) };


    protected:
      shared_ptr<string> description_ {};
      shared_ptr<vector<Scenes::Flows>> flows_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> sceneId_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->scenes_ == nullptr && this->totalCount_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListScenesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // scenes Field Functions 
    bool hasScenes() const { return this->scenes_ != nullptr;};
    void deleteScenes() { this->scenes_ = nullptr;};
    inline const vector<ListScenesResponseBody::Scenes> & getScenes() const { DARABONBA_PTR_GET_CONST(scenes_, vector<ListScenesResponseBody::Scenes>) };
    inline vector<ListScenesResponseBody::Scenes> getScenes() { DARABONBA_PTR_GET(scenes_, vector<ListScenesResponseBody::Scenes>) };
    inline ListScenesResponseBody& setScenes(const vector<ListScenesResponseBody::Scenes> & scenes) { DARABONBA_PTR_SET_VALUE(scenes_, scenes) };
    inline ListScenesResponseBody& setScenes(vector<ListScenesResponseBody::Scenes> && scenes) { DARABONBA_PTR_SET_RVALUE(scenes_, scenes) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListScenesResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<ListScenesResponseBody::Scenes>> scenes_ {};
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
