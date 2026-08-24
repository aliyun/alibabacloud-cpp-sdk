// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ATTACHKVCACHESTOREREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ATTACHKVCACHESTOREREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Kvcachestore20260617
{
namespace Models
{
  class AttachKVCacheStoreRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AttachKVCacheStoreRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Arns, arns_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceIds, resourceIds_);
    };
    friend void from_json(const Darabonba::Json& j, AttachKVCacheStoreRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Arns, arns_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceIds, resourceIds_);
    };
    AttachKVCacheStoreRequest() = default ;
    AttachKVCacheStoreRequest(const AttachKVCacheStoreRequest &) = default ;
    AttachKVCacheStoreRequest(AttachKVCacheStoreRequest &&) = default ;
    AttachKVCacheStoreRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AttachKVCacheStoreRequest() = default ;
    AttachKVCacheStoreRequest& operator=(const AttachKVCacheStoreRequest &) = default ;
    AttachKVCacheStoreRequest& operator=(AttachKVCacheStoreRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResourceIds : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResourceIds& obj) { 
        DARABONBA_PTR_TO_JSON(KvcsId, kvcsId_);
        DARABONBA_PTR_TO_JSON(VscId, vscId_);
      };
      friend void from_json(const Darabonba::Json& j, ResourceIds& obj) { 
        DARABONBA_PTR_FROM_JSON(KvcsId, kvcsId_);
        DARABONBA_PTR_FROM_JSON(VscId, vscId_);
      };
      ResourceIds() = default ;
      ResourceIds(const ResourceIds &) = default ;
      ResourceIds(ResourceIds &&) = default ;
      ResourceIds(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ResourceIds() = default ;
      ResourceIds& operator=(const ResourceIds &) = default ;
      ResourceIds& operator=(ResourceIds &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->kvcsId_ == nullptr
        && this->vscId_ == nullptr; };
      // kvcsId Field Functions 
      bool hasKvcsId() const { return this->kvcsId_ != nullptr;};
      void deleteKvcsId() { this->kvcsId_ = nullptr;};
      inline string getKvcsId() const { DARABONBA_PTR_GET_DEFAULT(kvcsId_, "") };
      inline ResourceIds& setKvcsId(string kvcsId) { DARABONBA_PTR_SET_VALUE(kvcsId_, kvcsId) };


      // vscId Field Functions 
      bool hasVscId() const { return this->vscId_ != nullptr;};
      void deleteVscId() { this->vscId_ = nullptr;};
      inline string getVscId() const { DARABONBA_PTR_GET_DEFAULT(vscId_, "") };
      inline ResourceIds& setVscId(string vscId) { DARABONBA_PTR_SET_VALUE(vscId_, vscId) };


    protected:
      // KVCacheStore KvcsId
      // 
      // This parameter is required.
      shared_ptr<string> kvcsId_ {};
      // The VSC ID pre-created on the compute side.
      // 
      // This parameter is required.
      shared_ptr<string> vscId_ {};
    };

    class Arns : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Arns& obj) { 
        DARABONBA_PTR_TO_JSON(AssumeRoleFor, assumeRoleFor_);
        DARABONBA_PTR_TO_JSON(RoleArn, roleArn_);
        DARABONBA_PTR_TO_JSON(RoleType, roleType_);
      };
      friend void from_json(const Darabonba::Json& j, Arns& obj) { 
        DARABONBA_PTR_FROM_JSON(AssumeRoleFor, assumeRoleFor_);
        DARABONBA_PTR_FROM_JSON(RoleArn, roleArn_);
        DARABONBA_PTR_FROM_JSON(RoleType, roleType_);
      };
      Arns() = default ;
      Arns(const Arns &) = default ;
      Arns(Arns &&) = default ;
      Arns(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Arns() = default ;
      Arns& operator=(const Arns &) = default ;
      Arns& operator=(Arns &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->assumeRoleFor_ == nullptr
        && this->roleArn_ == nullptr && this->roleType_ == nullptr; };
      // assumeRoleFor Field Functions 
      bool hasAssumeRoleFor() const { return this->assumeRoleFor_ != nullptr;};
      void deleteAssumeRoleFor() { this->assumeRoleFor_ = nullptr;};
      inline string getAssumeRoleFor() const { DARABONBA_PTR_GET_DEFAULT(assumeRoleFor_, "") };
      inline Arns& setAssumeRoleFor(string assumeRoleFor) { DARABONBA_PTR_SET_VALUE(assumeRoleFor_, assumeRoleFor) };


      // roleArn Field Functions 
      bool hasRoleArn() const { return this->roleArn_ != nullptr;};
      void deleteRoleArn() { this->roleArn_ = nullptr;};
      inline string getRoleArn() const { DARABONBA_PTR_GET_DEFAULT(roleArn_, "") };
      inline Arns& setRoleArn(string roleArn) { DARABONBA_PTR_SET_VALUE(roleArn_, roleArn) };


      // roleType Field Functions 
      bool hasRoleType() const { return this->roleType_ != nullptr;};
      void deleteRoleType() { this->roleType_ = nullptr;};
      inline string getRoleType() const { DARABONBA_PTR_GET_DEFAULT(roleType_, "") };
      inline Arns& setRoleType(string roleType) { DARABONBA_PTR_SET_VALUE(roleType_, roleType) };


    protected:
      // The UID of the target account for role assumption.
      shared_ptr<string> assumeRoleFor_ {};
      // The Alibaba Cloud Resource Name (ARN) of the RAM role.
      // 
      // This parameter is required.
      shared_ptr<string> roleArn_ {};
      // The role type. Valid values:
      // - service
      // - user
      // 
      // This parameter is required.
      shared_ptr<string> roleType_ {};
    };

    virtual bool empty() const override { return this->arns_ == nullptr
        && this->clientToken_ == nullptr && this->regionId_ == nullptr && this->resourceIds_ == nullptr; };
    // arns Field Functions 
    bool hasArns() const { return this->arns_ != nullptr;};
    void deleteArns() { this->arns_ = nullptr;};
    inline const vector<AttachKVCacheStoreRequest::Arns> & getArns() const { DARABONBA_PTR_GET_CONST(arns_, vector<AttachKVCacheStoreRequest::Arns>) };
    inline vector<AttachKVCacheStoreRequest::Arns> getArns() { DARABONBA_PTR_GET(arns_, vector<AttachKVCacheStoreRequest::Arns>) };
    inline AttachKVCacheStoreRequest& setArns(const vector<AttachKVCacheStoreRequest::Arns> & arns) { DARABONBA_PTR_SET_VALUE(arns_, arns) };
    inline AttachKVCacheStoreRequest& setArns(vector<AttachKVCacheStoreRequest::Arns> && arns) { DARABONBA_PTR_SET_RVALUE(arns_, arns) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline AttachKVCacheStoreRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline AttachKVCacheStoreRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceIds Field Functions 
    bool hasResourceIds() const { return this->resourceIds_ != nullptr;};
    void deleteResourceIds() { this->resourceIds_ = nullptr;};
    inline const vector<AttachKVCacheStoreRequest::ResourceIds> & getResourceIds() const { DARABONBA_PTR_GET_CONST(resourceIds_, vector<AttachKVCacheStoreRequest::ResourceIds>) };
    inline vector<AttachKVCacheStoreRequest::ResourceIds> getResourceIds() { DARABONBA_PTR_GET(resourceIds_, vector<AttachKVCacheStoreRequest::ResourceIds>) };
    inline AttachKVCacheStoreRequest& setResourceIds(const vector<AttachKVCacheStoreRequest::ResourceIds> & resourceIds) { DARABONBA_PTR_SET_VALUE(resourceIds_, resourceIds) };
    inline AttachKVCacheStoreRequest& setResourceIds(vector<AttachKVCacheStoreRequest::ResourceIds> && resourceIds) { DARABONBA_PTR_SET_RVALUE(resourceIds_, resourceIds) };


  protected:
    // The cross-account authorization role chain used for cross-account VSC resource verification.
    shared_ptr<vector<AttachKVCacheStoreRequest::Arns>> arns_ {};
    // A string generated by the server that serves as a unique identifier for the client request.
    shared_ptr<string> clientToken_ {};
    // The region ID, such as cn-hangzhou.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The list of resources to mount. A maximum of 100 resources can be specified.
    // 
    // This parameter is required.
    shared_ptr<vector<AttachKVCacheStoreRequest::ResourceIds>> resourceIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kvcachestore20260617
#endif
