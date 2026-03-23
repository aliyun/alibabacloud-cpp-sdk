// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EDITAPGROUPTHIRDAPPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_EDITAPGROUPTHIRDAPPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudwifiPop20191118
{
namespace Models
{
  class EditApgroupThirdAppRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EditApgroupThirdAppRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApgroupId, apgroupId_);
      DARABONBA_PTR_TO_JSON(AppCode, appCode_);
      DARABONBA_PTR_TO_JSON(AppData, appData_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(ApplyToSubGroup, applyToSubGroup_);
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(ConfigType, configType_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(InheritParentGroup, inheritParentGroup_);
      DARABONBA_PTR_TO_JSON(ThirdAppName, thirdAppName_);
    };
    friend void from_json(const Darabonba::Json& j, EditApgroupThirdAppRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApgroupId, apgroupId_);
      DARABONBA_PTR_FROM_JSON(AppCode, appCode_);
      DARABONBA_PTR_FROM_JSON(AppData, appData_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(ApplyToSubGroup, applyToSubGroup_);
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(ConfigType, configType_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(InheritParentGroup, inheritParentGroup_);
      DARABONBA_PTR_FROM_JSON(ThirdAppName, thirdAppName_);
    };
    EditApgroupThirdAppRequest() = default ;
    EditApgroupThirdAppRequest(const EditApgroupThirdAppRequest &) = default ;
    EditApgroupThirdAppRequest(EditApgroupThirdAppRequest &&) = default ;
    EditApgroupThirdAppRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EditApgroupThirdAppRequest() = default ;
    EditApgroupThirdAppRequest& operator=(const EditApgroupThirdAppRequest &) = default ;
    EditApgroupThirdAppRequest& operator=(EditApgroupThirdAppRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apgroupId_ == nullptr
        && this->appCode_ == nullptr && this->appData_ == nullptr && this->appName_ == nullptr && this->applyToSubGroup_ == nullptr && this->category_ == nullptr
        && this->configType_ == nullptr && this->id_ == nullptr && this->inheritParentGroup_ == nullptr && this->thirdAppName_ == nullptr; };
    // apgroupId Field Functions 
    bool hasApgroupId() const { return this->apgroupId_ != nullptr;};
    void deleteApgroupId() { this->apgroupId_ = nullptr;};
    inline int64_t getApgroupId() const { DARABONBA_PTR_GET_DEFAULT(apgroupId_, 0L) };
    inline EditApgroupThirdAppRequest& setApgroupId(int64_t apgroupId) { DARABONBA_PTR_SET_VALUE(apgroupId_, apgroupId) };


    // appCode Field Functions 
    bool hasAppCode() const { return this->appCode_ != nullptr;};
    void deleteAppCode() { this->appCode_ = nullptr;};
    inline string getAppCode() const { DARABONBA_PTR_GET_DEFAULT(appCode_, "") };
    inline EditApgroupThirdAppRequest& setAppCode(string appCode) { DARABONBA_PTR_SET_VALUE(appCode_, appCode) };


    // appData Field Functions 
    bool hasAppData() const { return this->appData_ != nullptr;};
    void deleteAppData() { this->appData_ = nullptr;};
    inline string getAppData() const { DARABONBA_PTR_GET_DEFAULT(appData_, "") };
    inline EditApgroupThirdAppRequest& setAppData(string appData) { DARABONBA_PTR_SET_VALUE(appData_, appData) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline EditApgroupThirdAppRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // applyToSubGroup Field Functions 
    bool hasApplyToSubGroup() const { return this->applyToSubGroup_ != nullptr;};
    void deleteApplyToSubGroup() { this->applyToSubGroup_ = nullptr;};
    inline int32_t getApplyToSubGroup() const { DARABONBA_PTR_GET_DEFAULT(applyToSubGroup_, 0) };
    inline EditApgroupThirdAppRequest& setApplyToSubGroup(int32_t applyToSubGroup) { DARABONBA_PTR_SET_VALUE(applyToSubGroup_, applyToSubGroup) };


    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline int32_t getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, 0) };
    inline EditApgroupThirdAppRequest& setCategory(int32_t category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // configType Field Functions 
    bool hasConfigType() const { return this->configType_ != nullptr;};
    void deleteConfigType() { this->configType_ = nullptr;};
    inline string getConfigType() const { DARABONBA_PTR_GET_DEFAULT(configType_, "") };
    inline EditApgroupThirdAppRequest& setConfigType(string configType) { DARABONBA_PTR_SET_VALUE(configType_, configType) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline EditApgroupThirdAppRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // inheritParentGroup Field Functions 
    bool hasInheritParentGroup() const { return this->inheritParentGroup_ != nullptr;};
    void deleteInheritParentGroup() { this->inheritParentGroup_ = nullptr;};
    inline int32_t getInheritParentGroup() const { DARABONBA_PTR_GET_DEFAULT(inheritParentGroup_, 0) };
    inline EditApgroupThirdAppRequest& setInheritParentGroup(int32_t inheritParentGroup) { DARABONBA_PTR_SET_VALUE(inheritParentGroup_, inheritParentGroup) };


    // thirdAppName Field Functions 
    bool hasThirdAppName() const { return this->thirdAppName_ != nullptr;};
    void deleteThirdAppName() { this->thirdAppName_ = nullptr;};
    inline string getThirdAppName() const { DARABONBA_PTR_GET_DEFAULT(thirdAppName_, "") };
    inline EditApgroupThirdAppRequest& setThirdAppName(string thirdAppName) { DARABONBA_PTR_SET_VALUE(thirdAppName_, thirdAppName) };


  protected:
    // This parameter is required.
    shared_ptr<int64_t> apgroupId_ {};
    // This parameter is required.
    shared_ptr<string> appCode_ {};
    shared_ptr<string> appData_ {};
    // This parameter is required.
    shared_ptr<string> appName_ {};
    shared_ptr<int32_t> applyToSubGroup_ {};
    shared_ptr<int32_t> category_ {};
    shared_ptr<string> configType_ {};
    shared_ptr<int64_t> id_ {};
    shared_ptr<int32_t> inheritParentGroup_ {};
    shared_ptr<string> thirdAppName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudwifiPop20191118
#endif
