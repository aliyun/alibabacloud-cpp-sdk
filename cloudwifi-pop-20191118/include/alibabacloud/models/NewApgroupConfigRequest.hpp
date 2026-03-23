// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_NEWAPGROUPCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_NEWAPGROUPCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudwifiPop20191118
{
namespace Models
{
  class NewApgroupConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const NewApgroupConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppCode, appCode_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ParentApgroupId, parentApgroupId_);
    };
    friend void from_json(const Darabonba::Json& j, NewApgroupConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppCode, appCode_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ParentApgroupId, parentApgroupId_);
    };
    NewApgroupConfigRequest() = default ;
    NewApgroupConfigRequest(const NewApgroupConfigRequest &) = default ;
    NewApgroupConfigRequest(NewApgroupConfigRequest &&) = default ;
    NewApgroupConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~NewApgroupConfigRequest() = default ;
    NewApgroupConfigRequest& operator=(const NewApgroupConfigRequest &) = default ;
    NewApgroupConfigRequest& operator=(NewApgroupConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appCode_ == nullptr
        && this->appName_ == nullptr && this->name_ == nullptr && this->parentApgroupId_ == nullptr; };
    // appCode Field Functions 
    bool hasAppCode() const { return this->appCode_ != nullptr;};
    void deleteAppCode() { this->appCode_ = nullptr;};
    inline string getAppCode() const { DARABONBA_PTR_GET_DEFAULT(appCode_, "") };
    inline NewApgroupConfigRequest& setAppCode(string appCode) { DARABONBA_PTR_SET_VALUE(appCode_, appCode) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline NewApgroupConfigRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline NewApgroupConfigRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // parentApgroupId Field Functions 
    bool hasParentApgroupId() const { return this->parentApgroupId_ != nullptr;};
    void deleteParentApgroupId() { this->parentApgroupId_ = nullptr;};
    inline string getParentApgroupId() const { DARABONBA_PTR_GET_DEFAULT(parentApgroupId_, "") };
    inline NewApgroupConfigRequest& setParentApgroupId(string parentApgroupId) { DARABONBA_PTR_SET_VALUE(parentApgroupId_, parentApgroupId) };


  protected:
    // This parameter is required.
    shared_ptr<string> appCode_ {};
    // This parameter is required.
    shared_ptr<string> appName_ {};
    // This parameter is required.
    shared_ptr<string> name_ {};
    // This parameter is required.
    shared_ptr<string> parentApgroupId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudwifiPop20191118
#endif
