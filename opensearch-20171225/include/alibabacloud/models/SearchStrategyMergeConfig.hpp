// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHSTRATEGYMERGECONFIG_HPP_
#define ALIBABACLOUD_MODELS_SEARCHSTRATEGYMERGECONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenSearch20171225
{
namespace Models
{
  class SearchStrategyMergeConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchStrategyMergeConfig& obj) { 
      DARABONBA_PTR_TO_JSON(docCount, docCount_);
      DARABONBA_PTR_TO_JSON(rankName, rankName_);
    };
    friend void from_json(const Darabonba::Json& j, SearchStrategyMergeConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(docCount, docCount_);
      DARABONBA_PTR_FROM_JSON(rankName, rankName_);
    };
    SearchStrategyMergeConfig() = default ;
    SearchStrategyMergeConfig(const SearchStrategyMergeConfig &) = default ;
    SearchStrategyMergeConfig(SearchStrategyMergeConfig &&) = default ;
    SearchStrategyMergeConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchStrategyMergeConfig() = default ;
    SearchStrategyMergeConfig& operator=(const SearchStrategyMergeConfig &) = default ;
    SearchStrategyMergeConfig& operator=(SearchStrategyMergeConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->docCount_ == nullptr
        && return this->rankName_ == nullptr; };
    // docCount Field Functions 
    bool hasDocCount() const { return this->docCount_ != nullptr;};
    void deleteDocCount() { this->docCount_ = nullptr;};
    inline int32_t docCount() const { DARABONBA_PTR_GET_DEFAULT(docCount_, 0) };
    inline SearchStrategyMergeConfig& setDocCount(int32_t docCount) { DARABONBA_PTR_SET_VALUE(docCount_, docCount) };


    // rankName Field Functions 
    bool hasRankName() const { return this->rankName_ != nullptr;};
    void deleteRankName() { this->rankName_ = nullptr;};
    inline string rankName() const { DARABONBA_PTR_GET_DEFAULT(rankName_, "") };
    inline SearchStrategyMergeConfig& setRankName(string rankName) { DARABONBA_PTR_SET_VALUE(rankName_, rankName) };


  protected:
    std::shared_ptr<int32_t> docCount_ = nullptr;
    std::shared_ptr<string> rankName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
