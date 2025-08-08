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
    virtual bool empty() const override { this->pageNumber_ != nullptr
        && this->pageSize_ != nullptr && this->policyId_ != nullptr && this->policySource_ != nullptr && this->tid_ != nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline ListAbacAuthorizationsRequest& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListAbacAuthorizationsRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // policyId Field Functions 
    bool hasPolicyId() const { return this->policyId_ != nullptr;};
    void deletePolicyId() { this->policyId_ = nullptr;};
    inline string policyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, "") };
    inline ListAbacAuthorizationsRequest& setPolicyId(string policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


    // policySource Field Functions 
    bool hasPolicySource() const { return this->policySource_ != nullptr;};
    void deletePolicySource() { this->policySource_ = nullptr;};
    inline string policySource() const { DARABONBA_PTR_GET_DEFAULT(policySource_, "") };
    inline ListAbacAuthorizationsRequest& setPolicySource(string policySource) { DARABONBA_PTR_SET_VALUE(policySource_, policySource) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t tid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline ListAbacAuthorizationsRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


  protected:
    std::shared_ptr<int64_t> pageNumber_ = nullptr;
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    std::shared_ptr<string> policyId_ = nullptr;
    std::shared_ptr<string> policySource_ = nullptr;
    std::shared_ptr<int64_t> tid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
