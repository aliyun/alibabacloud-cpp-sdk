// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATEUPGRADEREPORTFORSYNCCLONERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GENERATEUPGRADEREPORTFORSYNCCLONERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class GenerateUpgradeReportForSyncCloneResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateUpgradeReportForSyncCloneResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SourceDBClusterId, sourceDBClusterId_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateUpgradeReportForSyncCloneResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SourceDBClusterId, sourceDBClusterId_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    GenerateUpgradeReportForSyncCloneResponseBody() = default ;
    GenerateUpgradeReportForSyncCloneResponseBody(const GenerateUpgradeReportForSyncCloneResponseBody &) = default ;
    GenerateUpgradeReportForSyncCloneResponseBody(GenerateUpgradeReportForSyncCloneResponseBody &&) = default ;
    GenerateUpgradeReportForSyncCloneResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateUpgradeReportForSyncCloneResponseBody() = default ;
    GenerateUpgradeReportForSyncCloneResponseBody& operator=(const GenerateUpgradeReportForSyncCloneResponseBody &) = default ;
    GenerateUpgradeReportForSyncCloneResponseBody& operator=(GenerateUpgradeReportForSyncCloneResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->sourceDBClusterId_ == nullptr && return this->taskId_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GenerateUpgradeReportForSyncCloneResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sourceDBClusterId Field Functions 
    bool hasSourceDBClusterId() const { return this->sourceDBClusterId_ != nullptr;};
    void deleteSourceDBClusterId() { this->sourceDBClusterId_ = nullptr;};
    inline string sourceDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(sourceDBClusterId_, "") };
    inline GenerateUpgradeReportForSyncCloneResponseBody& setSourceDBClusterId(string sourceDBClusterId) { DARABONBA_PTR_SET_VALUE(sourceDBClusterId_, sourceDBClusterId) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline int64_t taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0L) };
    inline GenerateUpgradeReportForSyncCloneResponseBody& setTaskId(int64_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> sourceDBClusterId_ = nullptr;
    std::shared_ptr<int64_t> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
