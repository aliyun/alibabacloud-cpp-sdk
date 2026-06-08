// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHSTRATEGY_HPP_
#define ALIBABACLOUD_MODELS_SEARCHSTRATEGY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class SearchConfigs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SearchConfigs& obj) { 
        DARABONBA_PTR_TO_JSON(firstRankName, firstRankName_);
        DARABONBA_PTR_TO_JSON(mergeProportion, mergeProportion_);
        DARABONBA_PTR_TO_JSON(queryType, queryType_);
        DARABONBA_PTR_TO_JSON(secondRankName, secondRankName_);
      };
      friend void from_json(const Darabonba::Json& j, SearchConfigs& obj) { 
        DARABONBA_PTR_FROM_JSON(firstRankName, firstRankName_);
        DARABONBA_PTR_FROM_JSON(mergeProportion, mergeProportion_);
        DARABONBA_PTR_FROM_JSON(queryType, queryType_);
        DARABONBA_PTR_FROM_JSON(secondRankName, secondRankName_);
      };
      SearchConfigs() = default ;
      SearchConfigs(const SearchConfigs &) = default ;
      SearchConfigs(SearchConfigs &&) = default ;
      SearchConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SearchConfigs() = default ;
      SearchConfigs& operator=(const SearchConfigs &) = default ;
      SearchConfigs& operator=(SearchConfigs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->firstRankName_ == nullptr
        && this->mergeProportion_ == nullptr && this->queryType_ == nullptr && this->secondRankName_ == nullptr; };
      // firstRankName Field Functions 
      bool hasFirstRankName() const { return this->firstRankName_ != nullptr;};
      void deleteFirstRankName() { this->firstRankName_ = nullptr;};
      inline string getFirstRankName() const { DARABONBA_PTR_GET_DEFAULT(firstRankName_, "") };
      inline SearchConfigs& setFirstRankName(string firstRankName) { DARABONBA_PTR_SET_VALUE(firstRankName_, firstRankName) };


      // mergeProportion Field Functions 
      bool hasMergeProportion() const { return this->mergeProportion_ != nullptr;};
      void deleteMergeProportion() { this->mergeProportion_ = nullptr;};
      inline int32_t getMergeProportion() const { DARABONBA_PTR_GET_DEFAULT(mergeProportion_, 0) };
      inline SearchConfigs& setMergeProportion(int32_t mergeProportion) { DARABONBA_PTR_SET_VALUE(mergeProportion_, mergeProportion) };


      // queryType Field Functions 
      bool hasQueryType() const { return this->queryType_ != nullptr;};
      void deleteQueryType() { this->queryType_ = nullptr;};
      inline string getQueryType() const { DARABONBA_PTR_GET_DEFAULT(queryType_, "") };
      inline SearchConfigs& setQueryType(string queryType) { DARABONBA_PTR_SET_VALUE(queryType_, queryType) };


      // secondRankName Field Functions 
      bool hasSecondRankName() const { return this->secondRankName_ != nullptr;};
      void deleteSecondRankName() { this->secondRankName_ = nullptr;};
      inline string getSecondRankName() const { DARABONBA_PTR_GET_DEFAULT(secondRankName_, "") };
      inline SearchConfigs& setSecondRankName(string secondRankName) { DARABONBA_PTR_SET_VALUE(secondRankName_, secondRankName) };


    protected:
      shared_ptr<string> firstRankName_ {};
      shared_ptr<int32_t> mergeProportion_ {};
      shared_ptr<string> queryType_ {};
      shared_ptr<string> secondRankName_ {};
    };

    class MergeConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MergeConfig& obj) { 
        DARABONBA_PTR_TO_JSON(docCount, docCount_);
        DARABONBA_PTR_TO_JSON(rankName, rankName_);
      };
      friend void from_json(const Darabonba::Json& j, MergeConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(docCount, docCount_);
        DARABONBA_PTR_FROM_JSON(rankName, rankName_);
      };
      MergeConfig() = default ;
      MergeConfig(const MergeConfig &) = default ;
      MergeConfig(MergeConfig &&) = default ;
      MergeConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~MergeConfig() = default ;
      MergeConfig& operator=(const MergeConfig &) = default ;
      MergeConfig& operator=(MergeConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->docCount_ == nullptr
        && this->rankName_ == nullptr; };
      // docCount Field Functions 
      bool hasDocCount() const { return this->docCount_ != nullptr;};
      void deleteDocCount() { this->docCount_ = nullptr;};
      inline int32_t getDocCount() const { DARABONBA_PTR_GET_DEFAULT(docCount_, 0) };
      inline MergeConfig& setDocCount(int32_t docCount) { DARABONBA_PTR_SET_VALUE(docCount_, docCount) };


      // rankName Field Functions 
      bool hasRankName() const { return this->rankName_ != nullptr;};
      void deleteRankName() { this->rankName_ = nullptr;};
      inline string getRankName() const { DARABONBA_PTR_GET_DEFAULT(rankName_, "") };
      inline MergeConfig& setRankName(string rankName) { DARABONBA_PTR_SET_VALUE(rankName_, rankName) };


    protected:
      shared_ptr<int32_t> docCount_ {};
      shared_ptr<string> rankName_ {};
    };

    virtual bool empty() const override { return this->description_ == nullptr
        && this->isDefault_ == nullptr && this->mergeConfig_ == nullptr && this->name_ == nullptr && this->searchConfigs_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline SearchStrategy& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // isDefault Field Functions 
    bool hasIsDefault() const { return this->isDefault_ != nullptr;};
    void deleteIsDefault() { this->isDefault_ = nullptr;};
    inline bool getIsDefault() const { DARABONBA_PTR_GET_DEFAULT(isDefault_, false) };
    inline SearchStrategy& setIsDefault(bool isDefault) { DARABONBA_PTR_SET_VALUE(isDefault_, isDefault) };


    // mergeConfig Field Functions 
    bool hasMergeConfig() const { return this->mergeConfig_ != nullptr;};
    void deleteMergeConfig() { this->mergeConfig_ = nullptr;};
    inline const SearchStrategy::MergeConfig & getMergeConfig() const { DARABONBA_PTR_GET_CONST(mergeConfig_, SearchStrategy::MergeConfig) };
    inline SearchStrategy::MergeConfig getMergeConfig() { DARABONBA_PTR_GET(mergeConfig_, SearchStrategy::MergeConfig) };
    inline SearchStrategy& setMergeConfig(const SearchStrategy::MergeConfig & mergeConfig) { DARABONBA_PTR_SET_VALUE(mergeConfig_, mergeConfig) };
    inline SearchStrategy& setMergeConfig(SearchStrategy::MergeConfig && mergeConfig) { DARABONBA_PTR_SET_RVALUE(mergeConfig_, mergeConfig) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline SearchStrategy& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // searchConfigs Field Functions 
    bool hasSearchConfigs() const { return this->searchConfigs_ != nullptr;};
    void deleteSearchConfigs() { this->searchConfigs_ = nullptr;};
    inline const vector<SearchStrategy::SearchConfigs> & getSearchConfigs() const { DARABONBA_PTR_GET_CONST(searchConfigs_, vector<SearchStrategy::SearchConfigs>) };
    inline vector<SearchStrategy::SearchConfigs> getSearchConfigs() { DARABONBA_PTR_GET(searchConfigs_, vector<SearchStrategy::SearchConfigs>) };
    inline SearchStrategy& setSearchConfigs(const vector<SearchStrategy::SearchConfigs> & searchConfigs) { DARABONBA_PTR_SET_VALUE(searchConfigs_, searchConfigs) };
    inline SearchStrategy& setSearchConfigs(vector<SearchStrategy::SearchConfigs> && searchConfigs) { DARABONBA_PTR_SET_RVALUE(searchConfigs_, searchConfigs) };


  protected:
    shared_ptr<string> description_ {};
    shared_ptr<bool> isDefault_ {};
    shared_ptr<SearchStrategy::MergeConfig> mergeConfig_ {};
    shared_ptr<string> name_ {};
    shared_ptr<vector<SearchStrategy::SearchConfigs>> searchConfigs_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
