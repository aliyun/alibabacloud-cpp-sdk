// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DSGDESENSPLANQUERYLISTSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DSGDESENSPLANQUERYLISTSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class DsgDesensPlanQueryListShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DsgDesensPlanQueryListShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Owner, owner_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(SceneId, sceneId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(columns, columnsShrink_);
      DARABONBA_PTR_TO_JSON(dataType, dataType_);
      DARABONBA_PTR_TO_JSON(emptyNotDesesn, emptyNotDesesn_);
    };
    friend void from_json(const Darabonba::Json& j, DsgDesensPlanQueryListShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Owner, owner_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(SceneId, sceneId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(columns, columnsShrink_);
      DARABONBA_PTR_FROM_JSON(dataType, dataType_);
      DARABONBA_PTR_FROM_JSON(emptyNotDesesn, emptyNotDesesn_);
    };
    DsgDesensPlanQueryListShrinkRequest() = default ;
    DsgDesensPlanQueryListShrinkRequest(const DsgDesensPlanQueryListShrinkRequest &) = default ;
    DsgDesensPlanQueryListShrinkRequest(DsgDesensPlanQueryListShrinkRequest &&) = default ;
    DsgDesensPlanQueryListShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DsgDesensPlanQueryListShrinkRequest() = default ;
    DsgDesensPlanQueryListShrinkRequest& operator=(const DsgDesensPlanQueryListShrinkRequest &) = default ;
    DsgDesensPlanQueryListShrinkRequest& operator=(DsgDesensPlanQueryListShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->owner_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->ruleName_ == nullptr && this->sceneId_ == nullptr && this->status_ == nullptr
        && this->columnsShrink_ == nullptr && this->dataType_ == nullptr && this->emptyNotDesesn_ == nullptr; };
    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline string getOwner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
    inline DsgDesensPlanQueryListShrinkRequest& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DsgDesensPlanQueryListShrinkRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DsgDesensPlanQueryListShrinkRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline DsgDesensPlanQueryListShrinkRequest& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // sceneId Field Functions 
    bool hasSceneId() const { return this->sceneId_ != nullptr;};
    void deleteSceneId() { this->sceneId_ = nullptr;};
    inline int64_t getSceneId() const { DARABONBA_PTR_GET_DEFAULT(sceneId_, 0L) };
    inline DsgDesensPlanQueryListShrinkRequest& setSceneId(int64_t sceneId) { DARABONBA_PTR_SET_VALUE(sceneId_, sceneId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline DsgDesensPlanQueryListShrinkRequest& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // columnsShrink Field Functions 
    bool hasColumnsShrink() const { return this->columnsShrink_ != nullptr;};
    void deleteColumnsShrink() { this->columnsShrink_ = nullptr;};
    inline string getColumnsShrink() const { DARABONBA_PTR_GET_DEFAULT(columnsShrink_, "") };
    inline DsgDesensPlanQueryListShrinkRequest& setColumnsShrink(string columnsShrink) { DARABONBA_PTR_SET_VALUE(columnsShrink_, columnsShrink) };


    // dataType Field Functions 
    bool hasDataType() const { return this->dataType_ != nullptr;};
    void deleteDataType() { this->dataType_ = nullptr;};
    inline string getDataType() const { DARABONBA_PTR_GET_DEFAULT(dataType_, "") };
    inline DsgDesensPlanQueryListShrinkRequest& setDataType(string dataType) { DARABONBA_PTR_SET_VALUE(dataType_, dataType) };


    // emptyNotDesesn Field Functions 
    bool hasEmptyNotDesesn() const { return this->emptyNotDesesn_ != nullptr;};
    void deleteEmptyNotDesesn() { this->emptyNotDesesn_ = nullptr;};
    inline string getEmptyNotDesesn() const { DARABONBA_PTR_GET_DEFAULT(emptyNotDesesn_, "") };
    inline DsgDesensPlanQueryListShrinkRequest& setEmptyNotDesesn(string emptyNotDesesn) { DARABONBA_PTR_SET_VALUE(emptyNotDesesn_, emptyNotDesesn) };


  protected:
    // The owner of the data masking rule.
    shared_ptr<string> owner_ {};
    // The page number.
    // 
    // This parameter is required.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page. Maximum value: 100.
    // 
    // This parameter is required.
    shared_ptr<int32_t> pageSize_ {};
    // The name of the sensitive field.
    shared_ptr<string> ruleName_ {};
    // The ID of the level-2 data masking scenario. You can call the [DsgSceneQuerySceneListByName](https://help.aliyun.com/document_detail/2786322.html) operation to query the list of IDs.
    // 
    // This parameter is required.
    shared_ptr<int64_t> sceneId_ {};
    // The status of the data masking rule. Valid values:
    // 
    // *   0: expired
    // *   1: effective
    shared_ptr<int32_t> status_ {};
    shared_ptr<string> columnsShrink_ {};
    shared_ptr<string> dataType_ {};
    shared_ptr<string> emptyNotDesesn_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
