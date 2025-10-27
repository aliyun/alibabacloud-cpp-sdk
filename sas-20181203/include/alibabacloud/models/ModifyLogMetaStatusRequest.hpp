// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYLOGMETASTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYLOGMETASTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ModifyLogMetaStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyLogMetaStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(From, from_);
      DARABONBA_PTR_TO_JSON(LogStore, logStore_);
      DARABONBA_PTR_TO_JSON(Project, project_);
      DARABONBA_PTR_TO_JSON(ResourceDirectoryAccountId, resourceDirectoryAccountId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyLogMetaStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(From, from_);
      DARABONBA_PTR_FROM_JSON(LogStore, logStore_);
      DARABONBA_PTR_FROM_JSON(Project, project_);
      DARABONBA_PTR_FROM_JSON(ResourceDirectoryAccountId, resourceDirectoryAccountId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ModifyLogMetaStatusRequest() = default ;
    ModifyLogMetaStatusRequest(const ModifyLogMetaStatusRequest &) = default ;
    ModifyLogMetaStatusRequest(ModifyLogMetaStatusRequest &&) = default ;
    ModifyLogMetaStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyLogMetaStatusRequest() = default ;
    ModifyLogMetaStatusRequest& operator=(const ModifyLogMetaStatusRequest &) = default ;
    ModifyLogMetaStatusRequest& operator=(ModifyLogMetaStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->from_ == nullptr
        && return this->logStore_ == nullptr && return this->project_ == nullptr && return this->resourceDirectoryAccountId_ == nullptr && return this->status_ == nullptr; };
    // from Field Functions 
    bool hasFrom() const { return this->from_ != nullptr;};
    void deleteFrom() { this->from_ = nullptr;};
    inline string from() const { DARABONBA_PTR_GET_DEFAULT(from_, "") };
    inline ModifyLogMetaStatusRequest& setFrom(string from) { DARABONBA_PTR_SET_VALUE(from_, from) };


    // logStore Field Functions 
    bool hasLogStore() const { return this->logStore_ != nullptr;};
    void deleteLogStore() { this->logStore_ = nullptr;};
    inline string logStore() const { DARABONBA_PTR_GET_DEFAULT(logStore_, "") };
    inline ModifyLogMetaStatusRequest& setLogStore(string logStore) { DARABONBA_PTR_SET_VALUE(logStore_, logStore) };


    // project Field Functions 
    bool hasProject() const { return this->project_ != nullptr;};
    void deleteProject() { this->project_ = nullptr;};
    inline string project() const { DARABONBA_PTR_GET_DEFAULT(project_, "") };
    inline ModifyLogMetaStatusRequest& setProject(string project) { DARABONBA_PTR_SET_VALUE(project_, project) };


    // resourceDirectoryAccountId Field Functions 
    bool hasResourceDirectoryAccountId() const { return this->resourceDirectoryAccountId_ != nullptr;};
    void deleteResourceDirectoryAccountId() { this->resourceDirectoryAccountId_ = nullptr;};
    inline int64_t resourceDirectoryAccountId() const { DARABONBA_PTR_GET_DEFAULT(resourceDirectoryAccountId_, 0L) };
    inline ModifyLogMetaStatusRequest& setResourceDirectoryAccountId(int64_t resourceDirectoryAccountId) { DARABONBA_PTR_SET_VALUE(resourceDirectoryAccountId_, resourceDirectoryAccountId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ModifyLogMetaStatusRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The ID of the request source. Set the value to **sas**.
    std::shared_ptr<string> from_ = nullptr;
    // The name of the dedicated Logstore in which logs are stored.
    // 
    // >  You can call the [DescribeLogMeta](~~DescribeLogMeta~~) operation to query the names of Logstores.
    // 
    // This parameter is required.
    std::shared_ptr<string> logStore_ = nullptr;
    // The name of the project.
    // 
    // >  You can call the [DescribeLogMeta](~~DescribeLogMeta~~) operation to query the names of projects.
    std::shared_ptr<string> project_ = nullptr;
    // The Alibaba Cloud account ID of the member in the resource directory.
    // 
    // >  You can call the [DescribeMonitorAccounts](~~DescribeMonitorAccounts~~) operation to obtain the IDs.
    std::shared_ptr<int64_t> resourceDirectoryAccountId_ = nullptr;
    // The status of the log analysis feature. Valid values:
    // 
    // *   **enabled**
    // *   **disabled**
    // 
    // This parameter is required.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
