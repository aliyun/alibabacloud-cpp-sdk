// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETJOBLOGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETJOBLOGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EHPC20240730
{
namespace Models
{
  class GetJobLogRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetJobLogRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(LogType, logType_);
      DARABONBA_PTR_TO_JSON(Offset, offset_);
      DARABONBA_PTR_TO_JSON(Size, size_);
    };
    friend void from_json(const Darabonba::Json& j, GetJobLogRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(LogType, logType_);
      DARABONBA_PTR_FROM_JSON(Offset, offset_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
    };
    GetJobLogRequest() = default ;
    GetJobLogRequest(const GetJobLogRequest &) = default ;
    GetJobLogRequest(GetJobLogRequest &&) = default ;
    GetJobLogRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetJobLogRequest() = default ;
    GetJobLogRequest& operator=(const GetJobLogRequest &) = default ;
    GetJobLogRequest& operator=(GetJobLogRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && return this->jobId_ == nullptr && return this->logType_ == nullptr && return this->offset_ == nullptr && return this->size_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline GetJobLogRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline GetJobLogRequest& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // logType Field Functions 
    bool hasLogType() const { return this->logType_ != nullptr;};
    void deleteLogType() { this->logType_ = nullptr;};
    inline string logType() const { DARABONBA_PTR_GET_DEFAULT(logType_, "") };
    inline GetJobLogRequest& setLogType(string logType) { DARABONBA_PTR_SET_VALUE(logType_, logType) };


    // offset Field Functions 
    bool hasOffset() const { return this->offset_ != nullptr;};
    void deleteOffset() { this->offset_ = nullptr;};
    inline string offset() const { DARABONBA_PTR_GET_DEFAULT(offset_, "") };
    inline GetJobLogRequest& setOffset(string offset) { DARABONBA_PTR_SET_VALUE(offset_, offset) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline string size() const { DARABONBA_PTR_GET_DEFAULT(size_, "") };
    inline GetJobLogRequest& setSize(string size) { DARABONBA_PTR_SET_VALUE(size_, size) };


  protected:
    // The cluster ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The job ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> jobId_ = nullptr;
    // The log type. Valid values:
    // 
    // *   stdout: standard output logs.
    // *   stderr: error output logs.
    // *   all: all logs.
    // 
    // Default value: all.
    std::shared_ptr<string> logType_ = nullptr;
    // The position where logs start to be read.
    // 
    // Unit: bytes.
    // 
    // Default value: 0.
    std::shared_ptr<string> offset_ = nullptr;
    // The maximum size of logs that you can read in a single request.
    // 
    // Unit: bytes.
    // 
    // Default value: 10240.
    std::shared_ptr<string> size_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EHPC20240730
#endif
