// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCOMPUTEQUOTAPLANRESPONSEBODYDATAPLANLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTCOMPUTEQUOTAPLANRESPONSEBODYDATAPLANLIST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListComputeQuotaPlanResponseBodyDataPlanListQuota.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class ListComputeQuotaPlanResponseBodyDataPlanList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListComputeQuotaPlanResponseBodyDataPlanList& obj) { 
      DARABONBA_PTR_TO_JSON(createTime, createTime_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(quota, quota_);
    };
    friend void from_json(const Darabonba::Json& j, ListComputeQuotaPlanResponseBodyDataPlanList& obj) { 
      DARABONBA_PTR_FROM_JSON(createTime, createTime_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(quota, quota_);
    };
    ListComputeQuotaPlanResponseBodyDataPlanList() = default ;
    ListComputeQuotaPlanResponseBodyDataPlanList(const ListComputeQuotaPlanResponseBodyDataPlanList &) = default ;
    ListComputeQuotaPlanResponseBodyDataPlanList(ListComputeQuotaPlanResponseBodyDataPlanList &&) = default ;
    ListComputeQuotaPlanResponseBodyDataPlanList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListComputeQuotaPlanResponseBodyDataPlanList() = default ;
    ListComputeQuotaPlanResponseBodyDataPlanList& operator=(const ListComputeQuotaPlanResponseBodyDataPlanList &) = default ;
    ListComputeQuotaPlanResponseBodyDataPlanList& operator=(ListComputeQuotaPlanResponseBodyDataPlanList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && return this->name_ == nullptr && return this->quota_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListComputeQuotaPlanResponseBodyDataPlanList& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListComputeQuotaPlanResponseBodyDataPlanList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // quota Field Functions 
    bool hasQuota() const { return this->quota_ != nullptr;};
    void deleteQuota() { this->quota_ = nullptr;};
    inline const Models::ListComputeQuotaPlanResponseBodyDataPlanListQuota & quota() const { DARABONBA_PTR_GET_CONST(quota_, Models::ListComputeQuotaPlanResponseBodyDataPlanListQuota) };
    inline Models::ListComputeQuotaPlanResponseBodyDataPlanListQuota quota() { DARABONBA_PTR_GET(quota_, Models::ListComputeQuotaPlanResponseBodyDataPlanListQuota) };
    inline ListComputeQuotaPlanResponseBodyDataPlanList& setQuota(const Models::ListComputeQuotaPlanResponseBodyDataPlanListQuota & quota) { DARABONBA_PTR_SET_VALUE(quota_, quota) };
    inline ListComputeQuotaPlanResponseBodyDataPlanList& setQuota(Models::ListComputeQuotaPlanResponseBodyDataPlanListQuota && quota) { DARABONBA_PTR_SET_RVALUE(quota_, quota) };


  protected:
    // The time when the quota plan was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // The name of the quota plan.
    std::shared_ptr<string> name_ = nullptr;
    // The details of the quota.
    std::shared_ptr<Models::ListComputeQuotaPlanResponseBodyDataPlanListQuota> quota_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
