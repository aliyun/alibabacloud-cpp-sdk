// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTRIGGERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETTRIGGERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DataIngestion.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class GetTriggerResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTriggerResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Trigger, trigger_);
    };
    friend void from_json(const Darabonba::Json& j, GetTriggerResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Trigger, trigger_);
    };
    GetTriggerResponseBody() = default ;
    GetTriggerResponseBody(const GetTriggerResponseBody &) = default ;
    GetTriggerResponseBody(GetTriggerResponseBody &&) = default ;
    GetTriggerResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTriggerResponseBody() = default ;
    GetTriggerResponseBody& operator=(const GetTriggerResponseBody &) = default ;
    GetTriggerResponseBody& operator=(GetTriggerResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->trigger_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetTriggerResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // trigger Field Functions 
    bool hasTrigger() const { return this->trigger_ != nullptr;};
    void deleteTrigger() { this->trigger_ = nullptr;};
    inline const DataIngestion & trigger() const { DARABONBA_PTR_GET_CONST(trigger_, DataIngestion) };
    inline DataIngestion trigger() { DARABONBA_PTR_GET(trigger_, DataIngestion) };
    inline GetTriggerResponseBody& setTrigger(const DataIngestion & trigger) { DARABONBA_PTR_SET_VALUE(trigger_, trigger) };
    inline GetTriggerResponseBody& setTrigger(DataIngestion && trigger) { DARABONBA_PTR_SET_RVALUE(trigger_, trigger) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The trigger information.
    std::shared_ptr<DataIngestion> trigger_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
