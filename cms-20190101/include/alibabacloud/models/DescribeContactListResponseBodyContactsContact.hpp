// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECONTACTLISTRESPONSEBODYCONTACTSCONTACT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECONTACTLISTRESPONSEBODYCONTACTSCONTACT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeContactListResponseBodyContactsContactChannels.hpp>
#include <alibabacloud/models/DescribeContactListResponseBodyContactsContactChannelsState.hpp>
#include <alibabacloud/models/DescribeContactListResponseBodyContactsContactContactGroups.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeContactListResponseBodyContactsContact : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeContactListResponseBodyContactsContact& obj) { 
      DARABONBA_PTR_TO_JSON(Channels, channels_);
      DARABONBA_PTR_TO_JSON(ChannelsState, channelsState_);
      DARABONBA_PTR_TO_JSON(ContactGroups, contactGroups_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Desc, desc_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeContactListResponseBodyContactsContact& obj) { 
      DARABONBA_PTR_FROM_JSON(Channels, channels_);
      DARABONBA_PTR_FROM_JSON(ChannelsState, channelsState_);
      DARABONBA_PTR_FROM_JSON(ContactGroups, contactGroups_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Desc, desc_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
    };
    DescribeContactListResponseBodyContactsContact() = default ;
    DescribeContactListResponseBodyContactsContact(const DescribeContactListResponseBodyContactsContact &) = default ;
    DescribeContactListResponseBodyContactsContact(DescribeContactListResponseBodyContactsContact &&) = default ;
    DescribeContactListResponseBodyContactsContact(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeContactListResponseBodyContactsContact() = default ;
    DescribeContactListResponseBodyContactsContact& operator=(const DescribeContactListResponseBodyContactsContact &) = default ;
    DescribeContactListResponseBodyContactsContact& operator=(DescribeContactListResponseBodyContactsContact &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->channels_ == nullptr
        && return this->channelsState_ == nullptr && return this->contactGroups_ == nullptr && return this->createTime_ == nullptr && return this->desc_ == nullptr && return this->lang_ == nullptr
        && return this->name_ == nullptr && return this->updateTime_ == nullptr; };
    // channels Field Functions 
    bool hasChannels() const { return this->channels_ != nullptr;};
    void deleteChannels() { this->channels_ = nullptr;};
    inline const Models::DescribeContactListResponseBodyContactsContactChannels & channels() const { DARABONBA_PTR_GET_CONST(channels_, Models::DescribeContactListResponseBodyContactsContactChannels) };
    inline Models::DescribeContactListResponseBodyContactsContactChannels channels() { DARABONBA_PTR_GET(channels_, Models::DescribeContactListResponseBodyContactsContactChannels) };
    inline DescribeContactListResponseBodyContactsContact& setChannels(const Models::DescribeContactListResponseBodyContactsContactChannels & channels) { DARABONBA_PTR_SET_VALUE(channels_, channels) };
    inline DescribeContactListResponseBodyContactsContact& setChannels(Models::DescribeContactListResponseBodyContactsContactChannels && channels) { DARABONBA_PTR_SET_RVALUE(channels_, channels) };


    // channelsState Field Functions 
    bool hasChannelsState() const { return this->channelsState_ != nullptr;};
    void deleteChannelsState() { this->channelsState_ = nullptr;};
    inline const Models::DescribeContactListResponseBodyContactsContactChannelsState & channelsState() const { DARABONBA_PTR_GET_CONST(channelsState_, Models::DescribeContactListResponseBodyContactsContactChannelsState) };
    inline Models::DescribeContactListResponseBodyContactsContactChannelsState channelsState() { DARABONBA_PTR_GET(channelsState_, Models::DescribeContactListResponseBodyContactsContactChannelsState) };
    inline DescribeContactListResponseBodyContactsContact& setChannelsState(const Models::DescribeContactListResponseBodyContactsContactChannelsState & channelsState) { DARABONBA_PTR_SET_VALUE(channelsState_, channelsState) };
    inline DescribeContactListResponseBodyContactsContact& setChannelsState(Models::DescribeContactListResponseBodyContactsContactChannelsState && channelsState) { DARABONBA_PTR_SET_RVALUE(channelsState_, channelsState) };


    // contactGroups Field Functions 
    bool hasContactGroups() const { return this->contactGroups_ != nullptr;};
    void deleteContactGroups() { this->contactGroups_ = nullptr;};
    inline const Models::DescribeContactListResponseBodyContactsContactContactGroups & contactGroups() const { DARABONBA_PTR_GET_CONST(contactGroups_, Models::DescribeContactListResponseBodyContactsContactContactGroups) };
    inline Models::DescribeContactListResponseBodyContactsContactContactGroups contactGroups() { DARABONBA_PTR_GET(contactGroups_, Models::DescribeContactListResponseBodyContactsContactContactGroups) };
    inline DescribeContactListResponseBodyContactsContact& setContactGroups(const Models::DescribeContactListResponseBodyContactsContactContactGroups & contactGroups) { DARABONBA_PTR_SET_VALUE(contactGroups_, contactGroups) };
    inline DescribeContactListResponseBodyContactsContact& setContactGroups(Models::DescribeContactListResponseBodyContactsContactContactGroups && contactGroups) { DARABONBA_PTR_SET_RVALUE(contactGroups_, contactGroups) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline DescribeContactListResponseBodyContactsContact& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // desc Field Functions 
    bool hasDesc() const { return this->desc_ != nullptr;};
    void deleteDesc() { this->desc_ = nullptr;};
    inline string desc() const { DARABONBA_PTR_GET_DEFAULT(desc_, "") };
    inline DescribeContactListResponseBodyContactsContact& setDesc(string desc) { DARABONBA_PTR_SET_VALUE(desc_, desc) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeContactListResponseBodyContactsContact& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeContactListResponseBodyContactsContact& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline int64_t updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
    inline DescribeContactListResponseBodyContactsContact& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    // The alert notification method.
    std::shared_ptr<Models::DescribeContactListResponseBodyContactsContactChannels> channels_ = nullptr;
    // The status of the alert notification method. Valid values: PENDING and OK.
    // 
    // The email address must be activated after it is added as the value specified for the alert notification method. The value PENDING indicates that the email address is not activated. The value OK indicates that the email address is activated.
    std::shared_ptr<Models::DescribeContactListResponseBodyContactsContactChannelsState> channelsState_ = nullptr;
    // None.
    std::shared_ptr<Models::DescribeContactListResponseBodyContactsContactContactGroups> contactGroups_ = nullptr;
    // The timestamp when the alert contact was created.
    // 
    // Unit: milliseconds.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // The description.
    std::shared_ptr<string> desc_ = nullptr;
    // The language in which the alert information is displayed. Valid values:
    // 
    // *   zh-cn: simplified Chinese
    // *   en: English
    std::shared_ptr<string> lang_ = nullptr;
    // The name of the alert contact.
    std::shared_ptr<string> name_ = nullptr;
    // The timestamp when the alert contact was updated.
    // 
    // Unit: milliseconds.
    std::shared_ptr<int64_t> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
