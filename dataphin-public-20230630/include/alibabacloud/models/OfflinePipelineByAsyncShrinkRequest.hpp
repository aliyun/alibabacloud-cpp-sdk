// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OFFLINEPIPELINEBYASYNCSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_OFFLINEPIPELINEBYASYNCSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class OfflinePipelineByAsyncShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OfflinePipelineByAsyncShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Context, contextShrink_);
      DARABONBA_PTR_TO_JSON(OfflineCommand, offlineCommandShrink_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
    };
    friend void from_json(const Darabonba::Json& j, OfflinePipelineByAsyncShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Context, contextShrink_);
      DARABONBA_PTR_FROM_JSON(OfflineCommand, offlineCommandShrink_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
    };
    OfflinePipelineByAsyncShrinkRequest() = default ;
    OfflinePipelineByAsyncShrinkRequest(const OfflinePipelineByAsyncShrinkRequest &) = default ;
    OfflinePipelineByAsyncShrinkRequest(OfflinePipelineByAsyncShrinkRequest &&) = default ;
    OfflinePipelineByAsyncShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OfflinePipelineByAsyncShrinkRequest() = default ;
    OfflinePipelineByAsyncShrinkRequest& operator=(const OfflinePipelineByAsyncShrinkRequest &) = default ;
    OfflinePipelineByAsyncShrinkRequest& operator=(OfflinePipelineByAsyncShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->contextShrink_ == nullptr
        && this->offlineCommandShrink_ == nullptr && this->opTenantId_ == nullptr; };
    // contextShrink Field Functions 
    bool hasContextShrink() const { return this->contextShrink_ != nullptr;};
    void deleteContextShrink() { this->contextShrink_ = nullptr;};
    inline string getContextShrink() const { DARABONBA_PTR_GET_DEFAULT(contextShrink_, "") };
    inline OfflinePipelineByAsyncShrinkRequest& setContextShrink(string contextShrink) { DARABONBA_PTR_SET_VALUE(contextShrink_, contextShrink) };


    // offlineCommandShrink Field Functions 
    bool hasOfflineCommandShrink() const { return this->offlineCommandShrink_ != nullptr;};
    void deleteOfflineCommandShrink() { this->offlineCommandShrink_ = nullptr;};
    inline string getOfflineCommandShrink() const { DARABONBA_PTR_GET_DEFAULT(offlineCommandShrink_, "") };
    inline OfflinePipelineByAsyncShrinkRequest& setOfflineCommandShrink(string offlineCommandShrink) { DARABONBA_PTR_SET_VALUE(offlineCommandShrink_, offlineCommandShrink) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline OfflinePipelineByAsyncShrinkRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


  protected:
    // This parameter is required.
    shared_ptr<string> contextShrink_ {};
    // This parameter is required.
    shared_ptr<string> offlineCommandShrink_ {};
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
