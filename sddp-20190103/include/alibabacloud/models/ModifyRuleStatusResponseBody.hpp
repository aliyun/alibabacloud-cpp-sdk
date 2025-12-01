// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYRULESTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MODIFYRULESTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sddp20190103
{
namespace Models
{
  class ModifyRuleStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyRuleStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FailedIds, failedIds_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyRuleStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FailedIds, failedIds_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ModifyRuleStatusResponseBody() = default ;
    ModifyRuleStatusResponseBody(const ModifyRuleStatusResponseBody &) = default ;
    ModifyRuleStatusResponseBody(ModifyRuleStatusResponseBody &&) = default ;
    ModifyRuleStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyRuleStatusResponseBody() = default ;
    ModifyRuleStatusResponseBody& operator=(const ModifyRuleStatusResponseBody &) = default ;
    ModifyRuleStatusResponseBody& operator=(ModifyRuleStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->failedIds_ == nullptr
        && return this->requestId_ == nullptr; };
    // failedIds Field Functions 
    bool hasFailedIds() const { return this->failedIds_ != nullptr;};
    void deleteFailedIds() { this->failedIds_ = nullptr;};
    inline string failedIds() const { DARABONBA_PTR_GET_DEFAULT(failedIds_, "") };
    inline ModifyRuleStatusResponseBody& setFailedIds(string failedIds) { DARABONBA_PTR_SET_VALUE(failedIds_, failedIds) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ModifyRuleStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The IDs of sensitive data detection rules whose status failed to be changed. Multiple IDs are separated with commas (,).
    std::shared_ptr<string> failedIds_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sddp20190103
#endif
