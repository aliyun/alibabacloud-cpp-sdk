// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESCENEDEFENSEOBJECTSRESPONSEBODYOBJECTS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESCENEDEFENSEOBJECTSRESPONSEBODYOBJECTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeSceneDefenseObjectsResponseBodyObjects : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSceneDefenseObjectsResponseBodyObjects& obj) { 
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(PolicyId, policyId_);
      DARABONBA_PTR_TO_JSON(Vip, vip_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSceneDefenseObjectsResponseBodyObjects& obj) { 
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(PolicyId, policyId_);
      DARABONBA_PTR_FROM_JSON(Vip, vip_);
    };
    DescribeSceneDefenseObjectsResponseBodyObjects() = default ;
    DescribeSceneDefenseObjectsResponseBodyObjects(const DescribeSceneDefenseObjectsResponseBodyObjects &) = default ;
    DescribeSceneDefenseObjectsResponseBodyObjects(DescribeSceneDefenseObjectsResponseBodyObjects &&) = default ;
    DescribeSceneDefenseObjectsResponseBodyObjects(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSceneDefenseObjectsResponseBodyObjects() = default ;
    DescribeSceneDefenseObjectsResponseBodyObjects& operator=(const DescribeSceneDefenseObjectsResponseBodyObjects &) = default ;
    DescribeSceneDefenseObjectsResponseBodyObjects& operator=(DescribeSceneDefenseObjectsResponseBodyObjects &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domain_ == nullptr
        && return this->policyId_ == nullptr && return this->vip_ == nullptr; };
    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline DescribeSceneDefenseObjectsResponseBodyObjects& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // policyId Field Functions 
    bool hasPolicyId() const { return this->policyId_ != nullptr;};
    void deletePolicyId() { this->policyId_ = nullptr;};
    inline string policyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, "") };
    inline DescribeSceneDefenseObjectsResponseBodyObjects& setPolicyId(string policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


    // vip Field Functions 
    bool hasVip() const { return this->vip_ != nullptr;};
    void deleteVip() { this->vip_ = nullptr;};
    inline string vip() const { DARABONBA_PTR_GET_DEFAULT(vip_, "") };
    inline DescribeSceneDefenseObjectsResponseBodyObjects& setVip(string vip) { DARABONBA_PTR_SET_VALUE(vip_, vip) };


  protected:
    // The domain name that is protected by the policy.
    std::shared_ptr<string> domain_ = nullptr;
    // The ID of the policy.
    std::shared_ptr<string> policyId_ = nullptr;
    // The IP address of the Anti-DDoS Pro or Anti-DDoS Premium instance that is protected by the policy.
    std::shared_ptr<string> vip_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
