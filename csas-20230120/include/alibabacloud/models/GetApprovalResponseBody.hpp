// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPPROVALRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAPPROVALRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetApprovalResponseBodyApproval.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class GetApprovalResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetApprovalResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Approval, approval_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetApprovalResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Approval, approval_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetApprovalResponseBody() = default ;
    GetApprovalResponseBody(const GetApprovalResponseBody &) = default ;
    GetApprovalResponseBody(GetApprovalResponseBody &&) = default ;
    GetApprovalResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetApprovalResponseBody() = default ;
    GetApprovalResponseBody& operator=(const GetApprovalResponseBody &) = default ;
    GetApprovalResponseBody& operator=(GetApprovalResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->approval_ == nullptr
        && return this->requestId_ == nullptr; };
    // approval Field Functions 
    bool hasApproval() const { return this->approval_ != nullptr;};
    void deleteApproval() { this->approval_ = nullptr;};
    inline const vector<GetApprovalResponseBodyApproval> & approval() const { DARABONBA_PTR_GET_CONST(approval_, vector<GetApprovalResponseBodyApproval>) };
    inline vector<GetApprovalResponseBodyApproval> approval() { DARABONBA_PTR_GET(approval_, vector<GetApprovalResponseBodyApproval>) };
    inline GetApprovalResponseBody& setApproval(const vector<GetApprovalResponseBodyApproval> & approval) { DARABONBA_PTR_SET_VALUE(approval_, approval) };
    inline GetApprovalResponseBody& setApproval(vector<GetApprovalResponseBodyApproval> && approval) { DARABONBA_PTR_SET_RVALUE(approval_, approval) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetApprovalResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<GetApprovalResponseBodyApproval>> approval_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
