// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEADVANCEDPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEADVANCEDPOLICYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dbs20210101
{
namespace Models
{
  class CreateAdvancedPolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAdvancedPolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(RegionCode, regionCode_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAdvancedPolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(RegionCode, regionCode_);
    };
    CreateAdvancedPolicyRequest() = default ;
    CreateAdvancedPolicyRequest(const CreateAdvancedPolicyRequest &) = default ;
    CreateAdvancedPolicyRequest(CreateAdvancedPolicyRequest &&) = default ;
    CreateAdvancedPolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAdvancedPolicyRequest() = default ;
    CreateAdvancedPolicyRequest& operator=(const CreateAdvancedPolicyRequest &) = default ;
    CreateAdvancedPolicyRequest& operator=(CreateAdvancedPolicyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceName_ == nullptr
        && this->regionCode_ == nullptr; };
    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline CreateAdvancedPolicyRequest& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // regionCode Field Functions 
    bool hasRegionCode() const { return this->regionCode_ != nullptr;};
    void deleteRegionCode() { this->regionCode_ = nullptr;};
    inline string getRegionCode() const { DARABONBA_PTR_GET_DEFAULT(regionCode_, "") };
    inline CreateAdvancedPolicyRequest& setRegionCode(string regionCode) { DARABONBA_PTR_SET_VALUE(regionCode_, regionCode) };


  protected:
    // The ID of the PolarDB instance.
    shared_ptr<string> instanceName_ {};
    // The region in which backup sets reside.
    shared_ptr<string> regionCode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dbs20210101
#endif
