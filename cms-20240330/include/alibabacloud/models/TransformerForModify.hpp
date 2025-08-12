// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRANSFORMERFORMODIFY_HPP_
#define ALIBABACLOUD_MODELS_TRANSFORMERFORMODIFY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/Cms20240330.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class TransformerForModify : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TransformerForModify& obj) { 
      DARABONBA_PTR_TO_JSON(actions, actions_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(filterSetting, filterSetting_);
      DARABONBA_PTR_TO_JSON(quitAfterMatch, quitAfterMatch_);
      DARABONBA_PTR_TO_JSON(sortId, sortId_);
      DARABONBA_PTR_TO_JSON(transformerName, transformerName_);
    };
    friend void from_json(const Darabonba::Json& j, TransformerForModify& obj) { 
      DARABONBA_PTR_FROM_JSON(actions, actions_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(filterSetting, filterSetting_);
      DARABONBA_PTR_FROM_JSON(quitAfterMatch, quitAfterMatch_);
      DARABONBA_PTR_FROM_JSON(sortId, sortId_);
      DARABONBA_PTR_FROM_JSON(transformerName, transformerName_);
    };
    TransformerForModify() = default ;
    TransformerForModify(const TransformerForModify &) = default ;
    TransformerForModify(TransformerForModify &&) = default ;
    TransformerForModify(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TransformerForModify() = default ;
    TransformerForModify& operator=(const TransformerForModify &) = default ;
    TransformerForModify& operator=(TransformerForModify &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->actions_ != nullptr
        && this->description_ != nullptr && this->filterSetting_ != nullptr && this->quitAfterMatch_ != nullptr && this->sortId_ != nullptr && this->transformerName_ != nullptr; };
    // actions Field Functions 
    bool hasActions() const { return this->actions_ != nullptr;};
    void deleteActions() { this->actions_ = nullptr;};
    inline const vector<TransformAction> & actions() const { DARABONBA_PTR_GET_CONST(actions_, vector<TransformAction>) };
    inline vector<TransformAction> actions() { DARABONBA_PTR_GET(actions_, vector<TransformAction>) };
    inline TransformerForModify& setActions(const vector<TransformAction> & actions) { DARABONBA_PTR_SET_VALUE(actions_, actions) };
    inline TransformerForModify& setActions(vector<TransformAction> && actions) { DARABONBA_PTR_SET_RVALUE(actions_, actions) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline TransformerForModify& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // filterSetting Field Functions 
    bool hasFilterSetting() const { return this->filterSetting_ != nullptr;};
    void deleteFilterSetting() { this->filterSetting_ = nullptr;};
    inline const FilterSetting & filterSetting() const { DARABONBA_PTR_GET_CONST(filterSetting_, FilterSetting) };
    inline FilterSetting filterSetting() { DARABONBA_PTR_GET(filterSetting_, FilterSetting) };
    inline TransformerForModify& setFilterSetting(const FilterSetting & filterSetting) { DARABONBA_PTR_SET_VALUE(filterSetting_, filterSetting) };
    inline TransformerForModify& setFilterSetting(FilterSetting && filterSetting) { DARABONBA_PTR_SET_RVALUE(filterSetting_, filterSetting) };


    // quitAfterMatch Field Functions 
    bool hasQuitAfterMatch() const { return this->quitAfterMatch_ != nullptr;};
    void deleteQuitAfterMatch() { this->quitAfterMatch_ = nullptr;};
    inline bool quitAfterMatch() const { DARABONBA_PTR_GET_DEFAULT(quitAfterMatch_, false) };
    inline TransformerForModify& setQuitAfterMatch(bool quitAfterMatch) { DARABONBA_PTR_SET_VALUE(quitAfterMatch_, quitAfterMatch) };


    // sortId Field Functions 
    bool hasSortId() const { return this->sortId_ != nullptr;};
    void deleteSortId() { this->sortId_ = nullptr;};
    inline int32_t sortId() const { DARABONBA_PTR_GET_DEFAULT(sortId_, 0) };
    inline TransformerForModify& setSortId(int32_t sortId) { DARABONBA_PTR_SET_VALUE(sortId_, sortId) };


    // transformerName Field Functions 
    bool hasTransformerName() const { return this->transformerName_ != nullptr;};
    void deleteTransformerName() { this->transformerName_ = nullptr;};
    inline string transformerName() const { DARABONBA_PTR_GET_DEFAULT(transformerName_, "") };
    inline TransformerForModify& setTransformerName(string transformerName) { DARABONBA_PTR_SET_VALUE(transformerName_, transformerName) };


  protected:
    std::shared_ptr<vector<TransformAction>> actions_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<FilterSetting> filterSetting_ = nullptr;
    std::shared_ptr<bool> quitAfterMatch_ = nullptr;
    std::shared_ptr<int32_t> sortId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> transformerName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
