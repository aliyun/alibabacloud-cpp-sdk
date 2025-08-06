// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERSOLUTIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERSOLUTIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Companyreg20200306
{
namespace Models
{
  class ListUserSolutionsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUserSolutionsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizType, bizType_);
      DARABONBA_PTR_TO_JSON(ExistStatus, existStatus_);
      DARABONBA_PTR_TO_JSON(IntentionBizId, intentionBizId_);
      DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, ListUserSolutionsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizType, bizType_);
      DARABONBA_PTR_FROM_JSON(ExistStatus, existStatus_);
      DARABONBA_PTR_FROM_JSON(IntentionBizId, intentionBizId_);
      DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
    };
    ListUserSolutionsRequest() = default ;
    ListUserSolutionsRequest(const ListUserSolutionsRequest &) = default ;
    ListUserSolutionsRequest(ListUserSolutionsRequest &&) = default ;
    ListUserSolutionsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUserSolutionsRequest() = default ;
    ListUserSolutionsRequest& operator=(const ListUserSolutionsRequest &) = default ;
    ListUserSolutionsRequest& operator=(ListUserSolutionsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bizType_ != nullptr
        && this->existStatus_ != nullptr && this->intentionBizId_ != nullptr && this->pageNum_ != nullptr && this->pageSize_ != nullptr; };
    // bizType Field Functions 
    bool hasBizType() const { return this->bizType_ != nullptr;};
    void deleteBizType() { this->bizType_ = nullptr;};
    inline string bizType() const { DARABONBA_PTR_GET_DEFAULT(bizType_, "") };
    inline ListUserSolutionsRequest& setBizType(string bizType) { DARABONBA_PTR_SET_VALUE(bizType_, bizType) };


    // existStatus Field Functions 
    bool hasExistStatus() const { return this->existStatus_ != nullptr;};
    void deleteExistStatus() { this->existStatus_ = nullptr;};
    inline const vector<int64_t> & existStatus() const { DARABONBA_PTR_GET_CONST(existStatus_, vector<int64_t>) };
    inline vector<int64_t> existStatus() { DARABONBA_PTR_GET(existStatus_, vector<int64_t>) };
    inline ListUserSolutionsRequest& setExistStatus(const vector<int64_t> & existStatus) { DARABONBA_PTR_SET_VALUE(existStatus_, existStatus) };
    inline ListUserSolutionsRequest& setExistStatus(vector<int64_t> && existStatus) { DARABONBA_PTR_SET_RVALUE(existStatus_, existStatus) };


    // intentionBizId Field Functions 
    bool hasIntentionBizId() const { return this->intentionBizId_ != nullptr;};
    void deleteIntentionBizId() { this->intentionBizId_ = nullptr;};
    inline string intentionBizId() const { DARABONBA_PTR_GET_DEFAULT(intentionBizId_, "") };
    inline ListUserSolutionsRequest& setIntentionBizId(string intentionBizId) { DARABONBA_PTR_SET_VALUE(intentionBizId_, intentionBizId) };


    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int32_t pageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
    inline ListUserSolutionsRequest& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListUserSolutionsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    std::shared_ptr<string> bizType_ = nullptr;
    std::shared_ptr<vector<int64_t>> existStatus_ = nullptr;
    std::shared_ptr<string> intentionBizId_ = nullptr;
    std::shared_ptr<int32_t> pageNum_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Companyreg20200306
#endif
