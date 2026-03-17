// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OPENCLAWINSTANCEVO_HPP_
#define ALIBABACLOUD_MODELS_OPENCLAWINSTANCEVO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class OpenClawInstanceVO : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OpenClawInstanceVO& obj) { 
      DARABONBA_PTR_TO_JSON(AliyunAccountUid, aliyunAccountUid_);
      DARABONBA_PTR_TO_JSON(AuthType, authType_);
      DARABONBA_PTR_TO_JSON(BasicAuthPassword, basicAuthPassword_);
      DARABONBA_PTR_TO_JSON(BasicAuthUsername, basicAuthUsername_);
      DARABONBA_PTR_TO_JSON(Cpu, cpu_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(ImageInfo, imageInfo_);
      DARABONBA_PTR_TO_JSON(InstanceDesc, instanceDesc_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(InstanceRegion, instanceRegion_);
      DARABONBA_PTR_TO_JSON(LastActiveTime, lastActiveTime_);
      DARABONBA_PTR_TO_JSON(MemorySize, memorySize_);
      DARABONBA_PTR_TO_JSON(OpenclawToken, openclawToken_);
      DARABONBA_PTR_TO_JSON(OwnerUid, ownerUid_);
      DARABONBA_PTR_TO_JSON(PublicDomain, publicDomain_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StatusDesc, statusDesc_);
      DARABONBA_PTR_TO_JSON(StatusMessage, statusMessage_);
      DARABONBA_PTR_TO_JSON(Variables, variables_);
    };
    friend void from_json(const Darabonba::Json& j, OpenClawInstanceVO& obj) { 
      DARABONBA_PTR_FROM_JSON(AliyunAccountUid, aliyunAccountUid_);
      DARABONBA_PTR_FROM_JSON(AuthType, authType_);
      DARABONBA_PTR_FROM_JSON(BasicAuthPassword, basicAuthPassword_);
      DARABONBA_PTR_FROM_JSON(BasicAuthUsername, basicAuthUsername_);
      DARABONBA_PTR_FROM_JSON(Cpu, cpu_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(ImageInfo, imageInfo_);
      DARABONBA_PTR_FROM_JSON(InstanceDesc, instanceDesc_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(InstanceRegion, instanceRegion_);
      DARABONBA_PTR_FROM_JSON(LastActiveTime, lastActiveTime_);
      DARABONBA_PTR_FROM_JSON(MemorySize, memorySize_);
      DARABONBA_PTR_FROM_JSON(OpenclawToken, openclawToken_);
      DARABONBA_PTR_FROM_JSON(OwnerUid, ownerUid_);
      DARABONBA_PTR_FROM_JSON(PublicDomain, publicDomain_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StatusDesc, statusDesc_);
      DARABONBA_PTR_FROM_JSON(StatusMessage, statusMessage_);
      DARABONBA_PTR_FROM_JSON(Variables, variables_);
    };
    OpenClawInstanceVO() = default ;
    OpenClawInstanceVO(const OpenClawInstanceVO &) = default ;
    OpenClawInstanceVO(OpenClawInstanceVO &&) = default ;
    OpenClawInstanceVO(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OpenClawInstanceVO() = default ;
    OpenClawInstanceVO& operator=(const OpenClawInstanceVO &) = default ;
    OpenClawInstanceVO& operator=(OpenClawInstanceVO &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ImageInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ImageInfo& obj) { 
        DARABONBA_PTR_TO_JSON(ImageId, imageId_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Namespace, namespace_);
        DARABONBA_PTR_TO_JSON(Tag, tag_);
        DARABONBA_PTR_TO_JSON(VersionDesc, versionDesc_);
      };
      friend void from_json(const Darabonba::Json& j, ImageInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
        DARABONBA_PTR_FROM_JSON(Tag, tag_);
        DARABONBA_PTR_FROM_JSON(VersionDesc, versionDesc_);
      };
      ImageInfo() = default ;
      ImageInfo(const ImageInfo &) = default ;
      ImageInfo(ImageInfo &&) = default ;
      ImageInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ImageInfo() = default ;
      ImageInfo& operator=(const ImageInfo &) = default ;
      ImageInfo& operator=(ImageInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->imageId_ == nullptr
        && this->name_ == nullptr && this->namespace_ == nullptr && this->tag_ == nullptr && this->versionDesc_ == nullptr; };
      // imageId Field Functions 
      bool hasImageId() const { return this->imageId_ != nullptr;};
      void deleteImageId() { this->imageId_ = nullptr;};
      inline int64_t getImageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, 0L) };
      inline ImageInfo& setImageId(int64_t imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline ImageInfo& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // namespace Field Functions 
      bool hasNamespace() const { return this->namespace_ != nullptr;};
      void deleteNamespace() { this->namespace_ = nullptr;};
      inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
      inline ImageInfo& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


      // tag Field Functions 
      bool hasTag() const { return this->tag_ != nullptr;};
      void deleteTag() { this->tag_ = nullptr;};
      inline string getTag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
      inline ImageInfo& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


      // versionDesc Field Functions 
      bool hasVersionDesc() const { return this->versionDesc_ != nullptr;};
      void deleteVersionDesc() { this->versionDesc_ = nullptr;};
      inline string getVersionDesc() const { DARABONBA_PTR_GET_DEFAULT(versionDesc_, "") };
      inline ImageInfo& setVersionDesc(string versionDesc) { DARABONBA_PTR_SET_VALUE(versionDesc_, versionDesc) };


    protected:
      shared_ptr<int64_t> imageId_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> namespace_ {};
      shared_ptr<string> tag_ {};
      shared_ptr<string> versionDesc_ {};
    };

    virtual bool empty() const override { return this->aliyunAccountUid_ == nullptr
        && this->authType_ == nullptr && this->basicAuthPassword_ == nullptr && this->basicAuthUsername_ == nullptr && this->cpu_ == nullptr && this->gmtCreate_ == nullptr
        && this->gmtModified_ == nullptr && this->imageInfo_ == nullptr && this->instanceDesc_ == nullptr && this->instanceId_ == nullptr && this->instanceName_ == nullptr
        && this->instanceRegion_ == nullptr && this->lastActiveTime_ == nullptr && this->memorySize_ == nullptr && this->openclawToken_ == nullptr && this->ownerUid_ == nullptr
        && this->publicDomain_ == nullptr && this->status_ == nullptr && this->statusDesc_ == nullptr && this->statusMessage_ == nullptr && this->variables_ == nullptr; };
    // aliyunAccountUid Field Functions 
    bool hasAliyunAccountUid() const { return this->aliyunAccountUid_ != nullptr;};
    void deleteAliyunAccountUid() { this->aliyunAccountUid_ = nullptr;};
    inline string getAliyunAccountUid() const { DARABONBA_PTR_GET_DEFAULT(aliyunAccountUid_, "") };
    inline OpenClawInstanceVO& setAliyunAccountUid(string aliyunAccountUid) { DARABONBA_PTR_SET_VALUE(aliyunAccountUid_, aliyunAccountUid) };


    // authType Field Functions 
    bool hasAuthType() const { return this->authType_ != nullptr;};
    void deleteAuthType() { this->authType_ = nullptr;};
    inline string getAuthType() const { DARABONBA_PTR_GET_DEFAULT(authType_, "") };
    inline OpenClawInstanceVO& setAuthType(string authType) { DARABONBA_PTR_SET_VALUE(authType_, authType) };


    // basicAuthPassword Field Functions 
    bool hasBasicAuthPassword() const { return this->basicAuthPassword_ != nullptr;};
    void deleteBasicAuthPassword() { this->basicAuthPassword_ = nullptr;};
    inline string getBasicAuthPassword() const { DARABONBA_PTR_GET_DEFAULT(basicAuthPassword_, "") };
    inline OpenClawInstanceVO& setBasicAuthPassword(string basicAuthPassword) { DARABONBA_PTR_SET_VALUE(basicAuthPassword_, basicAuthPassword) };


    // basicAuthUsername Field Functions 
    bool hasBasicAuthUsername() const { return this->basicAuthUsername_ != nullptr;};
    void deleteBasicAuthUsername() { this->basicAuthUsername_ = nullptr;};
    inline string getBasicAuthUsername() const { DARABONBA_PTR_GET_DEFAULT(basicAuthUsername_, "") };
    inline OpenClawInstanceVO& setBasicAuthUsername(string basicAuthUsername) { DARABONBA_PTR_SET_VALUE(basicAuthUsername_, basicAuthUsername) };


    // cpu Field Functions 
    bool hasCpu() const { return this->cpu_ != nullptr;};
    void deleteCpu() { this->cpu_ = nullptr;};
    inline double getCpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, 0.0) };
    inline OpenClawInstanceVO& setCpu(double cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline OpenClawInstanceVO& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline OpenClawInstanceVO& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // imageInfo Field Functions 
    bool hasImageInfo() const { return this->imageInfo_ != nullptr;};
    void deleteImageInfo() { this->imageInfo_ = nullptr;};
    inline const OpenClawInstanceVO::ImageInfo & getImageInfo() const { DARABONBA_PTR_GET_CONST(imageInfo_, OpenClawInstanceVO::ImageInfo) };
    inline OpenClawInstanceVO::ImageInfo getImageInfo() { DARABONBA_PTR_GET(imageInfo_, OpenClawInstanceVO::ImageInfo) };
    inline OpenClawInstanceVO& setImageInfo(const OpenClawInstanceVO::ImageInfo & imageInfo) { DARABONBA_PTR_SET_VALUE(imageInfo_, imageInfo) };
    inline OpenClawInstanceVO& setImageInfo(OpenClawInstanceVO::ImageInfo && imageInfo) { DARABONBA_PTR_SET_RVALUE(imageInfo_, imageInfo) };


    // instanceDesc Field Functions 
    bool hasInstanceDesc() const { return this->instanceDesc_ != nullptr;};
    void deleteInstanceDesc() { this->instanceDesc_ = nullptr;};
    inline string getInstanceDesc() const { DARABONBA_PTR_GET_DEFAULT(instanceDesc_, "") };
    inline OpenClawInstanceVO& setInstanceDesc(string instanceDesc) { DARABONBA_PTR_SET_VALUE(instanceDesc_, instanceDesc) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline OpenClawInstanceVO& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline OpenClawInstanceVO& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // instanceRegion Field Functions 
    bool hasInstanceRegion() const { return this->instanceRegion_ != nullptr;};
    void deleteInstanceRegion() { this->instanceRegion_ = nullptr;};
    inline string getInstanceRegion() const { DARABONBA_PTR_GET_DEFAULT(instanceRegion_, "") };
    inline OpenClawInstanceVO& setInstanceRegion(string instanceRegion) { DARABONBA_PTR_SET_VALUE(instanceRegion_, instanceRegion) };


    // lastActiveTime Field Functions 
    bool hasLastActiveTime() const { return this->lastActiveTime_ != nullptr;};
    void deleteLastActiveTime() { this->lastActiveTime_ = nullptr;};
    inline string getLastActiveTime() const { DARABONBA_PTR_GET_DEFAULT(lastActiveTime_, "") };
    inline OpenClawInstanceVO& setLastActiveTime(string lastActiveTime) { DARABONBA_PTR_SET_VALUE(lastActiveTime_, lastActiveTime) };


    // memorySize Field Functions 
    bool hasMemorySize() const { return this->memorySize_ != nullptr;};
    void deleteMemorySize() { this->memorySize_ = nullptr;};
    inline int32_t getMemorySize() const { DARABONBA_PTR_GET_DEFAULT(memorySize_, 0) };
    inline OpenClawInstanceVO& setMemorySize(int32_t memorySize) { DARABONBA_PTR_SET_VALUE(memorySize_, memorySize) };


    // openclawToken Field Functions 
    bool hasOpenclawToken() const { return this->openclawToken_ != nullptr;};
    void deleteOpenclawToken() { this->openclawToken_ = nullptr;};
    inline string getOpenclawToken() const { DARABONBA_PTR_GET_DEFAULT(openclawToken_, "") };
    inline OpenClawInstanceVO& setOpenclawToken(string openclawToken) { DARABONBA_PTR_SET_VALUE(openclawToken_, openclawToken) };


    // ownerUid Field Functions 
    bool hasOwnerUid() const { return this->ownerUid_ != nullptr;};
    void deleteOwnerUid() { this->ownerUid_ = nullptr;};
    inline string getOwnerUid() const { DARABONBA_PTR_GET_DEFAULT(ownerUid_, "") };
    inline OpenClawInstanceVO& setOwnerUid(string ownerUid) { DARABONBA_PTR_SET_VALUE(ownerUid_, ownerUid) };


    // publicDomain Field Functions 
    bool hasPublicDomain() const { return this->publicDomain_ != nullptr;};
    void deletePublicDomain() { this->publicDomain_ = nullptr;};
    inline string getPublicDomain() const { DARABONBA_PTR_GET_DEFAULT(publicDomain_, "") };
    inline OpenClawInstanceVO& setPublicDomain(string publicDomain) { DARABONBA_PTR_SET_VALUE(publicDomain_, publicDomain) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline OpenClawInstanceVO& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // statusDesc Field Functions 
    bool hasStatusDesc() const { return this->statusDesc_ != nullptr;};
    void deleteStatusDesc() { this->statusDesc_ = nullptr;};
    inline string getStatusDesc() const { DARABONBA_PTR_GET_DEFAULT(statusDesc_, "") };
    inline OpenClawInstanceVO& setStatusDesc(string statusDesc) { DARABONBA_PTR_SET_VALUE(statusDesc_, statusDesc) };


    // statusMessage Field Functions 
    bool hasStatusMessage() const { return this->statusMessage_ != nullptr;};
    void deleteStatusMessage() { this->statusMessage_ = nullptr;};
    inline string getStatusMessage() const { DARABONBA_PTR_GET_DEFAULT(statusMessage_, "") };
    inline OpenClawInstanceVO& setStatusMessage(string statusMessage) { DARABONBA_PTR_SET_VALUE(statusMessage_, statusMessage) };


    // variables Field Functions 
    bool hasVariables() const { return this->variables_ != nullptr;};
    void deleteVariables() { this->variables_ = nullptr;};
    inline string getVariables() const { DARABONBA_PTR_GET_DEFAULT(variables_, "") };
    inline OpenClawInstanceVO& setVariables(string variables) { DARABONBA_PTR_SET_VALUE(variables_, variables) };


  protected:
    shared_ptr<string> aliyunAccountUid_ {};
    shared_ptr<string> authType_ {};
    shared_ptr<string> basicAuthPassword_ {};
    shared_ptr<string> basicAuthUsername_ {};
    shared_ptr<double> cpu_ {};
    shared_ptr<string> gmtCreate_ {};
    shared_ptr<string> gmtModified_ {};
    shared_ptr<OpenClawInstanceVO::ImageInfo> imageInfo_ {};
    shared_ptr<string> instanceDesc_ {};
    shared_ptr<string> instanceId_ {};
    shared_ptr<string> instanceName_ {};
    shared_ptr<string> instanceRegion_ {};
    shared_ptr<string> lastActiveTime_ {};
    shared_ptr<int32_t> memorySize_ {};
    shared_ptr<string> openclawToken_ {};
    shared_ptr<string> ownerUid_ {};
    shared_ptr<string> publicDomain_ {};
    shared_ptr<int32_t> status_ {};
    shared_ptr<string> statusDesc_ {};
    shared_ptr<string> statusMessage_ {};
    shared_ptr<string> variables_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
