// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_NOTIFICATIONTEMPLATE_HPP_
#define ALIBABACLOUD_MODELS_NOTIFICATIONTEMPLATE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class NotificationTemplate : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const NotificationTemplate& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EnContent, enContent_);
      DARABONBA_PTR_TO_JSON(EnItemContent, enItemContent_);
      DARABONBA_PTR_TO_JSON(EnTitle, enTitle_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
      DARABONBA_PTR_TO_JSON(WraperType, wraperType_);
      DARABONBA_PTR_TO_JSON(ZhContent, zhContent_);
      DARABONBA_PTR_TO_JSON(ZhItemContent, zhItemContent_);
      DARABONBA_PTR_TO_JSON(ZhTitle, zhTitle_);
    };
    friend void from_json(const Darabonba::Json& j, NotificationTemplate& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EnContent, enContent_);
      DARABONBA_PTR_FROM_JSON(EnItemContent, enItemContent_);
      DARABONBA_PTR_FROM_JSON(EnTitle, enTitle_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
      DARABONBA_PTR_FROM_JSON(WraperType, wraperType_);
      DARABONBA_PTR_FROM_JSON(ZhContent, zhContent_);
      DARABONBA_PTR_FROM_JSON(ZhItemContent, zhItemContent_);
      DARABONBA_PTR_FROM_JSON(ZhTitle, zhTitle_);
    };
    NotificationTemplate() = default ;
    NotificationTemplate(const NotificationTemplate &) = default ;
    NotificationTemplate(NotificationTemplate &&) = default ;
    NotificationTemplate(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~NotificationTemplate() = default ;
    NotificationTemplate& operator=(const NotificationTemplate &) = default ;
    NotificationTemplate& operator=(NotificationTemplate &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createTime_ != nullptr
        && this->description_ != nullptr && this->enContent_ != nullptr && this->enItemContent_ != nullptr && this->enTitle_ != nullptr && this->name_ != nullptr
        && this->type_ != nullptr && this->updateTime_ != nullptr && this->userId_ != nullptr && this->uuid_ != nullptr && this->wraperType_ != nullptr
        && this->zhContent_ != nullptr && this->zhItemContent_ != nullptr && this->zhTitle_ != nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline NotificationTemplate& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline NotificationTemplate& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // enContent Field Functions 
    bool hasEnContent() const { return this->enContent_ != nullptr;};
    void deleteEnContent() { this->enContent_ = nullptr;};
    inline string enContent() const { DARABONBA_PTR_GET_DEFAULT(enContent_, "") };
    inline NotificationTemplate& setEnContent(string enContent) { DARABONBA_PTR_SET_VALUE(enContent_, enContent) };


    // enItemContent Field Functions 
    bool hasEnItemContent() const { return this->enItemContent_ != nullptr;};
    void deleteEnItemContent() { this->enItemContent_ = nullptr;};
    inline string enItemContent() const { DARABONBA_PTR_GET_DEFAULT(enItemContent_, "") };
    inline NotificationTemplate& setEnItemContent(string enItemContent) { DARABONBA_PTR_SET_VALUE(enItemContent_, enItemContent) };


    // enTitle Field Functions 
    bool hasEnTitle() const { return this->enTitle_ != nullptr;};
    void deleteEnTitle() { this->enTitle_ = nullptr;};
    inline string enTitle() const { DARABONBA_PTR_GET_DEFAULT(enTitle_, "") };
    inline NotificationTemplate& setEnTitle(string enTitle) { DARABONBA_PTR_SET_VALUE(enTitle_, enTitle) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline NotificationTemplate& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline NotificationTemplate& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline NotificationTemplate& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline NotificationTemplate& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string uuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline NotificationTemplate& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


    // wraperType Field Functions 
    bool hasWraperType() const { return this->wraperType_ != nullptr;};
    void deleteWraperType() { this->wraperType_ = nullptr;};
    inline string wraperType() const { DARABONBA_PTR_GET_DEFAULT(wraperType_, "") };
    inline NotificationTemplate& setWraperType(string wraperType) { DARABONBA_PTR_SET_VALUE(wraperType_, wraperType) };


    // zhContent Field Functions 
    bool hasZhContent() const { return this->zhContent_ != nullptr;};
    void deleteZhContent() { this->zhContent_ = nullptr;};
    inline string zhContent() const { DARABONBA_PTR_GET_DEFAULT(zhContent_, "") };
    inline NotificationTemplate& setZhContent(string zhContent) { DARABONBA_PTR_SET_VALUE(zhContent_, zhContent) };


    // zhItemContent Field Functions 
    bool hasZhItemContent() const { return this->zhItemContent_ != nullptr;};
    void deleteZhItemContent() { this->zhItemContent_ = nullptr;};
    inline string zhItemContent() const { DARABONBA_PTR_GET_DEFAULT(zhItemContent_, "") };
    inline NotificationTemplate& setZhItemContent(string zhItemContent) { DARABONBA_PTR_SET_VALUE(zhItemContent_, zhItemContent) };


    // zhTitle Field Functions 
    bool hasZhTitle() const { return this->zhTitle_ != nullptr;};
    void deleteZhTitle() { this->zhTitle_ = nullptr;};
    inline string zhTitle() const { DARABONBA_PTR_GET_DEFAULT(zhTitle_, "") };
    inline NotificationTemplate& setZhTitle(string zhTitle) { DARABONBA_PTR_SET_VALUE(zhTitle_, zhTitle) };


  protected:
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> enContent_ = nullptr;
    std::shared_ptr<string> enItemContent_ = nullptr;
    std::shared_ptr<string> enTitle_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
    std::shared_ptr<string> updateTime_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
    std::shared_ptr<string> uuid_ = nullptr;
    std::shared_ptr<string> wraperType_ = nullptr;
    std::shared_ptr<string> zhContent_ = nullptr;
    std::shared_ptr<string> zhItemContent_ = nullptr;
    std::shared_ptr<string> zhTitle_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
