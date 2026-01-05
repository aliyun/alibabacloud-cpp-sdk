// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYGLOBALSECURITYIPGROUPNAMERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MODIFYGLOBALSECURITYIPGROUPNAMERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class ModifyGlobalSecurityIPGroupNameResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyGlobalSecurityIPGroupNameResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(GlobalSecurityIPGroup, globalSecurityIPGroup_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyGlobalSecurityIPGroupNameResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(GlobalSecurityIPGroup, globalSecurityIPGroup_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ModifyGlobalSecurityIPGroupNameResponseBody() = default ;
    ModifyGlobalSecurityIPGroupNameResponseBody(const ModifyGlobalSecurityIPGroupNameResponseBody &) = default ;
    ModifyGlobalSecurityIPGroupNameResponseBody(ModifyGlobalSecurityIPGroupNameResponseBody &&) = default ;
    ModifyGlobalSecurityIPGroupNameResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyGlobalSecurityIPGroupNameResponseBody() = default ;
    ModifyGlobalSecurityIPGroupNameResponseBody& operator=(const ModifyGlobalSecurityIPGroupNameResponseBody &) = default ;
    ModifyGlobalSecurityIPGroupNameResponseBody& operator=(ModifyGlobalSecurityIPGroupNameResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class GlobalSecurityIPGroup : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const GlobalSecurityIPGroup& obj) { 
        DARABONBA_PTR_TO_JSON(GIpList, GIpList_);
        DARABONBA_PTR_TO_JSON(GlobalIgName, globalIgName_);
        DARABONBA_PTR_TO_JSON(GlobalSecurityGroupId, globalSecurityGroupId_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      };
      friend void from_json(const Darabonba::Json& j, GlobalSecurityIPGroup& obj) { 
        DARABONBA_PTR_FROM_JSON(GIpList, GIpList_);
        DARABONBA_PTR_FROM_JSON(GlobalIgName, globalIgName_);
        DARABONBA_PTR_FROM_JSON(GlobalSecurityGroupId, globalSecurityGroupId_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      };
      GlobalSecurityIPGroup() = default ;
      GlobalSecurityIPGroup(const GlobalSecurityIPGroup &) = default ;
      GlobalSecurityIPGroup(GlobalSecurityIPGroup &&) = default ;
      GlobalSecurityIPGroup(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~GlobalSecurityIPGroup() = default ;
      GlobalSecurityIPGroup& operator=(const GlobalSecurityIPGroup &) = default ;
      GlobalSecurityIPGroup& operator=(GlobalSecurityIPGroup &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->GIpList_ == nullptr
        && this->globalIgName_ == nullptr && this->globalSecurityGroupId_ == nullptr && this->regionId_ == nullptr; };
      // GIpList Field Functions 
      bool hasGIpList() const { return this->GIpList_ != nullptr;};
      void deleteGIpList() { this->GIpList_ = nullptr;};
      inline string getGIpList() const { DARABONBA_PTR_GET_DEFAULT(GIpList_, "") };
      inline GlobalSecurityIPGroup& setGIpList(string GIpList) { DARABONBA_PTR_SET_VALUE(GIpList_, GIpList) };


      // globalIgName Field Functions 
      bool hasGlobalIgName() const { return this->globalIgName_ != nullptr;};
      void deleteGlobalIgName() { this->globalIgName_ = nullptr;};
      inline string getGlobalIgName() const { DARABONBA_PTR_GET_DEFAULT(globalIgName_, "") };
      inline GlobalSecurityIPGroup& setGlobalIgName(string globalIgName) { DARABONBA_PTR_SET_VALUE(globalIgName_, globalIgName) };


      // globalSecurityGroupId Field Functions 
      bool hasGlobalSecurityGroupId() const { return this->globalSecurityGroupId_ != nullptr;};
      void deleteGlobalSecurityGroupId() { this->globalSecurityGroupId_ = nullptr;};
      inline string getGlobalSecurityGroupId() const { DARABONBA_PTR_GET_DEFAULT(globalSecurityGroupId_, "") };
      inline GlobalSecurityIPGroup& setGlobalSecurityGroupId(string globalSecurityGroupId) { DARABONBA_PTR_SET_VALUE(globalSecurityGroupId_, globalSecurityGroupId) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline GlobalSecurityIPGroup& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    protected:
      // The IP address in the whitelist template.
      // 
      // >  Separate multiple IP addresses with commas (,). You can add up to 1,000 IP addresses or CIDR blocks to all IP whitelists.
      shared_ptr<string> GIpList_ {};
      // The name of the IP whitelist template. The name must meet the following requirements:
      // 
      // *   The name can contain lowercase letters, digits, and underscores (_).
      // *   The name must start with a letter and end with a letter or a digit.
      // *   The name must be 2 to 120 characters in length.
      shared_ptr<string> globalIgName_ {};
      // The ID of the IP whitelist template.
      shared_ptr<string> globalSecurityGroupId_ {};
      // The ID of the region.
      shared_ptr<string> regionId_ {};
    };

    virtual bool empty() const override { return this->globalSecurityIPGroup_ == nullptr
        && this->requestId_ == nullptr; };
    // globalSecurityIPGroup Field Functions 
    bool hasGlobalSecurityIPGroup() const { return this->globalSecurityIPGroup_ != nullptr;};
    void deleteGlobalSecurityIPGroup() { this->globalSecurityIPGroup_ = nullptr;};
    inline const vector<ModifyGlobalSecurityIPGroupNameResponseBody::GlobalSecurityIPGroup> & getGlobalSecurityIPGroup() const { DARABONBA_PTR_GET_CONST(globalSecurityIPGroup_, vector<ModifyGlobalSecurityIPGroupNameResponseBody::GlobalSecurityIPGroup>) };
    inline vector<ModifyGlobalSecurityIPGroupNameResponseBody::GlobalSecurityIPGroup> getGlobalSecurityIPGroup() { DARABONBA_PTR_GET(globalSecurityIPGroup_, vector<ModifyGlobalSecurityIPGroupNameResponseBody::GlobalSecurityIPGroup>) };
    inline ModifyGlobalSecurityIPGroupNameResponseBody& setGlobalSecurityIPGroup(const vector<ModifyGlobalSecurityIPGroupNameResponseBody::GlobalSecurityIPGroup> & globalSecurityIPGroup) { DARABONBA_PTR_SET_VALUE(globalSecurityIPGroup_, globalSecurityIPGroup) };
    inline ModifyGlobalSecurityIPGroupNameResponseBody& setGlobalSecurityIPGroup(vector<ModifyGlobalSecurityIPGroupNameResponseBody::GlobalSecurityIPGroup> && globalSecurityIPGroup) { DARABONBA_PTR_SET_RVALUE(globalSecurityIPGroup_, globalSecurityIPGroup) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ModifyGlobalSecurityIPGroupNameResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of the global IP whitelist template.
    shared_ptr<vector<ModifyGlobalSecurityIPGroupNameResponseBody::GlobalSecurityIPGroup>> globalSecurityIPGroup_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
