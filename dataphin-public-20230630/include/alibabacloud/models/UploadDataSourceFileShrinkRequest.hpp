// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPLOADDATASOURCEFILESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPLOADDATASOURCEFILESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class UploadDataSourceFileShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UploadDataSourceFileShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(OpUserId, opUserId_);
      DARABONBA_PTR_TO_JSON(UploadCommand, uploadCommandShrink_);
    };
    friend void from_json(const Darabonba::Json& j, UploadDataSourceFileShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(OpUserId, opUserId_);
      DARABONBA_PTR_FROM_JSON(UploadCommand, uploadCommandShrink_);
    };
    UploadDataSourceFileShrinkRequest() = default ;
    UploadDataSourceFileShrinkRequest(const UploadDataSourceFileShrinkRequest &) = default ;
    UploadDataSourceFileShrinkRequest(UploadDataSourceFileShrinkRequest &&) = default ;
    UploadDataSourceFileShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UploadDataSourceFileShrinkRequest() = default ;
    UploadDataSourceFileShrinkRequest& operator=(const UploadDataSourceFileShrinkRequest &) = default ;
    UploadDataSourceFileShrinkRequest& operator=(UploadDataSourceFileShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->opTenantId_ == nullptr
        && this->opUserId_ == nullptr && this->uploadCommandShrink_ == nullptr; };
    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline UploadDataSourceFileShrinkRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // opUserId Field Functions 
    bool hasOpUserId() const { return this->opUserId_ != nullptr;};
    void deleteOpUserId() { this->opUserId_ = nullptr;};
    inline string getOpUserId() const { DARABONBA_PTR_GET_DEFAULT(opUserId_, "") };
    inline UploadDataSourceFileShrinkRequest& setOpUserId(string opUserId) { DARABONBA_PTR_SET_VALUE(opUserId_, opUserId) };


    // uploadCommandShrink Field Functions 
    bool hasUploadCommandShrink() const { return this->uploadCommandShrink_ != nullptr;};
    void deleteUploadCommandShrink() { this->uploadCommandShrink_ = nullptr;};
    inline string getUploadCommandShrink() const { DARABONBA_PTR_GET_DEFAULT(uploadCommandShrink_, "") };
    inline UploadDataSourceFileShrinkRequest& setUploadCommandShrink(string uploadCommandShrink) { DARABONBA_PTR_SET_VALUE(uploadCommandShrink_, uploadCommandShrink) };


  protected:
    // The tenant ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
    // The ID of the operator user.
    shared_ptr<string> opUserId_ {};
    // The request object for uploading a datasource authentication file.
    // 
    // This parameter is required.
    shared_ptr<string> uploadCommandShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
