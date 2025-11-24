// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESERVICEMESHLOGSRESPONSEBODYLOGS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESERVICEMESHLOGSRESPONSEBODYLOGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class DescribeServiceMeshLogsResponseBodyLogs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeServiceMeshLogsResponseBodyLogs& obj) { 
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(Log, log_);
      DARABONBA_PTR_TO_JSON(ServiceMeshId, serviceMeshId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeServiceMeshLogsResponseBodyLogs& obj) { 
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(Log, log_);
      DARABONBA_PTR_FROM_JSON(ServiceMeshId, serviceMeshId_);
    };
    DescribeServiceMeshLogsResponseBodyLogs() = default ;
    DescribeServiceMeshLogsResponseBodyLogs(const DescribeServiceMeshLogsResponseBodyLogs &) = default ;
    DescribeServiceMeshLogsResponseBodyLogs(DescribeServiceMeshLogsResponseBodyLogs &&) = default ;
    DescribeServiceMeshLogsResponseBodyLogs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeServiceMeshLogsResponseBodyLogs() = default ;
    DescribeServiceMeshLogsResponseBodyLogs& operator=(const DescribeServiceMeshLogsResponseBodyLogs &) = default ;
    DescribeServiceMeshLogsResponseBodyLogs& operator=(DescribeServiceMeshLogsResponseBodyLogs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->creationTime_ == nullptr
        && return this->log_ == nullptr && return this->serviceMeshId_ == nullptr; };
    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline DescribeServiceMeshLogsResponseBodyLogs& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // log Field Functions 
    bool hasLog() const { return this->log_ != nullptr;};
    void deleteLog() { this->log_ = nullptr;};
    inline string log() const { DARABONBA_PTR_GET_DEFAULT(log_, "") };
    inline DescribeServiceMeshLogsResponseBodyLogs& setLog(string log) { DARABONBA_PTR_SET_VALUE(log_, log) };


    // serviceMeshId Field Functions 
    bool hasServiceMeshId() const { return this->serviceMeshId_ != nullptr;};
    void deleteServiceMeshId() { this->serviceMeshId_ = nullptr;};
    inline string serviceMeshId() const { DARABONBA_PTR_GET_DEFAULT(serviceMeshId_, "") };
    inline DescribeServiceMeshLogsResponseBodyLogs& setServiceMeshId(string serviceMeshId) { DARABONBA_PTR_SET_VALUE(serviceMeshId_, serviceMeshId) };


  protected:
    // The point in time when the logs were generated.
    std::shared_ptr<string> creationTime_ = nullptr;
    // The content of the logs.
    std::shared_ptr<string> log_ = nullptr;
    // The ASM instance ID.
    std::shared_ptr<string> serviceMeshId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
