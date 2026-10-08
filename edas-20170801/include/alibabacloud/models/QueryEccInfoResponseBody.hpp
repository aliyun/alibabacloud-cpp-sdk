// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYECCINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYECCINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class QueryEccInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryEccInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(EccInfo, eccInfo_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryEccInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(EccInfo, eccInfo_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    QueryEccInfoResponseBody() = default ;
    QueryEccInfoResponseBody(const QueryEccInfoResponseBody &) = default ;
    QueryEccInfoResponseBody(QueryEccInfoResponseBody &&) = default ;
    QueryEccInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryEccInfoResponseBody() = default ;
    QueryEccInfoResponseBody& operator=(const QueryEccInfoResponseBody &) = default ;
    QueryEccInfoResponseBody& operator=(QueryEccInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class EccInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const EccInfo& obj) { 
        DARABONBA_PTR_TO_JSON(AppId, appId_);
        DARABONBA_PTR_TO_JSON(EccId, eccId_);
        DARABONBA_PTR_TO_JSON(EcuId, ecuId_);
        DARABONBA_PTR_TO_JSON(GroupId, groupId_);
        DARABONBA_PTR_TO_JSON(GroupName, groupName_);
        DARABONBA_PTR_TO_JSON(PackageMd5, packageMd5_);
        DARABONBA_PTR_TO_JSON(PackageVersion, packageVersion_);
        DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      };
      friend void from_json(const Darabonba::Json& j, EccInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(AppId, appId_);
        DARABONBA_PTR_FROM_JSON(EccId, eccId_);
        DARABONBA_PTR_FROM_JSON(EcuId, ecuId_);
        DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
        DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
        DARABONBA_PTR_FROM_JSON(PackageMd5, packageMd5_);
        DARABONBA_PTR_FROM_JSON(PackageVersion, packageVersion_);
        DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      };
      EccInfo() = default ;
      EccInfo(const EccInfo &) = default ;
      EccInfo(EccInfo &&) = default ;
      EccInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~EccInfo() = default ;
      EccInfo& operator=(const EccInfo &) = default ;
      EccInfo& operator=(EccInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->appId_ == nullptr
        && this->eccId_ == nullptr && this->ecuId_ == nullptr && this->groupId_ == nullptr && this->groupName_ == nullptr && this->packageMd5_ == nullptr
        && this->packageVersion_ == nullptr && this->vpcId_ == nullptr; };
      // appId Field Functions 
      bool hasAppId() const { return this->appId_ != nullptr;};
      void deleteAppId() { this->appId_ = nullptr;};
      inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
      inline EccInfo& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


      // eccId Field Functions 
      bool hasEccId() const { return this->eccId_ != nullptr;};
      void deleteEccId() { this->eccId_ = nullptr;};
      inline string getEccId() const { DARABONBA_PTR_GET_DEFAULT(eccId_, "") };
      inline EccInfo& setEccId(string eccId) { DARABONBA_PTR_SET_VALUE(eccId_, eccId) };


      // ecuId Field Functions 
      bool hasEcuId() const { return this->ecuId_ != nullptr;};
      void deleteEcuId() { this->ecuId_ = nullptr;};
      inline string getEcuId() const { DARABONBA_PTR_GET_DEFAULT(ecuId_, "") };
      inline EccInfo& setEcuId(string ecuId) { DARABONBA_PTR_SET_VALUE(ecuId_, ecuId) };


      // groupId Field Functions 
      bool hasGroupId() const { return this->groupId_ != nullptr;};
      void deleteGroupId() { this->groupId_ = nullptr;};
      inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
      inline EccInfo& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


      // groupName Field Functions 
      bool hasGroupName() const { return this->groupName_ != nullptr;};
      void deleteGroupName() { this->groupName_ = nullptr;};
      inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
      inline EccInfo& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


      // packageMd5 Field Functions 
      bool hasPackageMd5() const { return this->packageMd5_ != nullptr;};
      void deletePackageMd5() { this->packageMd5_ = nullptr;};
      inline string getPackageMd5() const { DARABONBA_PTR_GET_DEFAULT(packageMd5_, "") };
      inline EccInfo& setPackageMd5(string packageMd5) { DARABONBA_PTR_SET_VALUE(packageMd5_, packageMd5) };


      // packageVersion Field Functions 
      bool hasPackageVersion() const { return this->packageVersion_ != nullptr;};
      void deletePackageVersion() { this->packageVersion_ = nullptr;};
      inline string getPackageVersion() const { DARABONBA_PTR_GET_DEFAULT(packageVersion_, "") };
      inline EccInfo& setPackageVersion(string packageVersion) { DARABONBA_PTR_SET_VALUE(packageVersion_, packageVersion) };


      // vpcId Field Functions 
      bool hasVpcId() const { return this->vpcId_ != nullptr;};
      void deleteVpcId() { this->vpcId_ = nullptr;};
      inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
      inline EccInfo& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    protected:
      // The ID of the application.
      shared_ptr<string> appId_ {};
      // ECC ID
      shared_ptr<string> eccId_ {};
      // ECU ID
      shared_ptr<string> ecuId_ {};
      // The ID of the ECC group.
      shared_ptr<string> groupId_ {};
      // The name of the ECC group.
      shared_ptr<string> groupName_ {};
      // The MD5 hash value of the deployment package version.
      shared_ptr<string> packageMd5_ {};
      // The version of the deployment package.
      shared_ptr<string> packageVersion_ {};
      // VPC ID
      shared_ptr<string> vpcId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->eccInfo_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline QueryEccInfoResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // eccInfo Field Functions 
    bool hasEccInfo() const { return this->eccInfo_ != nullptr;};
    void deleteEccInfo() { this->eccInfo_ = nullptr;};
    inline const QueryEccInfoResponseBody::EccInfo & getEccInfo() const { DARABONBA_PTR_GET_CONST(eccInfo_, QueryEccInfoResponseBody::EccInfo) };
    inline QueryEccInfoResponseBody::EccInfo getEccInfo() { DARABONBA_PTR_GET(eccInfo_, QueryEccInfoResponseBody::EccInfo) };
    inline QueryEccInfoResponseBody& setEccInfo(const QueryEccInfoResponseBody::EccInfo & eccInfo) { DARABONBA_PTR_SET_VALUE(eccInfo_, eccInfo) };
    inline QueryEccInfoResponseBody& setEccInfo(QueryEccInfoResponseBody::EccInfo && eccInfo) { DARABONBA_PTR_SET_RVALUE(eccInfo_, eccInfo) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QueryEccInfoResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryEccInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The HTTP status code that is returned.
    shared_ptr<int32_t> code_ {};
    // The information about the ECC.
    shared_ptr<QueryEccInfoResponseBody::EccInfo> eccInfo_ {};
    // The additional information that is returned.
    shared_ptr<string> message_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
