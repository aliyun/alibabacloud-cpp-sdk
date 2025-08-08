// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETQUALITYRULEDETAILREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETQUALITYRULEDETAILREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class GetQualityRuleDetailRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetQualityRuleDetailRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(QualityRuleId, qualityRuleId_);
    };
    friend void from_json(const Darabonba::Json& j, GetQualityRuleDetailRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(QualityRuleId, qualityRuleId_);
    };
    GetQualityRuleDetailRequest() = default ;
    GetQualityRuleDetailRequest(const GetQualityRuleDetailRequest &) = default ;
    GetQualityRuleDetailRequest(GetQualityRuleDetailRequest &&) = default ;
    GetQualityRuleDetailRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetQualityRuleDetailRequest() = default ;
    GetQualityRuleDetailRequest& operator=(const GetQualityRuleDetailRequest &) = default ;
    GetQualityRuleDetailRequest& operator=(GetQualityRuleDetailRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceId_ != nullptr
        && this->qualityRuleId_ != nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetQualityRuleDetailRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // qualityRuleId Field Functions 
    bool hasQualityRuleId() const { return this->qualityRuleId_ != nullptr;};
    void deleteQualityRuleId() { this->qualityRuleId_ = nullptr;};
    inline int64_t qualityRuleId() const { DARABONBA_PTR_GET_DEFAULT(qualityRuleId_, 0L) };
    inline GetQualityRuleDetailRequest& setQualityRuleId(int64_t qualityRuleId) { DARABONBA_PTR_SET_VALUE(qualityRuleId_, qualityRuleId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> qualityRuleId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
