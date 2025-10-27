// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINTERCEPTIONRULEDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETINTERCEPTIONRULEDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetInterceptionRuleDetailResponseBodyInterceptionRuleDetail.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetInterceptionRuleDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInterceptionRuleDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InterceptionRuleDetail, interceptionRuleDetail_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetInterceptionRuleDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InterceptionRuleDetail, interceptionRuleDetail_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetInterceptionRuleDetailResponseBody() = default ;
    GetInterceptionRuleDetailResponseBody(const GetInterceptionRuleDetailResponseBody &) = default ;
    GetInterceptionRuleDetailResponseBody(GetInterceptionRuleDetailResponseBody &&) = default ;
    GetInterceptionRuleDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInterceptionRuleDetailResponseBody() = default ;
    GetInterceptionRuleDetailResponseBody& operator=(const GetInterceptionRuleDetailResponseBody &) = default ;
    GetInterceptionRuleDetailResponseBody& operator=(GetInterceptionRuleDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->interceptionRuleDetail_ == nullptr
        && return this->requestId_ == nullptr; };
    // interceptionRuleDetail Field Functions 
    bool hasInterceptionRuleDetail() const { return this->interceptionRuleDetail_ != nullptr;};
    void deleteInterceptionRuleDetail() { this->interceptionRuleDetail_ = nullptr;};
    inline const GetInterceptionRuleDetailResponseBodyInterceptionRuleDetail & interceptionRuleDetail() const { DARABONBA_PTR_GET_CONST(interceptionRuleDetail_, GetInterceptionRuleDetailResponseBodyInterceptionRuleDetail) };
    inline GetInterceptionRuleDetailResponseBodyInterceptionRuleDetail interceptionRuleDetail() { DARABONBA_PTR_GET(interceptionRuleDetail_, GetInterceptionRuleDetailResponseBodyInterceptionRuleDetail) };
    inline GetInterceptionRuleDetailResponseBody& setInterceptionRuleDetail(const GetInterceptionRuleDetailResponseBodyInterceptionRuleDetail & interceptionRuleDetail) { DARABONBA_PTR_SET_VALUE(interceptionRuleDetail_, interceptionRuleDetail) };
    inline GetInterceptionRuleDetailResponseBody& setInterceptionRuleDetail(GetInterceptionRuleDetailResponseBodyInterceptionRuleDetail && interceptionRuleDetail) { DARABONBA_PTR_SET_RVALUE(interceptionRuleDetail_, interceptionRuleDetail) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetInterceptionRuleDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of the rule.
    std::shared_ptr<GetInterceptionRuleDetailResponseBodyInterceptionRuleDetail> interceptionRuleDetail_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
