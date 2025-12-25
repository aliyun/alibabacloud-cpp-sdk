// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESUBSCENESEQSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATESUBSCENESEQSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Tdsr20200101
{
namespace Models
{
  class UpdateSubSceneSeqShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateSubSceneSeqShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(SceneId, sceneId_);
      DARABONBA_PTR_TO_JSON(SortSubSceneIds, sortSubSceneIdsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateSubSceneSeqShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(SceneId, sceneId_);
      DARABONBA_PTR_FROM_JSON(SortSubSceneIds, sortSubSceneIdsShrink_);
    };
    UpdateSubSceneSeqShrinkRequest() = default ;
    UpdateSubSceneSeqShrinkRequest(const UpdateSubSceneSeqShrinkRequest &) = default ;
    UpdateSubSceneSeqShrinkRequest(UpdateSubSceneSeqShrinkRequest &&) = default ;
    UpdateSubSceneSeqShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateSubSceneSeqShrinkRequest() = default ;
    UpdateSubSceneSeqShrinkRequest& operator=(const UpdateSubSceneSeqShrinkRequest &) = default ;
    UpdateSubSceneSeqShrinkRequest& operator=(UpdateSubSceneSeqShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->sceneId_ == nullptr
        && return this->sortSubSceneIdsShrink_ == nullptr; };
    // sceneId Field Functions 
    bool hasSceneId() const { return this->sceneId_ != nullptr;};
    void deleteSceneId() { this->sceneId_ = nullptr;};
    inline string sceneId() const { DARABONBA_PTR_GET_DEFAULT(sceneId_, "") };
    inline UpdateSubSceneSeqShrinkRequest& setSceneId(string sceneId) { DARABONBA_PTR_SET_VALUE(sceneId_, sceneId) };


    // sortSubSceneIdsShrink Field Functions 
    bool hasSortSubSceneIdsShrink() const { return this->sortSubSceneIdsShrink_ != nullptr;};
    void deleteSortSubSceneIdsShrink() { this->sortSubSceneIdsShrink_ = nullptr;};
    inline string sortSubSceneIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(sortSubSceneIdsShrink_, "") };
    inline UpdateSubSceneSeqShrinkRequest& setSortSubSceneIdsShrink(string sortSubSceneIdsShrink) { DARABONBA_PTR_SET_VALUE(sortSubSceneIdsShrink_, sortSubSceneIdsShrink) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> sceneId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> sortSubSceneIdsShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Tdsr20200101
#endif
