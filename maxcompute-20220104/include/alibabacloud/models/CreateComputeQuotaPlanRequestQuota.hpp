// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECOMPUTEQUOTAPLANREQUESTQUOTA_HPP_
#define ALIBABACLOUD_MODELS_CREATECOMPUTEQUOTAPLANREQUESTQUOTA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateComputeQuotaPlanRequestQuotaParameter.hpp>
#include <vector>
#include <alibabacloud/models/CreateComputeQuotaPlanRequestQuotaSubQuotaInfoList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class CreateComputeQuotaPlanRequestQuota : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateComputeQuotaPlanRequestQuota& obj) { 
      DARABONBA_PTR_TO_JSON(parameter, parameter_);
      DARABONBA_PTR_TO_JSON(subQuotaInfoList, subQuotaInfoList_);
    };
    friend void from_json(const Darabonba::Json& j, CreateComputeQuotaPlanRequestQuota& obj) { 
      DARABONBA_PTR_FROM_JSON(parameter, parameter_);
      DARABONBA_PTR_FROM_JSON(subQuotaInfoList, subQuotaInfoList_);
    };
    CreateComputeQuotaPlanRequestQuota() = default ;
    CreateComputeQuotaPlanRequestQuota(const CreateComputeQuotaPlanRequestQuota &) = default ;
    CreateComputeQuotaPlanRequestQuota(CreateComputeQuotaPlanRequestQuota &&) = default ;
    CreateComputeQuotaPlanRequestQuota(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateComputeQuotaPlanRequestQuota() = default ;
    CreateComputeQuotaPlanRequestQuota& operator=(const CreateComputeQuotaPlanRequestQuota &) = default ;
    CreateComputeQuotaPlanRequestQuota& operator=(CreateComputeQuotaPlanRequestQuota &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->parameter_ == nullptr
        && return this->subQuotaInfoList_ == nullptr; };
    // parameter Field Functions 
    bool hasParameter() const { return this->parameter_ != nullptr;};
    void deleteParameter() { this->parameter_ = nullptr;};
    inline const Models::CreateComputeQuotaPlanRequestQuotaParameter & parameter() const { DARABONBA_PTR_GET_CONST(parameter_, Models::CreateComputeQuotaPlanRequestQuotaParameter) };
    inline Models::CreateComputeQuotaPlanRequestQuotaParameter parameter() { DARABONBA_PTR_GET(parameter_, Models::CreateComputeQuotaPlanRequestQuotaParameter) };
    inline CreateComputeQuotaPlanRequestQuota& setParameter(const Models::CreateComputeQuotaPlanRequestQuotaParameter & parameter) { DARABONBA_PTR_SET_VALUE(parameter_, parameter) };
    inline CreateComputeQuotaPlanRequestQuota& setParameter(Models::CreateComputeQuotaPlanRequestQuotaParameter && parameter) { DARABONBA_PTR_SET_RVALUE(parameter_, parameter) };


    // subQuotaInfoList Field Functions 
    bool hasSubQuotaInfoList() const { return this->subQuotaInfoList_ != nullptr;};
    void deleteSubQuotaInfoList() { this->subQuotaInfoList_ = nullptr;};
    inline const vector<Models::CreateComputeQuotaPlanRequestQuotaSubQuotaInfoList> & subQuotaInfoList() const { DARABONBA_PTR_GET_CONST(subQuotaInfoList_, vector<Models::CreateComputeQuotaPlanRequestQuotaSubQuotaInfoList>) };
    inline vector<Models::CreateComputeQuotaPlanRequestQuotaSubQuotaInfoList> subQuotaInfoList() { DARABONBA_PTR_GET(subQuotaInfoList_, vector<Models::CreateComputeQuotaPlanRequestQuotaSubQuotaInfoList>) };
    inline CreateComputeQuotaPlanRequestQuota& setSubQuotaInfoList(const vector<Models::CreateComputeQuotaPlanRequestQuotaSubQuotaInfoList> & subQuotaInfoList) { DARABONBA_PTR_SET_VALUE(subQuotaInfoList_, subQuotaInfoList) };
    inline CreateComputeQuotaPlanRequestQuota& setSubQuotaInfoList(vector<Models::CreateComputeQuotaPlanRequestQuotaSubQuotaInfoList> && subQuotaInfoList) { DARABONBA_PTR_SET_RVALUE(subQuotaInfoList_, subQuotaInfoList) };


  protected:
    // The parameters of level-1 quota.
    std::shared_ptr<Models::CreateComputeQuotaPlanRequestQuotaParameter> parameter_ = nullptr;
    // The list of level-2 quotas.
    std::shared_ptr<vector<Models::CreateComputeQuotaPlanRequestQuotaSubQuotaInfoList>> subQuotaInfoList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
