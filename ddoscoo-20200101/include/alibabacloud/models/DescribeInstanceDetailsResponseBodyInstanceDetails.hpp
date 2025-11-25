// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCEDETAILSRESPONSEBODYINSTANCEDETAILS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCEDETAILSRESPONSEBODYINSTANCEDETAILS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeInstanceDetailsResponseBodyInstanceDetailsEipInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeInstanceDetailsResponseBodyInstanceDetails : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceDetailsResponseBodyInstanceDetails& obj) { 
      DARABONBA_PTR_TO_JSON(EipInfos, eipInfos_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Line, line_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceDetailsResponseBodyInstanceDetails& obj) { 
      DARABONBA_PTR_FROM_JSON(EipInfos, eipInfos_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Line, line_);
    };
    DescribeInstanceDetailsResponseBodyInstanceDetails() = default ;
    DescribeInstanceDetailsResponseBodyInstanceDetails(const DescribeInstanceDetailsResponseBodyInstanceDetails &) = default ;
    DescribeInstanceDetailsResponseBodyInstanceDetails(DescribeInstanceDetailsResponseBodyInstanceDetails &&) = default ;
    DescribeInstanceDetailsResponseBodyInstanceDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceDetailsResponseBodyInstanceDetails() = default ;
    DescribeInstanceDetailsResponseBodyInstanceDetails& operator=(const DescribeInstanceDetailsResponseBodyInstanceDetails &) = default ;
    DescribeInstanceDetailsResponseBodyInstanceDetails& operator=(DescribeInstanceDetailsResponseBodyInstanceDetails &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->eipInfos_ == nullptr
        && return this->instanceId_ == nullptr && return this->line_ == nullptr; };
    // eipInfos Field Functions 
    bool hasEipInfos() const { return this->eipInfos_ != nullptr;};
    void deleteEipInfos() { this->eipInfos_ = nullptr;};
    inline const vector<Models::DescribeInstanceDetailsResponseBodyInstanceDetailsEipInfos> & eipInfos() const { DARABONBA_PTR_GET_CONST(eipInfos_, vector<Models::DescribeInstanceDetailsResponseBodyInstanceDetailsEipInfos>) };
    inline vector<Models::DescribeInstanceDetailsResponseBodyInstanceDetailsEipInfos> eipInfos() { DARABONBA_PTR_GET(eipInfos_, vector<Models::DescribeInstanceDetailsResponseBodyInstanceDetailsEipInfos>) };
    inline DescribeInstanceDetailsResponseBodyInstanceDetails& setEipInfos(const vector<Models::DescribeInstanceDetailsResponseBodyInstanceDetailsEipInfos> & eipInfos) { DARABONBA_PTR_SET_VALUE(eipInfos_, eipInfos) };
    inline DescribeInstanceDetailsResponseBodyInstanceDetails& setEipInfos(vector<Models::DescribeInstanceDetailsResponseBodyInstanceDetailsEipInfos> && eipInfos) { DARABONBA_PTR_SET_RVALUE(eipInfos_, eipInfos) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeInstanceDetailsResponseBodyInstanceDetails& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // line Field Functions 
    bool hasLine() const { return this->line_ != nullptr;};
    void deleteLine() { this->line_ = nullptr;};
    inline string line() const { DARABONBA_PTR_GET_DEFAULT(line_, "") };
    inline DescribeInstanceDetailsResponseBodyInstanceDetails& setLine(string line) { DARABONBA_PTR_SET_VALUE(line_, line) };


  protected:
    // The IP address information about the Anti-DDoS Proxy instance.
    std::shared_ptr<vector<Models::DescribeInstanceDetailsResponseBodyInstanceDetailsEipInfos>> eipInfos_ = nullptr;
    // The ID of the instance.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The protection line of the instance.
    std::shared_ptr<string> line_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
