// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPOLICYGROUPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPOLICYGROUPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListPolicyGroupsResponseBodyPolicyGroupModel.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class ListPolicyGroupsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPolicyGroupsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PolicyGroupModel, policyGroupModel_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListPolicyGroupsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PolicyGroupModel, policyGroupModel_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListPolicyGroupsResponseBody() = default ;
    ListPolicyGroupsResponseBody(const ListPolicyGroupsResponseBody &) = default ;
    ListPolicyGroupsResponseBody(ListPolicyGroupsResponseBody &&) = default ;
    ListPolicyGroupsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPolicyGroupsResponseBody() = default ;
    ListPolicyGroupsResponseBody& operator=(const ListPolicyGroupsResponseBody &) = default ;
    ListPolicyGroupsResponseBody& operator=(ListPolicyGroupsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->nextToken_ != nullptr
        && this->policyGroupModel_ != nullptr && this->requestId_ != nullptr && this->totalCount_ != nullptr; };
    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListPolicyGroupsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // policyGroupModel Field Functions 
    bool hasPolicyGroupModel() const { return this->policyGroupModel_ != nullptr;};
    void deletePolicyGroupModel() { this->policyGroupModel_ = nullptr;};
    inline const vector<ListPolicyGroupsResponseBodyPolicyGroupModel> & policyGroupModel() const { DARABONBA_PTR_GET_CONST(policyGroupModel_, vector<ListPolicyGroupsResponseBodyPolicyGroupModel>) };
    inline vector<ListPolicyGroupsResponseBodyPolicyGroupModel> policyGroupModel() { DARABONBA_PTR_GET(policyGroupModel_, vector<ListPolicyGroupsResponseBodyPolicyGroupModel>) };
    inline ListPolicyGroupsResponseBody& setPolicyGroupModel(const vector<ListPolicyGroupsResponseBodyPolicyGroupModel> & policyGroupModel) { DARABONBA_PTR_SET_VALUE(policyGroupModel_, policyGroupModel) };
    inline ListPolicyGroupsResponseBody& setPolicyGroupModel(vector<ListPolicyGroupsResponseBodyPolicyGroupModel> && policyGroupModel) { DARABONBA_PTR_SET_RVALUE(policyGroupModel_, policyGroupModel) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListPolicyGroupsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListPolicyGroupsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // A pagination token. It can be used in the next request to retrieve a new page of results. If NextToken is empty, no next page exists.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The policies.
    std::shared_ptr<vector<ListPolicyGroupsResponseBodyPolicyGroupModel>> policyGroupModel_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
