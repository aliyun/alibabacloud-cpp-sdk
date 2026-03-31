// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETYIKEUSERCREDITRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETYIKEUSERCREDITRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetYikeUserCreditResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetYikeUserCreditResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CreditTotal, creditTotal_);
      DARABONBA_PTR_TO_JSON(CreditUsage, creditUsage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetYikeUserCreditResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CreditTotal, creditTotal_);
      DARABONBA_PTR_FROM_JSON(CreditUsage, creditUsage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetYikeUserCreditResponseBody() = default ;
    GetYikeUserCreditResponseBody(const GetYikeUserCreditResponseBody &) = default ;
    GetYikeUserCreditResponseBody(GetYikeUserCreditResponseBody &&) = default ;
    GetYikeUserCreditResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetYikeUserCreditResponseBody() = default ;
    GetYikeUserCreditResponseBody& operator=(const GetYikeUserCreditResponseBody &) = default ;
    GetYikeUserCreditResponseBody& operator=(GetYikeUserCreditResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->creditTotal_ == nullptr
        && this->creditUsage_ == nullptr && this->requestId_ == nullptr; };
    // creditTotal Field Functions 
    bool hasCreditTotal() const { return this->creditTotal_ != nullptr;};
    void deleteCreditTotal() { this->creditTotal_ = nullptr;};
    inline string getCreditTotal() const { DARABONBA_PTR_GET_DEFAULT(creditTotal_, "") };
    inline GetYikeUserCreditResponseBody& setCreditTotal(string creditTotal) { DARABONBA_PTR_SET_VALUE(creditTotal_, creditTotal) };


    // creditUsage Field Functions 
    bool hasCreditUsage() const { return this->creditUsage_ != nullptr;};
    void deleteCreditUsage() { this->creditUsage_ = nullptr;};
    inline string getCreditUsage() const { DARABONBA_PTR_GET_DEFAULT(creditUsage_, "") };
    inline GetYikeUserCreditResponseBody& setCreditUsage(string creditUsage) { DARABONBA_PTR_SET_VALUE(creditUsage_, creditUsage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetYikeUserCreditResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> creditTotal_ {};
    shared_ptr<string> creditUsage_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
