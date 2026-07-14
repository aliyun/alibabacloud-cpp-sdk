// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNOTIFYPOLICIESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTNOTIFYPOLICIESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class ListNotifyPoliciesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNotifyPoliciesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(orderBy, orderBy_);
      DARABONBA_PTR_TO_JSON(orderDesc, orderDesc_);
      DARABONBA_PTR_TO_JSON(workspace, workspace_);
    };
    friend void from_json(const Darabonba::Json& j, ListNotifyPoliciesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(orderBy, orderBy_);
      DARABONBA_PTR_FROM_JSON(orderDesc, orderDesc_);
      DARABONBA_PTR_FROM_JSON(workspace, workspace_);
    };
    ListNotifyPoliciesRequest() = default ;
    ListNotifyPoliciesRequest(const ListNotifyPoliciesRequest &) = default ;
    ListNotifyPoliciesRequest(ListNotifyPoliciesRequest &&) = default ;
    ListNotifyPoliciesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNotifyPoliciesRequest() = default ;
    ListNotifyPoliciesRequest& operator=(const ListNotifyPoliciesRequest &) = default ;
    ListNotifyPoliciesRequest& operator=(ListNotifyPoliciesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->name_ == nullptr && this->nextToken_ == nullptr && this->orderBy_ == nullptr && this->orderDesc_ == nullptr && this->workspace_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListNotifyPoliciesRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListNotifyPoliciesRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListNotifyPoliciesRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // orderBy Field Functions 
    bool hasOrderBy() const { return this->orderBy_ != nullptr;};
    void deleteOrderBy() { this->orderBy_ = nullptr;};
    inline string getOrderBy() const { DARABONBA_PTR_GET_DEFAULT(orderBy_, "") };
    inline ListNotifyPoliciesRequest& setOrderBy(string orderBy) { DARABONBA_PTR_SET_VALUE(orderBy_, orderBy) };


    // orderDesc Field Functions 
    bool hasOrderDesc() const { return this->orderDesc_ != nullptr;};
    void deleteOrderDesc() { this->orderDesc_ = nullptr;};
    inline string getOrderDesc() const { DARABONBA_PTR_GET_DEFAULT(orderDesc_, "") };
    inline ListNotifyPoliciesRequest& setOrderDesc(string orderDesc) { DARABONBA_PTR_SET_VALUE(orderDesc_, orderDesc) };


    // workspace Field Functions 
    bool hasWorkspace() const { return this->workspace_ != nullptr;};
    void deleteWorkspace() { this->workspace_ = nullptr;};
    inline string getWorkspace() const { DARABONBA_PTR_GET_DEFAULT(workspace_, "") };
    inline ListNotifyPoliciesRequest& setWorkspace(string workspace) { DARABONBA_PTR_SET_VALUE(workspace_, workspace) };


  protected:
    // The maximum number of entries to return in this request.
    shared_ptr<int32_t> maxResults_ {};
    // The policy name used for fuzzy filtering.
    shared_ptr<string> name_ {};
    // The pagination token. Leave this parameter empty for the first page. For subsequent pages, set this parameter to the nextToken value returned in the previous response.
    shared_ptr<string> nextToken_ {};
    // The field used for sorting. Valid values: createTime, updateTime, and name.
    shared_ptr<string> orderBy_ {};
    // Specifies whether to sort results in descending order. Valid values:
    // - true: descending order.
    // - false: ascending order.
    shared_ptr<string> orderDesc_ {};
    // The workspace ID. This parameter is used to isolate notify policy resources across different business spaces.
    // 
    // This parameter is required.
    shared_ptr<string> workspace_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
