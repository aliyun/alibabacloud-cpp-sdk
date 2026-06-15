// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFILESYSTEMSVSCATTACHINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFILESYSTEMSVSCATTACHINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class DescribeFilesystemsVscAttachInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFilesystemsVscAttachInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(ResourceIds, resourceIds_);
      DARABONBA_PTR_TO_JSON(RoleChain, roleChain_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeFilesystemsVscAttachInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(ResourceIds, resourceIds_);
      DARABONBA_PTR_FROM_JSON(RoleChain, roleChain_);
    };
    DescribeFilesystemsVscAttachInfoRequest() = default ;
    DescribeFilesystemsVscAttachInfoRequest(const DescribeFilesystemsVscAttachInfoRequest &) = default ;
    DescribeFilesystemsVscAttachInfoRequest(DescribeFilesystemsVscAttachInfoRequest &&) = default ;
    DescribeFilesystemsVscAttachInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFilesystemsVscAttachInfoRequest() = default ;
    DescribeFilesystemsVscAttachInfoRequest& operator=(const DescribeFilesystemsVscAttachInfoRequest &) = default ;
    DescribeFilesystemsVscAttachInfoRequest& operator=(DescribeFilesystemsVscAttachInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RoleChain : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RoleChain& obj) { 
        DARABONBA_PTR_TO_JSON(AssumeRoleFor, assumeRoleFor_);
        DARABONBA_PTR_TO_JSON(RoleArn, roleArn_);
        DARABONBA_PTR_TO_JSON(RoleType, roleType_);
      };
      friend void from_json(const Darabonba::Json& j, RoleChain& obj) { 
        DARABONBA_PTR_FROM_JSON(AssumeRoleFor, assumeRoleFor_);
        DARABONBA_PTR_FROM_JSON(RoleArn, roleArn_);
        DARABONBA_PTR_FROM_JSON(RoleType, roleType_);
      };
      RoleChain() = default ;
      RoleChain(const RoleChain &) = default ;
      RoleChain(RoleChain &&) = default ;
      RoleChain(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RoleChain() = default ;
      RoleChain& operator=(const RoleChain &) = default ;
      RoleChain& operator=(RoleChain &&) = default ;
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
      inline RoleChain& setAssumeRoleFor(string assumeRoleFor) { DARABONBA_PTR_SET_VALUE(assumeRoleFor_, assumeRoleFor) };


      // roleArn Field Functions 
      bool hasRoleArn() const { return this->roleArn_ != nullptr;};
      void deleteRoleArn() { this->roleArn_ = nullptr;};
      inline string getRoleArn() const { DARABONBA_PTR_GET_DEFAULT(roleArn_, "") };
      inline RoleChain& setRoleArn(string roleArn) { DARABONBA_PTR_SET_VALUE(roleArn_, roleArn) };


      // roleType Field Functions 
      bool hasRoleType() const { return this->roleType_ != nullptr;};
      void deleteRoleType() { this->roleType_ = nullptr;};
      inline string getRoleType() const { DARABONBA_PTR_GET_DEFAULT(roleType_, "") };
      inline RoleChain& setRoleType(string roleType) { DARABONBA_PTR_SET_VALUE(roleType_, roleType) };


    protected:
      shared_ptr<string> assumeRoleFor_ {};
      shared_ptr<string> roleArn_ {};
      shared_ptr<string> roleType_ {};
    };

    class ResourceIds : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResourceIds& obj) { 
        DARABONBA_PTR_TO_JSON(FileSystemId, fileSystemId_);
        DARABONBA_PTR_TO_JSON(VscId, vscId_);
      };
      friend void from_json(const Darabonba::Json& j, ResourceIds& obj) { 
        DARABONBA_PTR_FROM_JSON(FileSystemId, fileSystemId_);
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
      virtual bool empty() const override { return this->fileSystemId_ == nullptr
        && this->vscId_ == nullptr; };
      // fileSystemId Field Functions 
      bool hasFileSystemId() const { return this->fileSystemId_ != nullptr;};
      void deleteFileSystemId() { this->fileSystemId_ = nullptr;};
      inline string getFileSystemId() const { DARABONBA_PTR_GET_DEFAULT(fileSystemId_, "") };
      inline ResourceIds& setFileSystemId(string fileSystemId) { DARABONBA_PTR_SET_VALUE(fileSystemId_, fileSystemId) };


      // vscId Field Functions 
      bool hasVscId() const { return this->vscId_ != nullptr;};
      void deleteVscId() { this->vscId_ = nullptr;};
      inline string getVscId() const { DARABONBA_PTR_GET_DEFAULT(vscId_, "") };
      inline ResourceIds& setVscId(string vscId) { DARABONBA_PTR_SET_VALUE(vscId_, vscId) };


    protected:
      // The ID of the file system.
      shared_ptr<string> fileSystemId_ {};
      // The ID of the virtual storage channel.
      shared_ptr<string> vscId_ {};
    };

    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->resourceIds_ == nullptr && this->roleChain_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeFilesystemsVscAttachInfoRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeFilesystemsVscAttachInfoRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // resourceIds Field Functions 
    bool hasResourceIds() const { return this->resourceIds_ != nullptr;};
    void deleteResourceIds() { this->resourceIds_ = nullptr;};
    inline const vector<DescribeFilesystemsVscAttachInfoRequest::ResourceIds> & getResourceIds() const { DARABONBA_PTR_GET_CONST(resourceIds_, vector<DescribeFilesystemsVscAttachInfoRequest::ResourceIds>) };
    inline vector<DescribeFilesystemsVscAttachInfoRequest::ResourceIds> getResourceIds() { DARABONBA_PTR_GET(resourceIds_, vector<DescribeFilesystemsVscAttachInfoRequest::ResourceIds>) };
    inline DescribeFilesystemsVscAttachInfoRequest& setResourceIds(const vector<DescribeFilesystemsVscAttachInfoRequest::ResourceIds> & resourceIds) { DARABONBA_PTR_SET_VALUE(resourceIds_, resourceIds) };
    inline DescribeFilesystemsVscAttachInfoRequest& setResourceIds(vector<DescribeFilesystemsVscAttachInfoRequest::ResourceIds> && resourceIds) { DARABONBA_PTR_SET_RVALUE(resourceIds_, resourceIds) };


    // roleChain Field Functions 
    bool hasRoleChain() const { return this->roleChain_ != nullptr;};
    void deleteRoleChain() { this->roleChain_ = nullptr;};
    inline const vector<DescribeFilesystemsVscAttachInfoRequest::RoleChain> & getRoleChain() const { DARABONBA_PTR_GET_CONST(roleChain_, vector<DescribeFilesystemsVscAttachInfoRequest::RoleChain>) };
    inline vector<DescribeFilesystemsVscAttachInfoRequest::RoleChain> getRoleChain() { DARABONBA_PTR_GET(roleChain_, vector<DescribeFilesystemsVscAttachInfoRequest::RoleChain>) };
    inline DescribeFilesystemsVscAttachInfoRequest& setRoleChain(const vector<DescribeFilesystemsVscAttachInfoRequest::RoleChain> & roleChain) { DARABONBA_PTR_SET_VALUE(roleChain_, roleChain) };
    inline DescribeFilesystemsVscAttachInfoRequest& setRoleChain(vector<DescribeFilesystemsVscAttachInfoRequest::RoleChain> && roleChain) { DARABONBA_PTR_SET_RVALUE(roleChain_, roleChain) };


  protected:
    // The number of results for each query.
    // 
    // Valid values: 10 to 100. Default value: 10.
    shared_ptr<int32_t> maxResults_ {};
    // Query token, which is the NextToken value returned from the previous API call.
    shared_ptr<string> nextToken_ {};
    // The ID information of the file system and virtual storage channel. Each batch can contain up to 10 IDs.
    // 
    // This parameter is required.
    shared_ptr<vector<DescribeFilesystemsVscAttachInfoRequest::ResourceIds>> resourceIds_ {};
    shared_ptr<vector<DescribeFilesystemsVscAttachInfoRequest::RoleChain>> roleChain_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
