// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLIFECYCLEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETLIFECYCLEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDsw20220101
{
namespace Models
{
  class GetLifecycleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLifecycleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Limit, limit_);
      DARABONBA_PTR_TO_JSON(Order, order_);
      DARABONBA_PTR_TO_JSON(SessionNumber, sessionNumber_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Token, token_);
    };
    friend void from_json(const Darabonba::Json& j, GetLifecycleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Limit, limit_);
      DARABONBA_PTR_FROM_JSON(Order, order_);
      DARABONBA_PTR_FROM_JSON(SessionNumber, sessionNumber_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Token, token_);
    };
    GetLifecycleRequest() = default ;
    GetLifecycleRequest(const GetLifecycleRequest &) = default ;
    GetLifecycleRequest(GetLifecycleRequest &&) = default ;
    GetLifecycleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLifecycleRequest() = default ;
    GetLifecycleRequest& operator=(const GetLifecycleRequest &) = default ;
    GetLifecycleRequest& operator=(GetLifecycleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endTime_ == nullptr
        && return this->limit_ == nullptr && return this->order_ == nullptr && return this->sessionNumber_ == nullptr && return this->startTime_ == nullptr && return this->token_ == nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline GetLifecycleRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // limit Field Functions 
    bool hasLimit() const { return this->limit_ != nullptr;};
    void deleteLimit() { this->limit_ = nullptr;};
    inline int32_t limit() const { DARABONBA_PTR_GET_DEFAULT(limit_, 0) };
    inline GetLifecycleRequest& setLimit(int32_t limit) { DARABONBA_PTR_SET_VALUE(limit_, limit) };


    // order Field Functions 
    bool hasOrder() const { return this->order_ != nullptr;};
    void deleteOrder() { this->order_ = nullptr;};
    inline string order() const { DARABONBA_PTR_GET_DEFAULT(order_, "") };
    inline GetLifecycleRequest& setOrder(string order) { DARABONBA_PTR_SET_VALUE(order_, order) };


    // sessionNumber Field Functions 
    bool hasSessionNumber() const { return this->sessionNumber_ != nullptr;};
    void deleteSessionNumber() { this->sessionNumber_ = nullptr;};
    inline int32_t sessionNumber() const { DARABONBA_PTR_GET_DEFAULT(sessionNumber_, 0) };
    inline GetLifecycleRequest& setSessionNumber(int32_t sessionNumber) { DARABONBA_PTR_SET_VALUE(sessionNumber_, sessionNumber) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline GetLifecycleRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // token Field Functions 
    bool hasToken() const { return this->token_ != nullptr;};
    void deleteToken() { this->token_ = nullptr;};
    inline string token() const { DARABONBA_PTR_GET_DEFAULT(token_, "") };
    inline GetLifecycleRequest& setToken(string token) { DARABONBA_PTR_SET_VALUE(token_, token) };


  protected:
    // The end of the time range to query.
    std::shared_ptr<string> endTime_ = nullptr;
    // The number of sessions to query.
    std::shared_ptr<int32_t> limit_ = nullptr;
    // The sorting order of the results. Valid values:
    // 
    // *   ASC: sorted by time in ascending order.
    // *   DESC: sorted by time in descending order.
    std::shared_ptr<string> order_ = nullptr;
    // A session refers to the process of an instance from startup to failure or shutdown. The sessionNumber indicates the offset value for the instance\\"s session sequence.
    std::shared_ptr<int32_t> sessionNumber_ = nullptr;
    // The beginning of the time range to query.
    std::shared_ptr<string> startTime_ = nullptr;
    // The token used to share the URL.
    std::shared_ptr<string> token_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDsw20220101
#endif
