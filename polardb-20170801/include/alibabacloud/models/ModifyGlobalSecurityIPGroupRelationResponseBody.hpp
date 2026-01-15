// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYGLOBALSECURITYIPGROUPRELATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MODIFYGLOBALSECURITYIPGROUPRELATIONRESPONSEBODY_HPP_
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
  class ModifyGlobalSecurityIPGroupRelationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyGlobalSecurityIPGroupRelationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(GlobalSecurityIPGroupRel, globalSecurityIPGroupRel_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyGlobalSecurityIPGroupRelationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(GlobalSecurityIPGroupRel, globalSecurityIPGroupRel_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ModifyGlobalSecurityIPGroupRelationResponseBody() = default ;
    ModifyGlobalSecurityIPGroupRelationResponseBody(const ModifyGlobalSecurityIPGroupRelationResponseBody &) = default ;
    ModifyGlobalSecurityIPGroupRelationResponseBody(ModifyGlobalSecurityIPGroupRelationResponseBody &&) = default ;
    ModifyGlobalSecurityIPGroupRelationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyGlobalSecurityIPGroupRelationResponseBody() = default ;
    ModifyGlobalSecurityIPGroupRelationResponseBody& operator=(const ModifyGlobalSecurityIPGroupRelationResponseBody &) = default ;
    ModifyGlobalSecurityIPGroupRelationResponseBody& operator=(ModifyGlobalSecurityIPGroupRelationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class GlobalSecurityIPGroupRel : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const GlobalSecurityIPGroupRel& obj) { 
        DARABONBA_PTR_TO_JSON(GIpList, GIpList_);
        DARABONBA_PTR_TO_JSON(GlobalIgName, globalIgName_);
        DARABONBA_PTR_TO_JSON(GlobalSecurityGroupId, globalSecurityGroupId_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      };
      friend void from_json(const Darabonba::Json& j, GlobalSecurityIPGroupRel& obj) { 
        DARABONBA_PTR_FROM_JSON(GIpList, GIpList_);
        DARABONBA_PTR_FROM_JSON(GlobalIgName, globalIgName_);
        DARABONBA_PTR_FROM_JSON(GlobalSecurityGroupId, globalSecurityGroupId_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      };
      GlobalSecurityIPGroupRel() = default ;
      GlobalSecurityIPGroupRel(const GlobalSecurityIPGroupRel &) = default ;
      GlobalSecurityIPGroupRel(GlobalSecurityIPGroupRel &&) = default ;
      GlobalSecurityIPGroupRel(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~GlobalSecurityIPGroupRel() = default ;
      GlobalSecurityIPGroupRel& operator=(const GlobalSecurityIPGroupRel &) = default ;
      GlobalSecurityIPGroupRel& operator=(GlobalSecurityIPGroupRel &&) = default ;
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
      inline GlobalSecurityIPGroupRel& setGIpList(string GIpList) { DARABONBA_PTR_SET_VALUE(GIpList_, GIpList) };


      // globalIgName Field Functions 
      bool hasGlobalIgName() const { return this->globalIgName_ != nullptr;};
      void deleteGlobalIgName() { this->globalIgName_ = nullptr;};
      inline string getGlobalIgName() const { DARABONBA_PTR_GET_DEFAULT(globalIgName_, "") };
      inline GlobalSecurityIPGroupRel& setGlobalIgName(string globalIgName) { DARABONBA_PTR_SET_VALUE(globalIgName_, globalIgName) };


      // globalSecurityGroupId Field Functions 
      bool hasGlobalSecurityGroupId() const { return this->globalSecurityGroupId_ != nullptr;};
      void deleteGlobalSecurityGroupId() { this->globalSecurityGroupId_ = nullptr;};
      inline string getGlobalSecurityGroupId() const { DARABONBA_PTR_GET_DEFAULT(globalSecurityGroupId_, "") };
      inline GlobalSecurityIPGroupRel& setGlobalSecurityGroupId(string globalSecurityGroupId) { DARABONBA_PTR_SET_VALUE(globalSecurityGroupId_, globalSecurityGroupId) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline GlobalSecurityIPGroupRel& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


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

    virtual bool empty() const override { return this->DBClusterId_ == nullptr
        && this->globalSecurityIPGroupRel_ == nullptr && this->requestId_ == nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline ModifyGlobalSecurityIPGroupRelationResponseBody& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // globalSecurityIPGroupRel Field Functions 
    bool hasGlobalSecurityIPGroupRel() const { return this->globalSecurityIPGroupRel_ != nullptr;};
    void deleteGlobalSecurityIPGroupRel() { this->globalSecurityIPGroupRel_ = nullptr;};
    inline const vector<ModifyGlobalSecurityIPGroupRelationResponseBody::GlobalSecurityIPGroupRel> & getGlobalSecurityIPGroupRel() const { DARABONBA_PTR_GET_CONST(globalSecurityIPGroupRel_, vector<ModifyGlobalSecurityIPGroupRelationResponseBody::GlobalSecurityIPGroupRel>) };
    inline vector<ModifyGlobalSecurityIPGroupRelationResponseBody::GlobalSecurityIPGroupRel> getGlobalSecurityIPGroupRel() { DARABONBA_PTR_GET(globalSecurityIPGroupRel_, vector<ModifyGlobalSecurityIPGroupRelationResponseBody::GlobalSecurityIPGroupRel>) };
    inline ModifyGlobalSecurityIPGroupRelationResponseBody& setGlobalSecurityIPGroupRel(const vector<ModifyGlobalSecurityIPGroupRelationResponseBody::GlobalSecurityIPGroupRel> & globalSecurityIPGroupRel) { DARABONBA_PTR_SET_VALUE(globalSecurityIPGroupRel_, globalSecurityIPGroupRel) };
    inline ModifyGlobalSecurityIPGroupRelationResponseBody& setGlobalSecurityIPGroupRel(vector<ModifyGlobalSecurityIPGroupRelationResponseBody::GlobalSecurityIPGroupRel> && globalSecurityIPGroupRel) { DARABONBA_PTR_SET_RVALUE(globalSecurityIPGroupRel_, globalSecurityIPGroupRel) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ModifyGlobalSecurityIPGroupRelationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the cluster.
    shared_ptr<string> DBClusterId_ {};
    // The details of the global IP whitelist template.
    shared_ptr<vector<ModifyGlobalSecurityIPGroupRelationResponseBody::GlobalSecurityIPGroupRel>> globalSecurityIPGroupRel_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
