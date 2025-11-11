// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDATASETREQUESTDATASETCONFIG_HPP_
#define ALIBABACLOUD_MODELS_CREATEDATASETREQUESTDATASETCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateDatasetRequestDatasetConfigSearchSourceConfigs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class CreateDatasetRequestDatasetConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDatasetRequestDatasetConfig& obj) { 
      DARABONBA_PTR_TO_JSON(SearchSourceConfigs, searchSourceConfigs_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDatasetRequestDatasetConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(SearchSourceConfigs, searchSourceConfigs_);
    };
    CreateDatasetRequestDatasetConfig() = default ;
    CreateDatasetRequestDatasetConfig(const CreateDatasetRequestDatasetConfig &) = default ;
    CreateDatasetRequestDatasetConfig(CreateDatasetRequestDatasetConfig &&) = default ;
    CreateDatasetRequestDatasetConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDatasetRequestDatasetConfig() = default ;
    CreateDatasetRequestDatasetConfig& operator=(const CreateDatasetRequestDatasetConfig &) = default ;
    CreateDatasetRequestDatasetConfig& operator=(CreateDatasetRequestDatasetConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->searchSourceConfigs_ == nullptr; };
    // searchSourceConfigs Field Functions 
    bool hasSearchSourceConfigs() const { return this->searchSourceConfigs_ != nullptr;};
    void deleteSearchSourceConfigs() { this->searchSourceConfigs_ = nullptr;};
    inline const vector<Models::CreateDatasetRequestDatasetConfigSearchSourceConfigs> & searchSourceConfigs() const { DARABONBA_PTR_GET_CONST(searchSourceConfigs_, vector<Models::CreateDatasetRequestDatasetConfigSearchSourceConfigs>) };
    inline vector<Models::CreateDatasetRequestDatasetConfigSearchSourceConfigs> searchSourceConfigs() { DARABONBA_PTR_GET(searchSourceConfigs_, vector<Models::CreateDatasetRequestDatasetConfigSearchSourceConfigs>) };
    inline CreateDatasetRequestDatasetConfig& setSearchSourceConfigs(const vector<Models::CreateDatasetRequestDatasetConfigSearchSourceConfigs> & searchSourceConfigs) { DARABONBA_PTR_SET_VALUE(searchSourceConfigs_, searchSourceConfigs) };
    inline CreateDatasetRequestDatasetConfig& setSearchSourceConfigs(vector<Models::CreateDatasetRequestDatasetConfigSearchSourceConfigs> && searchSourceConfigs) { DARABONBA_PTR_SET_RVALUE(searchSourceConfigs_, searchSourceConfigs) };


  protected:
    std::shared_ptr<vector<Models::CreateDatasetRequestDatasetConfigSearchSourceConfigs>> searchSourceConfigs_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
