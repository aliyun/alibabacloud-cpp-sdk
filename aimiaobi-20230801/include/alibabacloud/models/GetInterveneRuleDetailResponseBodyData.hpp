// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINTERVENERULEDETAILRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETINTERVENERULEDETAILRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetInterveneRuleDetailResponseBodyDataInterveneRuleDetail.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class GetInterveneRuleDetailResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInterveneRuleDetailResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(InterveneRuleDetail, interveneRuleDetail_);
    };
    friend void from_json(const Darabonba::Json& j, GetInterveneRuleDetailResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(InterveneRuleDetail, interveneRuleDetail_);
    };
    GetInterveneRuleDetailResponseBodyData() = default ;
    GetInterveneRuleDetailResponseBodyData(const GetInterveneRuleDetailResponseBodyData &) = default ;
    GetInterveneRuleDetailResponseBodyData(GetInterveneRuleDetailResponseBodyData &&) = default ;
    GetInterveneRuleDetailResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInterveneRuleDetailResponseBodyData() = default ;
    GetInterveneRuleDetailResponseBodyData& operator=(const GetInterveneRuleDetailResponseBodyData &) = default ;
    GetInterveneRuleDetailResponseBodyData& operator=(GetInterveneRuleDetailResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->interveneRuleDetail_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t code() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline GetInterveneRuleDetailResponseBodyData& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // interveneRuleDetail Field Functions 
    bool hasInterveneRuleDetail() const { return this->interveneRuleDetail_ != nullptr;};
    void deleteInterveneRuleDetail() { this->interveneRuleDetail_ = nullptr;};
    inline const Models::GetInterveneRuleDetailResponseBodyDataInterveneRuleDetail & interveneRuleDetail() const { DARABONBA_PTR_GET_CONST(interveneRuleDetail_, Models::GetInterveneRuleDetailResponseBodyDataInterveneRuleDetail) };
    inline Models::GetInterveneRuleDetailResponseBodyDataInterveneRuleDetail interveneRuleDetail() { DARABONBA_PTR_GET(interveneRuleDetail_, Models::GetInterveneRuleDetailResponseBodyDataInterveneRuleDetail) };
    inline GetInterveneRuleDetailResponseBodyData& setInterveneRuleDetail(const Models::GetInterveneRuleDetailResponseBodyDataInterveneRuleDetail & interveneRuleDetail) { DARABONBA_PTR_SET_VALUE(interveneRuleDetail_, interveneRuleDetail) };
    inline GetInterveneRuleDetailResponseBodyData& setInterveneRuleDetail(Models::GetInterveneRuleDetailResponseBodyDataInterveneRuleDetail && interveneRuleDetail) { DARABONBA_PTR_SET_RVALUE(interveneRuleDetail_, interveneRuleDetail) };


  protected:
    std::shared_ptr<int32_t> code_ = nullptr;
    std::shared_ptr<Models::GetInterveneRuleDetailResponseBodyDataInterveneRuleDetail> interveneRuleDetail_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
