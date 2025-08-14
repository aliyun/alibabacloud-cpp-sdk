// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONFIRMAVATAR2DTRAINREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CONFIRMAVATAR2DTRAINREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Avatar20220130
{
namespace Models
{
  class ConfirmAvatar2dTrainRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ConfirmAvatar2dTrainRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Confirm, confirm_);
      DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, ConfirmAvatar2dTrainRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Confirm, confirm_);
      DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
    };
    ConfirmAvatar2dTrainRequest() = default ;
    ConfirmAvatar2dTrainRequest(const ConfirmAvatar2dTrainRequest &) = default ;
    ConfirmAvatar2dTrainRequest(ConfirmAvatar2dTrainRequest &&) = default ;
    ConfirmAvatar2dTrainRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ConfirmAvatar2dTrainRequest() = default ;
    ConfirmAvatar2dTrainRequest& operator=(const ConfirmAvatar2dTrainRequest &) = default ;
    ConfirmAvatar2dTrainRequest& operator=(ConfirmAvatar2dTrainRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->confirm_ != nullptr && this->tenantId_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ConfirmAvatar2dTrainRequest& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // confirm Field Functions 
    bool hasConfirm() const { return this->confirm_ != nullptr;};
    void deleteConfirm() { this->confirm_ = nullptr;};
    inline string confirm() const { DARABONBA_PTR_GET_DEFAULT(confirm_, "") };
    inline ConfirmAvatar2dTrainRequest& setConfirm(string confirm) { DARABONBA_PTR_SET_VALUE(confirm_, confirm) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline int64_t tenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, 0L) };
    inline ConfirmAvatar2dTrainRequest& setTenantId(int64_t tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> code_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> confirm_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> tenantId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Avatar20220130
#endif
