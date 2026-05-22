// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETARTIFACTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETARTIFACTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNestSupplier20210521
{
namespace Models
{
  class GetArtifactResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetArtifactResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ArtifactBuildProperty, artifactBuildProperty_);
      DARABONBA_PTR_TO_JSON(ArtifactBuildType, artifactBuildType_);
      DARABONBA_PTR_TO_JSON(ArtifactId, artifactId_);
      DARABONBA_PTR_TO_JSON(ArtifactProperty, artifactProperty_);
      DARABONBA_PTR_TO_JSON(ArtifactType, artifactType_);
      DARABONBA_PTR_TO_JSON(ArtifactVersion, artifactVersion_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(MaxVersion, maxVersion_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PermissionType, permissionType_);
      DARABONBA_PTR_TO_JSON(Progress, progress_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StatusDetail, statusDetail_);
      DARABONBA_PTR_TO_JSON(SupportRegionIds, supportRegionIds_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(VersionName, versionName_);
    };
    friend void from_json(const Darabonba::Json& j, GetArtifactResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ArtifactBuildProperty, artifactBuildProperty_);
      DARABONBA_PTR_FROM_JSON(ArtifactBuildType, artifactBuildType_);
      DARABONBA_PTR_FROM_JSON(ArtifactId, artifactId_);
      DARABONBA_PTR_FROM_JSON(ArtifactProperty, artifactProperty_);
      DARABONBA_PTR_FROM_JSON(ArtifactType, artifactType_);
      DARABONBA_PTR_FROM_JSON(ArtifactVersion, artifactVersion_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(MaxVersion, maxVersion_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PermissionType, permissionType_);
      DARABONBA_PTR_FROM_JSON(Progress, progress_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StatusDetail, statusDetail_);
      DARABONBA_PTR_FROM_JSON(SupportRegionIds, supportRegionIds_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(VersionName, versionName_);
    };
    GetArtifactResponseBody() = default ;
    GetArtifactResponseBody(const GetArtifactResponseBody &) = default ;
    GetArtifactResponseBody(GetArtifactResponseBody &&) = default ;
    GetArtifactResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetArtifactResponseBody() = default ;
    GetArtifactResponseBody& operator=(const GetArtifactResponseBody &) = default ;
    GetArtifactResponseBody& operator=(GetArtifactResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Tags : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tags& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Tags& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Tags() = default ;
      Tags(const Tags &) = default ;
      Tags(Tags &&) = default ;
      Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tags() = default ;
      Tags& operator=(const Tags &) = default ;
      Tags& operator=(Tags &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline Tags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Tags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The tag key of the deployment package.
      shared_ptr<string> key_ {};
      // The tag value of the deployment package.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->artifactBuildProperty_ == nullptr
        && this->artifactBuildType_ == nullptr && this->artifactId_ == nullptr && this->artifactProperty_ == nullptr && this->artifactType_ == nullptr && this->artifactVersion_ == nullptr
        && this->description_ == nullptr && this->gmtModified_ == nullptr && this->maxVersion_ == nullptr && this->name_ == nullptr && this->permissionType_ == nullptr
        && this->progress_ == nullptr && this->requestId_ == nullptr && this->resourceGroupId_ == nullptr && this->status_ == nullptr && this->statusDetail_ == nullptr
        && this->supportRegionIds_ == nullptr && this->tags_ == nullptr && this->versionName_ == nullptr; };
    // artifactBuildProperty Field Functions 
    bool hasArtifactBuildProperty() const { return this->artifactBuildProperty_ != nullptr;};
    void deleteArtifactBuildProperty() { this->artifactBuildProperty_ = nullptr;};
    inline string getArtifactBuildProperty() const { DARABONBA_PTR_GET_DEFAULT(artifactBuildProperty_, "") };
    inline GetArtifactResponseBody& setArtifactBuildProperty(string artifactBuildProperty) { DARABONBA_PTR_SET_VALUE(artifactBuildProperty_, artifactBuildProperty) };


    // artifactBuildType Field Functions 
    bool hasArtifactBuildType() const { return this->artifactBuildType_ != nullptr;};
    void deleteArtifactBuildType() { this->artifactBuildType_ = nullptr;};
    inline string getArtifactBuildType() const { DARABONBA_PTR_GET_DEFAULT(artifactBuildType_, "") };
    inline GetArtifactResponseBody& setArtifactBuildType(string artifactBuildType) { DARABONBA_PTR_SET_VALUE(artifactBuildType_, artifactBuildType) };


    // artifactId Field Functions 
    bool hasArtifactId() const { return this->artifactId_ != nullptr;};
    void deleteArtifactId() { this->artifactId_ = nullptr;};
    inline string getArtifactId() const { DARABONBA_PTR_GET_DEFAULT(artifactId_, "") };
    inline GetArtifactResponseBody& setArtifactId(string artifactId) { DARABONBA_PTR_SET_VALUE(artifactId_, artifactId) };


    // artifactProperty Field Functions 
    bool hasArtifactProperty() const { return this->artifactProperty_ != nullptr;};
    void deleteArtifactProperty() { this->artifactProperty_ = nullptr;};
    inline string getArtifactProperty() const { DARABONBA_PTR_GET_DEFAULT(artifactProperty_, "") };
    inline GetArtifactResponseBody& setArtifactProperty(string artifactProperty) { DARABONBA_PTR_SET_VALUE(artifactProperty_, artifactProperty) };


    // artifactType Field Functions 
    bool hasArtifactType() const { return this->artifactType_ != nullptr;};
    void deleteArtifactType() { this->artifactType_ = nullptr;};
    inline string getArtifactType() const { DARABONBA_PTR_GET_DEFAULT(artifactType_, "") };
    inline GetArtifactResponseBody& setArtifactType(string artifactType) { DARABONBA_PTR_SET_VALUE(artifactType_, artifactType) };


    // artifactVersion Field Functions 
    bool hasArtifactVersion() const { return this->artifactVersion_ != nullptr;};
    void deleteArtifactVersion() { this->artifactVersion_ = nullptr;};
    inline string getArtifactVersion() const { DARABONBA_PTR_GET_DEFAULT(artifactVersion_, "") };
    inline GetArtifactResponseBody& setArtifactVersion(string artifactVersion) { DARABONBA_PTR_SET_VALUE(artifactVersion_, artifactVersion) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetArtifactResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline GetArtifactResponseBody& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // maxVersion Field Functions 
    bool hasMaxVersion() const { return this->maxVersion_ != nullptr;};
    void deleteMaxVersion() { this->maxVersion_ = nullptr;};
    inline int64_t getMaxVersion() const { DARABONBA_PTR_GET_DEFAULT(maxVersion_, 0L) };
    inline GetArtifactResponseBody& setMaxVersion(int64_t maxVersion) { DARABONBA_PTR_SET_VALUE(maxVersion_, maxVersion) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetArtifactResponseBody& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // permissionType Field Functions 
    bool hasPermissionType() const { return this->permissionType_ != nullptr;};
    void deletePermissionType() { this->permissionType_ = nullptr;};
    inline string getPermissionType() const { DARABONBA_PTR_GET_DEFAULT(permissionType_, "") };
    inline GetArtifactResponseBody& setPermissionType(string permissionType) { DARABONBA_PTR_SET_VALUE(permissionType_, permissionType) };


    // progress Field Functions 
    bool hasProgress() const { return this->progress_ != nullptr;};
    void deleteProgress() { this->progress_ = nullptr;};
    inline string getProgress() const { DARABONBA_PTR_GET_DEFAULT(progress_, "") };
    inline GetArtifactResponseBody& setProgress(string progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetArtifactResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline GetArtifactResponseBody& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetArtifactResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // statusDetail Field Functions 
    bool hasStatusDetail() const { return this->statusDetail_ != nullptr;};
    void deleteStatusDetail() { this->statusDetail_ = nullptr;};
    inline string getStatusDetail() const { DARABONBA_PTR_GET_DEFAULT(statusDetail_, "") };
    inline GetArtifactResponseBody& setStatusDetail(string statusDetail) { DARABONBA_PTR_SET_VALUE(statusDetail_, statusDetail) };


    // supportRegionIds Field Functions 
    bool hasSupportRegionIds() const { return this->supportRegionIds_ != nullptr;};
    void deleteSupportRegionIds() { this->supportRegionIds_ = nullptr;};
    inline string getSupportRegionIds() const { DARABONBA_PTR_GET_DEFAULT(supportRegionIds_, "") };
    inline GetArtifactResponseBody& setSupportRegionIds(string supportRegionIds) { DARABONBA_PTR_SET_VALUE(supportRegionIds_, supportRegionIds) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<GetArtifactResponseBody::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<GetArtifactResponseBody::Tags>) };
    inline vector<GetArtifactResponseBody::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<GetArtifactResponseBody::Tags>) };
    inline GetArtifactResponseBody& setTags(const vector<GetArtifactResponseBody::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline GetArtifactResponseBody& setTags(vector<GetArtifactResponseBody::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // versionName Field Functions 
    bool hasVersionName() const { return this->versionName_ != nullptr;};
    void deleteVersionName() { this->versionName_ = nullptr;};
    inline string getVersionName() const { DARABONBA_PTR_GET_DEFAULT(versionName_, "") };
    inline GetArtifactResponseBody& setVersionName(string versionName) { DARABONBA_PTR_SET_VALUE(versionName_, versionName) };


  protected:
    // The build properties of the artifact, utilized for hosting and building the deployment package.
    shared_ptr<string> artifactBuildProperty_ {};
    // The type of the deployment package to be built.
    shared_ptr<string> artifactBuildType_ {};
    // The ID of the deployment package.
    shared_ptr<string> artifactId_ {};
    // The properties of the deployment package.
    shared_ptr<string> artifactProperty_ {};
    // The type of the deployment package.
    shared_ptr<string> artifactType_ {};
    // The version of the deployment package.
    shared_ptr<string> artifactVersion_ {};
    // The description of the deployment package.
    shared_ptr<string> description_ {};
    // The time when the deployment package was modified.
    shared_ptr<string> gmtModified_ {};
    // The latest version of the deployment package.
    shared_ptr<int64_t> maxVersion_ {};
    // The name of the deployment package.
    shared_ptr<string> name_ {};
    // Permission fields are applicable to container image artifact and Helm Chart artifact They can only change from Automatic to Public. Options:
    // - Public
    // - Automatic
    shared_ptr<string> permissionType_ {};
    // The distribution progress of the deployment package.
    shared_ptr<string> progress_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The ID of the resource group.
    shared_ptr<string> resourceGroupId_ {};
    // The status of the deployment package. Valid values:
    shared_ptr<string> status_ {};
    // The description of the deployment package.
    shared_ptr<string> statusDetail_ {};
    // The ID of the region that supports the deployment package.
    shared_ptr<string> supportRegionIds_ {};
    // The tags of the deployment package.
    shared_ptr<vector<GetArtifactResponseBody::Tags>> tags_ {};
    // The version name of the deployment package.
    shared_ptr<string> versionName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNestSupplier20210521
#endif
