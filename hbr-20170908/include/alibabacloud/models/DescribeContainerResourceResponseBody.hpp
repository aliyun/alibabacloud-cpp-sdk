// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECONTAINERRESOURCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECONTAINERRESOURCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class DescribeContainerResourceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeContainerResourceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Resources, resources_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeContainerResourceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Resources, resources_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeContainerResourceResponseBody() = default ;
    DescribeContainerResourceResponseBody(const DescribeContainerResourceResponseBody &) = default ;
    DescribeContainerResourceResponseBody(DescribeContainerResourceResponseBody &&) = default ;
    DescribeContainerResourceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeContainerResourceResponseBody() = default ;
    DescribeContainerResourceResponseBody& operator=(const DescribeContainerResourceResponseBody &) = default ;
    DescribeContainerResourceResponseBody& operator=(DescribeContainerResourceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Resources : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Resources& obj) { 
        DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
        DARABONBA_PTR_TO_JSON(ClusterIdentifier, clusterIdentifier_);
        DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
        DARABONBA_PTR_TO_JSON(ResourceInfo, resourceInfo_);
        DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      };
      friend void from_json(const Darabonba::Json& j, Resources& obj) { 
        DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
        DARABONBA_PTR_FROM_JSON(ClusterIdentifier, clusterIdentifier_);
        DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
        DARABONBA_PTR_FROM_JSON(ResourceInfo, resourceInfo_);
        DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      };
      Resources() = default ;
      Resources(const Resources &) = default ;
      Resources(Resources &&) = default ;
      Resources(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Resources() = default ;
      Resources& operator=(const Resources &) = default ;
      Resources& operator=(Resources &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->clusterId_ == nullptr
        && this->clusterIdentifier_ == nullptr && this->resourceId_ == nullptr && this->resourceInfo_ == nullptr && this->resourceType_ == nullptr; };
      // clusterId Field Functions 
      bool hasClusterId() const { return this->clusterId_ != nullptr;};
      void deleteClusterId() { this->clusterId_ = nullptr;};
      inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
      inline Resources& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


      // clusterIdentifier Field Functions 
      bool hasClusterIdentifier() const { return this->clusterIdentifier_ != nullptr;};
      void deleteClusterIdentifier() { this->clusterIdentifier_ = nullptr;};
      inline string getClusterIdentifier() const { DARABONBA_PTR_GET_DEFAULT(clusterIdentifier_, "") };
      inline Resources& setClusterIdentifier(string clusterIdentifier) { DARABONBA_PTR_SET_VALUE(clusterIdentifier_, clusterIdentifier) };


      // resourceId Field Functions 
      bool hasResourceId() const { return this->resourceId_ != nullptr;};
      void deleteResourceId() { this->resourceId_ = nullptr;};
      inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
      inline Resources& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


      // resourceInfo Field Functions 
      bool hasResourceInfo() const { return this->resourceInfo_ != nullptr;};
      void deleteResourceInfo() { this->resourceInfo_ = nullptr;};
      inline string getResourceInfo() const { DARABONBA_PTR_GET_DEFAULT(resourceInfo_, "") };
      inline Resources& setResourceInfo(string resourceInfo) { DARABONBA_PTR_SET_VALUE(resourceInfo_, resourceInfo) };


      // resourceType Field Functions 
      bool hasResourceType() const { return this->resourceType_ != nullptr;};
      void deleteResourceType() { this->resourceType_ = nullptr;};
      inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
      inline Resources& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    protected:
      shared_ptr<string> clusterId_ {};
      shared_ptr<string> clusterIdentifier_ {};
      shared_ptr<string> resourceId_ {};
      shared_ptr<string> resourceInfo_ {};
      shared_ptr<string> resourceType_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->resources_ == nullptr
        && this->success_ == nullptr && this->totalCount_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeContainerResourceResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeContainerResourceResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeContainerResourceResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeContainerResourceResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeContainerResourceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resources Field Functions 
    bool hasResources() const { return this->resources_ != nullptr;};
    void deleteResources() { this->resources_ = nullptr;};
    inline const vector<DescribeContainerResourceResponseBody::Resources> & getResources() const { DARABONBA_PTR_GET_CONST(resources_, vector<DescribeContainerResourceResponseBody::Resources>) };
    inline vector<DescribeContainerResourceResponseBody::Resources> getResources() { DARABONBA_PTR_GET(resources_, vector<DescribeContainerResourceResponseBody::Resources>) };
    inline DescribeContainerResourceResponseBody& setResources(const vector<DescribeContainerResourceResponseBody::Resources> & resources) { DARABONBA_PTR_SET_VALUE(resources_, resources) };
    inline DescribeContainerResourceResponseBody& setResources(vector<DescribeContainerResourceResponseBody::Resources> && resources) { DARABONBA_PTR_SET_RVALUE(resources_, resources) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeContainerResourceResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeContainerResourceResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<string> message_ {};
    shared_ptr<int32_t> pageNumber_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<DescribeContainerResourceResponseBody::Resources>> resources_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
