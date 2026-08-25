// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETSCIMSYNCHRONIZATIONSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SETSCIMSYNCHRONIZATIONSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudsso20210515
{
namespace Models
{
  class SetSCIMSynchronizationStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetSCIMSynchronizationStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, SetSCIMSynchronizationStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    SetSCIMSynchronizationStatusResponseBody() = default ;
    SetSCIMSynchronizationStatusResponseBody(const SetSCIMSynchronizationStatusResponseBody &) = default ;
    SetSCIMSynchronizationStatusResponseBody(SetSCIMSynchronizationStatusResponseBody &&) = default ;
    SetSCIMSynchronizationStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetSCIMSynchronizationStatusResponseBody() = default ;
    SetSCIMSynchronizationStatusResponseBody& operator=(const SetSCIMSynchronizationStatusResponseBody &) = default ;
    SetSCIMSynchronizationStatusResponseBody& operator=(SetSCIMSynchronizationStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SetSCIMSynchronizationStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudsso20210515
#endif
