// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELOADBALANCERSPECRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELOADBALANCERSPECRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeLoadBalancerSpecResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLoadBalancerSpecResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(LoadBalancerSpecs, loadBalancerSpecs_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLoadBalancerSpecResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(LoadBalancerSpecs, loadBalancerSpecs_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeLoadBalancerSpecResponseBody() = default ;
    DescribeLoadBalancerSpecResponseBody(const DescribeLoadBalancerSpecResponseBody &) = default ;
    DescribeLoadBalancerSpecResponseBody(DescribeLoadBalancerSpecResponseBody &&) = default ;
    DescribeLoadBalancerSpecResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLoadBalancerSpecResponseBody() = default ;
    DescribeLoadBalancerSpecResponseBody& operator=(const DescribeLoadBalancerSpecResponseBody &) = default ;
    DescribeLoadBalancerSpecResponseBody& operator=(DescribeLoadBalancerSpecResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class LoadBalancerSpecs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const LoadBalancerSpecs& obj) { 
        DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
        DARABONBA_PTR_TO_JSON(LoadBalancerSpec, loadBalancerSpec_);
      };
      friend void from_json(const Darabonba::Json& j, LoadBalancerSpecs& obj) { 
        DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
        DARABONBA_PTR_FROM_JSON(LoadBalancerSpec, loadBalancerSpec_);
      };
      LoadBalancerSpecs() = default ;
      LoadBalancerSpecs(const LoadBalancerSpecs &) = default ;
      LoadBalancerSpecs(LoadBalancerSpecs &&) = default ;
      LoadBalancerSpecs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~LoadBalancerSpecs() = default ;
      LoadBalancerSpecs& operator=(const LoadBalancerSpecs &) = default ;
      LoadBalancerSpecs& operator=(LoadBalancerSpecs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->displayName_ == nullptr
        && this->loadBalancerSpec_ == nullptr; };
      // displayName Field Functions 
      bool hasDisplayName() const { return this->displayName_ != nullptr;};
      void deleteDisplayName() { this->displayName_ = nullptr;};
      inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
      inline LoadBalancerSpecs& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


      // loadBalancerSpec Field Functions 
      bool hasLoadBalancerSpec() const { return this->loadBalancerSpec_ != nullptr;};
      void deleteLoadBalancerSpec() { this->loadBalancerSpec_ = nullptr;};
      inline string getLoadBalancerSpec() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerSpec_, "") };
      inline LoadBalancerSpecs& setLoadBalancerSpec(string loadBalancerSpec) { DARABONBA_PTR_SET_VALUE(loadBalancerSpec_, loadBalancerSpec) };


    protected:
      // The display name of the instance type.
      shared_ptr<string> displayName_ {};
      // The specifications of the ELB instance.
      shared_ptr<string> loadBalancerSpec_ {};
    };

    virtual bool empty() const override { return this->loadBalancerSpecs_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // loadBalancerSpecs Field Functions 
    bool hasLoadBalancerSpecs() const { return this->loadBalancerSpecs_ != nullptr;};
    void deleteLoadBalancerSpecs() { this->loadBalancerSpecs_ = nullptr;};
    inline const vector<DescribeLoadBalancerSpecResponseBody::LoadBalancerSpecs> & getLoadBalancerSpecs() const { DARABONBA_PTR_GET_CONST(loadBalancerSpecs_, vector<DescribeLoadBalancerSpecResponseBody::LoadBalancerSpecs>) };
    inline vector<DescribeLoadBalancerSpecResponseBody::LoadBalancerSpecs> getLoadBalancerSpecs() { DARABONBA_PTR_GET(loadBalancerSpecs_, vector<DescribeLoadBalancerSpecResponseBody::LoadBalancerSpecs>) };
    inline DescribeLoadBalancerSpecResponseBody& setLoadBalancerSpecs(const vector<DescribeLoadBalancerSpecResponseBody::LoadBalancerSpecs> & loadBalancerSpecs) { DARABONBA_PTR_SET_VALUE(loadBalancerSpecs_, loadBalancerSpecs) };
    inline DescribeLoadBalancerSpecResponseBody& setLoadBalancerSpecs(vector<DescribeLoadBalancerSpecResponseBody::LoadBalancerSpecs> && loadBalancerSpecs) { DARABONBA_PTR_SET_RVALUE(loadBalancerSpecs_, loadBalancerSpecs) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeLoadBalancerSpecResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeLoadBalancerSpecResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLoadBalancerSpecResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeLoadBalancerSpecResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The specifications. Valid values:
    shared_ptr<vector<DescribeLoadBalancerSpecResponseBody::LoadBalancerSpecs>> loadBalancerSpecs_ {};
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page. Maximum value: 100. Default value: 10.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
