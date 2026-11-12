// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLOUDASSISTANTSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLOUDASSISTANTSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SWASOPEN20200601
{
namespace Models
{
  class DescribeCloudAssistantStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCloudAssistantStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CloudAssistantStatus, cloudAssistantStatus_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCloudAssistantStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CloudAssistantStatus, cloudAssistantStatus_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeCloudAssistantStatusResponseBody() = default ;
    DescribeCloudAssistantStatusResponseBody(const DescribeCloudAssistantStatusResponseBody &) = default ;
    DescribeCloudAssistantStatusResponseBody(DescribeCloudAssistantStatusResponseBody &&) = default ;
    DescribeCloudAssistantStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCloudAssistantStatusResponseBody() = default ;
    DescribeCloudAssistantStatusResponseBody& operator=(const DescribeCloudAssistantStatusResponseBody &) = default ;
    DescribeCloudAssistantStatusResponseBody& operator=(DescribeCloudAssistantStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CloudAssistantStatus : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CloudAssistantStatus& obj) { 
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, CloudAssistantStatus& obj) { 
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      CloudAssistantStatus() = default ;
      CloudAssistantStatus(const CloudAssistantStatus &) = default ;
      CloudAssistantStatus(CloudAssistantStatus &&) = default ;
      CloudAssistantStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CloudAssistantStatus() = default ;
      CloudAssistantStatus& operator=(const CloudAssistantStatus &) = default ;
      CloudAssistantStatus& operator=(CloudAssistantStatus &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->status_ == nullptr; };
      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline CloudAssistantStatus& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline bool getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, false) };
      inline CloudAssistantStatus& setStatus(bool status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The ID of the simple application server.
      shared_ptr<string> instanceId_ {};
      // Indicates whether the Cloud Assistant client is installed on the server.
      shared_ptr<bool> status_ {};
    };

    virtual bool empty() const override { return this->cloudAssistantStatus_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // cloudAssistantStatus Field Functions 
    bool hasCloudAssistantStatus() const { return this->cloudAssistantStatus_ != nullptr;};
    void deleteCloudAssistantStatus() { this->cloudAssistantStatus_ = nullptr;};
    inline const vector<DescribeCloudAssistantStatusResponseBody::CloudAssistantStatus> & getCloudAssistantStatus() const { DARABONBA_PTR_GET_CONST(cloudAssistantStatus_, vector<DescribeCloudAssistantStatusResponseBody::CloudAssistantStatus>) };
    inline vector<DescribeCloudAssistantStatusResponseBody::CloudAssistantStatus> getCloudAssistantStatus() { DARABONBA_PTR_GET(cloudAssistantStatus_, vector<DescribeCloudAssistantStatusResponseBody::CloudAssistantStatus>) };
    inline DescribeCloudAssistantStatusResponseBody& setCloudAssistantStatus(const vector<DescribeCloudAssistantStatusResponseBody::CloudAssistantStatus> & cloudAssistantStatus) { DARABONBA_PTR_SET_VALUE(cloudAssistantStatus_, cloudAssistantStatus) };
    inline DescribeCloudAssistantStatusResponseBody& setCloudAssistantStatus(vector<DescribeCloudAssistantStatusResponseBody::CloudAssistantStatus> && cloudAssistantStatus) { DARABONBA_PTR_SET_RVALUE(cloudAssistantStatus_, cloudAssistantStatus) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeCloudAssistantStatusResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeCloudAssistantStatusResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCloudAssistantStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeCloudAssistantStatusResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // Indicates whether the Cloud Assistant client is installed on the server.
    shared_ptr<vector<DescribeCloudAssistantStatusResponseBody::CloudAssistantStatus>> cloudAssistantStatus_ {};
    // The page number.
    // 
    // Pages start from page 1.
    // 
    // Default value: 1.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    // 
    // Maximum value: 50.
    // 
    // Default value: 10.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SWASOPEN20200601
#endif
