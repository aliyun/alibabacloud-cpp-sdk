// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSCENESRESPONSEBODYSCENES_HPP_
#define ALIBABACLOUD_MODELS_LISTSCENESRESPONSEBODYSCENES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListScenesResponseBodyScenesFlows.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class ListScenesResponseBodyScenes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListScenesResponseBodyScenes& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Flows, flows_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(SceneId, sceneId_);
    };
    friend void from_json(const Darabonba::Json& j, ListScenesResponseBodyScenes& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Flows, flows_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(SceneId, sceneId_);
    };
    ListScenesResponseBodyScenes() = default ;
    ListScenesResponseBodyScenes(const ListScenesResponseBodyScenes &) = default ;
    ListScenesResponseBodyScenes(ListScenesResponseBodyScenes &&) = default ;
    ListScenesResponseBodyScenes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListScenesResponseBodyScenes() = default ;
    ListScenesResponseBodyScenes& operator=(const ListScenesResponseBodyScenes &) = default ;
    ListScenesResponseBodyScenes& operator=(ListScenesResponseBodyScenes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->description_ != nullptr
        && this->flows_ != nullptr && this->name_ != nullptr && this->sceneId_ != nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListScenesResponseBodyScenes& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // flows Field Functions 
    bool hasFlows() const { return this->flows_ != nullptr;};
    void deleteFlows() { this->flows_ = nullptr;};
    inline const vector<Models::ListScenesResponseBodyScenesFlows> & flows() const { DARABONBA_PTR_GET_CONST(flows_, vector<Models::ListScenesResponseBodyScenesFlows>) };
    inline vector<Models::ListScenesResponseBodyScenesFlows> flows() { DARABONBA_PTR_GET(flows_, vector<Models::ListScenesResponseBodyScenesFlows>) };
    inline ListScenesResponseBodyScenes& setFlows(const vector<Models::ListScenesResponseBodyScenesFlows> & flows) { DARABONBA_PTR_SET_VALUE(flows_, flows) };
    inline ListScenesResponseBodyScenes& setFlows(vector<Models::ListScenesResponseBodyScenesFlows> && flows) { DARABONBA_PTR_SET_RVALUE(flows_, flows) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListScenesResponseBodyScenes& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // sceneId Field Functions 
    bool hasSceneId() const { return this->sceneId_ != nullptr;};
    void deleteSceneId() { this->sceneId_ = nullptr;};
    inline string sceneId() const { DARABONBA_PTR_GET_DEFAULT(sceneId_, "") };
    inline ListScenesResponseBodyScenes& setSceneId(string sceneId) { DARABONBA_PTR_SET_VALUE(sceneId_, sceneId) };


  protected:
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<vector<Models::ListScenesResponseBodyScenesFlows>> flows_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> sceneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
