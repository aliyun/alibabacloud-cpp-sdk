// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDATASETREQUESTDATASETCONFIGSEARCHSOURCECONFIGSSEARCHSOURCERESPONSECONFIG_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDATASETREQUESTDATASETCONFIGSEARCHSOURCECONFIGSSEARCHSOURCERESPONSECONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateDatasetRequestDatasetConfigSearchSourceConfigsSearchSourceResponseConfigJqNodes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class UpdateDatasetRequestDatasetConfigSearchSourceConfigsSearchSourceResponseConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateDatasetRequestDatasetConfigSearchSourceConfigsSearchSourceResponseConfig& obj) { 
      DARABONBA_PTR_TO_JSON(JqNodes, jqNodes_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateDatasetRequestDatasetConfigSearchSourceConfigsSearchSourceResponseConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(JqNodes, jqNodes_);
    };
    UpdateDatasetRequestDatasetConfigSearchSourceConfigsSearchSourceResponseConfig() = default ;
    UpdateDatasetRequestDatasetConfigSearchSourceConfigsSearchSourceResponseConfig(const UpdateDatasetRequestDatasetConfigSearchSourceConfigsSearchSourceResponseConfig &) = default ;
    UpdateDatasetRequestDatasetConfigSearchSourceConfigsSearchSourceResponseConfig(UpdateDatasetRequestDatasetConfigSearchSourceConfigsSearchSourceResponseConfig &&) = default ;
    UpdateDatasetRequestDatasetConfigSearchSourceConfigsSearchSourceResponseConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateDatasetRequestDatasetConfigSearchSourceConfigsSearchSourceResponseConfig() = default ;
    UpdateDatasetRequestDatasetConfigSearchSourceConfigsSearchSourceResponseConfig& operator=(const UpdateDatasetRequestDatasetConfigSearchSourceConfigsSearchSourceResponseConfig &) = default ;
    UpdateDatasetRequestDatasetConfigSearchSourceConfigsSearchSourceResponseConfig& operator=(UpdateDatasetRequestDatasetConfigSearchSourceConfigsSearchSourceResponseConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->jqNodes_ == nullptr; };
    // jqNodes Field Functions 
    bool hasJqNodes() const { return this->jqNodes_ != nullptr;};
    void deleteJqNodes() { this->jqNodes_ = nullptr;};
    inline const vector<Models::UpdateDatasetRequestDatasetConfigSearchSourceConfigsSearchSourceResponseConfigJqNodes> & jqNodes() const { DARABONBA_PTR_GET_CONST(jqNodes_, vector<Models::UpdateDatasetRequestDatasetConfigSearchSourceConfigsSearchSourceResponseConfigJqNodes>) };
    inline vector<Models::UpdateDatasetRequestDatasetConfigSearchSourceConfigsSearchSourceResponseConfigJqNodes> jqNodes() { DARABONBA_PTR_GET(jqNodes_, vector<Models::UpdateDatasetRequestDatasetConfigSearchSourceConfigsSearchSourceResponseConfigJqNodes>) };
    inline UpdateDatasetRequestDatasetConfigSearchSourceConfigsSearchSourceResponseConfig& setJqNodes(const vector<Models::UpdateDatasetRequestDatasetConfigSearchSourceConfigsSearchSourceResponseConfigJqNodes> & jqNodes) { DARABONBA_PTR_SET_VALUE(jqNodes_, jqNodes) };
    inline UpdateDatasetRequestDatasetConfigSearchSourceConfigsSearchSourceResponseConfig& setJqNodes(vector<Models::UpdateDatasetRequestDatasetConfigSearchSourceConfigsSearchSourceResponseConfigJqNodes> && jqNodes) { DARABONBA_PTR_SET_RVALUE(jqNodes_, jqNodes) };


  protected:
    std::shared_ptr<vector<Models::UpdateDatasetRequestDatasetConfigSearchSourceConfigsSearchSourceResponseConfigJqNodes>> jqNodes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
