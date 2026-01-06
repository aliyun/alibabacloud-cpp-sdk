// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETESECURITYIPGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETESECURITYIPGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class DeleteSecurityIPGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteSecurityIPGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(GlobalSecurityGroupId, globalSecurityGroupId_);
      DARABONBA_PTR_TO_JSON(RegionName, regionName_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteSecurityIPGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(GlobalSecurityGroupId, globalSecurityGroupId_);
      DARABONBA_PTR_FROM_JSON(RegionName, regionName_);
    };
    DeleteSecurityIPGroupRequest() = default ;
    DeleteSecurityIPGroupRequest(const DeleteSecurityIPGroupRequest &) = default ;
    DeleteSecurityIPGroupRequest(DeleteSecurityIPGroupRequest &&) = default ;
    DeleteSecurityIPGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteSecurityIPGroupRequest() = default ;
    DeleteSecurityIPGroupRequest& operator=(const DeleteSecurityIPGroupRequest &) = default ;
    DeleteSecurityIPGroupRequest& operator=(DeleteSecurityIPGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->globalSecurityGroupId_ == nullptr
        && this->regionName_ == nullptr; };
    // globalSecurityGroupId Field Functions 
    bool hasGlobalSecurityGroupId() const { return this->globalSecurityGroupId_ != nullptr;};
    void deleteGlobalSecurityGroupId() { this->globalSecurityGroupId_ = nullptr;};
    inline string getGlobalSecurityGroupId() const { DARABONBA_PTR_GET_DEFAULT(globalSecurityGroupId_, "") };
    inline DeleteSecurityIPGroupRequest& setGlobalSecurityGroupId(string globalSecurityGroupId) { DARABONBA_PTR_SET_VALUE(globalSecurityGroupId_, globalSecurityGroupId) };


    // regionName Field Functions 
    bool hasRegionName() const { return this->regionName_ != nullptr;};
    void deleteRegionName() { this->regionName_ = nullptr;};
    inline string getRegionName() const { DARABONBA_PTR_GET_DEFAULT(regionName_, "") };
    inline DeleteSecurityIPGroupRequest& setRegionName(string regionName) { DARABONBA_PTR_SET_VALUE(regionName_, regionName) };


  protected:
    // This parameter is required.
    shared_ptr<string> globalSecurityGroupId_ {};
    // This parameter is required.
    shared_ptr<string> regionName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
