// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEMETRICRULETARGETSRESPONSEBODYFAILIDSTARGETIDS_HPP_
#define ALIBABACLOUD_MODELS_DELETEMETRICRULETARGETSRESPONSEBODYFAILIDSTARGETIDS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DeleteMetricRuleTargetsResponseBodyFailIdsTargetIds : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteMetricRuleTargetsResponseBodyFailIdsTargetIds& obj) { 
      DARABONBA_PTR_TO_JSON(TargetId, targetId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteMetricRuleTargetsResponseBodyFailIdsTargetIds& obj) { 
      DARABONBA_PTR_FROM_JSON(TargetId, targetId_);
    };
    DeleteMetricRuleTargetsResponseBodyFailIdsTargetIds() = default ;
    DeleteMetricRuleTargetsResponseBodyFailIdsTargetIds(const DeleteMetricRuleTargetsResponseBodyFailIdsTargetIds &) = default ;
    DeleteMetricRuleTargetsResponseBodyFailIdsTargetIds(DeleteMetricRuleTargetsResponseBodyFailIdsTargetIds &&) = default ;
    DeleteMetricRuleTargetsResponseBodyFailIdsTargetIds(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteMetricRuleTargetsResponseBodyFailIdsTargetIds() = default ;
    DeleteMetricRuleTargetsResponseBodyFailIdsTargetIds& operator=(const DeleteMetricRuleTargetsResponseBodyFailIdsTargetIds &) = default ;
    DeleteMetricRuleTargetsResponseBodyFailIdsTargetIds& operator=(DeleteMetricRuleTargetsResponseBodyFailIdsTargetIds &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->targetId_ != nullptr; };
    // targetId Field Functions 
    bool hasTargetId() const { return this->targetId_ != nullptr;};
    void deleteTargetId() { this->targetId_ = nullptr;};
    inline const vector<string> & targetId() const { DARABONBA_PTR_GET_CONST(targetId_, vector<string>) };
    inline vector<string> targetId() { DARABONBA_PTR_GET(targetId_, vector<string>) };
    inline DeleteMetricRuleTargetsResponseBodyFailIdsTargetIds& setTargetId(const vector<string> & targetId) { DARABONBA_PTR_SET_VALUE(targetId_, targetId) };
    inline DeleteMetricRuleTargetsResponseBodyFailIdsTargetIds& setTargetId(vector<string> && targetId) { DARABONBA_PTR_SET_RVALUE(targetId_, targetId) };


  protected:
    std::shared_ptr<vector<string>> targetId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
