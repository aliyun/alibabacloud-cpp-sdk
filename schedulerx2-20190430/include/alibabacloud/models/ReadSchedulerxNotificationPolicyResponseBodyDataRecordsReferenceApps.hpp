// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_READSCHEDULERXNOTIFICATIONPOLICYRESPONSEBODYDATARECORDSREFERENCEAPPS_HPP_
#define ALIBABACLOUD_MODELS_READSCHEDULERXNOTIFICATIONPOLICYRESPONSEBODYDATARECORDSREFERENCEAPPS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Schedulerx220190430
{
namespace Models
{
  class ReadSchedulerxNotificationPolicyResponseBodyDataRecordsReferenceApps : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ReadSchedulerxNotificationPolicyResponseBodyDataRecordsReferenceApps& obj) { 
      DARABONBA_PTR_TO_JSON(AppGroupId, appGroupId_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(NamespaceName, namespaceName_);
      DARABONBA_PTR_TO_JSON(NamespaceUid, namespaceUid_);
    };
    friend void from_json(const Darabonba::Json& j, ReadSchedulerxNotificationPolicyResponseBodyDataRecordsReferenceApps& obj) { 
      DARABONBA_PTR_FROM_JSON(AppGroupId, appGroupId_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(NamespaceName, namespaceName_);
      DARABONBA_PTR_FROM_JSON(NamespaceUid, namespaceUid_);
    };
    ReadSchedulerxNotificationPolicyResponseBodyDataRecordsReferenceApps() = default ;
    ReadSchedulerxNotificationPolicyResponseBodyDataRecordsReferenceApps(const ReadSchedulerxNotificationPolicyResponseBodyDataRecordsReferenceApps &) = default ;
    ReadSchedulerxNotificationPolicyResponseBodyDataRecordsReferenceApps(ReadSchedulerxNotificationPolicyResponseBodyDataRecordsReferenceApps &&) = default ;
    ReadSchedulerxNotificationPolicyResponseBodyDataRecordsReferenceApps(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ReadSchedulerxNotificationPolicyResponseBodyDataRecordsReferenceApps() = default ;
    ReadSchedulerxNotificationPolicyResponseBodyDataRecordsReferenceApps& operator=(const ReadSchedulerxNotificationPolicyResponseBodyDataRecordsReferenceApps &) = default ;
    ReadSchedulerxNotificationPolicyResponseBodyDataRecordsReferenceApps& operator=(ReadSchedulerxNotificationPolicyResponseBodyDataRecordsReferenceApps &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appGroupId_ == nullptr
        && return this->groupId_ == nullptr && return this->namespaceName_ == nullptr && return this->namespaceUid_ == nullptr; };
    // appGroupId Field Functions 
    bool hasAppGroupId() const { return this->appGroupId_ != nullptr;};
    void deleteAppGroupId() { this->appGroupId_ = nullptr;};
    inline int64_t appGroupId() const { DARABONBA_PTR_GET_DEFAULT(appGroupId_, 0L) };
    inline ReadSchedulerxNotificationPolicyResponseBodyDataRecordsReferenceApps& setAppGroupId(int64_t appGroupId) { DARABONBA_PTR_SET_VALUE(appGroupId_, appGroupId) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline ReadSchedulerxNotificationPolicyResponseBodyDataRecordsReferenceApps& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // namespaceName Field Functions 
    bool hasNamespaceName() const { return this->namespaceName_ != nullptr;};
    void deleteNamespaceName() { this->namespaceName_ = nullptr;};
    inline string namespaceName() const { DARABONBA_PTR_GET_DEFAULT(namespaceName_, "") };
    inline ReadSchedulerxNotificationPolicyResponseBodyDataRecordsReferenceApps& setNamespaceName(string namespaceName) { DARABONBA_PTR_SET_VALUE(namespaceName_, namespaceName) };


    // namespaceUid Field Functions 
    bool hasNamespaceUid() const { return this->namespaceUid_ != nullptr;};
    void deleteNamespaceUid() { this->namespaceUid_ = nullptr;};
    inline string namespaceUid() const { DARABONBA_PTR_GET_DEFAULT(namespaceUid_, "") };
    inline ReadSchedulerxNotificationPolicyResponseBodyDataRecordsReferenceApps& setNamespaceUid(string namespaceUid) { DARABONBA_PTR_SET_VALUE(namespaceUid_, namespaceUid) };


  protected:
    // The ID of the task group.
    std::shared_ptr<int64_t> appGroupId_ = nullptr;
    // The ID of the application.
    std::shared_ptr<string> groupId_ = nullptr;
    // The name of the namespace.
    std::shared_ptr<string> namespaceName_ = nullptr;
    // The unique identifier of the namespace.
    std::shared_ptr<string> namespaceUid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Schedulerx220190430
#endif
