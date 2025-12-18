// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAGGREGATEACCOUNTCOMPLIANCEBYPACKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAGGREGATEACCOUNTCOMPLIANCEBYPACKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetAggregateAccountComplianceByPackResponseBodyAccountComplianceResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class GetAggregateAccountComplianceByPackResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAggregateAccountComplianceByPackResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccountComplianceResult, accountComplianceResult_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAggregateAccountComplianceByPackResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountComplianceResult, accountComplianceResult_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetAggregateAccountComplianceByPackResponseBody() = default ;
    GetAggregateAccountComplianceByPackResponseBody(const GetAggregateAccountComplianceByPackResponseBody &) = default ;
    GetAggregateAccountComplianceByPackResponseBody(GetAggregateAccountComplianceByPackResponseBody &&) = default ;
    GetAggregateAccountComplianceByPackResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAggregateAccountComplianceByPackResponseBody() = default ;
    GetAggregateAccountComplianceByPackResponseBody& operator=(const GetAggregateAccountComplianceByPackResponseBody &) = default ;
    GetAggregateAccountComplianceByPackResponseBody& operator=(GetAggregateAccountComplianceByPackResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountComplianceResult_ == nullptr
        && return this->requestId_ == nullptr; };
    // accountComplianceResult Field Functions 
    bool hasAccountComplianceResult() const { return this->accountComplianceResult_ != nullptr;};
    void deleteAccountComplianceResult() { this->accountComplianceResult_ = nullptr;};
    inline const GetAggregateAccountComplianceByPackResponseBodyAccountComplianceResult & accountComplianceResult() const { DARABONBA_PTR_GET_CONST(accountComplianceResult_, GetAggregateAccountComplianceByPackResponseBodyAccountComplianceResult) };
    inline GetAggregateAccountComplianceByPackResponseBodyAccountComplianceResult accountComplianceResult() { DARABONBA_PTR_GET(accountComplianceResult_, GetAggregateAccountComplianceByPackResponseBodyAccountComplianceResult) };
    inline GetAggregateAccountComplianceByPackResponseBody& setAccountComplianceResult(const GetAggregateAccountComplianceByPackResponseBodyAccountComplianceResult & accountComplianceResult) { DARABONBA_PTR_SET_VALUE(accountComplianceResult_, accountComplianceResult) };
    inline GetAggregateAccountComplianceByPackResponseBody& setAccountComplianceResult(GetAggregateAccountComplianceByPackResponseBodyAccountComplianceResult && accountComplianceResult) { DARABONBA_PTR_SET_RVALUE(accountComplianceResult_, accountComplianceResult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAggregateAccountComplianceByPackResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The compliance evaluation results of member accounts for which the compliance package takes effect in an account group.
    std::shared_ptr<GetAggregateAccountComplianceByPackResponseBodyAccountComplianceResult> accountComplianceResult_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
