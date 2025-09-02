// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DSGSCENEADDORUPDATESCENEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DSGSCENEADDORUPDATESCENEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DsgSceneAddOrUpdateSceneRequestScenes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class DsgSceneAddOrUpdateSceneRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DsgSceneAddOrUpdateSceneRequest& obj) { 
      DARABONBA_PTR_TO_JSON(scenes, scenes_);
    };
    friend void from_json(const Darabonba::Json& j, DsgSceneAddOrUpdateSceneRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(scenes, scenes_);
    };
    DsgSceneAddOrUpdateSceneRequest() = default ;
    DsgSceneAddOrUpdateSceneRequest(const DsgSceneAddOrUpdateSceneRequest &) = default ;
    DsgSceneAddOrUpdateSceneRequest(DsgSceneAddOrUpdateSceneRequest &&) = default ;
    DsgSceneAddOrUpdateSceneRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DsgSceneAddOrUpdateSceneRequest() = default ;
    DsgSceneAddOrUpdateSceneRequest& operator=(const DsgSceneAddOrUpdateSceneRequest &) = default ;
    DsgSceneAddOrUpdateSceneRequest& operator=(DsgSceneAddOrUpdateSceneRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->scenes_ != nullptr; };
    // scenes Field Functions 
    bool hasScenes() const { return this->scenes_ != nullptr;};
    void deleteScenes() { this->scenes_ = nullptr;};
    inline const vector<DsgSceneAddOrUpdateSceneRequestScenes> & scenes() const { DARABONBA_PTR_GET_CONST(scenes_, vector<DsgSceneAddOrUpdateSceneRequestScenes>) };
    inline vector<DsgSceneAddOrUpdateSceneRequestScenes> scenes() { DARABONBA_PTR_GET(scenes_, vector<DsgSceneAddOrUpdateSceneRequestScenes>) };
    inline DsgSceneAddOrUpdateSceneRequest& setScenes(const vector<DsgSceneAddOrUpdateSceneRequestScenes> & scenes) { DARABONBA_PTR_SET_VALUE(scenes_, scenes) };
    inline DsgSceneAddOrUpdateSceneRequest& setScenes(vector<DsgSceneAddOrUpdateSceneRequestScenes> && scenes) { DARABONBA_PTR_SET_RVALUE(scenes_, scenes) };


  protected:
    // The information about the level-2 data masking scenario.
    // 
    // This parameter is required.
    std::shared_ptr<vector<DsgSceneAddOrUpdateSceneRequestScenes>> scenes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
