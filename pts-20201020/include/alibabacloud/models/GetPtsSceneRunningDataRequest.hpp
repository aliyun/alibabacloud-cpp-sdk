// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPTSSCENERUNNINGDATAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETPTSSCENERUNNINGDATAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PTS20201020
{
namespace Models
{
  class GetPtsSceneRunningDataRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPtsSceneRunningDataRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PlanId, planId_);
      DARABONBA_PTR_TO_JSON(SceneId, sceneId_);
    };
    friend void from_json(const Darabonba::Json& j, GetPtsSceneRunningDataRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PlanId, planId_);
      DARABONBA_PTR_FROM_JSON(SceneId, sceneId_);
    };
    GetPtsSceneRunningDataRequest() = default ;
    GetPtsSceneRunningDataRequest(const GetPtsSceneRunningDataRequest &) = default ;
    GetPtsSceneRunningDataRequest(GetPtsSceneRunningDataRequest &&) = default ;
    GetPtsSceneRunningDataRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPtsSceneRunningDataRequest() = default ;
    GetPtsSceneRunningDataRequest& operator=(const GetPtsSceneRunningDataRequest &) = default ;
    GetPtsSceneRunningDataRequest& operator=(GetPtsSceneRunningDataRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->planId_ == nullptr
        && return this->sceneId_ == nullptr; };
    // planId Field Functions 
    bool hasPlanId() const { return this->planId_ != nullptr;};
    void deletePlanId() { this->planId_ = nullptr;};
    inline string planId() const { DARABONBA_PTR_GET_DEFAULT(planId_, "") };
    inline GetPtsSceneRunningDataRequest& setPlanId(string planId) { DARABONBA_PTR_SET_VALUE(planId_, planId) };


    // sceneId Field Functions 
    bool hasSceneId() const { return this->sceneId_ != nullptr;};
    void deleteSceneId() { this->sceneId_ = nullptr;};
    inline string sceneId() const { DARABONBA_PTR_GET_DEFAULT(sceneId_, "") };
    inline GetPtsSceneRunningDataRequest& setSceneId(string sceneId) { DARABONBA_PTR_SET_VALUE(sceneId_, sceneId) };


  protected:
    // The ID of the stress testing task. You can obtain the task ID by calling the StartPtsScene operation.
    // 
    // This parameter is required.
    std::shared_ptr<string> planId_ = nullptr;
    // The scenario ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> sceneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PTS20201020
#endif
