// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECOMPUTEQUOTAPLANREQUESTQUOTASUBQUOTAINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_UPDATECOMPUTEQUOTAPLANREQUESTQUOTASUBQUOTAINFOLIST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateComputeQuotaPlanRequestQuotaSubQuotaInfoListParameter.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class UpdateComputeQuotaPlanRequestQuotaSubQuotaInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateComputeQuotaPlanRequestQuotaSubQuotaInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(nickName, nickName_);
      DARABONBA_PTR_TO_JSON(parameter, parameter_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateComputeQuotaPlanRequestQuotaSubQuotaInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(nickName, nickName_);
      DARABONBA_PTR_FROM_JSON(parameter, parameter_);
    };
    UpdateComputeQuotaPlanRequestQuotaSubQuotaInfoList() = default ;
    UpdateComputeQuotaPlanRequestQuotaSubQuotaInfoList(const UpdateComputeQuotaPlanRequestQuotaSubQuotaInfoList &) = default ;
    UpdateComputeQuotaPlanRequestQuotaSubQuotaInfoList(UpdateComputeQuotaPlanRequestQuotaSubQuotaInfoList &&) = default ;
    UpdateComputeQuotaPlanRequestQuotaSubQuotaInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateComputeQuotaPlanRequestQuotaSubQuotaInfoList() = default ;
    UpdateComputeQuotaPlanRequestQuotaSubQuotaInfoList& operator=(const UpdateComputeQuotaPlanRequestQuotaSubQuotaInfoList &) = default ;
    UpdateComputeQuotaPlanRequestQuotaSubQuotaInfoList& operator=(UpdateComputeQuotaPlanRequestQuotaSubQuotaInfoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->nickName_ != nullptr
        && this->parameter_ != nullptr; };
    // nickName Field Functions 
    bool hasNickName() const { return this->nickName_ != nullptr;};
    void deleteNickName() { this->nickName_ = nullptr;};
    inline string nickName() const { DARABONBA_PTR_GET_DEFAULT(nickName_, "") };
    inline UpdateComputeQuotaPlanRequestQuotaSubQuotaInfoList& setNickName(string nickName) { DARABONBA_PTR_SET_VALUE(nickName_, nickName) };


    // parameter Field Functions 
    bool hasParameter() const { return this->parameter_ != nullptr;};
    void deleteParameter() { this->parameter_ = nullptr;};
    inline const Models::UpdateComputeQuotaPlanRequestQuotaSubQuotaInfoListParameter & parameter() const { DARABONBA_PTR_GET_CONST(parameter_, Models::UpdateComputeQuotaPlanRequestQuotaSubQuotaInfoListParameter) };
    inline Models::UpdateComputeQuotaPlanRequestQuotaSubQuotaInfoListParameter parameter() { DARABONBA_PTR_GET(parameter_, Models::UpdateComputeQuotaPlanRequestQuotaSubQuotaInfoListParameter) };
    inline UpdateComputeQuotaPlanRequestQuotaSubQuotaInfoList& setParameter(const Models::UpdateComputeQuotaPlanRequestQuotaSubQuotaInfoListParameter & parameter) { DARABONBA_PTR_SET_VALUE(parameter_, parameter) };
    inline UpdateComputeQuotaPlanRequestQuotaSubQuotaInfoList& setParameter(Models::UpdateComputeQuotaPlanRequestQuotaSubQuotaInfoListParameter && parameter) { DARABONBA_PTR_SET_RVALUE(parameter_, parameter) };


  protected:
    // The nickname of the level-2 quota.
    // 
    // This parameter is required.
    std::shared_ptr<string> nickName_ = nullptr;
    // The parameters of the level-2 quota.
    std::shared_ptr<Models::UpdateComputeQuotaPlanRequestQuotaSubQuotaInfoListParameter> parameter_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
