// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPOLICYENABLESTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETPOLICYENABLESTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetPolicyEnableStatusResponseBodyStatusModels.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Tag20180828
{
namespace Models
{
  class GetPolicyEnableStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPolicyEnableStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StatusModels, statusModels_);
    };
    friend void from_json(const Darabonba::Json& j, GetPolicyEnableStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StatusModels, statusModels_);
    };
    GetPolicyEnableStatusResponseBody() = default ;
    GetPolicyEnableStatusResponseBody(const GetPolicyEnableStatusResponseBody &) = default ;
    GetPolicyEnableStatusResponseBody(GetPolicyEnableStatusResponseBody &&) = default ;
    GetPolicyEnableStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPolicyEnableStatusResponseBody() = default ;
    GetPolicyEnableStatusResponseBody& operator=(const GetPolicyEnableStatusResponseBody &) = default ;
    GetPolicyEnableStatusResponseBody& operator=(GetPolicyEnableStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->statusModels_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetPolicyEnableStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // statusModels Field Functions 
    bool hasStatusModels() const { return this->statusModels_ != nullptr;};
    void deleteStatusModels() { this->statusModels_ = nullptr;};
    inline const vector<GetPolicyEnableStatusResponseBodyStatusModels> & statusModels() const { DARABONBA_PTR_GET_CONST(statusModels_, vector<GetPolicyEnableStatusResponseBodyStatusModels>) };
    inline vector<GetPolicyEnableStatusResponseBodyStatusModels> statusModels() { DARABONBA_PTR_GET(statusModels_, vector<GetPolicyEnableStatusResponseBodyStatusModels>) };
    inline GetPolicyEnableStatusResponseBody& setStatusModels(const vector<GetPolicyEnableStatusResponseBodyStatusModels> & statusModels) { DARABONBA_PTR_SET_VALUE(statusModels_, statusModels) };
    inline GetPolicyEnableStatusResponseBody& setStatusModels(vector<GetPolicyEnableStatusResponseBodyStatusModels> && statusModels) { DARABONBA_PTR_SET_RVALUE(statusModels_, statusModels) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The information of the Tag Policy feature.
    std::shared_ptr<vector<GetPolicyEnableStatusResponseBodyStatusModels>> statusModels_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Tag20180828
#endif
