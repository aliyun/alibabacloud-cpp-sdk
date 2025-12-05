// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADJUSTPTSSCENESPEEDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADJUSTPTSSCENESPEEDREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AdjustPtsSceneSpeedRequestApiSpeedList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PTS20201020
{
namespace Models
{
  class AdjustPtsSceneSpeedRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AdjustPtsSceneSpeedRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApiSpeedList, apiSpeedList_);
      DARABONBA_PTR_TO_JSON(SceneId, sceneId_);
    };
    friend void from_json(const Darabonba::Json& j, AdjustPtsSceneSpeedRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiSpeedList, apiSpeedList_);
      DARABONBA_PTR_FROM_JSON(SceneId, sceneId_);
    };
    AdjustPtsSceneSpeedRequest() = default ;
    AdjustPtsSceneSpeedRequest(const AdjustPtsSceneSpeedRequest &) = default ;
    AdjustPtsSceneSpeedRequest(AdjustPtsSceneSpeedRequest &&) = default ;
    AdjustPtsSceneSpeedRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AdjustPtsSceneSpeedRequest() = default ;
    AdjustPtsSceneSpeedRequest& operator=(const AdjustPtsSceneSpeedRequest &) = default ;
    AdjustPtsSceneSpeedRequest& operator=(AdjustPtsSceneSpeedRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiSpeedList_ == nullptr
        && return this->sceneId_ == nullptr; };
    // apiSpeedList Field Functions 
    bool hasApiSpeedList() const { return this->apiSpeedList_ != nullptr;};
    void deleteApiSpeedList() { this->apiSpeedList_ = nullptr;};
    inline const vector<AdjustPtsSceneSpeedRequestApiSpeedList> & apiSpeedList() const { DARABONBA_PTR_GET_CONST(apiSpeedList_, vector<AdjustPtsSceneSpeedRequestApiSpeedList>) };
    inline vector<AdjustPtsSceneSpeedRequestApiSpeedList> apiSpeedList() { DARABONBA_PTR_GET(apiSpeedList_, vector<AdjustPtsSceneSpeedRequestApiSpeedList>) };
    inline AdjustPtsSceneSpeedRequest& setApiSpeedList(const vector<AdjustPtsSceneSpeedRequestApiSpeedList> & apiSpeedList) { DARABONBA_PTR_SET_VALUE(apiSpeedList_, apiSpeedList) };
    inline AdjustPtsSceneSpeedRequest& setApiSpeedList(vector<AdjustPtsSceneSpeedRequestApiSpeedList> && apiSpeedList) { DARABONBA_PTR_SET_RVALUE(apiSpeedList_, apiSpeedList) };


    // sceneId Field Functions 
    bool hasSceneId() const { return this->sceneId_ != nullptr;};
    void deleteSceneId() { this->sceneId_ = nullptr;};
    inline string sceneId() const { DARABONBA_PTR_GET_DEFAULT(sceneId_, "") };
    inline AdjustPtsSceneSpeedRequest& setSceneId(string sceneId) { DARABONBA_PTR_SET_VALUE(sceneId_, sceneId) };


  protected:
    // The stress testing speed in the PTS scenario.
    std::shared_ptr<vector<AdjustPtsSceneSpeedRequestApiSpeedList>> apiSpeedList_ = nullptr;
    // The scenario ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> sceneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PTS20201020
#endif
