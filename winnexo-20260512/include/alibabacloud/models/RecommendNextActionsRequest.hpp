// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RECOMMENDNEXTACTIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RECOMMENDNEXTACTIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class RecommendNextActionsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RecommendNextActionsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(customPrompt, customPrompt_);
      DARABONBA_PTR_TO_JSON(outputType, outputType_);
      DARABONBA_PTR_TO_JSON(recentMessageCount, recentMessageCount_);
      DARABONBA_PTR_TO_JSON(sessionId, sessionId_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, RecommendNextActionsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(customPrompt, customPrompt_);
      DARABONBA_PTR_FROM_JSON(outputType, outputType_);
      DARABONBA_PTR_FROM_JSON(recentMessageCount, recentMessageCount_);
      DARABONBA_PTR_FROM_JSON(sessionId, sessionId_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
    };
    RecommendNextActionsRequest() = default ;
    RecommendNextActionsRequest(const RecommendNextActionsRequest &) = default ;
    RecommendNextActionsRequest(RecommendNextActionsRequest &&) = default ;
    RecommendNextActionsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RecommendNextActionsRequest() = default ;
    RecommendNextActionsRequest& operator=(const RecommendNextActionsRequest &) = default ;
    RecommendNextActionsRequest& operator=(RecommendNextActionsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->customPrompt_ == nullptr
        && this->outputType_ == nullptr && this->recentMessageCount_ == nullptr && this->sessionId_ == nullptr && this->tenantId_ == nullptr; };
    // customPrompt Field Functions 
    bool hasCustomPrompt() const { return this->customPrompt_ != nullptr;};
    void deleteCustomPrompt() { this->customPrompt_ = nullptr;};
    inline string getCustomPrompt() const { DARABONBA_PTR_GET_DEFAULT(customPrompt_, "") };
    inline RecommendNextActionsRequest& setCustomPrompt(string customPrompt) { DARABONBA_PTR_SET_VALUE(customPrompt_, customPrompt) };


    // outputType Field Functions 
    bool hasOutputType() const { return this->outputType_ != nullptr;};
    void deleteOutputType() { this->outputType_ = nullptr;};
    inline string getOutputType() const { DARABONBA_PTR_GET_DEFAULT(outputType_, "") };
    inline RecommendNextActionsRequest& setOutputType(string outputType) { DARABONBA_PTR_SET_VALUE(outputType_, outputType) };


    // recentMessageCount Field Functions 
    bool hasRecentMessageCount() const { return this->recentMessageCount_ != nullptr;};
    void deleteRecentMessageCount() { this->recentMessageCount_ = nullptr;};
    inline int64_t getRecentMessageCount() const { DARABONBA_PTR_GET_DEFAULT(recentMessageCount_, 0L) };
    inline RecommendNextActionsRequest& setRecentMessageCount(int64_t recentMessageCount) { DARABONBA_PTR_SET_VALUE(recentMessageCount_, recentMessageCount) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline RecommendNextActionsRequest& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline RecommendNextActionsRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    // The extraction instruction.
    shared_ptr<string> customPrompt_ {};
    // The output type: `conversation/skill/task`.
    shared_ptr<string> outputType_ {};
    // The number of recent messages used to assemble contextual information.
    shared_ptr<int64_t> recentMessageCount_ {};
    // The session ID to filter by. If specified, returns all Active/Expired status information associated with this session.
    // 
    // This parameter is required.
    shared_ptr<string> sessionId_ {};
    // The tenant ID. This is a common parameter. Pass it explicitly through winnexo-cli using --tenant-id.
    shared_ptr<string> tenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
