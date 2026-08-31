// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITASSETSOFFSHELVESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITASSETSOFFSHELVESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class SubmitAssetsOffShelveShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitAssetsOffShelveShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(OpUserId, opUserId_);
      DARABONBA_PTR_TO_JSON(SubmitCommand, submitCommandShrink_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitAssetsOffShelveShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(OpUserId, opUserId_);
      DARABONBA_PTR_FROM_JSON(SubmitCommand, submitCommandShrink_);
    };
    SubmitAssetsOffShelveShrinkRequest() = default ;
    SubmitAssetsOffShelveShrinkRequest(const SubmitAssetsOffShelveShrinkRequest &) = default ;
    SubmitAssetsOffShelveShrinkRequest(SubmitAssetsOffShelveShrinkRequest &&) = default ;
    SubmitAssetsOffShelveShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitAssetsOffShelveShrinkRequest() = default ;
    SubmitAssetsOffShelveShrinkRequest& operator=(const SubmitAssetsOffShelveShrinkRequest &) = default ;
    SubmitAssetsOffShelveShrinkRequest& operator=(SubmitAssetsOffShelveShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->opTenantId_ == nullptr
        && this->opUserId_ == nullptr && this->submitCommandShrink_ == nullptr; };
    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline SubmitAssetsOffShelveShrinkRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // opUserId Field Functions 
    bool hasOpUserId() const { return this->opUserId_ != nullptr;};
    void deleteOpUserId() { this->opUserId_ = nullptr;};
    inline string getOpUserId() const { DARABONBA_PTR_GET_DEFAULT(opUserId_, "") };
    inline SubmitAssetsOffShelveShrinkRequest& setOpUserId(string opUserId) { DARABONBA_PTR_SET_VALUE(opUserId_, opUserId) };


    // submitCommandShrink Field Functions 
    bool hasSubmitCommandShrink() const { return this->submitCommandShrink_ != nullptr;};
    void deleteSubmitCommandShrink() { this->submitCommandShrink_ = nullptr;};
    inline string getSubmitCommandShrink() const { DARABONBA_PTR_GET_DEFAULT(submitCommandShrink_, "") };
    inline SubmitAssetsOffShelveShrinkRequest& setSubmitCommandShrink(string submitCommandShrink) { DARABONBA_PTR_SET_VALUE(submitCommandShrink_, submitCommandShrink) };


  protected:
    // The tenant ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
    // The ID of the operator user.
    shared_ptr<string> opUserId_ {};
    // The delisting submit command.
    // 
    // This parameter is required.
    shared_ptr<string> submitCommandShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
