// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECOMPUTESUBQUOTAREQUESTSUBQUOTAINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_UPDATECOMPUTESUBQUOTAREQUESTSUBQUOTAINFOLIST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateComputeSubQuotaRequestSubQuotaInfoListParameter.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class UpdateComputeSubQuotaRequestSubQuotaInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateComputeSubQuotaRequestSubQuotaInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(nickName, nickName_);
      DARABONBA_PTR_TO_JSON(parameter, parameter_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateComputeSubQuotaRequestSubQuotaInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(nickName, nickName_);
      DARABONBA_PTR_FROM_JSON(parameter, parameter_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    UpdateComputeSubQuotaRequestSubQuotaInfoList() = default ;
    UpdateComputeSubQuotaRequestSubQuotaInfoList(const UpdateComputeSubQuotaRequestSubQuotaInfoList &) = default ;
    UpdateComputeSubQuotaRequestSubQuotaInfoList(UpdateComputeSubQuotaRequestSubQuotaInfoList &&) = default ;
    UpdateComputeSubQuotaRequestSubQuotaInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateComputeSubQuotaRequestSubQuotaInfoList() = default ;
    UpdateComputeSubQuotaRequestSubQuotaInfoList& operator=(const UpdateComputeSubQuotaRequestSubQuotaInfoList &) = default ;
    UpdateComputeSubQuotaRequestSubQuotaInfoList& operator=(UpdateComputeSubQuotaRequestSubQuotaInfoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->nickName_ == nullptr
        && return this->parameter_ == nullptr && return this->type_ == nullptr; };
    // nickName Field Functions 
    bool hasNickName() const { return this->nickName_ != nullptr;};
    void deleteNickName() { this->nickName_ = nullptr;};
    inline string nickName() const { DARABONBA_PTR_GET_DEFAULT(nickName_, "") };
    inline UpdateComputeSubQuotaRequestSubQuotaInfoList& setNickName(string nickName) { DARABONBA_PTR_SET_VALUE(nickName_, nickName) };


    // parameter Field Functions 
    bool hasParameter() const { return this->parameter_ != nullptr;};
    void deleteParameter() { this->parameter_ = nullptr;};
    inline const Models::UpdateComputeSubQuotaRequestSubQuotaInfoListParameter & parameter() const { DARABONBA_PTR_GET_CONST(parameter_, Models::UpdateComputeSubQuotaRequestSubQuotaInfoListParameter) };
    inline Models::UpdateComputeSubQuotaRequestSubQuotaInfoListParameter parameter() { DARABONBA_PTR_GET(parameter_, Models::UpdateComputeSubQuotaRequestSubQuotaInfoListParameter) };
    inline UpdateComputeSubQuotaRequestSubQuotaInfoList& setParameter(const Models::UpdateComputeSubQuotaRequestSubQuotaInfoListParameter & parameter) { DARABONBA_PTR_SET_VALUE(parameter_, parameter) };
    inline UpdateComputeSubQuotaRequestSubQuotaInfoList& setParameter(Models::UpdateComputeSubQuotaRequestSubQuotaInfoListParameter && parameter) { DARABONBA_PTR_SET_RVALUE(parameter_, parameter) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline UpdateComputeSubQuotaRequestSubQuotaInfoList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The nickname of the level-2 quota.
    // 
    // This parameter is required.
    std::shared_ptr<string> nickName_ = nullptr;
    // The parameters of the level-2 quota.
    std::shared_ptr<Models::UpdateComputeSubQuotaRequestSubQuotaInfoListParameter> parameter_ = nullptr;
    // The type of quota.
    // 
    // > 
    // > - FUXI_OFFLINE(default) : Quotas of this type are used to run batch jobs.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
