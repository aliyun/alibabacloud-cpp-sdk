// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATENOTIFYSTRATEGYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATENOTIFYSTRATEGYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class UpdateNotifyStrategyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateNotifyStrategyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(notifyStrategyId, notifyStrategyId_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateNotifyStrategyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(notifyStrategyId, notifyStrategyId_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    UpdateNotifyStrategyResponseBody() = default ;
    UpdateNotifyStrategyResponseBody(const UpdateNotifyStrategyResponseBody &) = default ;
    UpdateNotifyStrategyResponseBody(UpdateNotifyStrategyResponseBody &&) = default ;
    UpdateNotifyStrategyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateNotifyStrategyResponseBody() = default ;
    UpdateNotifyStrategyResponseBody& operator=(const UpdateNotifyStrategyResponseBody &) = default ;
    UpdateNotifyStrategyResponseBody& operator=(UpdateNotifyStrategyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->notifyStrategyId_ == nullptr
        && this->requestId_ == nullptr; };
    // notifyStrategyId Field Functions 
    bool hasNotifyStrategyId() const { return this->notifyStrategyId_ != nullptr;};
    void deleteNotifyStrategyId() { this->notifyStrategyId_ = nullptr;};
    inline string getNotifyStrategyId() const { DARABONBA_PTR_GET_DEFAULT(notifyStrategyId_, "") };
    inline UpdateNotifyStrategyResponseBody& setNotifyStrategyId(string notifyStrategyId) { DARABONBA_PTR_SET_VALUE(notifyStrategyId_, notifyStrategyId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateNotifyStrategyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> notifyStrategyId_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
