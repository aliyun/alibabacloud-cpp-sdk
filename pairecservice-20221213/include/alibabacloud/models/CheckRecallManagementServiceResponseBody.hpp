// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKRECALLMANAGEMENTSERVICERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CHECKRECALLMANAGEMENTSERVICERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class CheckRecallManagementServiceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckRecallManagementServiceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_ANY_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, CheckRecallManagementServiceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_ANY_FROM_JSON(Result, result_);
    };
    CheckRecallManagementServiceResponseBody() = default ;
    CheckRecallManagementServiceResponseBody(const CheckRecallManagementServiceResponseBody &) = default ;
    CheckRecallManagementServiceResponseBody(CheckRecallManagementServiceResponseBody &&) = default ;
    CheckRecallManagementServiceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckRecallManagementServiceResponseBody() = default ;
    CheckRecallManagementServiceResponseBody& operator=(const CheckRecallManagementServiceResponseBody &) = default ;
    CheckRecallManagementServiceResponseBody& operator=(CheckRecallManagementServiceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CheckRecallManagementServiceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline     const Darabonba::Json & getResult() const { DARABONBA_GET(result_) };
    Darabonba::Json & getResult() { DARABONBA_GET(result_) };
    inline CheckRecallManagementServiceResponseBody& setResult(const Darabonba::Json & result) { DARABONBA_SET_VALUE(result_, result) };
    inline CheckRecallManagementServiceResponseBody& setResult(Darabonba::Json && result) { DARABONBA_SET_RVALUE(result_, result) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The result details.
    Darabonba::Json result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
