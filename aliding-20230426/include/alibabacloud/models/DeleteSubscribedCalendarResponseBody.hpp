// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETESUBSCRIBEDCALENDARRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DELETESUBSCRIBEDCALENDARRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class DeleteSubscribedCalendarResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteSubscribedCalendarResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteSubscribedCalendarResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    DeleteSubscribedCalendarResponseBody() = default ;
    DeleteSubscribedCalendarResponseBody(const DeleteSubscribedCalendarResponseBody &) = default ;
    DeleteSubscribedCalendarResponseBody(DeleteSubscribedCalendarResponseBody &&) = default ;
    DeleteSubscribedCalendarResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteSubscribedCalendarResponseBody() = default ;
    DeleteSubscribedCalendarResponseBody& operator=(const DeleteSubscribedCalendarResponseBody &) = default ;
    DeleteSubscribedCalendarResponseBody& operator=(DeleteSubscribedCalendarResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->result_ != nullptr
        && this->requestId_ != nullptr; };
    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline bool result() const { DARABONBA_PTR_GET_DEFAULT(result_, false) };
    inline DeleteSubscribedCalendarResponseBody& setResult(bool result) { DARABONBA_PTR_SET_VALUE(result_, result) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DeleteSubscribedCalendarResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<bool> result_ = nullptr;
    // requestId
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
