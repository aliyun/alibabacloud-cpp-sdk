// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEELASTICITYASSURANCEAUTORENEWATTRIBUTEREQUESTPRIVATEPOOLOPTIONS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEELASTICITYASSURANCEAUTORENEWATTRIBUTEREQUESTPRIVATEPOOLOPTIONS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeElasticityAssuranceAutoRenewAttributeRequestPrivatePoolOptions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeElasticityAssuranceAutoRenewAttributeRequestPrivatePoolOptions& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeElasticityAssuranceAutoRenewAttributeRequestPrivatePoolOptions& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
    };
    DescribeElasticityAssuranceAutoRenewAttributeRequestPrivatePoolOptions() = default ;
    DescribeElasticityAssuranceAutoRenewAttributeRequestPrivatePoolOptions(const DescribeElasticityAssuranceAutoRenewAttributeRequestPrivatePoolOptions &) = default ;
    DescribeElasticityAssuranceAutoRenewAttributeRequestPrivatePoolOptions(DescribeElasticityAssuranceAutoRenewAttributeRequestPrivatePoolOptions &&) = default ;
    DescribeElasticityAssuranceAutoRenewAttributeRequestPrivatePoolOptions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeElasticityAssuranceAutoRenewAttributeRequestPrivatePoolOptions() = default ;
    DescribeElasticityAssuranceAutoRenewAttributeRequestPrivatePoolOptions& operator=(const DescribeElasticityAssuranceAutoRenewAttributeRequestPrivatePoolOptions &) = default ;
    DescribeElasticityAssuranceAutoRenewAttributeRequestPrivatePoolOptions& operator=(DescribeElasticityAssuranceAutoRenewAttributeRequestPrivatePoolOptions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->id_ != nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline const vector<string> & id() const { DARABONBA_PTR_GET_CONST(id_, vector<string>) };
    inline vector<string> id() { DARABONBA_PTR_GET(id_, vector<string>) };
    inline DescribeElasticityAssuranceAutoRenewAttributeRequestPrivatePoolOptions& setId(const vector<string> & id) { DARABONBA_PTR_SET_VALUE(id_, id) };
    inline DescribeElasticityAssuranceAutoRenewAttributeRequestPrivatePoolOptions& setId(vector<string> && id) { DARABONBA_PTR_SET_RVALUE(id_, id) };


  protected:
    // The IDs of elasticity assurances.
    // 
    // **Limits**: You can specify up to 50 elasticity assurance IDs in a single request.
    std::shared_ptr<vector<string>> id_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
