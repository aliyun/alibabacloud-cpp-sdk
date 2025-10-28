// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYECCINFORESPONSEBODYECCINFO_HPP_
#define ALIBABACLOUD_MODELS_QUERYECCINFORESPONSEBODYECCINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class QueryEccInfoResponseBodyEccInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryEccInfoResponseBodyEccInfo& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(EccId, eccId_);
      DARABONBA_PTR_TO_JSON(EcuId, ecuId_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(PackageMd5, packageMd5_);
      DARABONBA_PTR_TO_JSON(PackageVersion, packageVersion_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryEccInfoResponseBodyEccInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(EccId, eccId_);
      DARABONBA_PTR_FROM_JSON(EcuId, ecuId_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(PackageMd5, packageMd5_);
      DARABONBA_PTR_FROM_JSON(PackageVersion, packageVersion_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    QueryEccInfoResponseBodyEccInfo() = default ;
    QueryEccInfoResponseBodyEccInfo(const QueryEccInfoResponseBodyEccInfo &) = default ;
    QueryEccInfoResponseBodyEccInfo(QueryEccInfoResponseBodyEccInfo &&) = default ;
    QueryEccInfoResponseBodyEccInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryEccInfoResponseBodyEccInfo() = default ;
    QueryEccInfoResponseBodyEccInfo& operator=(const QueryEccInfoResponseBodyEccInfo &) = default ;
    QueryEccInfoResponseBodyEccInfo& operator=(QueryEccInfoResponseBodyEccInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->eccId_ == nullptr && return this->ecuId_ == nullptr && return this->groupId_ == nullptr && return this->groupName_ == nullptr && return this->packageMd5_ == nullptr
        && return this->packageVersion_ == nullptr && return this->vpcId_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline QueryEccInfoResponseBodyEccInfo& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // eccId Field Functions 
    bool hasEccId() const { return this->eccId_ != nullptr;};
    void deleteEccId() { this->eccId_ = nullptr;};
    inline string eccId() const { DARABONBA_PTR_GET_DEFAULT(eccId_, "") };
    inline QueryEccInfoResponseBodyEccInfo& setEccId(string eccId) { DARABONBA_PTR_SET_VALUE(eccId_, eccId) };


    // ecuId Field Functions 
    bool hasEcuId() const { return this->ecuId_ != nullptr;};
    void deleteEcuId() { this->ecuId_ = nullptr;};
    inline string ecuId() const { DARABONBA_PTR_GET_DEFAULT(ecuId_, "") };
    inline QueryEccInfoResponseBodyEccInfo& setEcuId(string ecuId) { DARABONBA_PTR_SET_VALUE(ecuId_, ecuId) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline QueryEccInfoResponseBodyEccInfo& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline QueryEccInfoResponseBodyEccInfo& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // packageMd5 Field Functions 
    bool hasPackageMd5() const { return this->packageMd5_ != nullptr;};
    void deletePackageMd5() { this->packageMd5_ = nullptr;};
    inline string packageMd5() const { DARABONBA_PTR_GET_DEFAULT(packageMd5_, "") };
    inline QueryEccInfoResponseBodyEccInfo& setPackageMd5(string packageMd5) { DARABONBA_PTR_SET_VALUE(packageMd5_, packageMd5) };


    // packageVersion Field Functions 
    bool hasPackageVersion() const { return this->packageVersion_ != nullptr;};
    void deletePackageVersion() { this->packageVersion_ = nullptr;};
    inline string packageVersion() const { DARABONBA_PTR_GET_DEFAULT(packageVersion_, "") };
    inline QueryEccInfoResponseBodyEccInfo& setPackageVersion(string packageVersion) { DARABONBA_PTR_SET_VALUE(packageVersion_, packageVersion) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline QueryEccInfoResponseBodyEccInfo& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // The ID of the application.
    std::shared_ptr<string> appId_ = nullptr;
    // ECC ID
    std::shared_ptr<string> eccId_ = nullptr;
    // ECU ID
    std::shared_ptr<string> ecuId_ = nullptr;
    // The ID of the ECC group.
    std::shared_ptr<string> groupId_ = nullptr;
    // The name of the ECC group.
    std::shared_ptr<string> groupName_ = nullptr;
    // The MD5 hash value of the deployment package version.
    std::shared_ptr<string> packageMd5_ = nullptr;
    // The version of the deployment package.
    std::shared_ptr<string> packageVersion_ = nullptr;
    // VPC ID
    std::shared_ptr<string> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
