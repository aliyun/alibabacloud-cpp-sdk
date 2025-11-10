// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCONTROLPOLICIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCONTROLPOLICIESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListControlPoliciesResponseBodyControlPolicies.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceDirectoryMaster20220419
{
namespace Models
{
  class ListControlPoliciesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListControlPoliciesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ControlPolicies, controlPolicies_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListControlPoliciesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ControlPolicies, controlPolicies_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListControlPoliciesResponseBody() = default ;
    ListControlPoliciesResponseBody(const ListControlPoliciesResponseBody &) = default ;
    ListControlPoliciesResponseBody(ListControlPoliciesResponseBody &&) = default ;
    ListControlPoliciesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListControlPoliciesResponseBody() = default ;
    ListControlPoliciesResponseBody& operator=(const ListControlPoliciesResponseBody &) = default ;
    ListControlPoliciesResponseBody& operator=(ListControlPoliciesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->controlPolicies_ == nullptr
        && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // controlPolicies Field Functions 
    bool hasControlPolicies() const { return this->controlPolicies_ != nullptr;};
    void deleteControlPolicies() { this->controlPolicies_ = nullptr;};
    inline const ListControlPoliciesResponseBodyControlPolicies & controlPolicies() const { DARABONBA_PTR_GET_CONST(controlPolicies_, ListControlPoliciesResponseBodyControlPolicies) };
    inline ListControlPoliciesResponseBodyControlPolicies controlPolicies() { DARABONBA_PTR_GET(controlPolicies_, ListControlPoliciesResponseBodyControlPolicies) };
    inline ListControlPoliciesResponseBody& setControlPolicies(const ListControlPoliciesResponseBodyControlPolicies & controlPolicies) { DARABONBA_PTR_SET_VALUE(controlPolicies_, controlPolicies) };
    inline ListControlPoliciesResponseBody& setControlPolicies(ListControlPoliciesResponseBodyControlPolicies && controlPolicies) { DARABONBA_PTR_SET_RVALUE(controlPolicies_, controlPolicies) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListControlPoliciesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListControlPoliciesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListControlPoliciesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListControlPoliciesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The access control policies.
    std::shared_ptr<ListControlPoliciesResponseBodyControlPolicies> controlPolicies_ = nullptr;
    // The page number of the returned page.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries returned per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The number of access control policies.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceDirectoryMaster20220419
#endif
