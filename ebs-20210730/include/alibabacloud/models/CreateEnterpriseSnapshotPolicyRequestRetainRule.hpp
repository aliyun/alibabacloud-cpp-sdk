// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEENTERPRISESNAPSHOTPOLICYREQUESTRETAINRULE_HPP_
#define ALIBABACLOUD_MODELS_CREATEENTERPRISESNAPSHOTPOLICYREQUESTRETAINRULE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ebs20210730
{
namespace Models
{
  class CreateEnterpriseSnapshotPolicyRequestRetainRule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateEnterpriseSnapshotPolicyRequestRetainRule& obj) { 
      DARABONBA_PTR_TO_JSON(Number, number_);
      DARABONBA_PTR_TO_JSON(TimeInterval, timeInterval_);
      DARABONBA_PTR_TO_JSON(TimeUnit, timeUnit_);
    };
    friend void from_json(const Darabonba::Json& j, CreateEnterpriseSnapshotPolicyRequestRetainRule& obj) { 
      DARABONBA_PTR_FROM_JSON(Number, number_);
      DARABONBA_PTR_FROM_JSON(TimeInterval, timeInterval_);
      DARABONBA_PTR_FROM_JSON(TimeUnit, timeUnit_);
    };
    CreateEnterpriseSnapshotPolicyRequestRetainRule() = default ;
    CreateEnterpriseSnapshotPolicyRequestRetainRule(const CreateEnterpriseSnapshotPolicyRequestRetainRule &) = default ;
    CreateEnterpriseSnapshotPolicyRequestRetainRule(CreateEnterpriseSnapshotPolicyRequestRetainRule &&) = default ;
    CreateEnterpriseSnapshotPolicyRequestRetainRule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateEnterpriseSnapshotPolicyRequestRetainRule() = default ;
    CreateEnterpriseSnapshotPolicyRequestRetainRule& operator=(const CreateEnterpriseSnapshotPolicyRequestRetainRule &) = default ;
    CreateEnterpriseSnapshotPolicyRequestRetainRule& operator=(CreateEnterpriseSnapshotPolicyRequestRetainRule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->number_ == nullptr
        && return this->timeInterval_ == nullptr && return this->timeUnit_ == nullptr; };
    // number Field Functions 
    bool hasNumber() const { return this->number_ != nullptr;};
    void deleteNumber() { this->number_ = nullptr;};
    inline int32_t number() const { DARABONBA_PTR_GET_DEFAULT(number_, 0) };
    inline CreateEnterpriseSnapshotPolicyRequestRetainRule& setNumber(int32_t number) { DARABONBA_PTR_SET_VALUE(number_, number) };


    // timeInterval Field Functions 
    bool hasTimeInterval() const { return this->timeInterval_ != nullptr;};
    void deleteTimeInterval() { this->timeInterval_ = nullptr;};
    inline int32_t timeInterval() const { DARABONBA_PTR_GET_DEFAULT(timeInterval_, 0) };
    inline CreateEnterpriseSnapshotPolicyRequestRetainRule& setTimeInterval(int32_t timeInterval) { DARABONBA_PTR_SET_VALUE(timeInterval_, timeInterval) };


    // timeUnit Field Functions 
    bool hasTimeUnit() const { return this->timeUnit_ != nullptr;};
    void deleteTimeUnit() { this->timeUnit_ = nullptr;};
    inline string timeUnit() const { DARABONBA_PTR_GET_DEFAULT(timeUnit_, "") };
    inline CreateEnterpriseSnapshotPolicyRequestRetainRule& setTimeUnit(string timeUnit) { DARABONBA_PTR_SET_VALUE(timeUnit_, timeUnit) };


  protected:
    // Maximum number of retained snapshots.
    std::shared_ptr<int32_t> number_ = nullptr;
    // The time interval , valid value greater than 1.
    std::shared_ptr<int32_t> timeInterval_ = nullptr;
    // The unit of time, valid values:
    // 
    // - DAYS
    // 
    // - WEEKS
    std::shared_ptr<string> timeUnit_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ebs20210730
#endif
