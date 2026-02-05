// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTYUNQITASKBYUIDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTYUNQITASKBYUIDREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CustomerService20231228
{
namespace Models
{
  class ListYunQiTaskByUidRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListYunQiTaskByUidRequest& obj) { 
      DARABONBA_PTR_TO_JSON(createTimeEnd, createTimeEnd_);
      DARABONBA_PTR_TO_JSON(createTimeStart, createTimeStart_);
      DARABONBA_PTR_TO_JSON(freeOrderApplyCodes, freeOrderApplyCodes_);
      DARABONBA_PTR_TO_JSON(freeOrderApplyIds, freeOrderApplyIds_);
      DARABONBA_PTR_TO_JSON(orderIds, orderIds_);
      DARABONBA_PTR_TO_JSON(pageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(statusList, statusList_);
    };
    friend void from_json(const Darabonba::Json& j, ListYunQiTaskByUidRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(createTimeEnd, createTimeEnd_);
      DARABONBA_PTR_FROM_JSON(createTimeStart, createTimeStart_);
      DARABONBA_PTR_FROM_JSON(freeOrderApplyCodes, freeOrderApplyCodes_);
      DARABONBA_PTR_FROM_JSON(freeOrderApplyIds, freeOrderApplyIds_);
      DARABONBA_PTR_FROM_JSON(orderIds, orderIds_);
      DARABONBA_PTR_FROM_JSON(pageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(statusList, statusList_);
    };
    ListYunQiTaskByUidRequest() = default ;
    ListYunQiTaskByUidRequest(const ListYunQiTaskByUidRequest &) = default ;
    ListYunQiTaskByUidRequest(ListYunQiTaskByUidRequest &&) = default ;
    ListYunQiTaskByUidRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListYunQiTaskByUidRequest() = default ;
    ListYunQiTaskByUidRequest& operator=(const ListYunQiTaskByUidRequest &) = default ;
    ListYunQiTaskByUidRequest& operator=(ListYunQiTaskByUidRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTimeEnd_ == nullptr
        && this->createTimeStart_ == nullptr && this->freeOrderApplyCodes_ == nullptr && this->freeOrderApplyIds_ == nullptr && this->orderIds_ == nullptr && this->pageNum_ == nullptr
        && this->pageSize_ == nullptr && this->statusList_ == nullptr; };
    // createTimeEnd Field Functions 
    bool hasCreateTimeEnd() const { return this->createTimeEnd_ != nullptr;};
    void deleteCreateTimeEnd() { this->createTimeEnd_ = nullptr;};
    inline int64_t getCreateTimeEnd() const { DARABONBA_PTR_GET_DEFAULT(createTimeEnd_, 0L) };
    inline ListYunQiTaskByUidRequest& setCreateTimeEnd(int64_t createTimeEnd) { DARABONBA_PTR_SET_VALUE(createTimeEnd_, createTimeEnd) };


    // createTimeStart Field Functions 
    bool hasCreateTimeStart() const { return this->createTimeStart_ != nullptr;};
    void deleteCreateTimeStart() { this->createTimeStart_ = nullptr;};
    inline int64_t getCreateTimeStart() const { DARABONBA_PTR_GET_DEFAULT(createTimeStart_, 0L) };
    inline ListYunQiTaskByUidRequest& setCreateTimeStart(int64_t createTimeStart) { DARABONBA_PTR_SET_VALUE(createTimeStart_, createTimeStart) };


    // freeOrderApplyCodes Field Functions 
    bool hasFreeOrderApplyCodes() const { return this->freeOrderApplyCodes_ != nullptr;};
    void deleteFreeOrderApplyCodes() { this->freeOrderApplyCodes_ = nullptr;};
    inline const vector<string> & getFreeOrderApplyCodes() const { DARABONBA_PTR_GET_CONST(freeOrderApplyCodes_, vector<string>) };
    inline vector<string> getFreeOrderApplyCodes() { DARABONBA_PTR_GET(freeOrderApplyCodes_, vector<string>) };
    inline ListYunQiTaskByUidRequest& setFreeOrderApplyCodes(const vector<string> & freeOrderApplyCodes) { DARABONBA_PTR_SET_VALUE(freeOrderApplyCodes_, freeOrderApplyCodes) };
    inline ListYunQiTaskByUidRequest& setFreeOrderApplyCodes(vector<string> && freeOrderApplyCodes) { DARABONBA_PTR_SET_RVALUE(freeOrderApplyCodes_, freeOrderApplyCodes) };


    // freeOrderApplyIds Field Functions 
    bool hasFreeOrderApplyIds() const { return this->freeOrderApplyIds_ != nullptr;};
    void deleteFreeOrderApplyIds() { this->freeOrderApplyIds_ = nullptr;};
    inline const vector<int64_t> & getFreeOrderApplyIds() const { DARABONBA_PTR_GET_CONST(freeOrderApplyIds_, vector<int64_t>) };
    inline vector<int64_t> getFreeOrderApplyIds() { DARABONBA_PTR_GET(freeOrderApplyIds_, vector<int64_t>) };
    inline ListYunQiTaskByUidRequest& setFreeOrderApplyIds(const vector<int64_t> & freeOrderApplyIds) { DARABONBA_PTR_SET_VALUE(freeOrderApplyIds_, freeOrderApplyIds) };
    inline ListYunQiTaskByUidRequest& setFreeOrderApplyIds(vector<int64_t> && freeOrderApplyIds) { DARABONBA_PTR_SET_RVALUE(freeOrderApplyIds_, freeOrderApplyIds) };


    // orderIds Field Functions 
    bool hasOrderIds() const { return this->orderIds_ != nullptr;};
    void deleteOrderIds() { this->orderIds_ = nullptr;};
    inline const vector<int64_t> & getOrderIds() const { DARABONBA_PTR_GET_CONST(orderIds_, vector<int64_t>) };
    inline vector<int64_t> getOrderIds() { DARABONBA_PTR_GET(orderIds_, vector<int64_t>) };
    inline ListYunQiTaskByUidRequest& setOrderIds(const vector<int64_t> & orderIds) { DARABONBA_PTR_SET_VALUE(orderIds_, orderIds) };
    inline ListYunQiTaskByUidRequest& setOrderIds(vector<int64_t> && orderIds) { DARABONBA_PTR_SET_RVALUE(orderIds_, orderIds) };


    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int32_t getPageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
    inline ListYunQiTaskByUidRequest& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListYunQiTaskByUidRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // statusList Field Functions 
    bool hasStatusList() const { return this->statusList_ != nullptr;};
    void deleteStatusList() { this->statusList_ = nullptr;};
    inline const vector<string> & getStatusList() const { DARABONBA_PTR_GET_CONST(statusList_, vector<string>) };
    inline vector<string> getStatusList() { DARABONBA_PTR_GET(statusList_, vector<string>) };
    inline ListYunQiTaskByUidRequest& setStatusList(const vector<string> & statusList) { DARABONBA_PTR_SET_VALUE(statusList_, statusList) };
    inline ListYunQiTaskByUidRequest& setStatusList(vector<string> && statusList) { DARABONBA_PTR_SET_RVALUE(statusList_, statusList) };


  protected:
    shared_ptr<int64_t> createTimeEnd_ {};
    shared_ptr<int64_t> createTimeStart_ {};
    shared_ptr<vector<string>> freeOrderApplyCodes_ {};
    shared_ptr<vector<int64_t>> freeOrderApplyIds_ {};
    shared_ptr<vector<int64_t>> orderIds_ {};
    shared_ptr<int32_t> pageNum_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<vector<string>> statusList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CustomerService20231228
#endif
