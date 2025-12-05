// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPTSSCENERESPONSEBODYSCENEVIEWLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTPTSSCENERESPONSEBODYSCENEVIEWLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PTS20201020
{
namespace Models
{
  class ListPtsSceneResponseBodySceneViewList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPtsSceneResponseBodySceneViewList& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(SceneId, sceneId_);
      DARABONBA_PTR_TO_JSON(SceneName, sceneName_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListPtsSceneResponseBodySceneViewList& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(SceneId, sceneId_);
      DARABONBA_PTR_FROM_JSON(SceneName, sceneName_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ListPtsSceneResponseBodySceneViewList() = default ;
    ListPtsSceneResponseBodySceneViewList(const ListPtsSceneResponseBodySceneViewList &) = default ;
    ListPtsSceneResponseBodySceneViewList(ListPtsSceneResponseBodySceneViewList &&) = default ;
    ListPtsSceneResponseBodySceneViewList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPtsSceneResponseBodySceneViewList() = default ;
    ListPtsSceneResponseBodySceneViewList& operator=(const ListPtsSceneResponseBodySceneViewList &) = default ;
    ListPtsSceneResponseBodySceneViewList& operator=(ListPtsSceneResponseBodySceneViewList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && return this->sceneId_ == nullptr && return this->sceneName_ == nullptr && return this->status_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListPtsSceneResponseBodySceneViewList& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // sceneId Field Functions 
    bool hasSceneId() const { return this->sceneId_ != nullptr;};
    void deleteSceneId() { this->sceneId_ = nullptr;};
    inline string sceneId() const { DARABONBA_PTR_GET_DEFAULT(sceneId_, "") };
    inline ListPtsSceneResponseBodySceneViewList& setSceneId(string sceneId) { DARABONBA_PTR_SET_VALUE(sceneId_, sceneId) };


    // sceneName Field Functions 
    bool hasSceneName() const { return this->sceneName_ != nullptr;};
    void deleteSceneName() { this->sceneName_ = nullptr;};
    inline string sceneName() const { DARABONBA_PTR_GET_DEFAULT(sceneName_, "") };
    inline ListPtsSceneResponseBodySceneViewList& setSceneName(string sceneName) { DARABONBA_PTR_SET_VALUE(sceneName_, sceneName) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListPtsSceneResponseBodySceneViewList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The time when the PTS scenario was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // The scenario ID.
    std::shared_ptr<string> sceneId_ = nullptr;
    // The scenario name.
    std::shared_ptr<string> sceneName_ = nullptr;
    // The status of the PTS scenario. Valid values:
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PTS20201020
#endif
