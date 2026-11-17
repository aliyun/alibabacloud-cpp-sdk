// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DISABLEOUTPUTITEMSHAREREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DISABLEOUTPUTITEMSHAREREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class DisableOutputItemShareRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DisableOutputItemShareRequest& obj) { 
      DARABONBA_PTR_TO_JSON(outputItemId, outputItemId_);
      DARABONBA_PTR_TO_JSON(outputItemName, outputItemName_);
      DARABONBA_PTR_TO_JSON(sessionId, sessionId_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, DisableOutputItemShareRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(outputItemId, outputItemId_);
      DARABONBA_PTR_FROM_JSON(outputItemName, outputItemName_);
      DARABONBA_PTR_FROM_JSON(sessionId, sessionId_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
    };
    DisableOutputItemShareRequest() = default ;
    DisableOutputItemShareRequest(const DisableOutputItemShareRequest &) = default ;
    DisableOutputItemShareRequest(DisableOutputItemShareRequest &&) = default ;
    DisableOutputItemShareRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DisableOutputItemShareRequest() = default ;
    DisableOutputItemShareRequest& operator=(const DisableOutputItemShareRequest &) = default ;
    DisableOutputItemShareRequest& operator=(DisableOutputItemShareRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->outputItemId_ == nullptr
        && this->outputItemName_ == nullptr && this->sessionId_ == nullptr && this->tenantId_ == nullptr; };
    // outputItemId Field Functions 
    bool hasOutputItemId() const { return this->outputItemId_ != nullptr;};
    void deleteOutputItemId() { this->outputItemId_ = nullptr;};
    inline string getOutputItemId() const { DARABONBA_PTR_GET_DEFAULT(outputItemId_, "") };
    inline DisableOutputItemShareRequest& setOutputItemId(string outputItemId) { DARABONBA_PTR_SET_VALUE(outputItemId_, outputItemId) };


    // outputItemName Field Functions 
    bool hasOutputItemName() const { return this->outputItemName_ != nullptr;};
    void deleteOutputItemName() { this->outputItemName_ = nullptr;};
    inline string getOutputItemName() const { DARABONBA_PTR_GET_DEFAULT(outputItemName_, "") };
    inline DisableOutputItemShareRequest& setOutputItemName(string outputItemName) { DARABONBA_PTR_SET_VALUE(outputItemName_, outputItemName) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline DisableOutputItemShareRequest& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline DisableOutputItemShareRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    // The output item ID.
    shared_ptr<string> outputItemId_ {};
    // The name of the output item. This parameter must be used together with sessionId.
    shared_ptr<string> outputItemName_ {};
    // The session ID used for exact filtering. The value must be 1 to 128 characters in length. It applies to common sessions, skill sessions, and the execution ID of task executions.
    shared_ptr<string> sessionId_ {};
    // The tenant ID. This is a common parameter. If not specified, the default tenant of the caller is used.
    shared_ptr<string> tenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
