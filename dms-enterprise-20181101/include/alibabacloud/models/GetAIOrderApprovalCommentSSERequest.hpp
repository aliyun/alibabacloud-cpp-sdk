// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAIORDERAPPROVALCOMMENTSSEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETAIORDERAPPROVALCOMMENTSSEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetAIOrderApprovalCommentSSERequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAIOrderApprovalCommentSSERequest& obj) { 
      DARABONBA_PTR_TO_JSON(OrderId, orderId_);
      DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAIOrderApprovalCommentSSERequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
      DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
    };
    GetAIOrderApprovalCommentSSERequest() = default ;
    GetAIOrderApprovalCommentSSERequest(const GetAIOrderApprovalCommentSSERequest &) = default ;
    GetAIOrderApprovalCommentSSERequest(GetAIOrderApprovalCommentSSERequest &&) = default ;
    GetAIOrderApprovalCommentSSERequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAIOrderApprovalCommentSSERequest() = default ;
    GetAIOrderApprovalCommentSSERequest& operator=(const GetAIOrderApprovalCommentSSERequest &) = default ;
    GetAIOrderApprovalCommentSSERequest& operator=(GetAIOrderApprovalCommentSSERequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->orderId_ == nullptr
        && this->sessionId_ == nullptr; };
    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline int64_t getOrderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, 0L) };
    inline GetAIOrderApprovalCommentSSERequest& setOrderId(int64_t orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline GetAIOrderApprovalCommentSSERequest& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


  protected:
    shared_ptr<int64_t> orderId_ {};
    shared_ptr<string> sessionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
