// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMANAGEDRULESGROUPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTMANAGEDRULESGROUPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListManagedRulesGroupsResponseBodyManagedRulesGroups.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class ListManagedRulesGroupsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListManagedRulesGroupsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ManagedRulesGroups, managedRulesGroups_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListManagedRulesGroupsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ManagedRulesGroups, managedRulesGroups_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListManagedRulesGroupsResponseBody() = default ;
    ListManagedRulesGroupsResponseBody(const ListManagedRulesGroupsResponseBody &) = default ;
    ListManagedRulesGroupsResponseBody(ListManagedRulesGroupsResponseBody &&) = default ;
    ListManagedRulesGroupsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListManagedRulesGroupsResponseBody() = default ;
    ListManagedRulesGroupsResponseBody& operator=(const ListManagedRulesGroupsResponseBody &) = default ;
    ListManagedRulesGroupsResponseBody& operator=(ListManagedRulesGroupsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->managedRulesGroups_ != nullptr
        && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->requestId_ != nullptr && this->totalCount_ != nullptr; };
    // managedRulesGroups Field Functions 
    bool hasManagedRulesGroups() const { return this->managedRulesGroups_ != nullptr;};
    void deleteManagedRulesGroups() { this->managedRulesGroups_ = nullptr;};
    inline const vector<ListManagedRulesGroupsResponseBodyManagedRulesGroups> & managedRulesGroups() const { DARABONBA_PTR_GET_CONST(managedRulesGroups_, vector<ListManagedRulesGroupsResponseBodyManagedRulesGroups>) };
    inline vector<ListManagedRulesGroupsResponseBodyManagedRulesGroups> managedRulesGroups() { DARABONBA_PTR_GET(managedRulesGroups_, vector<ListManagedRulesGroupsResponseBodyManagedRulesGroups>) };
    inline ListManagedRulesGroupsResponseBody& setManagedRulesGroups(const vector<ListManagedRulesGroupsResponseBodyManagedRulesGroups> & managedRulesGroups) { DARABONBA_PTR_SET_VALUE(managedRulesGroups_, managedRulesGroups) };
    inline ListManagedRulesGroupsResponseBody& setManagedRulesGroups(vector<ListManagedRulesGroupsResponseBodyManagedRulesGroups> && managedRulesGroups) { DARABONBA_PTR_SET_RVALUE(managedRulesGroups_, managedRulesGroups) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListManagedRulesGroupsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListManagedRulesGroupsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListManagedRulesGroupsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListManagedRulesGroupsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // List of managed rule group information.
    std::shared_ptr<vector<ListManagedRulesGroupsResponseBodyManagedRulesGroups>> managedRulesGroups_ = nullptr;
    // Current page number.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // Page size.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // Request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Total number of records after filtering.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
