// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SYNCINSTANCEMETAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SYNCINSTANCEMETAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class SyncInstanceMetaRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SyncInstanceMetaRequest& obj) { 
      DARABONBA_PTR_TO_JSON(IgnoreTable, ignoreTable_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Tid, tid_);
    };
    friend void from_json(const Darabonba::Json& j, SyncInstanceMetaRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(IgnoreTable, ignoreTable_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
    };
    SyncInstanceMetaRequest() = default ;
    SyncInstanceMetaRequest(const SyncInstanceMetaRequest &) = default ;
    SyncInstanceMetaRequest(SyncInstanceMetaRequest &&) = default ;
    SyncInstanceMetaRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SyncInstanceMetaRequest() = default ;
    SyncInstanceMetaRequest& operator=(const SyncInstanceMetaRequest &) = default ;
    SyncInstanceMetaRequest& operator=(SyncInstanceMetaRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ignoreTable_ != nullptr
        && this->instanceId_ != nullptr && this->tid_ != nullptr; };
    // ignoreTable Field Functions 
    bool hasIgnoreTable() const { return this->ignoreTable_ != nullptr;};
    void deleteIgnoreTable() { this->ignoreTable_ = nullptr;};
    inline bool ignoreTable() const { DARABONBA_PTR_GET_DEFAULT(ignoreTable_, false) };
    inline SyncInstanceMetaRequest& setIgnoreTable(bool ignoreTable) { DARABONBA_PTR_SET_VALUE(ignoreTable_, ignoreTable) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline SyncInstanceMetaRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t tid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline SyncInstanceMetaRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


  protected:
    // Specifies whether to skip synchronization for the metadata of table dictionaries. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> ignoreTable_ = nullptr;
    // The ID of the instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The ID of the tenant.
    // 
    // > To view the ID of the tenant, move the pointer over the profile picture in the upper-right corner of the Data Management (DMS) console. For more information, see the [View information about the current tenant](https://help.aliyun.com/document_detail/181330.html) section of the Manage DMS tenants topic.
    std::shared_ptr<int64_t> tid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
