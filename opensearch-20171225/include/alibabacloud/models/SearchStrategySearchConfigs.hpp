// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHSTRATEGYSEARCHCONFIGS_HPP_
#define ALIBABACLOUD_MODELS_SEARCHSTRATEGYSEARCHCONFIGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenSearch20171225
{
namespace Models
{
  class SearchStrategySearchConfigs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchStrategySearchConfigs& obj) { 
      DARABONBA_PTR_TO_JSON(firstRankName, firstRankName_);
      DARABONBA_PTR_TO_JSON(mergeProportion, mergeProportion_);
      DARABONBA_PTR_TO_JSON(queryType, queryType_);
      DARABONBA_PTR_TO_JSON(secondRankName, secondRankName_);
    };
    friend void from_json(const Darabonba::Json& j, SearchStrategySearchConfigs& obj) { 
      DARABONBA_PTR_FROM_JSON(firstRankName, firstRankName_);
      DARABONBA_PTR_FROM_JSON(mergeProportion, mergeProportion_);
      DARABONBA_PTR_FROM_JSON(queryType, queryType_);
      DARABONBA_PTR_FROM_JSON(secondRankName, secondRankName_);
    };
    SearchStrategySearchConfigs() = default ;
    SearchStrategySearchConfigs(const SearchStrategySearchConfigs &) = default ;
    SearchStrategySearchConfigs(SearchStrategySearchConfigs &&) = default ;
    SearchStrategySearchConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchStrategySearchConfigs() = default ;
    SearchStrategySearchConfigs& operator=(const SearchStrategySearchConfigs &) = default ;
    SearchStrategySearchConfigs& operator=(SearchStrategySearchConfigs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->firstRankName_ == nullptr
        && return this->mergeProportion_ == nullptr && return this->queryType_ == nullptr && return this->secondRankName_ == nullptr; };
    // firstRankName Field Functions 
    bool hasFirstRankName() const { return this->firstRankName_ != nullptr;};
    void deleteFirstRankName() { this->firstRankName_ = nullptr;};
    inline string firstRankName() const { DARABONBA_PTR_GET_DEFAULT(firstRankName_, "") };
    inline SearchStrategySearchConfigs& setFirstRankName(string firstRankName) { DARABONBA_PTR_SET_VALUE(firstRankName_, firstRankName) };


    // mergeProportion Field Functions 
    bool hasMergeProportion() const { return this->mergeProportion_ != nullptr;};
    void deleteMergeProportion() { this->mergeProportion_ = nullptr;};
    inline int32_t mergeProportion() const { DARABONBA_PTR_GET_DEFAULT(mergeProportion_, 0) };
    inline SearchStrategySearchConfigs& setMergeProportion(int32_t mergeProportion) { DARABONBA_PTR_SET_VALUE(mergeProportion_, mergeProportion) };


    // queryType Field Functions 
    bool hasQueryType() const { return this->queryType_ != nullptr;};
    void deleteQueryType() { this->queryType_ = nullptr;};
    inline string queryType() const { DARABONBA_PTR_GET_DEFAULT(queryType_, "") };
    inline SearchStrategySearchConfigs& setQueryType(string queryType) { DARABONBA_PTR_SET_VALUE(queryType_, queryType) };


    // secondRankName Field Functions 
    bool hasSecondRankName() const { return this->secondRankName_ != nullptr;};
    void deleteSecondRankName() { this->secondRankName_ = nullptr;};
    inline string secondRankName() const { DARABONBA_PTR_GET_DEFAULT(secondRankName_, "") };
    inline SearchStrategySearchConfigs& setSecondRankName(string secondRankName) { DARABONBA_PTR_SET_VALUE(secondRankName_, secondRankName) };


  protected:
    std::shared_ptr<string> firstRankName_ = nullptr;
    std::shared_ptr<int32_t> mergeProportion_ = nullptr;
    std::shared_ptr<string> queryType_ = nullptr;
    std::shared_ptr<string> secondRankName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
