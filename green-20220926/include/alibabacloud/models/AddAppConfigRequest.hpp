// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDAPPCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDAPPCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220926
{
namespace Models
{
  class AddAppConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddAppConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Classify, classify_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(SysAppId, sysAppId_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, AddAppConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Classify, classify_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(SysAppId, sysAppId_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    AddAppConfigRequest() = default ;
    AddAppConfigRequest(const AddAppConfigRequest &) = default ;
    AddAppConfigRequest(AddAppConfigRequest &&) = default ;
    AddAppConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddAppConfigRequest() = default ;
    AddAppConfigRequest& operator=(const AddAppConfigRequest &) = default ;
    AddAppConfigRequest& operator=(AddAppConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->classify_ == nullptr
        && this->name_ == nullptr && this->regionId_ == nullptr && this->resourceType_ == nullptr && this->sysAppId_ == nullptr && this->type_ == nullptr; };
    // classify Field Functions 
    bool hasClassify() const { return this->classify_ != nullptr;};
    void deleteClassify() { this->classify_ = nullptr;};
    inline string getClassify() const { DARABONBA_PTR_GET_DEFAULT(classify_, "") };
    inline AddAppConfigRequest& setClassify(string classify) { DARABONBA_PTR_SET_VALUE(classify_, classify) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline AddAppConfigRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline AddAppConfigRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline AddAppConfigRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // sysAppId Field Functions 
    bool hasSysAppId() const { return this->sysAppId_ != nullptr;};
    void deleteSysAppId() { this->sysAppId_ = nullptr;};
    inline string getSysAppId() const { DARABONBA_PTR_GET_DEFAULT(sysAppId_, "") };
    inline AddAppConfigRequest& setSysAppId(string sysAppId) { DARABONBA_PTR_SET_VALUE(sysAppId_, sysAppId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline AddAppConfigRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The category.
    shared_ptr<string> classify_ {};
    // The name.
    shared_ptr<string> name_ {};
    // The region ID.
    shared_ptr<string> regionId_ {};
    // The resource type.
    shared_ptr<string> resourceType_ {};
    // appId
    shared_ptr<string> sysAppId_ {};
    // The type.
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220926
#endif
