// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSERVICEUSAGESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSERVICEUSAGESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNest20210601
{
namespace Models
{
  class ListServiceUsagesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListServiceUsagesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ServiceUsages, serviceUsages_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListServiceUsagesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ServiceUsages, serviceUsages_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListServiceUsagesResponseBody() = default ;
    ListServiceUsagesResponseBody(const ListServiceUsagesResponseBody &) = default ;
    ListServiceUsagesResponseBody(ListServiceUsagesResponseBody &&) = default ;
    ListServiceUsagesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListServiceUsagesResponseBody() = default ;
    ListServiceUsagesResponseBody& operator=(const ListServiceUsagesResponseBody &) = default ;
    ListServiceUsagesResponseBody& operator=(ListServiceUsagesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ServiceUsages : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ServiceUsages& obj) { 
        DARABONBA_PTR_TO_JSON(Comments, comments_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(ServiceId, serviceId_);
        DARABONBA_PTR_TO_JSON(ServiceName, serviceName_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(SupplierName, supplierName_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
        DARABONBA_PTR_TO_JSON(UserAliUid, userAliUid_);
        DARABONBA_PTR_TO_JSON(UserInformation, userInformation_);
      };
      friend void from_json(const Darabonba::Json& j, ServiceUsages& obj) { 
        DARABONBA_PTR_FROM_JSON(Comments, comments_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(ServiceId, serviceId_);
        DARABONBA_PTR_FROM_JSON(ServiceName, serviceName_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(SupplierName, supplierName_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
        DARABONBA_PTR_FROM_JSON(UserAliUid, userAliUid_);
        DARABONBA_PTR_FROM_JSON(UserInformation, userInformation_);
      };
      ServiceUsages() = default ;
      ServiceUsages(const ServiceUsages &) = default ;
      ServiceUsages(ServiceUsages &&) = default ;
      ServiceUsages(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ServiceUsages() = default ;
      ServiceUsages& operator=(const ServiceUsages &) = default ;
      ServiceUsages& operator=(ServiceUsages &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->comments_ == nullptr
        && this->createTime_ == nullptr && this->serviceId_ == nullptr && this->serviceName_ == nullptr && this->status_ == nullptr && this->supplierName_ == nullptr
        && this->updateTime_ == nullptr && this->userAliUid_ == nullptr && this->userInformation_ == nullptr; };
      // comments Field Functions 
      bool hasComments() const { return this->comments_ != nullptr;};
      void deleteComments() { this->comments_ = nullptr;};
      inline string getComments() const { DARABONBA_PTR_GET_DEFAULT(comments_, "") };
      inline ServiceUsages& setComments(string comments) { DARABONBA_PTR_SET_VALUE(comments_, comments) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline ServiceUsages& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // serviceId Field Functions 
      bool hasServiceId() const { return this->serviceId_ != nullptr;};
      void deleteServiceId() { this->serviceId_ = nullptr;};
      inline string getServiceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
      inline ServiceUsages& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


      // serviceName Field Functions 
      bool hasServiceName() const { return this->serviceName_ != nullptr;};
      void deleteServiceName() { this->serviceName_ = nullptr;};
      inline string getServiceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
      inline ServiceUsages& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline ServiceUsages& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // supplierName Field Functions 
      bool hasSupplierName() const { return this->supplierName_ != nullptr;};
      void deleteSupplierName() { this->supplierName_ = nullptr;};
      inline string getSupplierName() const { DARABONBA_PTR_GET_DEFAULT(supplierName_, "") };
      inline ServiceUsages& setSupplierName(string supplierName) { DARABONBA_PTR_SET_VALUE(supplierName_, supplierName) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
      inline ServiceUsages& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


      // userAliUid Field Functions 
      bool hasUserAliUid() const { return this->userAliUid_ != nullptr;};
      void deleteUserAliUid() { this->userAliUid_ = nullptr;};
      inline int64_t getUserAliUid() const { DARABONBA_PTR_GET_DEFAULT(userAliUid_, 0L) };
      inline ServiceUsages& setUserAliUid(int64_t userAliUid) { DARABONBA_PTR_SET_VALUE(userAliUid_, userAliUid) };


      // userInformation Field Functions 
      bool hasUserInformation() const { return this->userInformation_ != nullptr;};
      void deleteUserInformation() { this->userInformation_ = nullptr;};
      inline const map<string, string> & getUserInformation() const { DARABONBA_PTR_GET_CONST(userInformation_, map<string, string>) };
      inline map<string, string> getUserInformation() { DARABONBA_PTR_GET(userInformation_, map<string, string>) };
      inline ServiceUsages& setUserInformation(const map<string, string> & userInformation) { DARABONBA_PTR_SET_VALUE(userInformation_, userInformation) };
      inline ServiceUsages& setUserInformation(map<string, string> && userInformation) { DARABONBA_PTR_SET_RVALUE(userInformation_, userInformation) };


    protected:
      // The review comment.
      shared_ptr<string> comments_ {};
      // The time when the application was created.
      shared_ptr<string> createTime_ {};
      // The service ID.
      shared_ptr<string> serviceId_ {};
      // The service name.
      shared_ptr<string> serviceName_ {};
      // The state of the service application. Valid values:
      // 
      // *   Submitted: The application is submitted for review.
      // *   Approved: The application is approved.
      // *   Rejected: The application is rejected.
      // *   Canceled: The application is canceled.
      shared_ptr<string> status_ {};
      // The name of the service provider.
      shared_ptr<string> supplierName_ {};
      // The time when the application was updated.
      shared_ptr<string> updateTime_ {};
      // The ID of the Alibaba Cloud account.
      shared_ptr<int64_t> userAliUid_ {};
      // The information about the applicants.
      shared_ptr<map<string, string>> userInformation_ {};
    };

    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->serviceUsages_ == nullptr && this->totalCount_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListServiceUsagesResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListServiceUsagesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListServiceUsagesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // serviceUsages Field Functions 
    bool hasServiceUsages() const { return this->serviceUsages_ != nullptr;};
    void deleteServiceUsages() { this->serviceUsages_ = nullptr;};
    inline const vector<ListServiceUsagesResponseBody::ServiceUsages> & getServiceUsages() const { DARABONBA_PTR_GET_CONST(serviceUsages_, vector<ListServiceUsagesResponseBody::ServiceUsages>) };
    inline vector<ListServiceUsagesResponseBody::ServiceUsages> getServiceUsages() { DARABONBA_PTR_GET(serviceUsages_, vector<ListServiceUsagesResponseBody::ServiceUsages>) };
    inline ListServiceUsagesResponseBody& setServiceUsages(const vector<ListServiceUsagesResponseBody::ServiceUsages> & serviceUsages) { DARABONBA_PTR_SET_VALUE(serviceUsages_, serviceUsages) };
    inline ListServiceUsagesResponseBody& setServiceUsages(vector<ListServiceUsagesResponseBody::ServiceUsages> && serviceUsages) { DARABONBA_PTR_SET_RVALUE(serviceUsages_, serviceUsages) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListServiceUsagesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The maximum number of entries per page. Valid values: 1 to 100. Default value: 20.
    shared_ptr<int32_t> maxResults_ {};
    // A pagination token. It can be used in the next request to retrieve a new page of results. If NextToken is empty, no next page exists.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The service applications.
    shared_ptr<vector<ListServiceUsagesResponseBody::ServiceUsages>> serviceUsages_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNest20210601
#endif
