// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDATASETREQUESTDATASETCONFIGSEARCHSOURCECONFIGS_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDATASETREQUESTDATASETCONFIGSEARCHSOURCECONFIGS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateDatasetRequestDatasetConfigSearchSourceConfigsSearchSourceRequestConfig.hpp>
#include <alibabacloud/models/UpdateDatasetRequestDatasetConfigSearchSourceConfigsSearchSourceResponseConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class UpdateDatasetRequestDatasetConfigSearchSourceConfigs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateDatasetRequestDatasetConfigSearchSourceConfigs& obj) { 
      DARABONBA_PTR_TO_JSON(DemoQuery, demoQuery_);
      DARABONBA_PTR_TO_JSON(SearchSourceRequestConfig, searchSourceRequestConfig_);
      DARABONBA_PTR_TO_JSON(SearchSourceResponseConfig, searchSourceResponseConfig_);
      DARABONBA_PTR_TO_JSON(Size, size_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateDatasetRequestDatasetConfigSearchSourceConfigs& obj) { 
      DARABONBA_PTR_FROM_JSON(DemoQuery, demoQuery_);
      DARABONBA_PTR_FROM_JSON(SearchSourceRequestConfig, searchSourceRequestConfig_);
      DARABONBA_PTR_FROM_JSON(SearchSourceResponseConfig, searchSourceResponseConfig_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
    };
    UpdateDatasetRequestDatasetConfigSearchSourceConfigs() = default ;
    UpdateDatasetRequestDatasetConfigSearchSourceConfigs(const UpdateDatasetRequestDatasetConfigSearchSourceConfigs &) = default ;
    UpdateDatasetRequestDatasetConfigSearchSourceConfigs(UpdateDatasetRequestDatasetConfigSearchSourceConfigs &&) = default ;
    UpdateDatasetRequestDatasetConfigSearchSourceConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateDatasetRequestDatasetConfigSearchSourceConfigs() = default ;
    UpdateDatasetRequestDatasetConfigSearchSourceConfigs& operator=(const UpdateDatasetRequestDatasetConfigSearchSourceConfigs &) = default ;
    UpdateDatasetRequestDatasetConfigSearchSourceConfigs& operator=(UpdateDatasetRequestDatasetConfigSearchSourceConfigs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->demoQuery_ != nullptr
        && this->searchSourceRequestConfig_ != nullptr && this->searchSourceResponseConfig_ != nullptr && this->size_ != nullptr; };
    // demoQuery Field Functions 
    bool hasDemoQuery() const { return this->demoQuery_ != nullptr;};
    void deleteDemoQuery() { this->demoQuery_ = nullptr;};
    inline string demoQuery() const { DARABONBA_PTR_GET_DEFAULT(demoQuery_, "") };
    inline UpdateDatasetRequestDatasetConfigSearchSourceConfigs& setDemoQuery(string demoQuery) { DARABONBA_PTR_SET_VALUE(demoQuery_, demoQuery) };


    // searchSourceRequestConfig Field Functions 
    bool hasSearchSourceRequestConfig() const { return this->searchSourceRequestConfig_ != nullptr;};
    void deleteSearchSourceRequestConfig() { this->searchSourceRequestConfig_ = nullptr;};
    inline const Models::UpdateDatasetRequestDatasetConfigSearchSourceConfigsSearchSourceRequestConfig & searchSourceRequestConfig() const { DARABONBA_PTR_GET_CONST(searchSourceRequestConfig_, Models::UpdateDatasetRequestDatasetConfigSearchSourceConfigsSearchSourceRequestConfig) };
    inline Models::UpdateDatasetRequestDatasetConfigSearchSourceConfigsSearchSourceRequestConfig searchSourceRequestConfig() { DARABONBA_PTR_GET(searchSourceRequestConfig_, Models::UpdateDatasetRequestDatasetConfigSearchSourceConfigsSearchSourceRequestConfig) };
    inline UpdateDatasetRequestDatasetConfigSearchSourceConfigs& setSearchSourceRequestConfig(const Models::UpdateDatasetRequestDatasetConfigSearchSourceConfigsSearchSourceRequestConfig & searchSourceRequestConfig) { DARABONBA_PTR_SET_VALUE(searchSourceRequestConfig_, searchSourceRequestConfig) };
    inline UpdateDatasetRequestDatasetConfigSearchSourceConfigs& setSearchSourceRequestConfig(Models::UpdateDatasetRequestDatasetConfigSearchSourceConfigsSearchSourceRequestConfig && searchSourceRequestConfig) { DARABONBA_PTR_SET_RVALUE(searchSourceRequestConfig_, searchSourceRequestConfig) };


    // searchSourceResponseConfig Field Functions 
    bool hasSearchSourceResponseConfig() const { return this->searchSourceResponseConfig_ != nullptr;};
    void deleteSearchSourceResponseConfig() { this->searchSourceResponseConfig_ = nullptr;};
    inline const Models::UpdateDatasetRequestDatasetConfigSearchSourceConfigsSearchSourceResponseConfig & searchSourceResponseConfig() const { DARABONBA_PTR_GET_CONST(searchSourceResponseConfig_, Models::UpdateDatasetRequestDatasetConfigSearchSourceConfigsSearchSourceResponseConfig) };
    inline Models::UpdateDatasetRequestDatasetConfigSearchSourceConfigsSearchSourceResponseConfig searchSourceResponseConfig() { DARABONBA_PTR_GET(searchSourceResponseConfig_, Models::UpdateDatasetRequestDatasetConfigSearchSourceConfigsSearchSourceResponseConfig) };
    inline UpdateDatasetRequestDatasetConfigSearchSourceConfigs& setSearchSourceResponseConfig(const Models::UpdateDatasetRequestDatasetConfigSearchSourceConfigsSearchSourceResponseConfig & searchSourceResponseConfig) { DARABONBA_PTR_SET_VALUE(searchSourceResponseConfig_, searchSourceResponseConfig) };
    inline UpdateDatasetRequestDatasetConfigSearchSourceConfigs& setSearchSourceResponseConfig(Models::UpdateDatasetRequestDatasetConfigSearchSourceConfigsSearchSourceResponseConfig && searchSourceResponseConfig) { DARABONBA_PTR_SET_RVALUE(searchSourceResponseConfig_, searchSourceResponseConfig) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int32_t size() const { DARABONBA_PTR_GET_DEFAULT(size_, 0) };
    inline UpdateDatasetRequestDatasetConfigSearchSourceConfigs& setSize(int32_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


  protected:
    std::shared_ptr<string> demoQuery_ = nullptr;
    std::shared_ptr<Models::UpdateDatasetRequestDatasetConfigSearchSourceConfigsSearchSourceRequestConfig> searchSourceRequestConfig_ = nullptr;
    std::shared_ptr<Models::UpdateDatasetRequestDatasetConfigSearchSourceConfigsSearchSourceResponseConfig> searchSourceResponseConfig_ = nullptr;
    std::shared_ptr<int32_t> size_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
