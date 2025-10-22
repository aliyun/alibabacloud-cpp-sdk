// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERINTENTIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERINTENTIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Companyreg20200306
{
namespace Models
{
  class ListUserIntentionsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUserIntentionsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Area, area_);
      DARABONBA_PTR_TO_JSON(BizType, bizType_);
      DARABONBA_PTR_TO_JSON(BizTypes, bizTypes_);
      DARABONBA_PTR_TO_JSON(IntentionBizId, intentionBizId_);
      DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(SortFiled, sortFiled_);
      DARABONBA_PTR_TO_JSON(SortOrder, sortOrder_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(WithExtInfo, withExtInfo_);
    };
    friend void from_json(const Darabonba::Json& j, ListUserIntentionsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Area, area_);
      DARABONBA_PTR_FROM_JSON(BizType, bizType_);
      DARABONBA_PTR_FROM_JSON(BizTypes, bizTypes_);
      DARABONBA_PTR_FROM_JSON(IntentionBizId, intentionBizId_);
      DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(SortFiled, sortFiled_);
      DARABONBA_PTR_FROM_JSON(SortOrder, sortOrder_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(WithExtInfo, withExtInfo_);
    };
    ListUserIntentionsRequest() = default ;
    ListUserIntentionsRequest(const ListUserIntentionsRequest &) = default ;
    ListUserIntentionsRequest(ListUserIntentionsRequest &&) = default ;
    ListUserIntentionsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUserIntentionsRequest() = default ;
    ListUserIntentionsRequest& operator=(const ListUserIntentionsRequest &) = default ;
    ListUserIntentionsRequest& operator=(ListUserIntentionsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->area_ == nullptr
        && return this->bizType_ == nullptr && return this->bizTypes_ == nullptr && return this->intentionBizId_ == nullptr && return this->pageNum_ == nullptr && return this->pageSize_ == nullptr
        && return this->sortFiled_ == nullptr && return this->sortOrder_ == nullptr && return this->status_ == nullptr && return this->withExtInfo_ == nullptr; };
    // area Field Functions 
    bool hasArea() const { return this->area_ != nullptr;};
    void deleteArea() { this->area_ = nullptr;};
    inline string area() const { DARABONBA_PTR_GET_DEFAULT(area_, "") };
    inline ListUserIntentionsRequest& setArea(string area) { DARABONBA_PTR_SET_VALUE(area_, area) };


    // bizType Field Functions 
    bool hasBizType() const { return this->bizType_ != nullptr;};
    void deleteBizType() { this->bizType_ = nullptr;};
    inline string bizType() const { DARABONBA_PTR_GET_DEFAULT(bizType_, "") };
    inline ListUserIntentionsRequest& setBizType(string bizType) { DARABONBA_PTR_SET_VALUE(bizType_, bizType) };


    // bizTypes Field Functions 
    bool hasBizTypes() const { return this->bizTypes_ != nullptr;};
    void deleteBizTypes() { this->bizTypes_ = nullptr;};
    inline string bizTypes() const { DARABONBA_PTR_GET_DEFAULT(bizTypes_, "") };
    inline ListUserIntentionsRequest& setBizTypes(string bizTypes) { DARABONBA_PTR_SET_VALUE(bizTypes_, bizTypes) };


    // intentionBizId Field Functions 
    bool hasIntentionBizId() const { return this->intentionBizId_ != nullptr;};
    void deleteIntentionBizId() { this->intentionBizId_ = nullptr;};
    inline string intentionBizId() const { DARABONBA_PTR_GET_DEFAULT(intentionBizId_, "") };
    inline ListUserIntentionsRequest& setIntentionBizId(string intentionBizId) { DARABONBA_PTR_SET_VALUE(intentionBizId_, intentionBizId) };


    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int32_t pageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
    inline ListUserIntentionsRequest& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListUserIntentionsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // sortFiled Field Functions 
    bool hasSortFiled() const { return this->sortFiled_ != nullptr;};
    void deleteSortFiled() { this->sortFiled_ = nullptr;};
    inline string sortFiled() const { DARABONBA_PTR_GET_DEFAULT(sortFiled_, "") };
    inline ListUserIntentionsRequest& setSortFiled(string sortFiled) { DARABONBA_PTR_SET_VALUE(sortFiled_, sortFiled) };


    // sortOrder Field Functions 
    bool hasSortOrder() const { return this->sortOrder_ != nullptr;};
    void deleteSortOrder() { this->sortOrder_ = nullptr;};
    inline string sortOrder() const { DARABONBA_PTR_GET_DEFAULT(sortOrder_, "") };
    inline ListUserIntentionsRequest& setSortOrder(string sortOrder) { DARABONBA_PTR_SET_VALUE(sortOrder_, sortOrder) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline ListUserIntentionsRequest& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // withExtInfo Field Functions 
    bool hasWithExtInfo() const { return this->withExtInfo_ != nullptr;};
    void deleteWithExtInfo() { this->withExtInfo_ = nullptr;};
    inline bool withExtInfo() const { DARABONBA_PTR_GET_DEFAULT(withExtInfo_, false) };
    inline ListUserIntentionsRequest& setWithExtInfo(bool withExtInfo) { DARABONBA_PTR_SET_VALUE(withExtInfo_, withExtInfo) };


  protected:
    std::shared_ptr<string> area_ = nullptr;
    std::shared_ptr<string> bizType_ = nullptr;
    std::shared_ptr<string> bizTypes_ = nullptr;
    std::shared_ptr<string> intentionBizId_ = nullptr;
    std::shared_ptr<int32_t> pageNum_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<string> sortFiled_ = nullptr;
    std::shared_ptr<string> sortOrder_ = nullptr;
    std::shared_ptr<int32_t> status_ = nullptr;
    std::shared_ptr<bool> withExtInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Companyreg20200306
#endif
