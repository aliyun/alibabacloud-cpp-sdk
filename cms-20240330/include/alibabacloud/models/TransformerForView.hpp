// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRANSFORMERFORVIEW_HPP_
#define ALIBABACLOUD_MODELS_TRANSFORMERFORVIEW_HPP_
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
  class TransformerForView : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TransformerForView& obj) { 
      DARABONBA_PTR_TO_JSON(actions, actions_);
      DARABONBA_PTR_TO_JSON(createTime, createTime_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(enable, enable_);
      DARABONBA_PTR_TO_JSON(filterSetting, filterSetting_);
      DARABONBA_PTR_TO_JSON(quitAfterMatch, quitAfterMatch_);
      DARABONBA_PTR_TO_JSON(sortId, sortId_);
      DARABONBA_PTR_TO_JSON(transformerId, transformerId_);
      DARABONBA_PTR_TO_JSON(transformerName, transformerName_);
      DARABONBA_PTR_TO_JSON(updateTime, updateTime_);
      DARABONBA_PTR_TO_JSON(userId, userId_);
      DARABONBA_PTR_TO_JSON(workspace, workspace_);
    };
    friend void from_json(const Darabonba::Json& j, TransformerForView& obj) { 
      DARABONBA_PTR_FROM_JSON(actions, actions_);
      DARABONBA_PTR_FROM_JSON(createTime, createTime_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(enable, enable_);
      DARABONBA_PTR_FROM_JSON(filterSetting, filterSetting_);
      DARABONBA_PTR_FROM_JSON(quitAfterMatch, quitAfterMatch_);
      DARABONBA_PTR_FROM_JSON(sortId, sortId_);
      DARABONBA_PTR_FROM_JSON(transformerId, transformerId_);
      DARABONBA_PTR_FROM_JSON(transformerName, transformerName_);
      DARABONBA_PTR_FROM_JSON(updateTime, updateTime_);
      DARABONBA_PTR_FROM_JSON(userId, userId_);
      DARABONBA_PTR_FROM_JSON(workspace, workspace_);
    };
    TransformerForView() = default ;
    TransformerForView(const TransformerForView &) = default ;
    TransformerForView(TransformerForView &&) = default ;
    TransformerForView(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TransformerForView() = default ;
    TransformerForView& operator=(const TransformerForView &) = default ;
    TransformerForView& operator=(TransformerForView &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->actions_ != nullptr
        && this->createTime_ != nullptr && this->description_ != nullptr && this->enable_ != nullptr && this->filterSetting_ != nullptr && this->quitAfterMatch_ != nullptr
        && this->sortId_ != nullptr && this->transformerId_ != nullptr && this->transformerName_ != nullptr && this->updateTime_ != nullptr && this->userId_ != nullptr
        && this->workspace_ != nullptr; };
    // actions Field Functions 
    bool hasActions() const { return this->actions_ != nullptr;};
    void deleteActions() { this->actions_ = nullptr;};
    inline const vector<TransformAction> & actions() const { DARABONBA_PTR_GET_CONST(actions_, vector<TransformAction>) };
    inline vector<TransformAction> actions() { DARABONBA_PTR_GET(actions_, vector<TransformAction>) };
    inline TransformerForView& setActions(const vector<TransformAction> & actions) { DARABONBA_PTR_SET_VALUE(actions_, actions) };
    inline TransformerForView& setActions(vector<TransformAction> && actions) { DARABONBA_PTR_SET_RVALUE(actions_, actions) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline TransformerForView& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline TransformerForView& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline bool enable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
    inline TransformerForView& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // filterSetting Field Functions 
    bool hasFilterSetting() const { return this->filterSetting_ != nullptr;};
    void deleteFilterSetting() { this->filterSetting_ = nullptr;};
    inline const FilterSetting & filterSetting() const { DARABONBA_PTR_GET_CONST(filterSetting_, FilterSetting) };
    inline FilterSetting filterSetting() { DARABONBA_PTR_GET(filterSetting_, FilterSetting) };
    inline TransformerForView& setFilterSetting(const FilterSetting & filterSetting) { DARABONBA_PTR_SET_VALUE(filterSetting_, filterSetting) };
    inline TransformerForView& setFilterSetting(FilterSetting && filterSetting) { DARABONBA_PTR_SET_RVALUE(filterSetting_, filterSetting) };


    // quitAfterMatch Field Functions 
    bool hasQuitAfterMatch() const { return this->quitAfterMatch_ != nullptr;};
    void deleteQuitAfterMatch() { this->quitAfterMatch_ = nullptr;};
    inline bool quitAfterMatch() const { DARABONBA_PTR_GET_DEFAULT(quitAfterMatch_, false) };
    inline TransformerForView& setQuitAfterMatch(bool quitAfterMatch) { DARABONBA_PTR_SET_VALUE(quitAfterMatch_, quitAfterMatch) };


    // sortId Field Functions 
    bool hasSortId() const { return this->sortId_ != nullptr;};
    void deleteSortId() { this->sortId_ = nullptr;};
    inline int32_t sortId() const { DARABONBA_PTR_GET_DEFAULT(sortId_, 0) };
    inline TransformerForView& setSortId(int32_t sortId) { DARABONBA_PTR_SET_VALUE(sortId_, sortId) };


    // transformerId Field Functions 
    bool hasTransformerId() const { return this->transformerId_ != nullptr;};
    void deleteTransformerId() { this->transformerId_ = nullptr;};
    inline string transformerId() const { DARABONBA_PTR_GET_DEFAULT(transformerId_, "") };
    inline TransformerForView& setTransformerId(string transformerId) { DARABONBA_PTR_SET_VALUE(transformerId_, transformerId) };


    // transformerName Field Functions 
    bool hasTransformerName() const { return this->transformerName_ != nullptr;};
    void deleteTransformerName() { this->transformerName_ = nullptr;};
    inline string transformerName() const { DARABONBA_PTR_GET_DEFAULT(transformerName_, "") };
    inline TransformerForView& setTransformerName(string transformerName) { DARABONBA_PTR_SET_VALUE(transformerName_, transformerName) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline TransformerForView& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline TransformerForView& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // workspace Field Functions 
    bool hasWorkspace() const { return this->workspace_ != nullptr;};
    void deleteWorkspace() { this->workspace_ = nullptr;};
    inline string workspace() const { DARABONBA_PTR_GET_DEFAULT(workspace_, "") };
    inline TransformerForView& setWorkspace(string workspace) { DARABONBA_PTR_SET_VALUE(workspace_, workspace) };


  protected:
    std::shared_ptr<vector<TransformAction>> actions_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<bool> enable_ = nullptr;
    std::shared_ptr<FilterSetting> filterSetting_ = nullptr;
    std::shared_ptr<bool> quitAfterMatch_ = nullptr;
    std::shared_ptr<int32_t> sortId_ = nullptr;
    std::shared_ptr<string> transformerId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> transformerName_ = nullptr;
    std::shared_ptr<string> updateTime_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
    std::shared_ptr<string> workspace_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
