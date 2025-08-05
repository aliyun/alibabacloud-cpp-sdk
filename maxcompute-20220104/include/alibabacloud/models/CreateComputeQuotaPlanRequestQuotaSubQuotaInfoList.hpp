// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECOMPUTEQUOTAPLANREQUESTQUOTASUBQUOTAINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_CREATECOMPUTEQUOTAPLANREQUESTQUOTASUBQUOTAINFOLIST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateComputeQuotaPlanRequestQuotaSubQuotaInfoListParameter.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class CreateComputeQuotaPlanRequestQuotaSubQuotaInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateComputeQuotaPlanRequestQuotaSubQuotaInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(nickName, nickName_);
      DARABONBA_PTR_TO_JSON(parameter, parameter_);
    };
    friend void from_json(const Darabonba::Json& j, CreateComputeQuotaPlanRequestQuotaSubQuotaInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(nickName, nickName_);
      DARABONBA_PTR_FROM_JSON(parameter, parameter_);
    };
    CreateComputeQuotaPlanRequestQuotaSubQuotaInfoList() = default ;
    CreateComputeQuotaPlanRequestQuotaSubQuotaInfoList(const CreateComputeQuotaPlanRequestQuotaSubQuotaInfoList &) = default ;
    CreateComputeQuotaPlanRequestQuotaSubQuotaInfoList(CreateComputeQuotaPlanRequestQuotaSubQuotaInfoList &&) = default ;
    CreateComputeQuotaPlanRequestQuotaSubQuotaInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateComputeQuotaPlanRequestQuotaSubQuotaInfoList() = default ;
    CreateComputeQuotaPlanRequestQuotaSubQuotaInfoList& operator=(const CreateComputeQuotaPlanRequestQuotaSubQuotaInfoList &) = default ;
    CreateComputeQuotaPlanRequestQuotaSubQuotaInfoList& operator=(CreateComputeQuotaPlanRequestQuotaSubQuotaInfoList &&) = default ;
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
    inline CreateComputeQuotaPlanRequestQuotaSubQuotaInfoList& setNickName(string nickName) { DARABONBA_PTR_SET_VALUE(nickName_, nickName) };


    // parameter Field Functions 
    bool hasParameter() const { return this->parameter_ != nullptr;};
    void deleteParameter() { this->parameter_ = nullptr;};
    inline const Models::CreateComputeQuotaPlanRequestQuotaSubQuotaInfoListParameter & parameter() const { DARABONBA_PTR_GET_CONST(parameter_, Models::CreateComputeQuotaPlanRequestQuotaSubQuotaInfoListParameter) };
    inline Models::CreateComputeQuotaPlanRequestQuotaSubQuotaInfoListParameter parameter() { DARABONBA_PTR_GET(parameter_, Models::CreateComputeQuotaPlanRequestQuotaSubQuotaInfoListParameter) };
    inline CreateComputeQuotaPlanRequestQuotaSubQuotaInfoList& setParameter(const Models::CreateComputeQuotaPlanRequestQuotaSubQuotaInfoListParameter & parameter) { DARABONBA_PTR_SET_VALUE(parameter_, parameter) };
    inline CreateComputeQuotaPlanRequestQuotaSubQuotaInfoList& setParameter(Models::CreateComputeQuotaPlanRequestQuotaSubQuotaInfoListParameter && parameter) { DARABONBA_PTR_SET_RVALUE(parameter_, parameter) };


  protected:
    // The nickname of the level-2 quota.
    // 
    // This parameter is required.
    std::shared_ptr<string> nickName_ = nullptr;
    // The parameters of the level-2 quota.
    std::shared_ptr<Models::CreateComputeQuotaPlanRequestQuotaSubQuotaInfoListParameter> parameter_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
