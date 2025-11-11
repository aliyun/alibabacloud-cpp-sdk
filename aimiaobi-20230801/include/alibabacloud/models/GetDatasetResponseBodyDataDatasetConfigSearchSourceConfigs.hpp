// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATASETRESPONSEBODYDATADATASETCONFIGSEARCHSOURCECONFIGS_HPP_
#define ALIBABACLOUD_MODELS_GETDATASETRESPONSEBODYDATADATASETCONFIGSEARCHSOURCECONFIGS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetDatasetResponseBodyDataDatasetConfigSearchSourceConfigsSearchSourceRequestConfig.hpp>
#include <alibabacloud/models/GetDatasetResponseBodyDataDatasetConfigSearchSourceConfigsSearchSourceResponseConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class GetDatasetResponseBodyDataDatasetConfigSearchSourceConfigs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDatasetResponseBodyDataDatasetConfigSearchSourceConfigs& obj) { 
      DARABONBA_PTR_TO_JSON(DemoQuery, demoQuery_);
      DARABONBA_PTR_TO_JSON(SearchSourceRequestConfig, searchSourceRequestConfig_);
      DARABONBA_PTR_TO_JSON(SearchSourceResponseConfig, searchSourceResponseConfig_);
      DARABONBA_PTR_TO_JSON(Size, size_);
    };
    friend void from_json(const Darabonba::Json& j, GetDatasetResponseBodyDataDatasetConfigSearchSourceConfigs& obj) { 
      DARABONBA_PTR_FROM_JSON(DemoQuery, demoQuery_);
      DARABONBA_PTR_FROM_JSON(SearchSourceRequestConfig, searchSourceRequestConfig_);
      DARABONBA_PTR_FROM_JSON(SearchSourceResponseConfig, searchSourceResponseConfig_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
    };
    GetDatasetResponseBodyDataDatasetConfigSearchSourceConfigs() = default ;
    GetDatasetResponseBodyDataDatasetConfigSearchSourceConfigs(const GetDatasetResponseBodyDataDatasetConfigSearchSourceConfigs &) = default ;
    GetDatasetResponseBodyDataDatasetConfigSearchSourceConfigs(GetDatasetResponseBodyDataDatasetConfigSearchSourceConfigs &&) = default ;
    GetDatasetResponseBodyDataDatasetConfigSearchSourceConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDatasetResponseBodyDataDatasetConfigSearchSourceConfigs() = default ;
    GetDatasetResponseBodyDataDatasetConfigSearchSourceConfigs& operator=(const GetDatasetResponseBodyDataDatasetConfigSearchSourceConfigs &) = default ;
    GetDatasetResponseBodyDataDatasetConfigSearchSourceConfigs& operator=(GetDatasetResponseBodyDataDatasetConfigSearchSourceConfigs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->demoQuery_ == nullptr
        && return this->searchSourceRequestConfig_ == nullptr && return this->searchSourceResponseConfig_ == nullptr && return this->size_ == nullptr; };
    // demoQuery Field Functions 
    bool hasDemoQuery() const { return this->demoQuery_ != nullptr;};
    void deleteDemoQuery() { this->demoQuery_ = nullptr;};
    inline string demoQuery() const { DARABONBA_PTR_GET_DEFAULT(demoQuery_, "") };
    inline GetDatasetResponseBodyDataDatasetConfigSearchSourceConfigs& setDemoQuery(string demoQuery) { DARABONBA_PTR_SET_VALUE(demoQuery_, demoQuery) };


    // searchSourceRequestConfig Field Functions 
    bool hasSearchSourceRequestConfig() const { return this->searchSourceRequestConfig_ != nullptr;};
    void deleteSearchSourceRequestConfig() { this->searchSourceRequestConfig_ = nullptr;};
    inline const Models::GetDatasetResponseBodyDataDatasetConfigSearchSourceConfigsSearchSourceRequestConfig & searchSourceRequestConfig() const { DARABONBA_PTR_GET_CONST(searchSourceRequestConfig_, Models::GetDatasetResponseBodyDataDatasetConfigSearchSourceConfigsSearchSourceRequestConfig) };
    inline Models::GetDatasetResponseBodyDataDatasetConfigSearchSourceConfigsSearchSourceRequestConfig searchSourceRequestConfig() { DARABONBA_PTR_GET(searchSourceRequestConfig_, Models::GetDatasetResponseBodyDataDatasetConfigSearchSourceConfigsSearchSourceRequestConfig) };
    inline GetDatasetResponseBodyDataDatasetConfigSearchSourceConfigs& setSearchSourceRequestConfig(const Models::GetDatasetResponseBodyDataDatasetConfigSearchSourceConfigsSearchSourceRequestConfig & searchSourceRequestConfig) { DARABONBA_PTR_SET_VALUE(searchSourceRequestConfig_, searchSourceRequestConfig) };
    inline GetDatasetResponseBodyDataDatasetConfigSearchSourceConfigs& setSearchSourceRequestConfig(Models::GetDatasetResponseBodyDataDatasetConfigSearchSourceConfigsSearchSourceRequestConfig && searchSourceRequestConfig) { DARABONBA_PTR_SET_RVALUE(searchSourceRequestConfig_, searchSourceRequestConfig) };


    // searchSourceResponseConfig Field Functions 
    bool hasSearchSourceResponseConfig() const { return this->searchSourceResponseConfig_ != nullptr;};
    void deleteSearchSourceResponseConfig() { this->searchSourceResponseConfig_ = nullptr;};
    inline const Models::GetDatasetResponseBodyDataDatasetConfigSearchSourceConfigsSearchSourceResponseConfig & searchSourceResponseConfig() const { DARABONBA_PTR_GET_CONST(searchSourceResponseConfig_, Models::GetDatasetResponseBodyDataDatasetConfigSearchSourceConfigsSearchSourceResponseConfig) };
    inline Models::GetDatasetResponseBodyDataDatasetConfigSearchSourceConfigsSearchSourceResponseConfig searchSourceResponseConfig() { DARABONBA_PTR_GET(searchSourceResponseConfig_, Models::GetDatasetResponseBodyDataDatasetConfigSearchSourceConfigsSearchSourceResponseConfig) };
    inline GetDatasetResponseBodyDataDatasetConfigSearchSourceConfigs& setSearchSourceResponseConfig(const Models::GetDatasetResponseBodyDataDatasetConfigSearchSourceConfigsSearchSourceResponseConfig & searchSourceResponseConfig) { DARABONBA_PTR_SET_VALUE(searchSourceResponseConfig_, searchSourceResponseConfig) };
    inline GetDatasetResponseBodyDataDatasetConfigSearchSourceConfigs& setSearchSourceResponseConfig(Models::GetDatasetResponseBodyDataDatasetConfigSearchSourceConfigsSearchSourceResponseConfig && searchSourceResponseConfig) { DARABONBA_PTR_SET_RVALUE(searchSourceResponseConfig_, searchSourceResponseConfig) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int32_t size() const { DARABONBA_PTR_GET_DEFAULT(size_, 0) };
    inline GetDatasetResponseBodyDataDatasetConfigSearchSourceConfigs& setSize(int32_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


  protected:
    std::shared_ptr<string> demoQuery_ = nullptr;
    std::shared_ptr<Models::GetDatasetResponseBodyDataDatasetConfigSearchSourceConfigsSearchSourceRequestConfig> searchSourceRequestConfig_ = nullptr;
    std::shared_ptr<Models::GetDatasetResponseBodyDataDatasetConfigSearchSourceConfigsSearchSourceResponseConfig> searchSourceResponseConfig_ = nullptr;
    std::shared_ptr<int32_t> size_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
