// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPTSSCENEBASELINERESPONSEBODYBASELINE_HPP_
#define ALIBABACLOUD_MODELS_GETPTSSCENEBASELINERESPONSEBODYBASELINE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetPtsSceneBaseLineResponseBodyBaselineApiBaselines.hpp>
#include <alibabacloud/models/GetPtsSceneBaseLineResponseBodyBaselineSceneBaseline.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PTS20201020
{
namespace Models
{
  class GetPtsSceneBaseLineResponseBodyBaseline : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPtsSceneBaseLineResponseBodyBaseline& obj) { 
      DARABONBA_PTR_TO_JSON(ApiBaselines, apiBaselines_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(SceneBaseline, sceneBaseline_);
    };
    friend void from_json(const Darabonba::Json& j, GetPtsSceneBaseLineResponseBodyBaseline& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiBaselines, apiBaselines_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(SceneBaseline, sceneBaseline_);
    };
    GetPtsSceneBaseLineResponseBodyBaseline() = default ;
    GetPtsSceneBaseLineResponseBodyBaseline(const GetPtsSceneBaseLineResponseBodyBaseline &) = default ;
    GetPtsSceneBaseLineResponseBodyBaseline(GetPtsSceneBaseLineResponseBodyBaseline &&) = default ;
    GetPtsSceneBaseLineResponseBodyBaseline(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPtsSceneBaseLineResponseBodyBaseline() = default ;
    GetPtsSceneBaseLineResponseBodyBaseline& operator=(const GetPtsSceneBaseLineResponseBodyBaseline &) = default ;
    GetPtsSceneBaseLineResponseBodyBaseline& operator=(GetPtsSceneBaseLineResponseBodyBaseline &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiBaselines_ == nullptr
        && return this->name_ == nullptr && return this->sceneBaseline_ == nullptr; };
    // apiBaselines Field Functions 
    bool hasApiBaselines() const { return this->apiBaselines_ != nullptr;};
    void deleteApiBaselines() { this->apiBaselines_ = nullptr;};
    inline const vector<Models::GetPtsSceneBaseLineResponseBodyBaselineApiBaselines> & apiBaselines() const { DARABONBA_PTR_GET_CONST(apiBaselines_, vector<Models::GetPtsSceneBaseLineResponseBodyBaselineApiBaselines>) };
    inline vector<Models::GetPtsSceneBaseLineResponseBodyBaselineApiBaselines> apiBaselines() { DARABONBA_PTR_GET(apiBaselines_, vector<Models::GetPtsSceneBaseLineResponseBodyBaselineApiBaselines>) };
    inline GetPtsSceneBaseLineResponseBodyBaseline& setApiBaselines(const vector<Models::GetPtsSceneBaseLineResponseBodyBaselineApiBaselines> & apiBaselines) { DARABONBA_PTR_SET_VALUE(apiBaselines_, apiBaselines) };
    inline GetPtsSceneBaseLineResponseBodyBaseline& setApiBaselines(vector<Models::GetPtsSceneBaseLineResponseBodyBaselineApiBaselines> && apiBaselines) { DARABONBA_PTR_SET_RVALUE(apiBaselines_, apiBaselines) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetPtsSceneBaseLineResponseBodyBaseline& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // sceneBaseline Field Functions 
    bool hasSceneBaseline() const { return this->sceneBaseline_ != nullptr;};
    void deleteSceneBaseline() { this->sceneBaseline_ = nullptr;};
    inline const Models::GetPtsSceneBaseLineResponseBodyBaselineSceneBaseline & sceneBaseline() const { DARABONBA_PTR_GET_CONST(sceneBaseline_, Models::GetPtsSceneBaseLineResponseBodyBaselineSceneBaseline) };
    inline Models::GetPtsSceneBaseLineResponseBodyBaselineSceneBaseline sceneBaseline() { DARABONBA_PTR_GET(sceneBaseline_, Models::GetPtsSceneBaseLineResponseBodyBaselineSceneBaseline) };
    inline GetPtsSceneBaseLineResponseBodyBaseline& setSceneBaseline(const Models::GetPtsSceneBaseLineResponseBodyBaselineSceneBaseline & sceneBaseline) { DARABONBA_PTR_SET_VALUE(sceneBaseline_, sceneBaseline) };
    inline GetPtsSceneBaseLineResponseBodyBaseline& setSceneBaseline(Models::GetPtsSceneBaseLineResponseBodyBaselineSceneBaseline && sceneBaseline) { DARABONBA_PTR_SET_RVALUE(sceneBaseline_, sceneBaseline) };


  protected:
    // null
    std::shared_ptr<vector<Models::GetPtsSceneBaseLineResponseBodyBaselineApiBaselines>> apiBaselines_ = nullptr;
    // Scenario
    std::shared_ptr<string> name_ = nullptr;
    // null
    std::shared_ptr<Models::GetPtsSceneBaseLineResponseBodyBaselineSceneBaseline> sceneBaseline_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PTS20201020
#endif
