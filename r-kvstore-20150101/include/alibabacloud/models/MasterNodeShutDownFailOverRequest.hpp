// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MASTERNODESHUTDOWNFAILOVERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MASTERNODESHUTDOWNFAILOVERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RKvstore20150101
{
namespace Models
{
  class MasterNodeShutDownFailOverRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MasterNodeShutDownFailOverRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(DBFaultMode, DBFaultMode_);
      DARABONBA_PTR_TO_JSON(DBNodes, DBNodes_);
      DARABONBA_PTR_TO_JSON(FailMode, failMode_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(ProxyFaultMode, proxyFaultMode_);
      DARABONBA_PTR_TO_JSON(ProxyInstanceIds, proxyInstanceIds_);
    };
    friend void from_json(const Darabonba::Json& j, MasterNodeShutDownFailOverRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(DBFaultMode, DBFaultMode_);
      DARABONBA_PTR_FROM_JSON(DBNodes, DBNodes_);
      DARABONBA_PTR_FROM_JSON(FailMode, failMode_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(ProxyFaultMode, proxyFaultMode_);
      DARABONBA_PTR_FROM_JSON(ProxyInstanceIds, proxyInstanceIds_);
    };
    MasterNodeShutDownFailOverRequest() = default ;
    MasterNodeShutDownFailOverRequest(const MasterNodeShutDownFailOverRequest &) = default ;
    MasterNodeShutDownFailOverRequest(MasterNodeShutDownFailOverRequest &&) = default ;
    MasterNodeShutDownFailOverRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MasterNodeShutDownFailOverRequest() = default ;
    MasterNodeShutDownFailOverRequest& operator=(const MasterNodeShutDownFailOverRequest &) = default ;
    MasterNodeShutDownFailOverRequest& operator=(MasterNodeShutDownFailOverRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->category_ == nullptr
        && this->DBFaultMode_ == nullptr && this->DBNodes_ == nullptr && this->failMode_ == nullptr && this->instanceId_ == nullptr && this->proxyFaultMode_ == nullptr
        && this->proxyInstanceIds_ == nullptr; };
    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline MasterNodeShutDownFailOverRequest& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // DBFaultMode Field Functions 
    bool hasDBFaultMode() const { return this->DBFaultMode_ != nullptr;};
    void deleteDBFaultMode() { this->DBFaultMode_ = nullptr;};
    inline string getDBFaultMode() const { DARABONBA_PTR_GET_DEFAULT(DBFaultMode_, "") };
    inline MasterNodeShutDownFailOverRequest& setDBFaultMode(string DBFaultMode) { DARABONBA_PTR_SET_VALUE(DBFaultMode_, DBFaultMode) };


    // DBNodes Field Functions 
    bool hasDBNodes() const { return this->DBNodes_ != nullptr;};
    void deleteDBNodes() { this->DBNodes_ = nullptr;};
    inline string getDBNodes() const { DARABONBA_PTR_GET_DEFAULT(DBNodes_, "") };
    inline MasterNodeShutDownFailOverRequest& setDBNodes(string DBNodes) { DARABONBA_PTR_SET_VALUE(DBNodes_, DBNodes) };


    // failMode Field Functions 
    bool hasFailMode() const { return this->failMode_ != nullptr;};
    void deleteFailMode() { this->failMode_ = nullptr;};
    inline string getFailMode() const { DARABONBA_PTR_GET_DEFAULT(failMode_, "") };
    inline MasterNodeShutDownFailOverRequest& setFailMode(string failMode) { DARABONBA_PTR_SET_VALUE(failMode_, failMode) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline MasterNodeShutDownFailOverRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // proxyFaultMode Field Functions 
    bool hasProxyFaultMode() const { return this->proxyFaultMode_ != nullptr;};
    void deleteProxyFaultMode() { this->proxyFaultMode_ = nullptr;};
    inline string getProxyFaultMode() const { DARABONBA_PTR_GET_DEFAULT(proxyFaultMode_, "") };
    inline MasterNodeShutDownFailOverRequest& setProxyFaultMode(string proxyFaultMode) { DARABONBA_PTR_SET_VALUE(proxyFaultMode_, proxyFaultMode) };


    // proxyInstanceIds Field Functions 
    bool hasProxyInstanceIds() const { return this->proxyInstanceIds_ != nullptr;};
    void deleteProxyInstanceIds() { this->proxyInstanceIds_ = nullptr;};
    inline string getProxyInstanceIds() const { DARABONBA_PTR_GET_DEFAULT(proxyInstanceIds_, "") };
    inline MasterNodeShutDownFailOverRequest& setProxyInstanceIds(string proxyInstanceIds) { DARABONBA_PTR_SET_VALUE(proxyInstanceIds_, proxyInstanceIds) };


  protected:
    // The resource category. Set the value to instance.
    shared_ptr<string> category_ {};
    // *   Specify: This mode allows you to specify a database node to use.
    // *   Random: In this mode, a random database node is selected when no database node is specified.
    shared_ptr<string> DBFaultMode_ {};
    // The IDs of the database nodes.
    shared_ptr<string> DBNodes_ {};
    // *   **Hard**: stimulates a hardware failure that cannot be recovered. In this case, a high-availability switchover is triggered.
    // *   **Soft** (default): stimulates a hardware failure that can be recovered. In this case, the system first attempts to recover the faulty node. If the attempt fails, a high-availability switchover is triggered.
    // 
    // Valid values:
    // 
    // *   Safe
    // *   UnSafe
    // *   Hard
    // *   Soft
    shared_ptr<string> failMode_ {};
    // The instance ID. You can call the [DescribeInstances](https://help.aliyun.com/document_detail/473778.html) operation to query the instance ID.
    shared_ptr<string> instanceId_ {};
    // *   Specify: This mode allows you to specify a proxy node to use.
    // *   Random: In this mode, a random proxy node is selected when no proxy node is specified.
    shared_ptr<string> proxyFaultMode_ {};
    // The IDs of the proxy nodes.
    shared_ptr<string> proxyInstanceIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RKvstore20150101
#endif
