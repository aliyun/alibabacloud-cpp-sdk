// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRAINORDERLISTQUERYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_TRAINORDERLISTQUERYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class TrainOrderListQueryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TrainOrderListQueryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(all_apply, allApply_);
      DARABONBA_PTR_TO_JSON(apply_id, applyId_);
      DARABONBA_PTR_TO_JSON(depart_id, departId_);
      DARABONBA_PTR_TO_JSON(end_time, endTime_);
      DARABONBA_PTR_TO_JSON(page, page_);
      DARABONBA_PTR_TO_JSON(page_size, pageSize_);
      DARABONBA_PTR_TO_JSON(start_time, startTime_);
      DARABONBA_PTR_TO_JSON(thirdpart_apply_id, thirdpartApplyId_);
      DARABONBA_PTR_TO_JSON(update_end_time, updateEndTime_);
      DARABONBA_PTR_TO_JSON(update_start_time, updateStartTime_);
      DARABONBA_PTR_TO_JSON(user_id, userId_);
    };
    friend void from_json(const Darabonba::Json& j, TrainOrderListQueryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(all_apply, allApply_);
      DARABONBA_PTR_FROM_JSON(apply_id, applyId_);
      DARABONBA_PTR_FROM_JSON(depart_id, departId_);
      DARABONBA_PTR_FROM_JSON(end_time, endTime_);
      DARABONBA_PTR_FROM_JSON(page, page_);
      DARABONBA_PTR_FROM_JSON(page_size, pageSize_);
      DARABONBA_PTR_FROM_JSON(start_time, startTime_);
      DARABONBA_PTR_FROM_JSON(thirdpart_apply_id, thirdpartApplyId_);
      DARABONBA_PTR_FROM_JSON(update_end_time, updateEndTime_);
      DARABONBA_PTR_FROM_JSON(update_start_time, updateStartTime_);
      DARABONBA_PTR_FROM_JSON(user_id, userId_);
    };
    TrainOrderListQueryRequest() = default ;
    TrainOrderListQueryRequest(const TrainOrderListQueryRequest &) = default ;
    TrainOrderListQueryRequest(TrainOrderListQueryRequest &&) = default ;
    TrainOrderListQueryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TrainOrderListQueryRequest() = default ;
    TrainOrderListQueryRequest& operator=(const TrainOrderListQueryRequest &) = default ;
    TrainOrderListQueryRequest& operator=(TrainOrderListQueryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->allApply_ != nullptr
        && this->applyId_ != nullptr && this->departId_ != nullptr && this->endTime_ != nullptr && this->page_ != nullptr && this->pageSize_ != nullptr
        && this->startTime_ != nullptr && this->thirdpartApplyId_ != nullptr && this->updateEndTime_ != nullptr && this->updateStartTime_ != nullptr && this->userId_ != nullptr; };
    // allApply Field Functions 
    bool hasAllApply() const { return this->allApply_ != nullptr;};
    void deleteAllApply() { this->allApply_ = nullptr;};
    inline bool allApply() const { DARABONBA_PTR_GET_DEFAULT(allApply_, false) };
    inline TrainOrderListQueryRequest& setAllApply(bool allApply) { DARABONBA_PTR_SET_VALUE(allApply_, allApply) };


    // applyId Field Functions 
    bool hasApplyId() const { return this->applyId_ != nullptr;};
    void deleteApplyId() { this->applyId_ = nullptr;};
    inline int64_t applyId() const { DARABONBA_PTR_GET_DEFAULT(applyId_, 0L) };
    inline TrainOrderListQueryRequest& setApplyId(int64_t applyId) { DARABONBA_PTR_SET_VALUE(applyId_, applyId) };


    // departId Field Functions 
    bool hasDepartId() const { return this->departId_ != nullptr;};
    void deleteDepartId() { this->departId_ = nullptr;};
    inline string departId() const { DARABONBA_PTR_GET_DEFAULT(departId_, "") };
    inline TrainOrderListQueryRequest& setDepartId(string departId) { DARABONBA_PTR_SET_VALUE(departId_, departId) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline TrainOrderListQueryRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline int32_t page() const { DARABONBA_PTR_GET_DEFAULT(page_, 0) };
    inline TrainOrderListQueryRequest& setPage(int32_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline TrainOrderListQueryRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline TrainOrderListQueryRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // thirdpartApplyId Field Functions 
    bool hasThirdpartApplyId() const { return this->thirdpartApplyId_ != nullptr;};
    void deleteThirdpartApplyId() { this->thirdpartApplyId_ = nullptr;};
    inline string thirdpartApplyId() const { DARABONBA_PTR_GET_DEFAULT(thirdpartApplyId_, "") };
    inline TrainOrderListQueryRequest& setThirdpartApplyId(string thirdpartApplyId) { DARABONBA_PTR_SET_VALUE(thirdpartApplyId_, thirdpartApplyId) };


    // updateEndTime Field Functions 
    bool hasUpdateEndTime() const { return this->updateEndTime_ != nullptr;};
    void deleteUpdateEndTime() { this->updateEndTime_ = nullptr;};
    inline string updateEndTime() const { DARABONBA_PTR_GET_DEFAULT(updateEndTime_, "") };
    inline TrainOrderListQueryRequest& setUpdateEndTime(string updateEndTime) { DARABONBA_PTR_SET_VALUE(updateEndTime_, updateEndTime) };


    // updateStartTime Field Functions 
    bool hasUpdateStartTime() const { return this->updateStartTime_ != nullptr;};
    void deleteUpdateStartTime() { this->updateStartTime_ = nullptr;};
    inline string updateStartTime() const { DARABONBA_PTR_GET_DEFAULT(updateStartTime_, "") };
    inline TrainOrderListQueryRequest& setUpdateStartTime(string updateStartTime) { DARABONBA_PTR_SET_VALUE(updateStartTime_, updateStartTime) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline TrainOrderListQueryRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    std::shared_ptr<bool> allApply_ = nullptr;
    std::shared_ptr<int64_t> applyId_ = nullptr;
    std::shared_ptr<string> departId_ = nullptr;
    std::shared_ptr<string> endTime_ = nullptr;
    std::shared_ptr<int32_t> page_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<string> startTime_ = nullptr;
    std::shared_ptr<string> thirdpartApplyId_ = nullptr;
    std::shared_ptr<string> updateEndTime_ = nullptr;
    std::shared_ptr<string> updateStartTime_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
