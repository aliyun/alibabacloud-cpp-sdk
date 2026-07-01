// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETOPERATIONRECORDRUNCODESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETOPERATIONRECORDRUNCODESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetOperationRecordRunCodeShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOperationRecordRunCodeShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CodeCommand, codeCommandShrink_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
    };
    friend void from_json(const Darabonba::Json& j, GetOperationRecordRunCodeShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CodeCommand, codeCommandShrink_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
    };
    GetOperationRecordRunCodeShrinkRequest() = default ;
    GetOperationRecordRunCodeShrinkRequest(const GetOperationRecordRunCodeShrinkRequest &) = default ;
    GetOperationRecordRunCodeShrinkRequest(GetOperationRecordRunCodeShrinkRequest &&) = default ;
    GetOperationRecordRunCodeShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOperationRecordRunCodeShrinkRequest() = default ;
    GetOperationRecordRunCodeShrinkRequest& operator=(const GetOperationRecordRunCodeShrinkRequest &) = default ;
    GetOperationRecordRunCodeShrinkRequest& operator=(GetOperationRecordRunCodeShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->codeCommandShrink_ == nullptr
        && this->opTenantId_ == nullptr; };
    // codeCommandShrink Field Functions 
    bool hasCodeCommandShrink() const { return this->codeCommandShrink_ != nullptr;};
    void deleteCodeCommandShrink() { this->codeCommandShrink_ = nullptr;};
    inline string getCodeCommandShrink() const { DARABONBA_PTR_GET_DEFAULT(codeCommandShrink_, "") };
    inline GetOperationRecordRunCodeShrinkRequest& setCodeCommandShrink(string codeCommandShrink) { DARABONBA_PTR_SET_VALUE(codeCommandShrink_, codeCommandShrink) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline GetOperationRecordRunCodeShrinkRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


  protected:
    // The query command.
    // 
    // This parameter is required.
    shared_ptr<string> codeCommandShrink_ {};
    // The tenant ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
