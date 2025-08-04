// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPROPERTIESRESPONSEBODYDATAINTELLIGENTSEARCHCONFIG_HPP_
#define ALIBABACLOUD_MODELS_GETPROPERTIESRESPONSEBODYDATAINTELLIGENTSEARCHCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetPropertiesResponseBodyDataIntelligentSearchConfigCopilotPreciseSearchSources.hpp>
#include <alibabacloud/models/GetPropertiesResponseBodyDataIntelligentSearchConfigSearchSamples.hpp>
#include <alibabacloud/models/GetPropertiesResponseBodyDataIntelligentSearchConfigSearchSources.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class GetPropertiesResponseBodyDataIntelligentSearchConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPropertiesResponseBodyDataIntelligentSearchConfig& obj) { 
      DARABONBA_PTR_TO_JSON(CopilotPreciseSearchSources, copilotPreciseSearchSources_);
      DARABONBA_PTR_TO_JSON(ProductDescription, productDescription_);
      DARABONBA_PTR_TO_JSON(SearchSamples, searchSamples_);
      DARABONBA_PTR_TO_JSON(SearchSources, searchSources_);
    };
    friend void from_json(const Darabonba::Json& j, GetPropertiesResponseBodyDataIntelligentSearchConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(CopilotPreciseSearchSources, copilotPreciseSearchSources_);
      DARABONBA_PTR_FROM_JSON(ProductDescription, productDescription_);
      DARABONBA_PTR_FROM_JSON(SearchSamples, searchSamples_);
      DARABONBA_PTR_FROM_JSON(SearchSources, searchSources_);
    };
    GetPropertiesResponseBodyDataIntelligentSearchConfig() = default ;
    GetPropertiesResponseBodyDataIntelligentSearchConfig(const GetPropertiesResponseBodyDataIntelligentSearchConfig &) = default ;
    GetPropertiesResponseBodyDataIntelligentSearchConfig(GetPropertiesResponseBodyDataIntelligentSearchConfig &&) = default ;
    GetPropertiesResponseBodyDataIntelligentSearchConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPropertiesResponseBodyDataIntelligentSearchConfig() = default ;
    GetPropertiesResponseBodyDataIntelligentSearchConfig& operator=(const GetPropertiesResponseBodyDataIntelligentSearchConfig &) = default ;
    GetPropertiesResponseBodyDataIntelligentSearchConfig& operator=(GetPropertiesResponseBodyDataIntelligentSearchConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->copilotPreciseSearchSources_ != nullptr
        && this->productDescription_ != nullptr && this->searchSamples_ != nullptr && this->searchSources_ != nullptr; };
    // copilotPreciseSearchSources Field Functions 
    bool hasCopilotPreciseSearchSources() const { return this->copilotPreciseSearchSources_ != nullptr;};
    void deleteCopilotPreciseSearchSources() { this->copilotPreciseSearchSources_ = nullptr;};
    inline const vector<Models::GetPropertiesResponseBodyDataIntelligentSearchConfigCopilotPreciseSearchSources> & copilotPreciseSearchSources() const { DARABONBA_PTR_GET_CONST(copilotPreciseSearchSources_, vector<Models::GetPropertiesResponseBodyDataIntelligentSearchConfigCopilotPreciseSearchSources>) };
    inline vector<Models::GetPropertiesResponseBodyDataIntelligentSearchConfigCopilotPreciseSearchSources> copilotPreciseSearchSources() { DARABONBA_PTR_GET(copilotPreciseSearchSources_, vector<Models::GetPropertiesResponseBodyDataIntelligentSearchConfigCopilotPreciseSearchSources>) };
    inline GetPropertiesResponseBodyDataIntelligentSearchConfig& setCopilotPreciseSearchSources(const vector<Models::GetPropertiesResponseBodyDataIntelligentSearchConfigCopilotPreciseSearchSources> & copilotPreciseSearchSources) { DARABONBA_PTR_SET_VALUE(copilotPreciseSearchSources_, copilotPreciseSearchSources) };
    inline GetPropertiesResponseBodyDataIntelligentSearchConfig& setCopilotPreciseSearchSources(vector<Models::GetPropertiesResponseBodyDataIntelligentSearchConfigCopilotPreciseSearchSources> && copilotPreciseSearchSources) { DARABONBA_PTR_SET_RVALUE(copilotPreciseSearchSources_, copilotPreciseSearchSources) };


    // productDescription Field Functions 
    bool hasProductDescription() const { return this->productDescription_ != nullptr;};
    void deleteProductDescription() { this->productDescription_ = nullptr;};
    inline string productDescription() const { DARABONBA_PTR_GET_DEFAULT(productDescription_, "") };
    inline GetPropertiesResponseBodyDataIntelligentSearchConfig& setProductDescription(string productDescription) { DARABONBA_PTR_SET_VALUE(productDescription_, productDescription) };


    // searchSamples Field Functions 
    bool hasSearchSamples() const { return this->searchSamples_ != nullptr;};
    void deleteSearchSamples() { this->searchSamples_ = nullptr;};
    inline const vector<Models::GetPropertiesResponseBodyDataIntelligentSearchConfigSearchSamples> & searchSamples() const { DARABONBA_PTR_GET_CONST(searchSamples_, vector<Models::GetPropertiesResponseBodyDataIntelligentSearchConfigSearchSamples>) };
    inline vector<Models::GetPropertiesResponseBodyDataIntelligentSearchConfigSearchSamples> searchSamples() { DARABONBA_PTR_GET(searchSamples_, vector<Models::GetPropertiesResponseBodyDataIntelligentSearchConfigSearchSamples>) };
    inline GetPropertiesResponseBodyDataIntelligentSearchConfig& setSearchSamples(const vector<Models::GetPropertiesResponseBodyDataIntelligentSearchConfigSearchSamples> & searchSamples) { DARABONBA_PTR_SET_VALUE(searchSamples_, searchSamples) };
    inline GetPropertiesResponseBodyDataIntelligentSearchConfig& setSearchSamples(vector<Models::GetPropertiesResponseBodyDataIntelligentSearchConfigSearchSamples> && searchSamples) { DARABONBA_PTR_SET_RVALUE(searchSamples_, searchSamples) };


    // searchSources Field Functions 
    bool hasSearchSources() const { return this->searchSources_ != nullptr;};
    void deleteSearchSources() { this->searchSources_ = nullptr;};
    inline const vector<Models::GetPropertiesResponseBodyDataIntelligentSearchConfigSearchSources> & searchSources() const { DARABONBA_PTR_GET_CONST(searchSources_, vector<Models::GetPropertiesResponseBodyDataIntelligentSearchConfigSearchSources>) };
    inline vector<Models::GetPropertiesResponseBodyDataIntelligentSearchConfigSearchSources> searchSources() { DARABONBA_PTR_GET(searchSources_, vector<Models::GetPropertiesResponseBodyDataIntelligentSearchConfigSearchSources>) };
    inline GetPropertiesResponseBodyDataIntelligentSearchConfig& setSearchSources(const vector<Models::GetPropertiesResponseBodyDataIntelligentSearchConfigSearchSources> & searchSources) { DARABONBA_PTR_SET_VALUE(searchSources_, searchSources) };
    inline GetPropertiesResponseBodyDataIntelligentSearchConfig& setSearchSources(vector<Models::GetPropertiesResponseBodyDataIntelligentSearchConfigSearchSources> && searchSources) { DARABONBA_PTR_SET_RVALUE(searchSources_, searchSources) };


  protected:
    std::shared_ptr<vector<Models::GetPropertiesResponseBodyDataIntelligentSearchConfigCopilotPreciseSearchSources>> copilotPreciseSearchSources_ = nullptr;
    std::shared_ptr<string> productDescription_ = nullptr;
    std::shared_ptr<vector<Models::GetPropertiesResponseBodyDataIntelligentSearchConfigSearchSamples>> searchSamples_ = nullptr;
    std::shared_ptr<vector<Models::GetPropertiesResponseBodyDataIntelligentSearchConfigSearchSources>> searchSources_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
