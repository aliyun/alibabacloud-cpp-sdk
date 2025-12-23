// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHSTRATEGY_HPP_
#define ALIBABACLOUD_MODELS_SEARCHSTRATEGY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SearchStrategyMergeConfig.hpp>
#include <vector>
#include <alibabacloud/models/SearchStrategySearchConfigs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenSearch20171225
{
namespace Models
{
  class SearchStrategy : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchStrategy& obj) { 
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(isDefault, isDefault_);
      DARABONBA_PTR_TO_JSON(mergeConfig, mergeConfig_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(searchConfigs, searchConfigs_);
    };
    friend void from_json(const Darabonba::Json& j, SearchStrategy& obj) { 
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(isDefault, isDefault_);
      DARABONBA_PTR_FROM_JSON(mergeConfig, mergeConfig_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(searchConfigs, searchConfigs_);
    };
    SearchStrategy() = default ;
    SearchStrategy(const SearchStrategy &) = default ;
    SearchStrategy(SearchStrategy &&) = default ;
    SearchStrategy(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchStrategy() = default ;
    SearchStrategy& operator=(const SearchStrategy &) = default ;
    SearchStrategy& operator=(SearchStrategy &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && return this->isDefault_ == nullptr && return this->mergeConfig_ == nullptr && return this->name_ == nullptr && return this->searchConfigs_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline SearchStrategy& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // isDefault Field Functions 
    bool hasIsDefault() const { return this->isDefault_ != nullptr;};
    void deleteIsDefault() { this->isDefault_ = nullptr;};
    inline bool isDefault() const { DARABONBA_PTR_GET_DEFAULT(isDefault_, false) };
    inline SearchStrategy& setIsDefault(bool isDefault) { DARABONBA_PTR_SET_VALUE(isDefault_, isDefault) };


    // mergeConfig Field Functions 
    bool hasMergeConfig() const { return this->mergeConfig_ != nullptr;};
    void deleteMergeConfig() { this->mergeConfig_ = nullptr;};
    inline const SearchStrategyMergeConfig & mergeConfig() const { DARABONBA_PTR_GET_CONST(mergeConfig_, SearchStrategyMergeConfig) };
    inline SearchStrategyMergeConfig mergeConfig() { DARABONBA_PTR_GET(mergeConfig_, SearchStrategyMergeConfig) };
    inline SearchStrategy& setMergeConfig(const SearchStrategyMergeConfig & mergeConfig) { DARABONBA_PTR_SET_VALUE(mergeConfig_, mergeConfig) };
    inline SearchStrategy& setMergeConfig(SearchStrategyMergeConfig && mergeConfig) { DARABONBA_PTR_SET_RVALUE(mergeConfig_, mergeConfig) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline SearchStrategy& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // searchConfigs Field Functions 
    bool hasSearchConfigs() const { return this->searchConfigs_ != nullptr;};
    void deleteSearchConfigs() { this->searchConfigs_ = nullptr;};
    inline const vector<SearchStrategySearchConfigs> & searchConfigs() const { DARABONBA_PTR_GET_CONST(searchConfigs_, vector<SearchStrategySearchConfigs>) };
    inline vector<SearchStrategySearchConfigs> searchConfigs() { DARABONBA_PTR_GET(searchConfigs_, vector<SearchStrategySearchConfigs>) };
    inline SearchStrategy& setSearchConfigs(const vector<SearchStrategySearchConfigs> & searchConfigs) { DARABONBA_PTR_SET_VALUE(searchConfigs_, searchConfigs) };
    inline SearchStrategy& setSearchConfigs(vector<SearchStrategySearchConfigs> && searchConfigs) { DARABONBA_PTR_SET_RVALUE(searchConfigs_, searchConfigs) };


  protected:
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<bool> isDefault_ = nullptr;
    std::shared_ptr<SearchStrategyMergeConfig> mergeConfig_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<vector<SearchStrategySearchConfigs>> searchConfigs_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
