// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEMETRICRULETARGETSRESPONSEBODYFAILIDS_HPP_
#define ALIBABACLOUD_MODELS_DELETEMETRICRULETARGETSRESPONSEBODYFAILIDS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DeleteMetricRuleTargetsResponseBodyFailIdsTargetIds.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DeleteMetricRuleTargetsResponseBodyFailIds : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteMetricRuleTargetsResponseBodyFailIds& obj) { 
      DARABONBA_PTR_TO_JSON(TargetIds, targetIds_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteMetricRuleTargetsResponseBodyFailIds& obj) { 
      DARABONBA_PTR_FROM_JSON(TargetIds, targetIds_);
    };
    DeleteMetricRuleTargetsResponseBodyFailIds() = default ;
    DeleteMetricRuleTargetsResponseBodyFailIds(const DeleteMetricRuleTargetsResponseBodyFailIds &) = default ;
    DeleteMetricRuleTargetsResponseBodyFailIds(DeleteMetricRuleTargetsResponseBodyFailIds &&) = default ;
    DeleteMetricRuleTargetsResponseBodyFailIds(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteMetricRuleTargetsResponseBodyFailIds() = default ;
    DeleteMetricRuleTargetsResponseBodyFailIds& operator=(const DeleteMetricRuleTargetsResponseBodyFailIds &) = default ;
    DeleteMetricRuleTargetsResponseBodyFailIds& operator=(DeleteMetricRuleTargetsResponseBodyFailIds &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->targetIds_ != nullptr; };
    // targetIds Field Functions 
    bool hasTargetIds() const { return this->targetIds_ != nullptr;};
    void deleteTargetIds() { this->targetIds_ = nullptr;};
    inline const Models::DeleteMetricRuleTargetsResponseBodyFailIdsTargetIds & targetIds() const { DARABONBA_PTR_GET_CONST(targetIds_, Models::DeleteMetricRuleTargetsResponseBodyFailIdsTargetIds) };
    inline Models::DeleteMetricRuleTargetsResponseBodyFailIdsTargetIds targetIds() { DARABONBA_PTR_GET(targetIds_, Models::DeleteMetricRuleTargetsResponseBodyFailIdsTargetIds) };
    inline DeleteMetricRuleTargetsResponseBodyFailIds& setTargetIds(const Models::DeleteMetricRuleTargetsResponseBodyFailIdsTargetIds & targetIds) { DARABONBA_PTR_SET_VALUE(targetIds_, targetIds) };
    inline DeleteMetricRuleTargetsResponseBodyFailIds& setTargetIds(Models::DeleteMetricRuleTargetsResponseBodyFailIdsTargetIds && targetIds) { DARABONBA_PTR_SET_RVALUE(targetIds_, targetIds) };


  protected:
    // The IDs of the resources that failed to be deleted.
    std::shared_ptr<Models::DeleteMetricRuleTargetsResponseBodyFailIdsTargetIds> targetIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
