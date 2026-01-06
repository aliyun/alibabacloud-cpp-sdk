// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESECURITYIPGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESECURITYIPGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class CreateSecurityIPGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSecurityIPGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(GIpList, GIpList_);
      DARABONBA_PTR_TO_JSON(GlobalIgName, globalIgName_);
      DARABONBA_PTR_TO_JSON(RegionName, regionName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSecurityIPGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(GIpList, GIpList_);
      DARABONBA_PTR_FROM_JSON(GlobalIgName, globalIgName_);
      DARABONBA_PTR_FROM_JSON(RegionName, regionName_);
    };
    CreateSecurityIPGroupRequest() = default ;
    CreateSecurityIPGroupRequest(const CreateSecurityIPGroupRequest &) = default ;
    CreateSecurityIPGroupRequest(CreateSecurityIPGroupRequest &&) = default ;
    CreateSecurityIPGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSecurityIPGroupRequest() = default ;
    CreateSecurityIPGroupRequest& operator=(const CreateSecurityIPGroupRequest &) = default ;
    CreateSecurityIPGroupRequest& operator=(CreateSecurityIPGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->GIpList_ == nullptr
        && this->globalIgName_ == nullptr && this->regionName_ == nullptr; };
    // GIpList Field Functions 
    bool hasGIpList() const { return this->GIpList_ != nullptr;};
    void deleteGIpList() { this->GIpList_ = nullptr;};
    inline string getGIpList() const { DARABONBA_PTR_GET_DEFAULT(GIpList_, "") };
    inline CreateSecurityIPGroupRequest& setGIpList(string GIpList) { DARABONBA_PTR_SET_VALUE(GIpList_, GIpList) };


    // globalIgName Field Functions 
    bool hasGlobalIgName() const { return this->globalIgName_ != nullptr;};
    void deleteGlobalIgName() { this->globalIgName_ = nullptr;};
    inline string getGlobalIgName() const { DARABONBA_PTR_GET_DEFAULT(globalIgName_, "") };
    inline CreateSecurityIPGroupRequest& setGlobalIgName(string globalIgName) { DARABONBA_PTR_SET_VALUE(globalIgName_, globalIgName) };


    // regionName Field Functions 
    bool hasRegionName() const { return this->regionName_ != nullptr;};
    void deleteRegionName() { this->regionName_ = nullptr;};
    inline string getRegionName() const { DARABONBA_PTR_GET_DEFAULT(regionName_, "") };
    inline CreateSecurityIPGroupRequest& setRegionName(string regionName) { DARABONBA_PTR_SET_VALUE(regionName_, regionName) };


  protected:
    // This parameter is required.
    shared_ptr<string> GIpList_ {};
    // This parameter is required.
    shared_ptr<string> globalIgName_ {};
    // This parameter is required.
    shared_ptr<string> regionName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
