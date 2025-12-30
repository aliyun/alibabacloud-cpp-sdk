// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETHISTORYLISTBYBIZTYPEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETHISTORYLISTBYBIZTYPEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DianJin20240628
{
namespace Models
{
  class GetHistoryListByBizTypeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetHistoryListByBizTypeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(bizId, bizId_);
      DARABONBA_PTR_TO_JSON(bizType, bizType_);
      DARABONBA_PTR_TO_JSON(page, page_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, GetHistoryListByBizTypeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(bizId, bizId_);
      DARABONBA_PTR_FROM_JSON(bizType, bizType_);
      DARABONBA_PTR_FROM_JSON(page, page_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
    };
    GetHistoryListByBizTypeRequest() = default ;
    GetHistoryListByBizTypeRequest(const GetHistoryListByBizTypeRequest &) = default ;
    GetHistoryListByBizTypeRequest(GetHistoryListByBizTypeRequest &&) = default ;
    GetHistoryListByBizTypeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetHistoryListByBizTypeRequest() = default ;
    GetHistoryListByBizTypeRequest& operator=(const GetHistoryListByBizTypeRequest &) = default ;
    GetHistoryListByBizTypeRequest& operator=(GetHistoryListByBizTypeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizId_ == nullptr
        && this->bizType_ == nullptr && this->page_ == nullptr && this->pageSize_ == nullptr; };
    // bizId Field Functions 
    bool hasBizId() const { return this->bizId_ != nullptr;};
    void deleteBizId() { this->bizId_ = nullptr;};
    inline string getBizId() const { DARABONBA_PTR_GET_DEFAULT(bizId_, "") };
    inline GetHistoryListByBizTypeRequest& setBizId(string bizId) { DARABONBA_PTR_SET_VALUE(bizId_, bizId) };


    // bizType Field Functions 
    bool hasBizType() const { return this->bizType_ != nullptr;};
    void deleteBizType() { this->bizType_ = nullptr;};
    inline string getBizType() const { DARABONBA_PTR_GET_DEFAULT(bizType_, "") };
    inline GetHistoryListByBizTypeRequest& setBizType(string bizType) { DARABONBA_PTR_SET_VALUE(bizType_, bizType) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline int32_t getPage() const { DARABONBA_PTR_GET_DEFAULT(page_, 0) };
    inline GetHistoryListByBizTypeRequest& setPage(int32_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline GetHistoryListByBizTypeRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    // This parameter is required.
    shared_ptr<string> bizId_ {};
    // This parameter is required.
    shared_ptr<string> bizType_ {};
    shared_ptr<int32_t> page_ {};
    shared_ptr<int32_t> pageSize_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DianJin20240628
#endif
