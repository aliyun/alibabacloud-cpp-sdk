// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETOPERATIONRECORDBYIDSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETOPERATIONRECORDBYIDSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetOperationRecordByIdShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOperationRecordByIdShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DetailCommand, detailCommandShrink_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
    };
    friend void from_json(const Darabonba::Json& j, GetOperationRecordByIdShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DetailCommand, detailCommandShrink_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
    };
    GetOperationRecordByIdShrinkRequest() = default ;
    GetOperationRecordByIdShrinkRequest(const GetOperationRecordByIdShrinkRequest &) = default ;
    GetOperationRecordByIdShrinkRequest(GetOperationRecordByIdShrinkRequest &&) = default ;
    GetOperationRecordByIdShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOperationRecordByIdShrinkRequest() = default ;
    GetOperationRecordByIdShrinkRequest& operator=(const GetOperationRecordByIdShrinkRequest &) = default ;
    GetOperationRecordByIdShrinkRequest& operator=(GetOperationRecordByIdShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->detailCommandShrink_ == nullptr
        && this->opTenantId_ == nullptr; };
    // detailCommandShrink Field Functions 
    bool hasDetailCommandShrink() const { return this->detailCommandShrink_ != nullptr;};
    void deleteDetailCommandShrink() { this->detailCommandShrink_ = nullptr;};
    inline string getDetailCommandShrink() const { DARABONBA_PTR_GET_DEFAULT(detailCommandShrink_, "") };
    inline GetOperationRecordByIdShrinkRequest& setDetailCommandShrink(string detailCommandShrink) { DARABONBA_PTR_SET_VALUE(detailCommandShrink_, detailCommandShrink) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline GetOperationRecordByIdShrinkRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


  protected:
    // This parameter is required.
    shared_ptr<string> detailCommandShrink_ {};
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
