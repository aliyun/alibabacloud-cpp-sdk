// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSERVICECONFIGRESPONSEBODYDATACUSTOMSERVICECONF_HPP_
#define ALIBABACLOUD_MODELS_GETSERVICECONFIGRESPONSEBODYDATACUSTOMSERVICECONF_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetServiceConfigResponseBodyDataCustomServiceConfManualMachineConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220926
{
namespace Models
{
  class GetServiceConfigResponseBodyDataCustomServiceConf : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetServiceConfigResponseBodyDataCustomServiceConf& obj) { 
      DARABONBA_PTR_TO_JSON(KeywordFilterLibs, keywordFilterLibs_);
      DARABONBA_PTR_TO_JSON(KeywordHitLibs, keywordHitLibs_);
      DARABONBA_PTR_TO_JSON(ManualMachineConfig, manualMachineConfig_);
      DARABONBA_PTR_TO_JSON(SimilarTextHitLibs, similarTextHitLibs_);
    };
    friend void from_json(const Darabonba::Json& j, GetServiceConfigResponseBodyDataCustomServiceConf& obj) { 
      DARABONBA_PTR_FROM_JSON(KeywordFilterLibs, keywordFilterLibs_);
      DARABONBA_PTR_FROM_JSON(KeywordHitLibs, keywordHitLibs_);
      DARABONBA_PTR_FROM_JSON(ManualMachineConfig, manualMachineConfig_);
      DARABONBA_PTR_FROM_JSON(SimilarTextHitLibs, similarTextHitLibs_);
    };
    GetServiceConfigResponseBodyDataCustomServiceConf() = default ;
    GetServiceConfigResponseBodyDataCustomServiceConf(const GetServiceConfigResponseBodyDataCustomServiceConf &) = default ;
    GetServiceConfigResponseBodyDataCustomServiceConf(GetServiceConfigResponseBodyDataCustomServiceConf &&) = default ;
    GetServiceConfigResponseBodyDataCustomServiceConf(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetServiceConfigResponseBodyDataCustomServiceConf() = default ;
    GetServiceConfigResponseBodyDataCustomServiceConf& operator=(const GetServiceConfigResponseBodyDataCustomServiceConf &) = default ;
    GetServiceConfigResponseBodyDataCustomServiceConf& operator=(GetServiceConfigResponseBodyDataCustomServiceConf &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->keywordFilterLibs_ == nullptr
        && return this->keywordHitLibs_ == nullptr && return this->manualMachineConfig_ == nullptr && return this->similarTextHitLibs_ == nullptr; };
    // keywordFilterLibs Field Functions 
    bool hasKeywordFilterLibs() const { return this->keywordFilterLibs_ != nullptr;};
    void deleteKeywordFilterLibs() { this->keywordFilterLibs_ = nullptr;};
    inline const vector<string> & keywordFilterLibs() const { DARABONBA_PTR_GET_CONST(keywordFilterLibs_, vector<string>) };
    inline vector<string> keywordFilterLibs() { DARABONBA_PTR_GET(keywordFilterLibs_, vector<string>) };
    inline GetServiceConfigResponseBodyDataCustomServiceConf& setKeywordFilterLibs(const vector<string> & keywordFilterLibs) { DARABONBA_PTR_SET_VALUE(keywordFilterLibs_, keywordFilterLibs) };
    inline GetServiceConfigResponseBodyDataCustomServiceConf& setKeywordFilterLibs(vector<string> && keywordFilterLibs) { DARABONBA_PTR_SET_RVALUE(keywordFilterLibs_, keywordFilterLibs) };


    // keywordHitLibs Field Functions 
    bool hasKeywordHitLibs() const { return this->keywordHitLibs_ != nullptr;};
    void deleteKeywordHitLibs() { this->keywordHitLibs_ = nullptr;};
    inline const vector<string> & keywordHitLibs() const { DARABONBA_PTR_GET_CONST(keywordHitLibs_, vector<string>) };
    inline vector<string> keywordHitLibs() { DARABONBA_PTR_GET(keywordHitLibs_, vector<string>) };
    inline GetServiceConfigResponseBodyDataCustomServiceConf& setKeywordHitLibs(const vector<string> & keywordHitLibs) { DARABONBA_PTR_SET_VALUE(keywordHitLibs_, keywordHitLibs) };
    inline GetServiceConfigResponseBodyDataCustomServiceConf& setKeywordHitLibs(vector<string> && keywordHitLibs) { DARABONBA_PTR_SET_RVALUE(keywordHitLibs_, keywordHitLibs) };


    // manualMachineConfig Field Functions 
    bool hasManualMachineConfig() const { return this->manualMachineConfig_ != nullptr;};
    void deleteManualMachineConfig() { this->manualMachineConfig_ = nullptr;};
    inline const Models::GetServiceConfigResponseBodyDataCustomServiceConfManualMachineConfig & manualMachineConfig() const { DARABONBA_PTR_GET_CONST(manualMachineConfig_, Models::GetServiceConfigResponseBodyDataCustomServiceConfManualMachineConfig) };
    inline Models::GetServiceConfigResponseBodyDataCustomServiceConfManualMachineConfig manualMachineConfig() { DARABONBA_PTR_GET(manualMachineConfig_, Models::GetServiceConfigResponseBodyDataCustomServiceConfManualMachineConfig) };
    inline GetServiceConfigResponseBodyDataCustomServiceConf& setManualMachineConfig(const Models::GetServiceConfigResponseBodyDataCustomServiceConfManualMachineConfig & manualMachineConfig) { DARABONBA_PTR_SET_VALUE(manualMachineConfig_, manualMachineConfig) };
    inline GetServiceConfigResponseBodyDataCustomServiceConf& setManualMachineConfig(Models::GetServiceConfigResponseBodyDataCustomServiceConfManualMachineConfig && manualMachineConfig) { DARABONBA_PTR_SET_RVALUE(manualMachineConfig_, manualMachineConfig) };


    // similarTextHitLibs Field Functions 
    bool hasSimilarTextHitLibs() const { return this->similarTextHitLibs_ != nullptr;};
    void deleteSimilarTextHitLibs() { this->similarTextHitLibs_ = nullptr;};
    inline const vector<string> & similarTextHitLibs() const { DARABONBA_PTR_GET_CONST(similarTextHitLibs_, vector<string>) };
    inline vector<string> similarTextHitLibs() { DARABONBA_PTR_GET(similarTextHitLibs_, vector<string>) };
    inline GetServiceConfigResponseBodyDataCustomServiceConf& setSimilarTextHitLibs(const vector<string> & similarTextHitLibs) { DARABONBA_PTR_SET_VALUE(similarTextHitLibs_, similarTextHitLibs) };
    inline GetServiceConfigResponseBodyDataCustomServiceConf& setSimilarTextHitLibs(vector<string> && similarTextHitLibs) { DARABONBA_PTR_SET_RVALUE(similarTextHitLibs_, similarTextHitLibs) };


  protected:
    // Ignore word libraries.
    std::shared_ptr<vector<string>> keywordFilterLibs_ = nullptr;
    // Hit word libraries.
    std::shared_ptr<vector<string>> keywordHitLibs_ = nullptr;
    // Human-machine review configuration.
    std::shared_ptr<Models::GetServiceConfigResponseBodyDataCustomServiceConfManualMachineConfig> manualMachineConfig_ = nullptr;
    // Hit similar text libraries.
    std::shared_ptr<vector<string>> similarTextHitLibs_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220926
#endif
