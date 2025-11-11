// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDATASETREQUESTDATASETCONFIG_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDATASETREQUESTDATASETCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateDatasetRequestDatasetConfigSearchSourceConfigs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class UpdateDatasetRequestDatasetConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateDatasetRequestDatasetConfig& obj) { 
      DARABONBA_PTR_TO_JSON(SearchSourceConfigs, searchSourceConfigs_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateDatasetRequestDatasetConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(SearchSourceConfigs, searchSourceConfigs_);
    };
    UpdateDatasetRequestDatasetConfig() = default ;
    UpdateDatasetRequestDatasetConfig(const UpdateDatasetRequestDatasetConfig &) = default ;
    UpdateDatasetRequestDatasetConfig(UpdateDatasetRequestDatasetConfig &&) = default ;
    UpdateDatasetRequestDatasetConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateDatasetRequestDatasetConfig() = default ;
    UpdateDatasetRequestDatasetConfig& operator=(const UpdateDatasetRequestDatasetConfig &) = default ;
    UpdateDatasetRequestDatasetConfig& operator=(UpdateDatasetRequestDatasetConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->searchSourceConfigs_ == nullptr; };
    // searchSourceConfigs Field Functions 
    bool hasSearchSourceConfigs() const { return this->searchSourceConfigs_ != nullptr;};
    void deleteSearchSourceConfigs() { this->searchSourceConfigs_ = nullptr;};
    inline const vector<Models::UpdateDatasetRequestDatasetConfigSearchSourceConfigs> & searchSourceConfigs() const { DARABONBA_PTR_GET_CONST(searchSourceConfigs_, vector<Models::UpdateDatasetRequestDatasetConfigSearchSourceConfigs>) };
    inline vector<Models::UpdateDatasetRequestDatasetConfigSearchSourceConfigs> searchSourceConfigs() { DARABONBA_PTR_GET(searchSourceConfigs_, vector<Models::UpdateDatasetRequestDatasetConfigSearchSourceConfigs>) };
    inline UpdateDatasetRequestDatasetConfig& setSearchSourceConfigs(const vector<Models::UpdateDatasetRequestDatasetConfigSearchSourceConfigs> & searchSourceConfigs) { DARABONBA_PTR_SET_VALUE(searchSourceConfigs_, searchSourceConfigs) };
    inline UpdateDatasetRequestDatasetConfig& setSearchSourceConfigs(vector<Models::UpdateDatasetRequestDatasetConfigSearchSourceConfigs> && searchSourceConfigs) { DARABONBA_PTR_SET_RVALUE(searchSourceConfigs_, searchSourceConfigs) };


  protected:
    std::shared_ptr<vector<Models::UpdateDatasetRequestDatasetConfigSearchSourceConfigs>> searchSourceConfigs_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
