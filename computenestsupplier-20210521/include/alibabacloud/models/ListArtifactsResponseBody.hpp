// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTARTIFACTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTARTIFACTSRESPONSEBODY_HPP_
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
  class ListArtifactsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListArtifactsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Artifacts, artifacts_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListArtifactsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Artifacts, artifacts_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListArtifactsResponseBody() = default ;
    ListArtifactsResponseBody(const ListArtifactsResponseBody &) = default ;
    ListArtifactsResponseBody(ListArtifactsResponseBody &&) = default ;
    ListArtifactsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListArtifactsResponseBody() = default ;
    ListArtifactsResponseBody& operator=(const ListArtifactsResponseBody &) = default ;
    ListArtifactsResponseBody& operator=(ListArtifactsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Artifacts : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Artifacts& obj) { 
        DARABONBA_PTR_TO_JSON(ArtifactBuildProperty, artifactBuildProperty_);
        DARABONBA_PTR_TO_JSON(ArtifactId, artifactId_);
        DARABONBA_PTR_TO_JSON(ArtifactType, artifactType_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_TO_JSON(MaxVersion, maxVersion_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(PermissionType, permissionType_);
        DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Tags, tags_);
      };
      friend void from_json(const Darabonba::Json& j, Artifacts& obj) { 
        DARABONBA_PTR_FROM_JSON(ArtifactBuildProperty, artifactBuildProperty_);
        DARABONBA_PTR_FROM_JSON(ArtifactId, artifactId_);
        DARABONBA_PTR_FROM_JSON(ArtifactType, artifactType_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(MaxVersion, maxVersion_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(PermissionType, permissionType_);
        DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Tags, tags_);
      };
      Artifacts() = default ;
      Artifacts(const Artifacts &) = default ;
      Artifacts(Artifacts &&) = default ;
      Artifacts(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Artifacts() = default ;
      Artifacts& operator=(const Artifacts &) = default ;
      Artifacts& operator=(Artifacts &&) = default ;
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
        // The tag key.
        shared_ptr<string> key_ {};
        // The tag value.
        shared_ptr<string> value_ {};
      };

      virtual bool empty() const override { return this->artifactBuildProperty_ == nullptr
        && this->artifactId_ == nullptr && this->artifactType_ == nullptr && this->description_ == nullptr && this->gmtModified_ == nullptr && this->maxVersion_ == nullptr
        && this->name_ == nullptr && this->permissionType_ == nullptr && this->resourceGroupId_ == nullptr && this->status_ == nullptr && this->tags_ == nullptr; };
      // artifactBuildProperty Field Functions 
      bool hasArtifactBuildProperty() const { return this->artifactBuildProperty_ != nullptr;};
      void deleteArtifactBuildProperty() { this->artifactBuildProperty_ = nullptr;};
      inline string getArtifactBuildProperty() const { DARABONBA_PTR_GET_DEFAULT(artifactBuildProperty_, "") };
      inline Artifacts& setArtifactBuildProperty(string artifactBuildProperty) { DARABONBA_PTR_SET_VALUE(artifactBuildProperty_, artifactBuildProperty) };


      // artifactId Field Functions 
      bool hasArtifactId() const { return this->artifactId_ != nullptr;};
      void deleteArtifactId() { this->artifactId_ = nullptr;};
      inline string getArtifactId() const { DARABONBA_PTR_GET_DEFAULT(artifactId_, "") };
      inline Artifacts& setArtifactId(string artifactId) { DARABONBA_PTR_SET_VALUE(artifactId_, artifactId) };


      // artifactType Field Functions 
      bool hasArtifactType() const { return this->artifactType_ != nullptr;};
      void deleteArtifactType() { this->artifactType_ = nullptr;};
      inline string getArtifactType() const { DARABONBA_PTR_GET_DEFAULT(artifactType_, "") };
      inline Artifacts& setArtifactType(string artifactType) { DARABONBA_PTR_SET_VALUE(artifactType_, artifactType) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Artifacts& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
      inline Artifacts& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // maxVersion Field Functions 
      bool hasMaxVersion() const { return this->maxVersion_ != nullptr;};
      void deleteMaxVersion() { this->maxVersion_ = nullptr;};
      inline string getMaxVersion() const { DARABONBA_PTR_GET_DEFAULT(maxVersion_, "") };
      inline Artifacts& setMaxVersion(string maxVersion) { DARABONBA_PTR_SET_VALUE(maxVersion_, maxVersion) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Artifacts& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // permissionType Field Functions 
      bool hasPermissionType() const { return this->permissionType_ != nullptr;};
      void deletePermissionType() { this->permissionType_ = nullptr;};
      inline string getPermissionType() const { DARABONBA_PTR_GET_DEFAULT(permissionType_, "") };
      inline Artifacts& setPermissionType(string permissionType) { DARABONBA_PTR_SET_VALUE(permissionType_, permissionType) };


      // resourceGroupId Field Functions 
      bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
      void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
      inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
      inline Artifacts& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Artifacts& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<Artifacts::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Artifacts::Tags>) };
      inline vector<Artifacts::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<Artifacts::Tags>) };
      inline Artifacts& setTags(const vector<Artifacts::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline Artifacts& setTags(vector<Artifacts::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    protected:
      // The build properties of the artifact, utilized for hosting and building the deployment package.
      shared_ptr<string> artifactBuildProperty_ {};
      // The ID of the deployment package.
      shared_ptr<string> artifactId_ {};
      // The type of the deployment package.
      shared_ptr<string> artifactType_ {};
      // The description of the deployment package.
      shared_ptr<string> description_ {};
      // The time when the deployment package was modified.
      shared_ptr<string> gmtModified_ {};
      // The latest version of the deployment package.
      shared_ptr<string> maxVersion_ {};
      // The name of the deployment package.
      shared_ptr<string> name_ {};
      // Permission fields are applicable to container image artifact and Helm Chart artifact They can only change from Automatic to Public. Options:
      // - Public
      // - Automatic
      shared_ptr<string> permissionType_ {};
      // The ID of the resource group.
      shared_ptr<string> resourceGroupId_ {};
      // The status of the deployment package. Valid values:
      // 
      // *   Created: The deployment package is created.
      // *   Scanning: The deployment package is being scanned.
      // *   ScanFailed: The deployment package failed to be scanned.
      // *   Delivering: The deployment package is being distributed.
      // *   Available: The deployment package is available.
      // *   Deleted: The deployment package is deleted.
      shared_ptr<string> status_ {};
      // The tags.
      shared_ptr<vector<Artifacts::Tags>> tags_ {};
    };

    virtual bool empty() const override { return this->artifacts_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // artifacts Field Functions 
    bool hasArtifacts() const { return this->artifacts_ != nullptr;};
    void deleteArtifacts() { this->artifacts_ = nullptr;};
    inline const vector<ListArtifactsResponseBody::Artifacts> & getArtifacts() const { DARABONBA_PTR_GET_CONST(artifacts_, vector<ListArtifactsResponseBody::Artifacts>) };
    inline vector<ListArtifactsResponseBody::Artifacts> getArtifacts() { DARABONBA_PTR_GET(artifacts_, vector<ListArtifactsResponseBody::Artifacts>) };
    inline ListArtifactsResponseBody& setArtifacts(const vector<ListArtifactsResponseBody::Artifacts> & artifacts) { DARABONBA_PTR_SET_VALUE(artifacts_, artifacts) };
    inline ListArtifactsResponseBody& setArtifacts(vector<ListArtifactsResponseBody::Artifacts> && artifacts) { DARABONBA_PTR_SET_RVALUE(artifacts_, artifacts) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListArtifactsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListArtifactsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListArtifactsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListArtifactsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The information about deployment packages.
    shared_ptr<vector<ListArtifactsResponseBody::Artifacts>> artifacts_ {};
    // The number of entries per page. Valid values: 1 to 100. Default value: 20.
    shared_ptr<int32_t> maxResults_ {};
    // The returned value of NextToken is a pagination token, which can be used in the next request to retrieve a new page of results.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNestSupplier20210521
#endif
