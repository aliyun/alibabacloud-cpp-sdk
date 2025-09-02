// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DSGDESENSPLANUPDATESTATUSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DSGDESENSPLANUPDATESTATUSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class DsgDesensPlanUpdateStatusShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DsgDesensPlanUpdateStatusShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Ids, idsShrink_);
      DARABONBA_PTR_TO_JSON(SceneCode, sceneCode_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DsgDesensPlanUpdateStatusShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Ids, idsShrink_);
      DARABONBA_PTR_FROM_JSON(SceneCode, sceneCode_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DsgDesensPlanUpdateStatusShrinkRequest() = default ;
    DsgDesensPlanUpdateStatusShrinkRequest(const DsgDesensPlanUpdateStatusShrinkRequest &) = default ;
    DsgDesensPlanUpdateStatusShrinkRequest(DsgDesensPlanUpdateStatusShrinkRequest &&) = default ;
    DsgDesensPlanUpdateStatusShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DsgDesensPlanUpdateStatusShrinkRequest() = default ;
    DsgDesensPlanUpdateStatusShrinkRequest& operator=(const DsgDesensPlanUpdateStatusShrinkRequest &) = default ;
    DsgDesensPlanUpdateStatusShrinkRequest& operator=(DsgDesensPlanUpdateStatusShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->idsShrink_ != nullptr
        && this->sceneCode_ != nullptr && this->status_ != nullptr; };
    // idsShrink Field Functions 
    bool hasIdsShrink() const { return this->idsShrink_ != nullptr;};
    void deleteIdsShrink() { this->idsShrink_ = nullptr;};
    inline string idsShrink() const { DARABONBA_PTR_GET_DEFAULT(idsShrink_, "") };
    inline DsgDesensPlanUpdateStatusShrinkRequest& setIdsShrink(string idsShrink) { DARABONBA_PTR_SET_VALUE(idsShrink_, idsShrink) };


    // sceneCode Field Functions 
    bool hasSceneCode() const { return this->sceneCode_ != nullptr;};
    void deleteSceneCode() { this->sceneCode_ = nullptr;};
    inline string sceneCode() const { DARABONBA_PTR_GET_DEFAULT(sceneCode_, "") };
    inline DsgDesensPlanUpdateStatusShrinkRequest& setSceneCode(string sceneCode) { DARABONBA_PTR_SET_VALUE(sceneCode_, sceneCode) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline DsgDesensPlanUpdateStatusShrinkRequest& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // A collection of IDs of the data masking rules of which the status you want to modify.
    // 
    // This parameter is required.
    std::shared_ptr<string> idsShrink_ = nullptr;
    // The code of the level-1 data masking scenario to which the rule belongs. Valid values:
    // 
    // *   dataworks_display_desense_code: masking of displayed data in DataStudio and Data Map
    // *   maxcompute_desense_code: data masking at the MaxCompute compute engine layer
    // *   maxcompute_new_desense_code: data masking at the MaxCompute compute engine layer (new)
    // *   hologres_display_desense_code: data masking at the Hologres compute engine layer
    // *   dataworks_data_integration_desense_code: static data masking in Data Integration
    // *   dataworks_analysis_desense_code: masking of displayed data in DataAnalysis
    // 
    // This parameter is required.
    std::shared_ptr<string> sceneCode_ = nullptr;
    // The status of the data masking rule. Valid values:
    // 
    // *   0: expired
    // *   1: effective
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
