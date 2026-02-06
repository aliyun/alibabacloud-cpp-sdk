// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEPARAMETERTIMEDSCHEDULETASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DELETEPARAMETERTIMEDSCHEDULETASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DeleteParameterTimedScheduleTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteParameterTimedScheduleTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteParameterTimedScheduleTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DeleteParameterTimedScheduleTaskResponseBody() = default ;
    DeleteParameterTimedScheduleTaskResponseBody(const DeleteParameterTimedScheduleTaskResponseBody &) = default ;
    DeleteParameterTimedScheduleTaskResponseBody(DeleteParameterTimedScheduleTaskResponseBody &&) = default ;
    DeleteParameterTimedScheduleTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteParameterTimedScheduleTaskResponseBody() = default ;
    DeleteParameterTimedScheduleTaskResponseBody& operator=(const DeleteParameterTimedScheduleTaskResponseBody &) = default ;
    DeleteParameterTimedScheduleTaskResponseBody& operator=(DeleteParameterTimedScheduleTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DeleteParameterTimedScheduleTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
