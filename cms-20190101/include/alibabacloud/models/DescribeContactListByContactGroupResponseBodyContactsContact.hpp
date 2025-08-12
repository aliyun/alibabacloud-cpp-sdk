// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECONTACTLISTBYCONTACTGROUPRESPONSEBODYCONTACTSCONTACT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECONTACTLISTBYCONTACTGROUPRESPONSEBODYCONTACTSCONTACT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeContactListByContactGroupResponseBodyContactsContactChannels.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeContactListByContactGroupResponseBodyContactsContact : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeContactListByContactGroupResponseBodyContactsContact& obj) { 
      DARABONBA_PTR_TO_JSON(Channels, channels_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Desc, desc_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeContactListByContactGroupResponseBodyContactsContact& obj) { 
      DARABONBA_PTR_FROM_JSON(Channels, channels_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Desc, desc_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
    };
    DescribeContactListByContactGroupResponseBodyContactsContact() = default ;
    DescribeContactListByContactGroupResponseBodyContactsContact(const DescribeContactListByContactGroupResponseBodyContactsContact &) = default ;
    DescribeContactListByContactGroupResponseBodyContactsContact(DescribeContactListByContactGroupResponseBodyContactsContact &&) = default ;
    DescribeContactListByContactGroupResponseBodyContactsContact(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeContactListByContactGroupResponseBodyContactsContact() = default ;
    DescribeContactListByContactGroupResponseBodyContactsContact& operator=(const DescribeContactListByContactGroupResponseBodyContactsContact &) = default ;
    DescribeContactListByContactGroupResponseBodyContactsContact& operator=(DescribeContactListByContactGroupResponseBodyContactsContact &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->channels_ != nullptr
        && this->createTime_ != nullptr && this->desc_ != nullptr && this->name_ != nullptr && this->updateTime_ != nullptr; };
    // channels Field Functions 
    bool hasChannels() const { return this->channels_ != nullptr;};
    void deleteChannels() { this->channels_ = nullptr;};
    inline const Models::DescribeContactListByContactGroupResponseBodyContactsContactChannels & channels() const { DARABONBA_PTR_GET_CONST(channels_, Models::DescribeContactListByContactGroupResponseBodyContactsContactChannels) };
    inline Models::DescribeContactListByContactGroupResponseBodyContactsContactChannels channels() { DARABONBA_PTR_GET(channels_, Models::DescribeContactListByContactGroupResponseBodyContactsContactChannels) };
    inline DescribeContactListByContactGroupResponseBodyContactsContact& setChannels(const Models::DescribeContactListByContactGroupResponseBodyContactsContactChannels & channels) { DARABONBA_PTR_SET_VALUE(channels_, channels) };
    inline DescribeContactListByContactGroupResponseBodyContactsContact& setChannels(Models::DescribeContactListByContactGroupResponseBodyContactsContactChannels && channels) { DARABONBA_PTR_SET_RVALUE(channels_, channels) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline DescribeContactListByContactGroupResponseBodyContactsContact& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // desc Field Functions 
    bool hasDesc() const { return this->desc_ != nullptr;};
    void deleteDesc() { this->desc_ = nullptr;};
    inline string desc() const { DARABONBA_PTR_GET_DEFAULT(desc_, "") };
    inline DescribeContactListByContactGroupResponseBodyContactsContact& setDesc(string desc) { DARABONBA_PTR_SET_VALUE(desc_, desc) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeContactListByContactGroupResponseBodyContactsContact& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline int64_t updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
    inline DescribeContactListByContactGroupResponseBodyContactsContact& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    // The alert notification methods.
    std::shared_ptr<Models::DescribeContactListByContactGroupResponseBodyContactsContactChannels> channels_ = nullptr;
    // The time when the alert contact was created.
    // 
    // Unit: milliseconds.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // The description of the alert contact.
    std::shared_ptr<string> desc_ = nullptr;
    // The name of the alert contact.
    std::shared_ptr<string> name_ = nullptr;
    // The time when the alert contact was modified.
    // 
    // Unit: milliseconds.
    std::shared_ptr<int64_t> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
