// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERSOLUTIONSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERSOLUTIONSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Companyreg20200306
{
namespace Models
{
  class ListUserSolutionsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUserSolutionsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizType, bizType_);
      DARABONBA_PTR_TO_JSON(ExistStatus, existStatusShrink_);
      DARABONBA_PTR_TO_JSON(IntentionBizId, intentionBizId_);
      DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, ListUserSolutionsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizType, bizType_);
      DARABONBA_PTR_FROM_JSON(ExistStatus, existStatusShrink_);
      DARABONBA_PTR_FROM_JSON(IntentionBizId, intentionBizId_);
      DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
    };
    ListUserSolutionsShrinkRequest() = default ;
    ListUserSolutionsShrinkRequest(const ListUserSolutionsShrinkRequest &) = default ;
    ListUserSolutionsShrinkRequest(ListUserSolutionsShrinkRequest &&) = default ;
    ListUserSolutionsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUserSolutionsShrinkRequest() = default ;
    ListUserSolutionsShrinkRequest& operator=(const ListUserSolutionsShrinkRequest &) = default ;
    ListUserSolutionsShrinkRequest& operator=(ListUserSolutionsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizType_ == nullptr
        && this->existStatusShrink_ == nullptr && this->intentionBizId_ == nullptr && this->pageNum_ == nullptr && this->pageSize_ == nullptr; };
    // bizType Field Functions 
    bool hasBizType() const { return this->bizType_ != nullptr;};
    void deleteBizType() { this->bizType_ = nullptr;};
    inline string getBizType() const { DARABONBA_PTR_GET_DEFAULT(bizType_, "") };
    inline ListUserSolutionsShrinkRequest& setBizType(string bizType) { DARABONBA_PTR_SET_VALUE(bizType_, bizType) };


    // existStatusShrink Field Functions 
    bool hasExistStatusShrink() const { return this->existStatusShrink_ != nullptr;};
    void deleteExistStatusShrink() { this->existStatusShrink_ = nullptr;};
    inline string getExistStatusShrink() const { DARABONBA_PTR_GET_DEFAULT(existStatusShrink_, "") };
    inline ListUserSolutionsShrinkRequest& setExistStatusShrink(string existStatusShrink) { DARABONBA_PTR_SET_VALUE(existStatusShrink_, existStatusShrink) };


    // intentionBizId Field Functions 
    bool hasIntentionBizId() const { return this->intentionBizId_ != nullptr;};
    void deleteIntentionBizId() { this->intentionBizId_ = nullptr;};
    inline string getIntentionBizId() const { DARABONBA_PTR_GET_DEFAULT(intentionBizId_, "") };
    inline ListUserSolutionsShrinkRequest& setIntentionBizId(string intentionBizId) { DARABONBA_PTR_SET_VALUE(intentionBizId_, intentionBizId) };


    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int32_t getPageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
    inline ListUserSolutionsShrinkRequest& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListUserSolutionsShrinkRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    shared_ptr<string> bizType_ {};
    shared_ptr<string> existStatusShrink_ {};
    shared_ptr<string> intentionBizId_ {};
    shared_ptr<int32_t> pageNum_ {};
    shared_ptr<int32_t> pageSize_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Companyreg20200306
#endif
