// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKTASKGROUPNAMEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHECKTASKGROUPNAMEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class CheckTaskGroupNameRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckTaskGroupNameRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(RegId, regId_);
      DARABONBA_PTR_TO_JSON(TaskGroupName, taskGroupName_);
    };
    friend void from_json(const Darabonba::Json& j, CheckTaskGroupNameRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(RegId, regId_);
      DARABONBA_PTR_FROM_JSON(TaskGroupName, taskGroupName_);
    };
    CheckTaskGroupNameRequest() = default ;
    CheckTaskGroupNameRequest(const CheckTaskGroupNameRequest &) = default ;
    CheckTaskGroupNameRequest(CheckTaskGroupNameRequest &&) = default ;
    CheckTaskGroupNameRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckTaskGroupNameRequest() = default ;
    CheckTaskGroupNameRequest& operator=(const CheckTaskGroupNameRequest &) = default ;
    CheckTaskGroupNameRequest& operator=(CheckTaskGroupNameRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr
        && this->regId_ == nullptr && this->taskGroupName_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline CheckTaskGroupNameRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // regId Field Functions 
    bool hasRegId() const { return this->regId_ != nullptr;};
    void deleteRegId() { this->regId_ = nullptr;};
    inline string getRegId() const { DARABONBA_PTR_GET_DEFAULT(regId_, "") };
    inline CheckTaskGroupNameRequest& setRegId(string regId) { DARABONBA_PTR_SET_VALUE(regId_, regId) };


    // taskGroupName Field Functions 
    bool hasTaskGroupName() const { return this->taskGroupName_ != nullptr;};
    void deleteTaskGroupName() { this->taskGroupName_ = nullptr;};
    inline string getTaskGroupName() const { DARABONBA_PTR_GET_DEFAULT(taskGroupName_, "") };
    inline CheckTaskGroupNameRequest& setTaskGroupName(string taskGroupName) { DARABONBA_PTR_SET_VALUE(taskGroupName_, taskGroupName) };


  protected:
    // Language of error messages returned by the API. Valid values: zh: Chinese, en: English. Default value: en.
    shared_ptr<string> lang_ {};
    // Area encoding.
    shared_ptr<string> regId_ {};
    // Task group name.
    shared_ptr<string> taskGroupName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
