// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECOMPUTEQUOTAPLANREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATECOMPUTEQUOTAPLANREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateComputeQuotaPlanRequestQuota.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class UpdateComputeQuotaPlanRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateComputeQuotaPlanRequest& obj) { 
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(quota, quota_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateComputeQuotaPlanRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(quota, quota_);
    };
    UpdateComputeQuotaPlanRequest() = default ;
    UpdateComputeQuotaPlanRequest(const UpdateComputeQuotaPlanRequest &) = default ;
    UpdateComputeQuotaPlanRequest(UpdateComputeQuotaPlanRequest &&) = default ;
    UpdateComputeQuotaPlanRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateComputeQuotaPlanRequest() = default ;
    UpdateComputeQuotaPlanRequest& operator=(const UpdateComputeQuotaPlanRequest &) = default ;
    UpdateComputeQuotaPlanRequest& operator=(UpdateComputeQuotaPlanRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->name_ != nullptr
        && this->quota_ != nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateComputeQuotaPlanRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // quota Field Functions 
    bool hasQuota() const { return this->quota_ != nullptr;};
    void deleteQuota() { this->quota_ = nullptr;};
    inline const UpdateComputeQuotaPlanRequestQuota & quota() const { DARABONBA_PTR_GET_CONST(quota_, UpdateComputeQuotaPlanRequestQuota) };
    inline UpdateComputeQuotaPlanRequestQuota quota() { DARABONBA_PTR_GET(quota_, UpdateComputeQuotaPlanRequestQuota) };
    inline UpdateComputeQuotaPlanRequest& setQuota(const UpdateComputeQuotaPlanRequestQuota & quota) { DARABONBA_PTR_SET_VALUE(quota_, quota) };
    inline UpdateComputeQuotaPlanRequest& setQuota(UpdateComputeQuotaPlanRequestQuota && quota) { DARABONBA_PTR_SET_RVALUE(quota_, quota) };


  protected:
    // The name of quota plan.
    // 
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // The parameters of quota plan.
    std::shared_ptr<UpdateComputeQuotaPlanRequestQuota> quota_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
