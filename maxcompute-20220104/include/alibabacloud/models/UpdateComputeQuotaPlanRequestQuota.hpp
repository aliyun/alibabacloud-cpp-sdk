// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECOMPUTEQUOTAPLANREQUESTQUOTA_HPP_
#define ALIBABACLOUD_MODELS_UPDATECOMPUTEQUOTAPLANREQUESTQUOTA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateComputeQuotaPlanRequestQuotaParameter.hpp>
#include <vector>
#include <alibabacloud/models/UpdateComputeQuotaPlanRequestQuotaSubQuotaInfoList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class UpdateComputeQuotaPlanRequestQuota : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateComputeQuotaPlanRequestQuota& obj) { 
      DARABONBA_PTR_TO_JSON(parameter, parameter_);
      DARABONBA_PTR_TO_JSON(subQuotaInfoList, subQuotaInfoList_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateComputeQuotaPlanRequestQuota& obj) { 
      DARABONBA_PTR_FROM_JSON(parameter, parameter_);
      DARABONBA_PTR_FROM_JSON(subQuotaInfoList, subQuotaInfoList_);
    };
    UpdateComputeQuotaPlanRequestQuota() = default ;
    UpdateComputeQuotaPlanRequestQuota(const UpdateComputeQuotaPlanRequestQuota &) = default ;
    UpdateComputeQuotaPlanRequestQuota(UpdateComputeQuotaPlanRequestQuota &&) = default ;
    UpdateComputeQuotaPlanRequestQuota(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateComputeQuotaPlanRequestQuota() = default ;
    UpdateComputeQuotaPlanRequestQuota& operator=(const UpdateComputeQuotaPlanRequestQuota &) = default ;
    UpdateComputeQuotaPlanRequestQuota& operator=(UpdateComputeQuotaPlanRequestQuota &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->parameter_ == nullptr
        && return this->subQuotaInfoList_ == nullptr; };
    // parameter Field Functions 
    bool hasParameter() const { return this->parameter_ != nullptr;};
    void deleteParameter() { this->parameter_ = nullptr;};
    inline const Models::UpdateComputeQuotaPlanRequestQuotaParameter & parameter() const { DARABONBA_PTR_GET_CONST(parameter_, Models::UpdateComputeQuotaPlanRequestQuotaParameter) };
    inline Models::UpdateComputeQuotaPlanRequestQuotaParameter parameter() { DARABONBA_PTR_GET(parameter_, Models::UpdateComputeQuotaPlanRequestQuotaParameter) };
    inline UpdateComputeQuotaPlanRequestQuota& setParameter(const Models::UpdateComputeQuotaPlanRequestQuotaParameter & parameter) { DARABONBA_PTR_SET_VALUE(parameter_, parameter) };
    inline UpdateComputeQuotaPlanRequestQuota& setParameter(Models::UpdateComputeQuotaPlanRequestQuotaParameter && parameter) { DARABONBA_PTR_SET_RVALUE(parameter_, parameter) };


    // subQuotaInfoList Field Functions 
    bool hasSubQuotaInfoList() const { return this->subQuotaInfoList_ != nullptr;};
    void deleteSubQuotaInfoList() { this->subQuotaInfoList_ = nullptr;};
    inline const vector<Models::UpdateComputeQuotaPlanRequestQuotaSubQuotaInfoList> & subQuotaInfoList() const { DARABONBA_PTR_GET_CONST(subQuotaInfoList_, vector<Models::UpdateComputeQuotaPlanRequestQuotaSubQuotaInfoList>) };
    inline vector<Models::UpdateComputeQuotaPlanRequestQuotaSubQuotaInfoList> subQuotaInfoList() { DARABONBA_PTR_GET(subQuotaInfoList_, vector<Models::UpdateComputeQuotaPlanRequestQuotaSubQuotaInfoList>) };
    inline UpdateComputeQuotaPlanRequestQuota& setSubQuotaInfoList(const vector<Models::UpdateComputeQuotaPlanRequestQuotaSubQuotaInfoList> & subQuotaInfoList) { DARABONBA_PTR_SET_VALUE(subQuotaInfoList_, subQuotaInfoList) };
    inline UpdateComputeQuotaPlanRequestQuota& setSubQuotaInfoList(vector<Models::UpdateComputeQuotaPlanRequestQuotaSubQuotaInfoList> && subQuotaInfoList) { DARABONBA_PTR_SET_RVALUE(subQuotaInfoList_, subQuotaInfoList) };


  protected:
    // The parameters of level-1 quota.
    std::shared_ptr<Models::UpdateComputeQuotaPlanRequestQuotaParameter> parameter_ = nullptr;
    // The list of level-2 quotas.
    std::shared_ptr<vector<Models::UpdateComputeQuotaPlanRequestQuotaSubQuotaInfoList>> subQuotaInfoList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
