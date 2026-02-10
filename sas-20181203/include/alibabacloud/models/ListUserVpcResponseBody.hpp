// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERVPCRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERVPCRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListUserVpcResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUserVpcResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(UserVpcInfos, userVpcInfos_);
    };
    friend void from_json(const Darabonba::Json& j, ListUserVpcResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(UserVpcInfos, userVpcInfos_);
    };
    ListUserVpcResponseBody() = default ;
    ListUserVpcResponseBody(const ListUserVpcResponseBody &) = default ;
    ListUserVpcResponseBody(ListUserVpcResponseBody &&) = default ;
    ListUserVpcResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUserVpcResponseBody() = default ;
    ListUserVpcResponseBody& operator=(const ListUserVpcResponseBody &) = default ;
    ListUserVpcResponseBody& operator=(ListUserVpcResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class UserVpcInfos : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UserVpcInfos& obj) { 
        DARABONBA_PTR_TO_JSON(CidrBlock, cidrBlock_);
        DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_TO_JSON(Default, default_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(VRouterId, VRouterId_);
        DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
        DARABONBA_PTR_TO_JSON(VpcName, vpcName_);
      };
      friend void from_json(const Darabonba::Json& j, UserVpcInfos& obj) { 
        DARABONBA_PTR_FROM_JSON(CidrBlock, cidrBlock_);
        DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_FROM_JSON(Default, default_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(VRouterId, VRouterId_);
        DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
        DARABONBA_PTR_FROM_JSON(VpcName, vpcName_);
      };
      UserVpcInfos() = default ;
      UserVpcInfos(const UserVpcInfos &) = default ;
      UserVpcInfos(UserVpcInfos &&) = default ;
      UserVpcInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~UserVpcInfos() = default ;
      UserVpcInfos& operator=(const UserVpcInfos &) = default ;
      UserVpcInfos& operator=(UserVpcInfos &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->cidrBlock_ == nullptr
        && this->creationTime_ == nullptr && this->default_ == nullptr && this->description_ == nullptr && this->modifyTime_ == nullptr && this->regionId_ == nullptr
        && this->status_ == nullptr && this->VRouterId_ == nullptr && this->vpcId_ == nullptr && this->vpcName_ == nullptr; };
      // cidrBlock Field Functions 
      bool hasCidrBlock() const { return this->cidrBlock_ != nullptr;};
      void deleteCidrBlock() { this->cidrBlock_ = nullptr;};
      inline string getCidrBlock() const { DARABONBA_PTR_GET_DEFAULT(cidrBlock_, "") };
      inline UserVpcInfos& setCidrBlock(string cidrBlock) { DARABONBA_PTR_SET_VALUE(cidrBlock_, cidrBlock) };


      // creationTime Field Functions 
      bool hasCreationTime() const { return this->creationTime_ != nullptr;};
      void deleteCreationTime() { this->creationTime_ = nullptr;};
      inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
      inline UserVpcInfos& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


      // default Field Functions 
      bool hasDefault() const { return this->default_ != nullptr;};
      void deleteDefault() { this->default_ = nullptr;};
      inline bool getDefault() const { DARABONBA_PTR_GET_DEFAULT(default_, false) };
      inline UserVpcInfos& setDefault(bool _default) { DARABONBA_PTR_SET_VALUE(default_, _default) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline UserVpcInfos& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // modifyTime Field Functions 
      bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
      void deleteModifyTime() { this->modifyTime_ = nullptr;};
      inline string getModifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, "") };
      inline UserVpcInfos& setModifyTime(string modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline UserVpcInfos& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline UserVpcInfos& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // VRouterId Field Functions 
      bool hasVRouterId() const { return this->VRouterId_ != nullptr;};
      void deleteVRouterId() { this->VRouterId_ = nullptr;};
      inline string getVRouterId() const { DARABONBA_PTR_GET_DEFAULT(VRouterId_, "") };
      inline UserVpcInfos& setVRouterId(string VRouterId) { DARABONBA_PTR_SET_VALUE(VRouterId_, VRouterId) };


      // vpcId Field Functions 
      bool hasVpcId() const { return this->vpcId_ != nullptr;};
      void deleteVpcId() { this->vpcId_ = nullptr;};
      inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
      inline UserVpcInfos& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


      // vpcName Field Functions 
      bool hasVpcName() const { return this->vpcName_ != nullptr;};
      void deleteVpcName() { this->vpcName_ = nullptr;};
      inline string getVpcName() const { DARABONBA_PTR_GET_DEFAULT(vpcName_, "") };
      inline UserVpcInfos& setVpcName(string vpcName) { DARABONBA_PTR_SET_VALUE(vpcName_, vpcName) };


    protected:
      // IPv4 network segment of the VPC.
      shared_ptr<string> cidrBlock_ {};
      // Creation time.
      shared_ptr<string> creationTime_ {};
      // Indicates whether it is the default VPC in the region. Values:
      // - **true**: Yes - **false**: No
      shared_ptr<bool> default_ {};
      // Description of the VPC.
      shared_ptr<string> description_ {};
      // Modification time.
      shared_ptr<string> modifyTime_ {};
      // Region
      shared_ptr<string> regionId_ {};
      // Status of the VPC. Values:
      // 
      // - **Pending**: Configuring
      // - **Available**: Available
      shared_ptr<string> status_ {};
      // ID of the VPC router.
      shared_ptr<string> VRouterId_ {};
      // ID of the VPC.
      shared_ptr<string> vpcId_ {};
      // Name of the VPC.
      shared_ptr<string> vpcName_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->userVpcInfos_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListUserVpcResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // userVpcInfos Field Functions 
    bool hasUserVpcInfos() const { return this->userVpcInfos_ != nullptr;};
    void deleteUserVpcInfos() { this->userVpcInfos_ = nullptr;};
    inline const vector<ListUserVpcResponseBody::UserVpcInfos> & getUserVpcInfos() const { DARABONBA_PTR_GET_CONST(userVpcInfos_, vector<ListUserVpcResponseBody::UserVpcInfos>) };
    inline vector<ListUserVpcResponseBody::UserVpcInfos> getUserVpcInfos() { DARABONBA_PTR_GET(userVpcInfos_, vector<ListUserVpcResponseBody::UserVpcInfos>) };
    inline ListUserVpcResponseBody& setUserVpcInfos(const vector<ListUserVpcResponseBody::UserVpcInfos> & userVpcInfos) { DARABONBA_PTR_SET_VALUE(userVpcInfos_, userVpcInfos) };
    inline ListUserVpcResponseBody& setUserVpcInfos(vector<ListUserVpcResponseBody::UserVpcInfos> && userVpcInfos) { DARABONBA_PTR_SET_RVALUE(userVpcInfos_, userVpcInfos) };


  protected:
    // The ID of the request, which is a unique identifier generated by Alibaba Cloud for this request and can be used to troubleshoot and locate issues.
    shared_ptr<string> requestId_ {};
    // List of VPC information.
    shared_ptr<vector<ListUserVpcResponseBody::UserVpcInfos>> userVpcInfos_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
