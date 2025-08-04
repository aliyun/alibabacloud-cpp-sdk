// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATASETRESPONSEBODYDATADATASETCONFIG_HPP_
#define ALIBABACLOUD_MODELS_GETDATASETRESPONSEBODYDATADATASETCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetDatasetResponseBodyDataDatasetConfigSearchSourceConfigs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class GetDatasetResponseBodyDataDatasetConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDatasetResponseBodyDataDatasetConfig& obj) { 
      DARABONBA_PTR_TO_JSON(SearchSourceConfigs, searchSourceConfigs_);
    };
    friend void from_json(const Darabonba::Json& j, GetDatasetResponseBodyDataDatasetConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(SearchSourceConfigs, searchSourceConfigs_);
    };
    GetDatasetResponseBodyDataDatasetConfig() = default ;
    GetDatasetResponseBodyDataDatasetConfig(const GetDatasetResponseBodyDataDatasetConfig &) = default ;
    GetDatasetResponseBodyDataDatasetConfig(GetDatasetResponseBodyDataDatasetConfig &&) = default ;
    GetDatasetResponseBodyDataDatasetConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDatasetResponseBodyDataDatasetConfig() = default ;
    GetDatasetResponseBodyDataDatasetConfig& operator=(const GetDatasetResponseBodyDataDatasetConfig &) = default ;
    GetDatasetResponseBodyDataDatasetConfig& operator=(GetDatasetResponseBodyDataDatasetConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->searchSourceConfigs_ != nullptr; };
    // searchSourceConfigs Field Functions 
    bool hasSearchSourceConfigs() const { return this->searchSourceConfigs_ != nullptr;};
    void deleteSearchSourceConfigs() { this->searchSourceConfigs_ = nullptr;};
    inline const vector<Models::GetDatasetResponseBodyDataDatasetConfigSearchSourceConfigs> & searchSourceConfigs() const { DARABONBA_PTR_GET_CONST(searchSourceConfigs_, vector<Models::GetDatasetResponseBodyDataDatasetConfigSearchSourceConfigs>) };
    inline vector<Models::GetDatasetResponseBodyDataDatasetConfigSearchSourceConfigs> searchSourceConfigs() { DARABONBA_PTR_GET(searchSourceConfigs_, vector<Models::GetDatasetResponseBodyDataDatasetConfigSearchSourceConfigs>) };
    inline GetDatasetResponseBodyDataDatasetConfig& setSearchSourceConfigs(const vector<Models::GetDatasetResponseBodyDataDatasetConfigSearchSourceConfigs> & searchSourceConfigs) { DARABONBA_PTR_SET_VALUE(searchSourceConfigs_, searchSourceConfigs) };
    inline GetDatasetResponseBodyDataDatasetConfig& setSearchSourceConfigs(vector<Models::GetDatasetResponseBodyDataDatasetConfigSearchSourceConfigs> && searchSourceConfigs) { DARABONBA_PTR_SET_RVALUE(searchSourceConfigs_, searchSourceConfigs) };


  protected:
    std::shared_ptr<vector<Models::GetDatasetResponseBodyDataDatasetConfigSearchSourceConfigs>> searchSourceConfigs_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
