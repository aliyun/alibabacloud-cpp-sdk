// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ASSUMEROLEFORWORKLOADIDENTITYRESPONSEBODYASSUMEDROLEUSER_HPP_
#define ALIBABACLOUD_MODELS_ASSUMEROLEFORWORKLOADIDENTITYRESPONSEBODYASSUMEDROLEUSER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentIdentityData20251127
{
namespace Models
{
  class AssumeRoleForWorkloadIdentityResponseBodyAssumedRoleUser : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AssumeRoleForWorkloadIdentityResponseBodyAssumedRoleUser& obj) { 
      DARABONBA_PTR_TO_JSON(Arn, arn_);
      DARABONBA_PTR_TO_JSON(AssumedRoleId, assumedRoleId_);
    };
    friend void from_json(const Darabonba::Json& j, AssumeRoleForWorkloadIdentityResponseBodyAssumedRoleUser& obj) { 
      DARABONBA_PTR_FROM_JSON(Arn, arn_);
      DARABONBA_PTR_FROM_JSON(AssumedRoleId, assumedRoleId_);
    };
    AssumeRoleForWorkloadIdentityResponseBodyAssumedRoleUser() = default ;
    AssumeRoleForWorkloadIdentityResponseBodyAssumedRoleUser(const AssumeRoleForWorkloadIdentityResponseBodyAssumedRoleUser &) = default ;
    AssumeRoleForWorkloadIdentityResponseBodyAssumedRoleUser(AssumeRoleForWorkloadIdentityResponseBodyAssumedRoleUser &&) = default ;
    AssumeRoleForWorkloadIdentityResponseBodyAssumedRoleUser(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AssumeRoleForWorkloadIdentityResponseBodyAssumedRoleUser() = default ;
    AssumeRoleForWorkloadIdentityResponseBodyAssumedRoleUser& operator=(const AssumeRoleForWorkloadIdentityResponseBodyAssumedRoleUser &) = default ;
    AssumeRoleForWorkloadIdentityResponseBodyAssumedRoleUser& operator=(AssumeRoleForWorkloadIdentityResponseBodyAssumedRoleUser &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->arn_ == nullptr
        && return this->assumedRoleId_ == nullptr; };
    // arn Field Functions 
    bool hasArn() const { return this->arn_ != nullptr;};
    void deleteArn() { this->arn_ = nullptr;};
    inline string arn() const { DARABONBA_PTR_GET_DEFAULT(arn_, "") };
    inline AssumeRoleForWorkloadIdentityResponseBodyAssumedRoleUser& setArn(string arn) { DARABONBA_PTR_SET_VALUE(arn_, arn) };


    // assumedRoleId Field Functions 
    bool hasAssumedRoleId() const { return this->assumedRoleId_ != nullptr;};
    void deleteAssumedRoleId() { this->assumedRoleId_ = nullptr;};
    inline string assumedRoleId() const { DARABONBA_PTR_GET_DEFAULT(assumedRoleId_, "") };
    inline AssumeRoleForWorkloadIdentityResponseBodyAssumedRoleUser& setAssumedRoleId(string assumedRoleId) { DARABONBA_PTR_SET_VALUE(assumedRoleId_, assumedRoleId) };


  protected:
    std::shared_ptr<string> arn_ = nullptr;
    std::shared_ptr<string> assumedRoleId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentIdentityData20251127
#endif
