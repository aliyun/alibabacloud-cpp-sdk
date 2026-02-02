// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEQOSRULESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEQOSRULESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeQosRulesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeQosRulesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(NetworkPackageId, networkPackageId_);
      DARABONBA_PTR_TO_JSON(QosRuleName, qosRuleName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeQosRulesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(NetworkPackageId, networkPackageId_);
      DARABONBA_PTR_FROM_JSON(QosRuleName, qosRuleName_);
    };
    DescribeQosRulesRequest() = default ;
    DescribeQosRulesRequest(const DescribeQosRulesRequest &) = default ;
    DescribeQosRulesRequest(DescribeQosRulesRequest &&) = default ;
    DescribeQosRulesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeQosRulesRequest() = default ;
    DescribeQosRulesRequest& operator=(const DescribeQosRulesRequest &) = default ;
    DescribeQosRulesRequest& operator=(DescribeQosRulesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->networkPackageId_ == nullptr
        && this->qosRuleName_ == nullptr; };
    // networkPackageId Field Functions 
    bool hasNetworkPackageId() const { return this->networkPackageId_ != nullptr;};
    void deleteNetworkPackageId() { this->networkPackageId_ = nullptr;};
    inline string getNetworkPackageId() const { DARABONBA_PTR_GET_DEFAULT(networkPackageId_, "") };
    inline DescribeQosRulesRequest& setNetworkPackageId(string networkPackageId) { DARABONBA_PTR_SET_VALUE(networkPackageId_, networkPackageId) };


    // qosRuleName Field Functions 
    bool hasQosRuleName() const { return this->qosRuleName_ != nullptr;};
    void deleteQosRuleName() { this->qosRuleName_ = nullptr;};
    inline string getQosRuleName() const { DARABONBA_PTR_GET_DEFAULT(qosRuleName_, "") };
    inline DescribeQosRulesRequest& setQosRuleName(string qosRuleName) { DARABONBA_PTR_SET_VALUE(qosRuleName_, qosRuleName) };


  protected:
    // This parameter is required.
    shared_ptr<string> networkPackageId_ {};
    shared_ptr<string> qosRuleName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
