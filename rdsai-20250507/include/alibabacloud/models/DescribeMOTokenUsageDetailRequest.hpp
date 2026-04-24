// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMOTOKENUSAGEDETAILREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMOTOKENUSAGEDETAILREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RdsAi20250507
{
namespace Models
{
  class DescribeMOTokenUsageDetailRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMOTokenUsageDetailRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConsumerName, consumerName_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Model, model_);
      DARABONBA_PTR_TO_JSON(Page, page_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMOTokenUsageDetailRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConsumerName, consumerName_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Model, model_);
      DARABONBA_PTR_FROM_JSON(Page, page_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeMOTokenUsageDetailRequest() = default ;
    DescribeMOTokenUsageDetailRequest(const DescribeMOTokenUsageDetailRequest &) = default ;
    DescribeMOTokenUsageDetailRequest(DescribeMOTokenUsageDetailRequest &&) = default ;
    DescribeMOTokenUsageDetailRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMOTokenUsageDetailRequest() = default ;
    DescribeMOTokenUsageDetailRequest& operator=(const DescribeMOTokenUsageDetailRequest &) = default ;
    DescribeMOTokenUsageDetailRequest& operator=(DescribeMOTokenUsageDetailRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->consumerName_ == nullptr
        && this->endTime_ == nullptr && this->instanceId_ == nullptr && this->model_ == nullptr && this->page_ == nullptr && this->pageSize_ == nullptr
        && this->region_ == nullptr && this->startTime_ == nullptr; };
    // consumerName Field Functions 
    bool hasConsumerName() const { return this->consumerName_ != nullptr;};
    void deleteConsumerName() { this->consumerName_ = nullptr;};
    inline string getConsumerName() const { DARABONBA_PTR_GET_DEFAULT(consumerName_, "") };
    inline DescribeMOTokenUsageDetailRequest& setConsumerName(string consumerName) { DARABONBA_PTR_SET_VALUE(consumerName_, consumerName) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeMOTokenUsageDetailRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeMOTokenUsageDetailRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // model Field Functions 
    bool hasModel() const { return this->model_ != nullptr;};
    void deleteModel() { this->model_ = nullptr;};
    inline string getModel() const { DARABONBA_PTR_GET_DEFAULT(model_, "") };
    inline DescribeMOTokenUsageDetailRequest& setModel(string model) { DARABONBA_PTR_SET_VALUE(model_, model) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline int32_t getPage() const { DARABONBA_PTR_GET_DEFAULT(page_, 0) };
    inline DescribeMOTokenUsageDetailRequest& setPage(int32_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeMOTokenUsageDetailRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline DescribeMOTokenUsageDetailRequest& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeMOTokenUsageDetailRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    shared_ptr<string> consumerName_ {};
    shared_ptr<string> endTime_ {};
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    shared_ptr<string> model_ {};
    shared_ptr<int32_t> page_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> region_ {};
    shared_ptr<string> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RdsAi20250507
#endif
