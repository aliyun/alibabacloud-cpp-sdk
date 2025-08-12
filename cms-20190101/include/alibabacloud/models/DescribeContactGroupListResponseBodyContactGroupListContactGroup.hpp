// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECONTACTGROUPLISTRESPONSEBODYCONTACTGROUPLISTCONTACTGROUP_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECONTACTGROUPLISTRESPONSEBODYCONTACTGROUPLISTCONTACTGROUP_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeContactGroupListResponseBodyContactGroupListContactGroupContacts.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeContactGroupListResponseBodyContactGroupListContactGroup : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeContactGroupListResponseBodyContactGroupListContactGroup& obj) { 
      DARABONBA_PTR_TO_JSON(Contacts, contacts_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Describe, describe_);
      DARABONBA_PTR_TO_JSON(EnableSubscribed, enableSubscribed_);
      DARABONBA_PTR_TO_JSON(EnabledWeeklyReport, enabledWeeklyReport_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeContactGroupListResponseBodyContactGroupListContactGroup& obj) { 
      DARABONBA_PTR_FROM_JSON(Contacts, contacts_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Describe, describe_);
      DARABONBA_PTR_FROM_JSON(EnableSubscribed, enableSubscribed_);
      DARABONBA_PTR_FROM_JSON(EnabledWeeklyReport, enabledWeeklyReport_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
    };
    DescribeContactGroupListResponseBodyContactGroupListContactGroup() = default ;
    DescribeContactGroupListResponseBodyContactGroupListContactGroup(const DescribeContactGroupListResponseBodyContactGroupListContactGroup &) = default ;
    DescribeContactGroupListResponseBodyContactGroupListContactGroup(DescribeContactGroupListResponseBodyContactGroupListContactGroup &&) = default ;
    DescribeContactGroupListResponseBodyContactGroupListContactGroup(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeContactGroupListResponseBodyContactGroupListContactGroup() = default ;
    DescribeContactGroupListResponseBodyContactGroupListContactGroup& operator=(const DescribeContactGroupListResponseBodyContactGroupListContactGroup &) = default ;
    DescribeContactGroupListResponseBodyContactGroupListContactGroup& operator=(DescribeContactGroupListResponseBodyContactGroupListContactGroup &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->contacts_ != nullptr
        && this->createTime_ != nullptr && this->describe_ != nullptr && this->enableSubscribed_ != nullptr && this->enabledWeeklyReport_ != nullptr && this->name_ != nullptr
        && this->updateTime_ != nullptr; };
    // contacts Field Functions 
    bool hasContacts() const { return this->contacts_ != nullptr;};
    void deleteContacts() { this->contacts_ = nullptr;};
    inline const Models::DescribeContactGroupListResponseBodyContactGroupListContactGroupContacts & contacts() const { DARABONBA_PTR_GET_CONST(contacts_, Models::DescribeContactGroupListResponseBodyContactGroupListContactGroupContacts) };
    inline Models::DescribeContactGroupListResponseBodyContactGroupListContactGroupContacts contacts() { DARABONBA_PTR_GET(contacts_, Models::DescribeContactGroupListResponseBodyContactGroupListContactGroupContacts) };
    inline DescribeContactGroupListResponseBodyContactGroupListContactGroup& setContacts(const Models::DescribeContactGroupListResponseBodyContactGroupListContactGroupContacts & contacts) { DARABONBA_PTR_SET_VALUE(contacts_, contacts) };
    inline DescribeContactGroupListResponseBodyContactGroupListContactGroup& setContacts(Models::DescribeContactGroupListResponseBodyContactGroupListContactGroupContacts && contacts) { DARABONBA_PTR_SET_RVALUE(contacts_, contacts) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline DescribeContactGroupListResponseBodyContactGroupListContactGroup& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // describe Field Functions 
    bool hasDescribe() const { return this->describe_ != nullptr;};
    void deleteDescribe() { this->describe_ = nullptr;};
    inline string describe() const { DARABONBA_PTR_GET_DEFAULT(describe_, "") };
    inline DescribeContactGroupListResponseBodyContactGroupListContactGroup& setDescribe(string describe) { DARABONBA_PTR_SET_VALUE(describe_, describe) };


    // enableSubscribed Field Functions 
    bool hasEnableSubscribed() const { return this->enableSubscribed_ != nullptr;};
    void deleteEnableSubscribed() { this->enableSubscribed_ = nullptr;};
    inline bool enableSubscribed() const { DARABONBA_PTR_GET_DEFAULT(enableSubscribed_, false) };
    inline DescribeContactGroupListResponseBodyContactGroupListContactGroup& setEnableSubscribed(bool enableSubscribed) { DARABONBA_PTR_SET_VALUE(enableSubscribed_, enableSubscribed) };


    // enabledWeeklyReport Field Functions 
    bool hasEnabledWeeklyReport() const { return this->enabledWeeklyReport_ != nullptr;};
    void deleteEnabledWeeklyReport() { this->enabledWeeklyReport_ = nullptr;};
    inline bool enabledWeeklyReport() const { DARABONBA_PTR_GET_DEFAULT(enabledWeeklyReport_, false) };
    inline DescribeContactGroupListResponseBodyContactGroupListContactGroup& setEnabledWeeklyReport(bool enabledWeeklyReport) { DARABONBA_PTR_SET_VALUE(enabledWeeklyReport_, enabledWeeklyReport) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeContactGroupListResponseBodyContactGroupListContactGroup& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline int64_t updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
    inline DescribeContactGroupListResponseBodyContactGroupListContactGroup& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    // The alert contacts in the alert group.
    std::shared_ptr<Models::DescribeContactGroupListResponseBodyContactGroupListContactGroupContacts> contacts_ = nullptr;
    // The time when the alert group was created. This value is a UNIX timestamp that represents the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // The description of the alert group.
    std::shared_ptr<string> describe_ = nullptr;
    // Indicates whether the alert group subscribes to weekly reports. Valid values:
    // 
    // *   true: The alert group subscribes to weekly reports.
    // *   false: The alert group does not subscribe to weekly reports.
    std::shared_ptr<bool> enableSubscribed_ = nullptr;
    // Indicates whether the alert group can subscribe to weekly reports. Valid values:
    // 
    // *   true: The alert group can subscribe to weekly reports.
    // *   false: The alert group cannot subscribe to weekly reports.
    // 
    // >  The weekly report subscription feature is only available for Alibaba Cloud accounts with more than five Elastic Compute Service (ECS) instances.
    std::shared_ptr<bool> enabledWeeklyReport_ = nullptr;
    // The name of the alert group.
    std::shared_ptr<string> name_ = nullptr;
    // The time when the alert group was modified. This value is a UNIX timestamp that represents the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<int64_t> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
