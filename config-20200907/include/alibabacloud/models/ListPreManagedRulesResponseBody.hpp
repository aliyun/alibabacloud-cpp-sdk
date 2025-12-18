// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPREMANAGEDRULESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPREMANAGEDRULESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListPreManagedRulesResponseBodyManagedRules.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class ListPreManagedRulesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPreManagedRulesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ManagedRules, managedRules_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListPreManagedRulesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ManagedRules, managedRules_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListPreManagedRulesResponseBody() = default ;
    ListPreManagedRulesResponseBody(const ListPreManagedRulesResponseBody &) = default ;
    ListPreManagedRulesResponseBody(ListPreManagedRulesResponseBody &&) = default ;
    ListPreManagedRulesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPreManagedRulesResponseBody() = default ;
    ListPreManagedRulesResponseBody& operator=(const ListPreManagedRulesResponseBody &) = default ;
    ListPreManagedRulesResponseBody& operator=(ListPreManagedRulesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->managedRules_ == nullptr
        && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->requestId_ == nullptr; };
    // managedRules Field Functions 
    bool hasManagedRules() const { return this->managedRules_ != nullptr;};
    void deleteManagedRules() { this->managedRules_ = nullptr;};
    inline const vector<ListPreManagedRulesResponseBodyManagedRules> & managedRules() const { DARABONBA_PTR_GET_CONST(managedRules_, vector<ListPreManagedRulesResponseBodyManagedRules>) };
    inline vector<ListPreManagedRulesResponseBodyManagedRules> managedRules() { DARABONBA_PTR_GET(managedRules_, vector<ListPreManagedRulesResponseBodyManagedRules>) };
    inline ListPreManagedRulesResponseBody& setManagedRules(const vector<ListPreManagedRulesResponseBodyManagedRules> & managedRules) { DARABONBA_PTR_SET_VALUE(managedRules_, managedRules) };
    inline ListPreManagedRulesResponseBody& setManagedRules(vector<ListPreManagedRulesResponseBodyManagedRules> && managedRules) { DARABONBA_PTR_SET_RVALUE(managedRules_, managedRules) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline ListPreManagedRulesResponseBody& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListPreManagedRulesResponseBody& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListPreManagedRulesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The evaluation rules.
    std::shared_ptr<vector<ListPreManagedRulesResponseBodyManagedRules>> managedRules_ = nullptr;
    // The page number of the returned page.
    std::shared_ptr<int64_t> pageNumber_ = nullptr;
    // The number of entries returned per page.
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
