// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRIGGERSTACKEXECUTIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_TRIGGERSTACKEXECUTIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IaCService20210806
{
namespace Models
{
  class TriggerStackExecutionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TriggerStackExecutionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(triggerId, triggerId_);
    };
    friend void from_json(const Darabonba::Json& j, TriggerStackExecutionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(triggerId, triggerId_);
    };
    TriggerStackExecutionResponseBody() = default ;
    TriggerStackExecutionResponseBody(const TriggerStackExecutionResponseBody &) = default ;
    TriggerStackExecutionResponseBody(TriggerStackExecutionResponseBody &&) = default ;
    TriggerStackExecutionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TriggerStackExecutionResponseBody() = default ;
    TriggerStackExecutionResponseBody& operator=(const TriggerStackExecutionResponseBody &) = default ;
    TriggerStackExecutionResponseBody& operator=(TriggerStackExecutionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->triggerId_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline TriggerStackExecutionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // triggerId Field Functions 
    bool hasTriggerId() const { return this->triggerId_ != nullptr;};
    void deleteTriggerId() { this->triggerId_ = nullptr;};
    inline string getTriggerId() const { DARABONBA_PTR_GET_DEFAULT(triggerId_, "") };
    inline TriggerStackExecutionResponseBody& setTriggerId(string triggerId) { DARABONBA_PTR_SET_VALUE(triggerId_, triggerId) };


  protected:
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<string> triggerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IaCService20210806
#endif
