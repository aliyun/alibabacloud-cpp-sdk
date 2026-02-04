// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCETRIALSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCETRIALSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class GetInstanceTrialStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstanceTrialStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TrialStatus, trialStatus_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstanceTrialStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TrialStatus, trialStatus_);
    };
    GetInstanceTrialStatusResponseBody() = default ;
    GetInstanceTrialStatusResponseBody(const GetInstanceTrialStatusResponseBody &) = default ;
    GetInstanceTrialStatusResponseBody(GetInstanceTrialStatusResponseBody &&) = default ;
    GetInstanceTrialStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstanceTrialStatusResponseBody() = default ;
    GetInstanceTrialStatusResponseBody& operator=(const GetInstanceTrialStatusResponseBody &) = default ;
    GetInstanceTrialStatusResponseBody& operator=(GetInstanceTrialStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->trialStatus_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetInstanceTrialStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // trialStatus Field Functions 
    bool hasTrialStatus() const { return this->trialStatus_ != nullptr;};
    void deleteTrialStatus() { this->trialStatus_ = nullptr;};
    inline bool getTrialStatus() const { DARABONBA_PTR_GET_DEFAULT(trialStatus_, false) };
    inline GetInstanceTrialStatusResponseBody& setTrialStatus(bool trialStatus) { DARABONBA_PTR_SET_VALUE(trialStatus_, trialStatus) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> trialStatus_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
