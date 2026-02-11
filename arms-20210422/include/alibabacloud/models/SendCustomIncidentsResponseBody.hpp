// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SENDCUSTOMINCIDENTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SENDCUSTOMINCIDENTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20210422
{
namespace Models
{
  class SendCustomIncidentsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SendCustomIncidentsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, SendCustomIncidentsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    SendCustomIncidentsResponseBody() = default ;
    SendCustomIncidentsResponseBody(const SendCustomIncidentsResponseBody &) = default ;
    SendCustomIncidentsResponseBody(SendCustomIncidentsResponseBody &&) = default ;
    SendCustomIncidentsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SendCustomIncidentsResponseBody() = default ;
    SendCustomIncidentsResponseBody& operator=(const SendCustomIncidentsResponseBody &) = default ;
    SendCustomIncidentsResponseBody& operator=(SendCustomIncidentsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->success_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SendCustomIncidentsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline SendCustomIncidentsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20210422
#endif
