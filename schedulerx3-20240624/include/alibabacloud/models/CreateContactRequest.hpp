// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECONTACTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECONTACTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SchedulerX320240624
{
namespace Models
{
  class CreateContactRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateContactRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Config, config_);
      DARABONBA_PTR_TO_JSON(ContactName, contactName_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, CreateContactRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Config, config_);
      DARABONBA_PTR_FROM_JSON(ContactName, contactName_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    CreateContactRequest() = default ;
    CreateContactRequest(const CreateContactRequest &) = default ;
    CreateContactRequest(CreateContactRequest &&) = default ;
    CreateContactRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateContactRequest() = default ;
    CreateContactRequest& operator=(const CreateContactRequest &) = default ;
    CreateContactRequest& operator=(CreateContactRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->config_ == nullptr
        && this->contactName_ == nullptr && this->type_ == nullptr; };
    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline string getConfig() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
    inline CreateContactRequest& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


    // contactName Field Functions 
    bool hasContactName() const { return this->contactName_ != nullptr;};
    void deleteContactName() { this->contactName_ = nullptr;};
    inline string getContactName() const { DARABONBA_PTR_GET_DEFAULT(contactName_, "") };
    inline CreateContactRequest& setContactName(string contactName) { DARABONBA_PTR_SET_VALUE(contactName_, contactName) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CreateContactRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // 渠道参数配置 JSON 字符串。IM 类型示例：{"channels":[{"channelType":"dingtalk","clientId":"xxx","clientSecret":"xxx","targetType":"group","targetId":"xxx","robotCode":"xxx"}]}
    // 
    // This parameter is required.
    shared_ptr<string> config_ {};
    // 联系人名称（用户自定义，用于展示），同一用户下不可重名
    // 
    // This parameter is required.
    shared_ptr<string> contactName_ {};
    // 渠道大类，当前支持 IM
    // 
    // This parameter is required.
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SchedulerX320240624
#endif
