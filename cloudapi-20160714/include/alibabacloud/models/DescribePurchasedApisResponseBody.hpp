// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPURCHASEDAPISRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPURCHASEDAPISRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribePurchasedApisResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePurchasedApisResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PurchasedApis, purchasedApis_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePurchasedApisResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PurchasedApis, purchasedApis_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribePurchasedApisResponseBody() = default ;
    DescribePurchasedApisResponseBody(const DescribePurchasedApisResponseBody &) = default ;
    DescribePurchasedApisResponseBody(DescribePurchasedApisResponseBody &&) = default ;
    DescribePurchasedApisResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePurchasedApisResponseBody() = default ;
    DescribePurchasedApisResponseBody& operator=(const DescribePurchasedApisResponseBody &) = default ;
    DescribePurchasedApisResponseBody& operator=(DescribePurchasedApisResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PurchasedApis : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PurchasedApis& obj) { 
        DARABONBA_PTR_TO_JSON(PurchasedApi, purchasedApi_);
      };
      friend void from_json(const Darabonba::Json& j, PurchasedApis& obj) { 
        DARABONBA_PTR_FROM_JSON(PurchasedApi, purchasedApi_);
      };
      PurchasedApis() = default ;
      PurchasedApis(const PurchasedApis &) = default ;
      PurchasedApis(PurchasedApis &&) = default ;
      PurchasedApis(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PurchasedApis() = default ;
      PurchasedApis& operator=(const PurchasedApis &) = default ;
      PurchasedApis& operator=(PurchasedApis &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class PurchasedApi : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PurchasedApi& obj) { 
          DARABONBA_PTR_TO_JSON(ApiId, apiId_);
          DARABONBA_PTR_TO_JSON(ApiName, apiName_);
          DARABONBA_PTR_TO_JSON(DeployedTime, deployedTime_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(GroupId, groupId_);
          DARABONBA_PTR_TO_JSON(GroupName, groupName_);
          DARABONBA_PTR_TO_JSON(ModifiedTime, modifiedTime_);
          DARABONBA_PTR_TO_JSON(PurchasedTime, purchasedTime_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(StageName, stageName_);
          DARABONBA_PTR_TO_JSON(Visibility, visibility_);
        };
        friend void from_json(const Darabonba::Json& j, PurchasedApi& obj) { 
          DARABONBA_PTR_FROM_JSON(ApiId, apiId_);
          DARABONBA_PTR_FROM_JSON(ApiName, apiName_);
          DARABONBA_PTR_FROM_JSON(DeployedTime, deployedTime_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
          DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
          DARABONBA_PTR_FROM_JSON(ModifiedTime, modifiedTime_);
          DARABONBA_PTR_FROM_JSON(PurchasedTime, purchasedTime_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(StageName, stageName_);
          DARABONBA_PTR_FROM_JSON(Visibility, visibility_);
        };
        PurchasedApi() = default ;
        PurchasedApi(const PurchasedApi &) = default ;
        PurchasedApi(PurchasedApi &&) = default ;
        PurchasedApi(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PurchasedApi() = default ;
        PurchasedApi& operator=(const PurchasedApi &) = default ;
        PurchasedApi& operator=(PurchasedApi &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->apiId_ == nullptr
        && this->apiName_ == nullptr && this->deployedTime_ == nullptr && this->description_ == nullptr && this->groupId_ == nullptr && this->groupName_ == nullptr
        && this->modifiedTime_ == nullptr && this->purchasedTime_ == nullptr && this->regionId_ == nullptr && this->stageName_ == nullptr && this->visibility_ == nullptr; };
        // apiId Field Functions 
        bool hasApiId() const { return this->apiId_ != nullptr;};
        void deleteApiId() { this->apiId_ = nullptr;};
        inline string getApiId() const { DARABONBA_PTR_GET_DEFAULT(apiId_, "") };
        inline PurchasedApi& setApiId(string apiId) { DARABONBA_PTR_SET_VALUE(apiId_, apiId) };


        // apiName Field Functions 
        bool hasApiName() const { return this->apiName_ != nullptr;};
        void deleteApiName() { this->apiName_ = nullptr;};
        inline string getApiName() const { DARABONBA_PTR_GET_DEFAULT(apiName_, "") };
        inline PurchasedApi& setApiName(string apiName) { DARABONBA_PTR_SET_VALUE(apiName_, apiName) };


        // deployedTime Field Functions 
        bool hasDeployedTime() const { return this->deployedTime_ != nullptr;};
        void deleteDeployedTime() { this->deployedTime_ = nullptr;};
        inline string getDeployedTime() const { DARABONBA_PTR_GET_DEFAULT(deployedTime_, "") };
        inline PurchasedApi& setDeployedTime(string deployedTime) { DARABONBA_PTR_SET_VALUE(deployedTime_, deployedTime) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline PurchasedApi& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // groupId Field Functions 
        bool hasGroupId() const { return this->groupId_ != nullptr;};
        void deleteGroupId() { this->groupId_ = nullptr;};
        inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
        inline PurchasedApi& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


        // groupName Field Functions 
        bool hasGroupName() const { return this->groupName_ != nullptr;};
        void deleteGroupName() { this->groupName_ = nullptr;};
        inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
        inline PurchasedApi& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


        // modifiedTime Field Functions 
        bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
        void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
        inline string getModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, "") };
        inline PurchasedApi& setModifiedTime(string modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


        // purchasedTime Field Functions 
        bool hasPurchasedTime() const { return this->purchasedTime_ != nullptr;};
        void deletePurchasedTime() { this->purchasedTime_ = nullptr;};
        inline string getPurchasedTime() const { DARABONBA_PTR_GET_DEFAULT(purchasedTime_, "") };
        inline PurchasedApi& setPurchasedTime(string purchasedTime) { DARABONBA_PTR_SET_VALUE(purchasedTime_, purchasedTime) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline PurchasedApi& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // stageName Field Functions 
        bool hasStageName() const { return this->stageName_ != nullptr;};
        void deleteStageName() { this->stageName_ = nullptr;};
        inline string getStageName() const { DARABONBA_PTR_GET_DEFAULT(stageName_, "") };
        inline PurchasedApi& setStageName(string stageName) { DARABONBA_PTR_SET_VALUE(stageName_, stageName) };


        // visibility Field Functions 
        bool hasVisibility() const { return this->visibility_ != nullptr;};
        void deleteVisibility() { this->visibility_ = nullptr;};
        inline string getVisibility() const { DARABONBA_PTR_GET_DEFAULT(visibility_, "") };
        inline PurchasedApi& setVisibility(string visibility) { DARABONBA_PTR_SET_VALUE(visibility_, visibility) };


      protected:
        // The ID of the API.
        shared_ptr<string> apiId_ {};
        // The name of the API.
        shared_ptr<string> apiName_ {};
        // The deployment time. Format: yyyy-mm-ddhh:mm:ss.
        shared_ptr<string> deployedTime_ {};
        // The description of the API.
        shared_ptr<string> description_ {};
        // The ID of the API group to which the API belongs. This ID is generated by the system and globally unique.
        shared_ptr<string> groupId_ {};
        // The name of the API group.
        shared_ptr<string> groupName_ {};
        // The last modification time (UTC) of the API.
        shared_ptr<string> modifiedTime_ {};
        // The time when the API was purchased.
        shared_ptr<string> purchasedTime_ {};
        // The ID of the region in which the API is located.
        shared_ptr<string> regionId_ {};
        // The name of the runtime environment. Valid values:
        // 
        // *   **RELEASE**
        // *   **PRE**
        // *   **TEST**
        shared_ptr<string> stageName_ {};
        // Indicates whether the API is public. Valid values:
        // 
        // *   **PUBLIC**
        // *   **PRIVATE**
        shared_ptr<string> visibility_ {};
      };

      virtual bool empty() const override { return this->purchasedApi_ == nullptr; };
      // purchasedApi Field Functions 
      bool hasPurchasedApi() const { return this->purchasedApi_ != nullptr;};
      void deletePurchasedApi() { this->purchasedApi_ = nullptr;};
      inline const vector<PurchasedApis::PurchasedApi> & getPurchasedApi() const { DARABONBA_PTR_GET_CONST(purchasedApi_, vector<PurchasedApis::PurchasedApi>) };
      inline vector<PurchasedApis::PurchasedApi> getPurchasedApi() { DARABONBA_PTR_GET(purchasedApi_, vector<PurchasedApis::PurchasedApi>) };
      inline PurchasedApis& setPurchasedApi(const vector<PurchasedApis::PurchasedApi> & purchasedApi) { DARABONBA_PTR_SET_VALUE(purchasedApi_, purchasedApi) };
      inline PurchasedApis& setPurchasedApi(vector<PurchasedApis::PurchasedApi> && purchasedApi) { DARABONBA_PTR_SET_RVALUE(purchasedApi_, purchasedApi) };


    protected:
      shared_ptr<vector<PurchasedApis::PurchasedApi>> purchasedApi_ {};
    };

    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->purchasedApis_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribePurchasedApisResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribePurchasedApisResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // purchasedApis Field Functions 
    bool hasPurchasedApis() const { return this->purchasedApis_ != nullptr;};
    void deletePurchasedApis() { this->purchasedApis_ = nullptr;};
    inline const DescribePurchasedApisResponseBody::PurchasedApis & getPurchasedApis() const { DARABONBA_PTR_GET_CONST(purchasedApis_, DescribePurchasedApisResponseBody::PurchasedApis) };
    inline DescribePurchasedApisResponseBody::PurchasedApis getPurchasedApis() { DARABONBA_PTR_GET(purchasedApis_, DescribePurchasedApisResponseBody::PurchasedApis) };
    inline DescribePurchasedApisResponseBody& setPurchasedApis(const DescribePurchasedApisResponseBody::PurchasedApis & purchasedApis) { DARABONBA_PTR_SET_VALUE(purchasedApis_, purchasedApis) };
    inline DescribePurchasedApisResponseBody& setPurchasedApis(DescribePurchasedApisResponseBody::PurchasedApis && purchasedApis) { DARABONBA_PTR_SET_RVALUE(purchasedApis_, purchasedApis) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePurchasedApisResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribePurchasedApisResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The page number of the returned page.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries returned on each page.
    shared_ptr<int32_t> pageSize_ {};
    // The monitoring information about API call delays. The returned information is an array consisting of purchased APIs.
    shared_ptr<DescribePurchasedApisResponseBody::PurchasedApis> purchasedApis_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of returned entries.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
