// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTABACAUTHORIZATIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTABACAUTHORIZATIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListAbacAuthorizationsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAbacAuthorizationsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PolicyId, policyId_);
      DARABONBA_PTR_TO_JSON(PolicySource, policySource_);
      DARABONBA_PTR_TO_JSON(Tid, tid_);
    };
    friend void from_json(const Darabonba::Json& j, ListAbacAuthorizationsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PolicyId, policyId_);
      DARABONBA_PTR_FROM_JSON(PolicySource, policySource_);
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
    };
    ListAbacAuthorizationsRequest() = default ;
    ListAbacAuthorizationsRequest(const ListAbacAuthorizationsRequest &) = default ;
    ListAbacAuthorizationsRequest(ListAbacAuthorizationsRequest &&) = default ;
    ListAbacAuthorizationsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAbacAuthorizationsRequest() = default ;
    ListAbacAuthorizationsRequest& operator=(const ListAbacAuthorizationsRequest &) = default ;
    ListAbacAuthorizationsRequest& operator=(ListAbacAuthorizationsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->policyId_ == nullptr && this->policySource_ == nullptr && this->tid_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline ListAbacAuthorizationsRequest& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListAbacAuthorizationsRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // policyId Field Functions 
    bool hasPolicyId() const { return this->policyId_ != nullptr;};
    void deletePolicyId() { this->policyId_ = nullptr;};
    inline string getPolicyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, "") };
    inline ListAbacAuthorizationsRequest& setPolicyId(string policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


    // policySource Field Functions 
    bool hasPolicySource() const { return this->policySource_ != nullptr;};
    void deletePolicySource() { this->policySource_ = nullptr;};
    inline string getPolicySource() const { DARABONBA_PTR_GET_DEFAULT(policySource_, "") };
    inline ListAbacAuthorizationsRequest& setPolicySource(string policySource) { DARABONBA_PTR_SET_VALUE(policySource_, policySource) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t getTid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline ListAbacAuthorizationsRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


  protected:
    // The page number.
    shared_ptr<int64_t> pageNumber_ {};
    // The number of entries on each page.
    shared_ptr<int64_t> pageSize_ {};
    // The ID of the policy.
    shared_ptr<string> policyId_ {};
    // The type of the policy. The value can be custom or system.
    // 
    // Valid values:
    // 
    // *   USER_DEFINE
    // *   SYSTEM
    shared_ptr<string> policySource_ {};
    // The ID of the tenant.
    // 
    // > To view the tenant ID, go to the Data Management (DMS) console and move the pointer over the profile picture in the upper-right corner. For more information, see the [View information about the current tenant](https://help.aliyun.com/document_detail/181330.html) section of the "Manage DMS tenants" topic.
    shared_ptr<int64_t> tid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
