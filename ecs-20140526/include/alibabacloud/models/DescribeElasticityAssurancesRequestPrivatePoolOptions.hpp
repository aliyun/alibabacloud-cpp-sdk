// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEELASTICITYASSURANCESREQUESTPRIVATEPOOLOPTIONS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEELASTICITYASSURANCESREQUESTPRIVATEPOOLOPTIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeElasticityAssurancesRequestPrivatePoolOptions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeElasticityAssurancesRequestPrivatePoolOptions& obj) { 
      DARABONBA_PTR_TO_JSON(Ids, ids_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeElasticityAssurancesRequestPrivatePoolOptions& obj) { 
      DARABONBA_PTR_FROM_JSON(Ids, ids_);
    };
    DescribeElasticityAssurancesRequestPrivatePoolOptions() = default ;
    DescribeElasticityAssurancesRequestPrivatePoolOptions(const DescribeElasticityAssurancesRequestPrivatePoolOptions &) = default ;
    DescribeElasticityAssurancesRequestPrivatePoolOptions(DescribeElasticityAssurancesRequestPrivatePoolOptions &&) = default ;
    DescribeElasticityAssurancesRequestPrivatePoolOptions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeElasticityAssurancesRequestPrivatePoolOptions() = default ;
    DescribeElasticityAssurancesRequestPrivatePoolOptions& operator=(const DescribeElasticityAssurancesRequestPrivatePoolOptions &) = default ;
    DescribeElasticityAssurancesRequestPrivatePoolOptions& operator=(DescribeElasticityAssurancesRequestPrivatePoolOptions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ids_ != nullptr; };
    // ids Field Functions 
    bool hasIds() const { return this->ids_ != nullptr;};
    void deleteIds() { this->ids_ = nullptr;};
    inline string ids() const { DARABONBA_PTR_GET_DEFAULT(ids_, "") };
    inline DescribeElasticityAssurancesRequestPrivatePoolOptions& setIds(string ids) { DARABONBA_PTR_SET_VALUE(ids_, ids) };


  protected:
    // The IDs of the elasticity assurances. The value can be a JSON array that consists of up to 100 elasticity assurance IDs. Separate the IDs with commas (,).
    std::shared_ptr<string> ids_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
