// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKTRAFFICCONTROLTASKEXPRESSIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CHECKTRAFFICCONTROLTASKEXPRESSIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class CheckTrafficControlTaskExpressionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckTrafficControlTaskExpressionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(IsValie, isValie_);
      DARABONBA_PTR_TO_JSON(Reason, reason_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CheckTrafficControlTaskExpressionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(IsValie, isValie_);
      DARABONBA_PTR_FROM_JSON(Reason, reason_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CheckTrafficControlTaskExpressionResponseBody() = default ;
    CheckTrafficControlTaskExpressionResponseBody(const CheckTrafficControlTaskExpressionResponseBody &) = default ;
    CheckTrafficControlTaskExpressionResponseBody(CheckTrafficControlTaskExpressionResponseBody &&) = default ;
    CheckTrafficControlTaskExpressionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckTrafficControlTaskExpressionResponseBody() = default ;
    CheckTrafficControlTaskExpressionResponseBody& operator=(const CheckTrafficControlTaskExpressionResponseBody &) = default ;
    CheckTrafficControlTaskExpressionResponseBody& operator=(CheckTrafficControlTaskExpressionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->isValie_ == nullptr
        && this->reason_ == nullptr && this->requestId_ == nullptr; };
    // isValie Field Functions 
    bool hasIsValie() const { return this->isValie_ != nullptr;};
    void deleteIsValie() { this->isValie_ = nullptr;};
    inline bool getIsValie() const { DARABONBA_PTR_GET_DEFAULT(isValie_, false) };
    inline CheckTrafficControlTaskExpressionResponseBody& setIsValie(bool isValie) { DARABONBA_PTR_SET_VALUE(isValie_, isValie) };


    // reason Field Functions 
    bool hasReason() const { return this->reason_ != nullptr;};
    void deleteReason() { this->reason_ = nullptr;};
    inline string getReason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
    inline CheckTrafficControlTaskExpressionResponseBody& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CheckTrafficControlTaskExpressionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<bool> isValie_ {};
    shared_ptr<string> reason_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
