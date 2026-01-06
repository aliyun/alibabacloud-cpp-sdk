// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLOUDACCESSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCLOUDACCESSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cas20200407
{
namespace Models
{
  class ListCloudAccessResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCloudAccessResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CloudAccessList, cloudAccessList_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ShowSize, showSize_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListCloudAccessResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CloudAccessList, cloudAccessList_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ShowSize, showSize_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListCloudAccessResponseBody() = default ;
    ListCloudAccessResponseBody(const ListCloudAccessResponseBody &) = default ;
    ListCloudAccessResponseBody(ListCloudAccessResponseBody &&) = default ;
    ListCloudAccessResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCloudAccessResponseBody() = default ;
    ListCloudAccessResponseBody& operator=(const ListCloudAccessResponseBody &) = default ;
    ListCloudAccessResponseBody& operator=(ListCloudAccessResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CloudAccessList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CloudAccessList& obj) { 
        DARABONBA_PTR_TO_JSON(AccessId, accessId_);
        DARABONBA_PTR_TO_JSON(CloudName, cloudName_);
        DARABONBA_PTR_TO_JSON(SecretId, secretId_);
        DARABONBA_PTR_TO_JSON(ServiceStatus, serviceStatus_);
      };
      friend void from_json(const Darabonba::Json& j, CloudAccessList& obj) { 
        DARABONBA_PTR_FROM_JSON(AccessId, accessId_);
        DARABONBA_PTR_FROM_JSON(CloudName, cloudName_);
        DARABONBA_PTR_FROM_JSON(SecretId, secretId_);
        DARABONBA_PTR_FROM_JSON(ServiceStatus, serviceStatus_);
      };
      CloudAccessList() = default ;
      CloudAccessList(const CloudAccessList &) = default ;
      CloudAccessList(CloudAccessList &&) = default ;
      CloudAccessList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CloudAccessList() = default ;
      CloudAccessList& operator=(const CloudAccessList &) = default ;
      CloudAccessList& operator=(CloudAccessList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->accessId_ == nullptr
        && this->cloudName_ == nullptr && this->secretId_ == nullptr && this->serviceStatus_ == nullptr; };
      // accessId Field Functions 
      bool hasAccessId() const { return this->accessId_ != nullptr;};
      void deleteAccessId() { this->accessId_ = nullptr;};
      inline int64_t getAccessId() const { DARABONBA_PTR_GET_DEFAULT(accessId_, 0L) };
      inline CloudAccessList& setAccessId(int64_t accessId) { DARABONBA_PTR_SET_VALUE(accessId_, accessId) };


      // cloudName Field Functions 
      bool hasCloudName() const { return this->cloudName_ != nullptr;};
      void deleteCloudName() { this->cloudName_ = nullptr;};
      inline string getCloudName() const { DARABONBA_PTR_GET_DEFAULT(cloudName_, "") };
      inline CloudAccessList& setCloudName(string cloudName) { DARABONBA_PTR_SET_VALUE(cloudName_, cloudName) };


      // secretId Field Functions 
      bool hasSecretId() const { return this->secretId_ != nullptr;};
      void deleteSecretId() { this->secretId_ = nullptr;};
      inline string getSecretId() const { DARABONBA_PTR_GET_DEFAULT(secretId_, "") };
      inline CloudAccessList& setSecretId(string secretId) { DARABONBA_PTR_SET_VALUE(secretId_, secretId) };


      // serviceStatus Field Functions 
      bool hasServiceStatus() const { return this->serviceStatus_ != nullptr;};
      void deleteServiceStatus() { this->serviceStatus_ = nullptr;};
      inline string getServiceStatus() const { DARABONBA_PTR_GET_DEFAULT(serviceStatus_, "") };
      inline CloudAccessList& setServiceStatus(string serviceStatus) { DARABONBA_PTR_SET_VALUE(serviceStatus_, serviceStatus) };


    protected:
      // The ID of the primary key.
      shared_ptr<int64_t> accessId_ {};
      // The cloud service provider.
      shared_ptr<string> cloudName_ {};
      // The AccessKey ID that is used to access cloud resources.
      shared_ptr<string> secretId_ {};
      // The service status. The value normal indicates that the service runs as expected.
      shared_ptr<string> serviceStatus_ {};
    };

    virtual bool empty() const override { return this->cloudAccessList_ == nullptr
        && this->currentPage_ == nullptr && this->requestId_ == nullptr && this->showSize_ == nullptr && this->totalCount_ == nullptr; };
    // cloudAccessList Field Functions 
    bool hasCloudAccessList() const { return this->cloudAccessList_ != nullptr;};
    void deleteCloudAccessList() { this->cloudAccessList_ = nullptr;};
    inline const vector<ListCloudAccessResponseBody::CloudAccessList> & getCloudAccessList() const { DARABONBA_PTR_GET_CONST(cloudAccessList_, vector<ListCloudAccessResponseBody::CloudAccessList>) };
    inline vector<ListCloudAccessResponseBody::CloudAccessList> getCloudAccessList() { DARABONBA_PTR_GET(cloudAccessList_, vector<ListCloudAccessResponseBody::CloudAccessList>) };
    inline ListCloudAccessResponseBody& setCloudAccessList(const vector<ListCloudAccessResponseBody::CloudAccessList> & cloudAccessList) { DARABONBA_PTR_SET_VALUE(cloudAccessList_, cloudAccessList) };
    inline ListCloudAccessResponseBody& setCloudAccessList(vector<ListCloudAccessResponseBody::CloudAccessList> && cloudAccessList) { DARABONBA_PTR_SET_RVALUE(cloudAccessList_, cloudAccessList) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline ListCloudAccessResponseBody& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListCloudAccessResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // showSize Field Functions 
    bool hasShowSize() const { return this->showSize_ != nullptr;};
    void deleteShowSize() { this->showSize_ = nullptr;};
    inline int32_t getShowSize() const { DARABONBA_PTR_GET_DEFAULT(showSize_, 0) };
    inline ListCloudAccessResponseBody& setShowSize(int32_t showSize) { DARABONBA_PTR_SET_VALUE(showSize_, showSize) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListCloudAccessResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The query results.
    shared_ptr<vector<ListCloudAccessResponseBody::CloudAccessList>> cloudAccessList_ {};
    // The default value is the current page. If CurrentPage is not specified, this parameter is not returned.
    shared_ptr<int32_t> currentPage_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The number of entries per page. If ShowSize is not specified, this parameter is not returned.
    shared_ptr<int32_t> showSize_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200407
#endif
