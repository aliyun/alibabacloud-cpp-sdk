// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEWEBINSTANCERELATIONSRESPONSEBODYWEBINSTANCERELATIONS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEWEBINSTANCERELATIONSRESPONSEBODYWEBINSTANCERELATIONS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeWebInstanceRelationsResponseBodyWebInstanceRelationsInstanceDetails.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeWebInstanceRelationsResponseBodyWebInstanceRelations : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeWebInstanceRelationsResponseBodyWebInstanceRelations& obj) { 
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(InstanceDetails, instanceDetails_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeWebInstanceRelationsResponseBodyWebInstanceRelations& obj) { 
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(InstanceDetails, instanceDetails_);
    };
    DescribeWebInstanceRelationsResponseBodyWebInstanceRelations() = default ;
    DescribeWebInstanceRelationsResponseBodyWebInstanceRelations(const DescribeWebInstanceRelationsResponseBodyWebInstanceRelations &) = default ;
    DescribeWebInstanceRelationsResponseBodyWebInstanceRelations(DescribeWebInstanceRelationsResponseBodyWebInstanceRelations &&) = default ;
    DescribeWebInstanceRelationsResponseBodyWebInstanceRelations(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeWebInstanceRelationsResponseBodyWebInstanceRelations() = default ;
    DescribeWebInstanceRelationsResponseBodyWebInstanceRelations& operator=(const DescribeWebInstanceRelationsResponseBodyWebInstanceRelations &) = default ;
    DescribeWebInstanceRelationsResponseBodyWebInstanceRelations& operator=(DescribeWebInstanceRelationsResponseBodyWebInstanceRelations &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domain_ == nullptr
        && return this->instanceDetails_ == nullptr; };
    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline DescribeWebInstanceRelationsResponseBodyWebInstanceRelations& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // instanceDetails Field Functions 
    bool hasInstanceDetails() const { return this->instanceDetails_ != nullptr;};
    void deleteInstanceDetails() { this->instanceDetails_ = nullptr;};
    inline const vector<Models::DescribeWebInstanceRelationsResponseBodyWebInstanceRelationsInstanceDetails> & instanceDetails() const { DARABONBA_PTR_GET_CONST(instanceDetails_, vector<Models::DescribeWebInstanceRelationsResponseBodyWebInstanceRelationsInstanceDetails>) };
    inline vector<Models::DescribeWebInstanceRelationsResponseBodyWebInstanceRelationsInstanceDetails> instanceDetails() { DARABONBA_PTR_GET(instanceDetails_, vector<Models::DescribeWebInstanceRelationsResponseBodyWebInstanceRelationsInstanceDetails>) };
    inline DescribeWebInstanceRelationsResponseBodyWebInstanceRelations& setInstanceDetails(const vector<Models::DescribeWebInstanceRelationsResponseBodyWebInstanceRelationsInstanceDetails> & instanceDetails) { DARABONBA_PTR_SET_VALUE(instanceDetails_, instanceDetails) };
    inline DescribeWebInstanceRelationsResponseBodyWebInstanceRelations& setInstanceDetails(vector<Models::DescribeWebInstanceRelationsResponseBodyWebInstanceRelationsInstanceDetails> && instanceDetails) { DARABONBA_PTR_SET_RVALUE(instanceDetails_, instanceDetails) };


  protected:
    // The domain name of the website.
    std::shared_ptr<string> domain_ = nullptr;
    // The information about the instance to which a website service is added.
    std::shared_ptr<vector<Models::DescribeWebInstanceRelationsResponseBodyWebInstanceRelationsInstanceDetails>> instanceDetails_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
