// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DSGDESENSPLANUPDATESTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DSGDESENSPLANUPDATESTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class DsgDesensPlanUpdateStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DsgDesensPlanUpdateStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Ids, ids_);
      DARABONBA_PTR_TO_JSON(SceneCode, sceneCode_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DsgDesensPlanUpdateStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Ids, ids_);
      DARABONBA_PTR_FROM_JSON(SceneCode, sceneCode_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DsgDesensPlanUpdateStatusRequest() = default ;
    DsgDesensPlanUpdateStatusRequest(const DsgDesensPlanUpdateStatusRequest &) = default ;
    DsgDesensPlanUpdateStatusRequest(DsgDesensPlanUpdateStatusRequest &&) = default ;
    DsgDesensPlanUpdateStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DsgDesensPlanUpdateStatusRequest() = default ;
    DsgDesensPlanUpdateStatusRequest& operator=(const DsgDesensPlanUpdateStatusRequest &) = default ;
    DsgDesensPlanUpdateStatusRequest& operator=(DsgDesensPlanUpdateStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ids_ != nullptr
        && this->sceneCode_ != nullptr && this->status_ != nullptr; };
    // ids Field Functions 
    bool hasIds() const { return this->ids_ != nullptr;};
    void deleteIds() { this->ids_ = nullptr;};
    inline const vector<int32_t> & ids() const { DARABONBA_PTR_GET_CONST(ids_, vector<int32_t>) };
    inline vector<int32_t> ids() { DARABONBA_PTR_GET(ids_, vector<int32_t>) };
    inline DsgDesensPlanUpdateStatusRequest& setIds(const vector<int32_t> & ids) { DARABONBA_PTR_SET_VALUE(ids_, ids) };
    inline DsgDesensPlanUpdateStatusRequest& setIds(vector<int32_t> && ids) { DARABONBA_PTR_SET_RVALUE(ids_, ids) };


    // sceneCode Field Functions 
    bool hasSceneCode() const { return this->sceneCode_ != nullptr;};
    void deleteSceneCode() { this->sceneCode_ = nullptr;};
    inline string sceneCode() const { DARABONBA_PTR_GET_DEFAULT(sceneCode_, "") };
    inline DsgDesensPlanUpdateStatusRequest& setSceneCode(string sceneCode) { DARABONBA_PTR_SET_VALUE(sceneCode_, sceneCode) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline DsgDesensPlanUpdateStatusRequest& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // A collection of IDs of the data masking rules of which the status you want to modify.
    // 
    // This parameter is required.
    std::shared_ptr<vector<int32_t>> ids_ = nullptr;
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
