// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETINSTANCEGLOBALIZATIONCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETINSTANCEGLOBALIZATIONCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class SetInstanceGlobalizationConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetInstanceGlobalizationConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Language, language_);
      DARABONBA_PTR_TO_JSON(TimeZone, timeZone_);
    };
    friend void from_json(const Darabonba::Json& j, SetInstanceGlobalizationConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Language, language_);
      DARABONBA_PTR_FROM_JSON(TimeZone, timeZone_);
    };
    SetInstanceGlobalizationConfigRequest() = default ;
    SetInstanceGlobalizationConfigRequest(const SetInstanceGlobalizationConfigRequest &) = default ;
    SetInstanceGlobalizationConfigRequest(SetInstanceGlobalizationConfigRequest &&) = default ;
    SetInstanceGlobalizationConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetInstanceGlobalizationConfigRequest() = default ;
    SetInstanceGlobalizationConfigRequest& operator=(const SetInstanceGlobalizationConfigRequest &) = default ;
    SetInstanceGlobalizationConfigRequest& operator=(SetInstanceGlobalizationConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->language_ == nullptr && this->timeZone_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline SetInstanceGlobalizationConfigRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string getLanguage() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline SetInstanceGlobalizationConfigRequest& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


    // timeZone Field Functions 
    bool hasTimeZone() const { return this->timeZone_ != nullptr;};
    void deleteTimeZone() { this->timeZone_ = nullptr;};
    inline string getTimeZone() const { DARABONBA_PTR_GET_DEFAULT(timeZone_, "") };
    inline SetInstanceGlobalizationConfigRequest& setTimeZone(string timeZone) { DARABONBA_PTR_SET_VALUE(timeZone_, timeZone) };


  protected:
    // IDaaS EIAM实例的ID。
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // 语言类型
    // 
    // This parameter is required.
    shared_ptr<string> language_ {};
    // 时区
    // 
    // This parameter is required.
    shared_ptr<string> timeZone_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
