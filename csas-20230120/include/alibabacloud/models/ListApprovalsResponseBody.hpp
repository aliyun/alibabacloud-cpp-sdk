// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPROVALSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPROVALSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListApprovalsResponseBodyApprovals.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class ListApprovalsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListApprovalsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Approvals, approvals_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalNum, totalNum_);
    };
    friend void from_json(const Darabonba::Json& j, ListApprovalsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Approvals, approvals_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalNum, totalNum_);
    };
    ListApprovalsResponseBody() = default ;
    ListApprovalsResponseBody(const ListApprovalsResponseBody &) = default ;
    ListApprovalsResponseBody(ListApprovalsResponseBody &&) = default ;
    ListApprovalsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListApprovalsResponseBody() = default ;
    ListApprovalsResponseBody& operator=(const ListApprovalsResponseBody &) = default ;
    ListApprovalsResponseBody& operator=(ListApprovalsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->approvals_ != nullptr
        && this->requestId_ != nullptr && this->totalNum_ != nullptr; };
    // approvals Field Functions 
    bool hasApprovals() const { return this->approvals_ != nullptr;};
    void deleteApprovals() { this->approvals_ = nullptr;};
    inline const vector<ListApprovalsResponseBodyApprovals> & approvals() const { DARABONBA_PTR_GET_CONST(approvals_, vector<ListApprovalsResponseBodyApprovals>) };
    inline vector<ListApprovalsResponseBodyApprovals> approvals() { DARABONBA_PTR_GET(approvals_, vector<ListApprovalsResponseBodyApprovals>) };
    inline ListApprovalsResponseBody& setApprovals(const vector<ListApprovalsResponseBodyApprovals> & approvals) { DARABONBA_PTR_SET_VALUE(approvals_, approvals) };
    inline ListApprovalsResponseBody& setApprovals(vector<ListApprovalsResponseBodyApprovals> && approvals) { DARABONBA_PTR_SET_RVALUE(approvals_, approvals) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListApprovalsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalNum Field Functions 
    bool hasTotalNum() const { return this->totalNum_ != nullptr;};
    void deleteTotalNum() { this->totalNum_ = nullptr;};
    inline string totalNum() const { DARABONBA_PTR_GET_DEFAULT(totalNum_, "") };
    inline ListApprovalsResponseBody& setTotalNum(string totalNum) { DARABONBA_PTR_SET_VALUE(totalNum_, totalNum) };


  protected:
    std::shared_ptr<vector<ListApprovalsResponseBodyApprovals>> approvals_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> totalNum_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
