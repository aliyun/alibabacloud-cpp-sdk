// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCOMPUTEEFFECTIVEPLANRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETCOMPUTEEFFECTIVEPLANRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetComputeEffectivePlanResponseBodyDataQuota.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class GetComputeEffectivePlanResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetComputeEffectivePlanResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(createTime, createTime_);
      DARABONBA_PTR_TO_JSON(isEffective, isEffective_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(quota, quota_);
    };
    friend void from_json(const Darabonba::Json& j, GetComputeEffectivePlanResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(createTime, createTime_);
      DARABONBA_PTR_FROM_JSON(isEffective, isEffective_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(quota, quota_);
    };
    GetComputeEffectivePlanResponseBodyData() = default ;
    GetComputeEffectivePlanResponseBodyData(const GetComputeEffectivePlanResponseBodyData &) = default ;
    GetComputeEffectivePlanResponseBodyData(GetComputeEffectivePlanResponseBodyData &&) = default ;
    GetComputeEffectivePlanResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetComputeEffectivePlanResponseBodyData() = default ;
    GetComputeEffectivePlanResponseBodyData& operator=(const GetComputeEffectivePlanResponseBodyData &) = default ;
    GetComputeEffectivePlanResponseBodyData& operator=(GetComputeEffectivePlanResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createTime_ != nullptr
        && this->isEffective_ != nullptr && this->name_ != nullptr && this->quota_ != nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetComputeEffectivePlanResponseBodyData& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // isEffective Field Functions 
    bool hasIsEffective() const { return this->isEffective_ != nullptr;};
    void deleteIsEffective() { this->isEffective_ = nullptr;};
    inline bool isEffective() const { DARABONBA_PTR_GET_DEFAULT(isEffective_, false) };
    inline GetComputeEffectivePlanResponseBodyData& setIsEffective(bool isEffective) { DARABONBA_PTR_SET_VALUE(isEffective_, isEffective) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetComputeEffectivePlanResponseBodyData& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // quota Field Functions 
    bool hasQuota() const { return this->quota_ != nullptr;};
    void deleteQuota() { this->quota_ = nullptr;};
    inline const Models::GetComputeEffectivePlanResponseBodyDataQuota & quota() const { DARABONBA_PTR_GET_CONST(quota_, Models::GetComputeEffectivePlanResponseBodyDataQuota) };
    inline Models::GetComputeEffectivePlanResponseBodyDataQuota quota() { DARABONBA_PTR_GET(quota_, Models::GetComputeEffectivePlanResponseBodyDataQuota) };
    inline GetComputeEffectivePlanResponseBodyData& setQuota(const Models::GetComputeEffectivePlanResponseBodyDataQuota & quota) { DARABONBA_PTR_SET_VALUE(quota_, quota) };
    inline GetComputeEffectivePlanResponseBodyData& setQuota(Models::GetComputeEffectivePlanResponseBodyDataQuota && quota) { DARABONBA_PTR_SET_RVALUE(quota_, quota) };


  protected:
    // The time when the quota plan was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // Whether it is currently effective.
    // > A Quota plan that has taken effect cannot be deleted, i.e., isEffective=true
    std::shared_ptr<bool> isEffective_ = nullptr;
    // The name of the quota plan.
    std::shared_ptr<string> name_ = nullptr;
    // The details of the quota.
    std::shared_ptr<Models::GetComputeEffectivePlanResponseBodyDataQuota> quota_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
