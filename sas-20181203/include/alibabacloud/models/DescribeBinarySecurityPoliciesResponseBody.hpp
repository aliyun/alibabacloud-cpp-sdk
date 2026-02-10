// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBINARYSECURITYPOLICIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBINARYSECURITYPOLICIESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeBinarySecurityPoliciesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBinarySecurityPoliciesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BinarySecurityPolicies, binarySecurityPolicies_);
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBinarySecurityPoliciesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BinarySecurityPolicies, binarySecurityPolicies_);
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeBinarySecurityPoliciesResponseBody() = default ;
    DescribeBinarySecurityPoliciesResponseBody(const DescribeBinarySecurityPoliciesResponseBody &) = default ;
    DescribeBinarySecurityPoliciesResponseBody(DescribeBinarySecurityPoliciesResponseBody &&) = default ;
    DescribeBinarySecurityPoliciesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBinarySecurityPoliciesResponseBody() = default ;
    DescribeBinarySecurityPoliciesResponseBody& operator=(const DescribeBinarySecurityPoliciesResponseBody &) = default ;
    DescribeBinarySecurityPoliciesResponseBody& operator=(DescribeBinarySecurityPoliciesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PageInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PageInfo& obj) { 
        DARABONBA_PTR_TO_JSON(Count, count_);
        DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, PageInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(Count, count_);
        DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      PageInfo() = default ;
      PageInfo(const PageInfo &) = default ;
      PageInfo(PageInfo &&) = default ;
      PageInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PageInfo() = default ;
      PageInfo& operator=(const PageInfo &) = default ;
      PageInfo& operator=(PageInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->count_ == nullptr
        && this->currentPage_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // count Field Functions 
      bool hasCount() const { return this->count_ != nullptr;};
      void deleteCount() { this->count_ = nullptr;};
      inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
      inline PageInfo& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


      // currentPage Field Functions 
      bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
      void deleteCurrentPage() { this->currentPage_ = nullptr;};
      inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
      inline PageInfo& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline PageInfo& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline PageInfo& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The number of entries returned on each page.
      shared_ptr<int32_t> count_ {};
      // The page number.
      shared_ptr<int32_t> currentPage_ {};
      // The number of entries per page.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of entries returned.
      shared_ptr<int32_t> totalCount_ {};
    };

    class BinarySecurityPolicies : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const BinarySecurityPolicies& obj) { 
        DARABONBA_PTR_TO_JSON(Clusters, clusters_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_ANY_TO_JSON(Policy, policy_);
        DARABONBA_PTR_TO_JSON(Remark, remark_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, BinarySecurityPolicies& obj) { 
        DARABONBA_PTR_FROM_JSON(Clusters, clusters_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_ANY_FROM_JSON(Policy, policy_);
        DARABONBA_PTR_FROM_JSON(Remark, remark_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      BinarySecurityPolicies() = default ;
      BinarySecurityPolicies(const BinarySecurityPolicies &) = default ;
      BinarySecurityPolicies(BinarySecurityPolicies &&) = default ;
      BinarySecurityPolicies(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~BinarySecurityPolicies() = default ;
      BinarySecurityPolicies& operator=(const BinarySecurityPolicies &) = default ;
      BinarySecurityPolicies& operator=(BinarySecurityPolicies &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Clusters : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Clusters& obj) { 
          DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
          DARABONBA_PTR_TO_JSON(Namespaces, namespaces_);
        };
        friend void from_json(const Darabonba::Json& j, Clusters& obj) { 
          DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
          DARABONBA_PTR_FROM_JSON(Namespaces, namespaces_);
        };
        Clusters() = default ;
        Clusters(const Clusters &) = default ;
        Clusters(Clusters &&) = default ;
        Clusters(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Clusters() = default ;
        Clusters& operator=(const Clusters &) = default ;
        Clusters& operator=(Clusters &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->clusterId_ == nullptr
        && this->namespaces_ == nullptr; };
        // clusterId Field Functions 
        bool hasClusterId() const { return this->clusterId_ != nullptr;};
        void deleteClusterId() { this->clusterId_ = nullptr;};
        inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
        inline Clusters& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


        // namespaces Field Functions 
        bool hasNamespaces() const { return this->namespaces_ != nullptr;};
        void deleteNamespaces() { this->namespaces_ = nullptr;};
        inline const vector<string> & getNamespaces() const { DARABONBA_PTR_GET_CONST(namespaces_, vector<string>) };
        inline vector<string> getNamespaces() { DARABONBA_PTR_GET(namespaces_, vector<string>) };
        inline Clusters& setNamespaces(const vector<string> & namespaces) { DARABONBA_PTR_SET_VALUE(namespaces_, namespaces) };
        inline Clusters& setNamespaces(vector<string> && namespaces) { DARABONBA_PTR_SET_RVALUE(namespaces_, namespaces) };


      protected:
        // The ID of the cluster.
        shared_ptr<string> clusterId_ {};
        // The namespaces.
        shared_ptr<vector<string>> namespaces_ {};
      };

      virtual bool empty() const override { return this->clusters_ == nullptr
        && this->name_ == nullptr && this->policy_ == nullptr && this->remark_ == nullptr && this->status_ == nullptr; };
      // clusters Field Functions 
      bool hasClusters() const { return this->clusters_ != nullptr;};
      void deleteClusters() { this->clusters_ = nullptr;};
      inline const vector<BinarySecurityPolicies::Clusters> & getClusters() const { DARABONBA_PTR_GET_CONST(clusters_, vector<BinarySecurityPolicies::Clusters>) };
      inline vector<BinarySecurityPolicies::Clusters> getClusters() { DARABONBA_PTR_GET(clusters_, vector<BinarySecurityPolicies::Clusters>) };
      inline BinarySecurityPolicies& setClusters(const vector<BinarySecurityPolicies::Clusters> & clusters) { DARABONBA_PTR_SET_VALUE(clusters_, clusters) };
      inline BinarySecurityPolicies& setClusters(vector<BinarySecurityPolicies::Clusters> && clusters) { DARABONBA_PTR_SET_RVALUE(clusters_, clusters) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline BinarySecurityPolicies& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // policy Field Functions 
      bool hasPolicy() const { return this->policy_ != nullptr;};
      void deletePolicy() { this->policy_ = nullptr;};
      inline       const Darabonba::Json & getPolicy() const { DARABONBA_GET(policy_) };
      Darabonba::Json & getPolicy() { DARABONBA_GET(policy_) };
      inline BinarySecurityPolicies& setPolicy(const Darabonba::Json & policy) { DARABONBA_SET_VALUE(policy_, policy) };
      inline BinarySecurityPolicies& setPolicy(Darabonba::Json && policy) { DARABONBA_SET_RVALUE(policy_, policy) };


      // remark Field Functions 
      bool hasRemark() const { return this->remark_ != nullptr;};
      void deleteRemark() { this->remark_ = nullptr;};
      inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
      inline BinarySecurityPolicies& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline BinarySecurityPolicies& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The information about clusters.
      shared_ptr<vector<BinarySecurityPolicies::Clusters>> clusters_ {};
      // The name of the policy.
      shared_ptr<string> name_ {};
      // The content of the policy. The value is in the JSON format. A key supports the following values:
      // 
      // *   **policyMode**: the type of the policy. Default value: requireAttestor.
      // *   **requiredAttestors**: the required witnesses.
      Darabonba::Json policy_ {};
      // The description.
      shared_ptr<string> remark_ {};
      // The status of the policy. Valid values:
      // 
      // *   **enabled**
      // *   **disabled**
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->binarySecurityPolicies_ == nullptr
        && this->pageInfo_ == nullptr && this->requestId_ == nullptr; };
    // binarySecurityPolicies Field Functions 
    bool hasBinarySecurityPolicies() const { return this->binarySecurityPolicies_ != nullptr;};
    void deleteBinarySecurityPolicies() { this->binarySecurityPolicies_ = nullptr;};
    inline const vector<DescribeBinarySecurityPoliciesResponseBody::BinarySecurityPolicies> & getBinarySecurityPolicies() const { DARABONBA_PTR_GET_CONST(binarySecurityPolicies_, vector<DescribeBinarySecurityPoliciesResponseBody::BinarySecurityPolicies>) };
    inline vector<DescribeBinarySecurityPoliciesResponseBody::BinarySecurityPolicies> getBinarySecurityPolicies() { DARABONBA_PTR_GET(binarySecurityPolicies_, vector<DescribeBinarySecurityPoliciesResponseBody::BinarySecurityPolicies>) };
    inline DescribeBinarySecurityPoliciesResponseBody& setBinarySecurityPolicies(const vector<DescribeBinarySecurityPoliciesResponseBody::BinarySecurityPolicies> & binarySecurityPolicies) { DARABONBA_PTR_SET_VALUE(binarySecurityPolicies_, binarySecurityPolicies) };
    inline DescribeBinarySecurityPoliciesResponseBody& setBinarySecurityPolicies(vector<DescribeBinarySecurityPoliciesResponseBody::BinarySecurityPolicies> && binarySecurityPolicies) { DARABONBA_PTR_SET_RVALUE(binarySecurityPolicies_, binarySecurityPolicies) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const DescribeBinarySecurityPoliciesResponseBody::PageInfo & getPageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, DescribeBinarySecurityPoliciesResponseBody::PageInfo) };
    inline DescribeBinarySecurityPoliciesResponseBody::PageInfo getPageInfo() { DARABONBA_PTR_GET(pageInfo_, DescribeBinarySecurityPoliciesResponseBody::PageInfo) };
    inline DescribeBinarySecurityPoliciesResponseBody& setPageInfo(const DescribeBinarySecurityPoliciesResponseBody::PageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline DescribeBinarySecurityPoliciesResponseBody& setPageInfo(DescribeBinarySecurityPoliciesResponseBody::PageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeBinarySecurityPoliciesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about security policies.
    shared_ptr<vector<DescribeBinarySecurityPoliciesResponseBody::BinarySecurityPolicies>> binarySecurityPolicies_ {};
    // The pagination information.
    shared_ptr<DescribeBinarySecurityPoliciesResponseBody::PageInfo> pageInfo_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
