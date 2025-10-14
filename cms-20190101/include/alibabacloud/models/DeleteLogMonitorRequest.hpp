// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETELOGMONITORREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETELOGMONITORREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DeleteLogMonitorRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteLogMonitorRequest& obj) { 
      DARABONBA_PTR_TO_JSON(LogId, logId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteLogMonitorRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(LogId, logId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DeleteLogMonitorRequest() = default ;
    DeleteLogMonitorRequest(const DeleteLogMonitorRequest &) = default ;
    DeleteLogMonitorRequest(DeleteLogMonitorRequest &&) = default ;
    DeleteLogMonitorRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteLogMonitorRequest() = default ;
    DeleteLogMonitorRequest& operator=(const DeleteLogMonitorRequest &) = default ;
    DeleteLogMonitorRequest& operator=(DeleteLogMonitorRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->logId_ == nullptr
        && return this->regionId_ == nullptr; };
    // logId Field Functions 
    bool hasLogId() const { return this->logId_ != nullptr;};
    void deleteLogId() { this->logId_ = nullptr;};
    inline int64_t logId() const { DARABONBA_PTR_GET_DEFAULT(logId_, 0L) };
    inline DeleteLogMonitorRequest& setLogId(int64_t logId) { DARABONBA_PTR_SET_VALUE(logId_, logId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeleteLogMonitorRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The ID of the log monitoring metric.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> logId_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
