// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECOMPUTEQUOTAPLANREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECOMPUTEQUOTAPLANREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateComputeQuotaPlanRequestQuota.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class CreateComputeQuotaPlanRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateComputeQuotaPlanRequest& obj) { 
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(quota, quota_);
    };
    friend void from_json(const Darabonba::Json& j, CreateComputeQuotaPlanRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(quota, quota_);
    };
    CreateComputeQuotaPlanRequest() = default ;
    CreateComputeQuotaPlanRequest(const CreateComputeQuotaPlanRequest &) = default ;
    CreateComputeQuotaPlanRequest(CreateComputeQuotaPlanRequest &&) = default ;
    CreateComputeQuotaPlanRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateComputeQuotaPlanRequest() = default ;
    CreateComputeQuotaPlanRequest& operator=(const CreateComputeQuotaPlanRequest &) = default ;
    CreateComputeQuotaPlanRequest& operator=(CreateComputeQuotaPlanRequest &&) = default ;
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
    inline CreateComputeQuotaPlanRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // quota Field Functions 
    bool hasQuota() const { return this->quota_ != nullptr;};
    void deleteQuota() { this->quota_ = nullptr;};
    inline const CreateComputeQuotaPlanRequestQuota & quota() const { DARABONBA_PTR_GET_CONST(quota_, CreateComputeQuotaPlanRequestQuota) };
    inline CreateComputeQuotaPlanRequestQuota quota() { DARABONBA_PTR_GET(quota_, CreateComputeQuotaPlanRequestQuota) };
    inline CreateComputeQuotaPlanRequest& setQuota(const CreateComputeQuotaPlanRequestQuota & quota) { DARABONBA_PTR_SET_VALUE(quota_, quota) };
    inline CreateComputeQuotaPlanRequest& setQuota(CreateComputeQuotaPlanRequestQuota && quota) { DARABONBA_PTR_SET_RVALUE(quota_, quota) };


  protected:
    // The name of quota plan.
    // 
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // The parameters of quota plan.
    std::shared_ptr<CreateComputeQuotaPlanRequestQuota> quota_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
