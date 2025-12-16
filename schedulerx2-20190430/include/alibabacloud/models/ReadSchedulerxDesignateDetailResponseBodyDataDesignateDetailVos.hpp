// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_READSCHEDULERXDESIGNATEDETAILRESPONSEBODYDATADESIGNATEDETAILVOS_HPP_
#define ALIBABACLOUD_MODELS_READSCHEDULERXDESIGNATEDETAILRESPONSEBODYDATADESIGNATEDETAILVOS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ReadSchedulerxDesignateDetailResponseBodyDataDesignateDetailVosMetrics.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Schedulerx220190430
{
namespace Models
{
  class ReadSchedulerxDesignateDetailResponseBodyDataDesignateDetailVos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ReadSchedulerxDesignateDetailResponseBodyDataDesignateDetailVos& obj) { 
      DARABONBA_PTR_TO_JSON(Busy, busy_);
      DARABONBA_PTR_TO_JSON(Checked, checked_);
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Metrics, metrics_);
      DARABONBA_PTR_TO_JSON(Offline, offline_);
      DARABONBA_PTR_TO_JSON(Size, size_);
      DARABONBA_PTR_TO_JSON(Starter, starter_);
      DARABONBA_PTR_TO_JSON(Version, version_);
    };
    friend void from_json(const Darabonba::Json& j, ReadSchedulerxDesignateDetailResponseBodyDataDesignateDetailVos& obj) { 
      DARABONBA_PTR_FROM_JSON(Busy, busy_);
      DARABONBA_PTR_FROM_JSON(Checked, checked_);
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Metrics, metrics_);
      DARABONBA_PTR_FROM_JSON(Offline, offline_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
      DARABONBA_PTR_FROM_JSON(Starter, starter_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
    };
    ReadSchedulerxDesignateDetailResponseBodyDataDesignateDetailVos() = default ;
    ReadSchedulerxDesignateDetailResponseBodyDataDesignateDetailVos(const ReadSchedulerxDesignateDetailResponseBodyDataDesignateDetailVos &) = default ;
    ReadSchedulerxDesignateDetailResponseBodyDataDesignateDetailVos(ReadSchedulerxDesignateDetailResponseBodyDataDesignateDetailVos &&) = default ;
    ReadSchedulerxDesignateDetailResponseBodyDataDesignateDetailVos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ReadSchedulerxDesignateDetailResponseBodyDataDesignateDetailVos() = default ;
    ReadSchedulerxDesignateDetailResponseBodyDataDesignateDetailVos& operator=(const ReadSchedulerxDesignateDetailResponseBodyDataDesignateDetailVos &) = default ;
    ReadSchedulerxDesignateDetailResponseBodyDataDesignateDetailVos& operator=(ReadSchedulerxDesignateDetailResponseBodyDataDesignateDetailVos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->busy_ == nullptr
        && return this->checked_ == nullptr && return this->key_ == nullptr && return this->metrics_ == nullptr && return this->offline_ == nullptr && return this->size_ == nullptr
        && return this->starter_ == nullptr && return this->version_ == nullptr; };
    // busy Field Functions 
    bool hasBusy() const { return this->busy_ != nullptr;};
    void deleteBusy() { this->busy_ = nullptr;};
    inline string busy() const { DARABONBA_PTR_GET_DEFAULT(busy_, "") };
    inline ReadSchedulerxDesignateDetailResponseBodyDataDesignateDetailVos& setBusy(string busy) { DARABONBA_PTR_SET_VALUE(busy_, busy) };


    // checked Field Functions 
    bool hasChecked() const { return this->checked_ != nullptr;};
    void deleteChecked() { this->checked_ = nullptr;};
    inline bool checked() const { DARABONBA_PTR_GET_DEFAULT(checked_, false) };
    inline ReadSchedulerxDesignateDetailResponseBodyDataDesignateDetailVos& setChecked(bool checked) { DARABONBA_PTR_SET_VALUE(checked_, checked) };


    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline ReadSchedulerxDesignateDetailResponseBodyDataDesignateDetailVos& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // metrics Field Functions 
    bool hasMetrics() const { return this->metrics_ != nullptr;};
    void deleteMetrics() { this->metrics_ = nullptr;};
    inline const Models::ReadSchedulerxDesignateDetailResponseBodyDataDesignateDetailVosMetrics & metrics() const { DARABONBA_PTR_GET_CONST(metrics_, Models::ReadSchedulerxDesignateDetailResponseBodyDataDesignateDetailVosMetrics) };
    inline Models::ReadSchedulerxDesignateDetailResponseBodyDataDesignateDetailVosMetrics metrics() { DARABONBA_PTR_GET(metrics_, Models::ReadSchedulerxDesignateDetailResponseBodyDataDesignateDetailVosMetrics) };
    inline ReadSchedulerxDesignateDetailResponseBodyDataDesignateDetailVos& setMetrics(const Models::ReadSchedulerxDesignateDetailResponseBodyDataDesignateDetailVosMetrics & metrics) { DARABONBA_PTR_SET_VALUE(metrics_, metrics) };
    inline ReadSchedulerxDesignateDetailResponseBodyDataDesignateDetailVos& setMetrics(Models::ReadSchedulerxDesignateDetailResponseBodyDataDesignateDetailVosMetrics && metrics) { DARABONBA_PTR_SET_RVALUE(metrics_, metrics) };


    // offline Field Functions 
    bool hasOffline() const { return this->offline_ != nullptr;};
    void deleteOffline() { this->offline_ = nullptr;};
    inline bool offline() const { DARABONBA_PTR_GET_DEFAULT(offline_, false) };
    inline ReadSchedulerxDesignateDetailResponseBodyDataDesignateDetailVos& setOffline(bool offline) { DARABONBA_PTR_SET_VALUE(offline_, offline) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int32_t size() const { DARABONBA_PTR_GET_DEFAULT(size_, 0) };
    inline ReadSchedulerxDesignateDetailResponseBodyDataDesignateDetailVos& setSize(int32_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // starter Field Functions 
    bool hasStarter() const { return this->starter_ != nullptr;};
    void deleteStarter() { this->starter_ = nullptr;};
    inline string starter() const { DARABONBA_PTR_GET_DEFAULT(starter_, "") };
    inline ReadSchedulerxDesignateDetailResponseBodyDataDesignateDetailVos& setStarter(string starter) { DARABONBA_PTR_SET_VALUE(starter_, starter) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline ReadSchedulerxDesignateDetailResponseBodyDataDesignateDetailVos& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    // The status of the workers. Valid values: 
    // 
    // FREE: idle. 
    // LOAD5_BUSY: The average of the latest five values of CPU workload is too high. 
    // HEAP5_BUSY: The average of the latest five values of heap memory usage is too high. 
    // DISK_BUSY: The disk usage is too high.
    std::shared_ptr<string> busy_ = nullptr;
    // Indicates whether the workers are specified. Valid values: true and false.
    std::shared_ptr<bool> checked_ = nullptr;
    // The information returned based on the value of the DesignateType parameter.
    // 
    // *   If you set the DesignateType parameter to 2, the tags of the workers are returned.
    // *   If you set the DesignateType parameter to 1, the IP addresses of the workers are returned.
    std::shared_ptr<string> key_ = nullptr;
    // The metric values.
    std::shared_ptr<Models::ReadSchedulerxDesignateDetailResponseBodyDataDesignateDetailVosMetrics> metrics_ = nullptr;
    // Indicates whether the workers are offline.
    std::shared_ptr<bool> offline_ = nullptr;
    // The number of workers.
    std::shared_ptr<int32_t> size_ = nullptr;
    // The startup method of the workers.
    std::shared_ptr<string> starter_ = nullptr;
    // The version of the workers.
    std::shared_ptr<string> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Schedulerx220190430
#endif
