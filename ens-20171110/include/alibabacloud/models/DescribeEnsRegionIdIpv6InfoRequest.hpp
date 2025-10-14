// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEENSREGIONIDIPV6INFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEENSREGIONIDIPV6INFOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeEnsRegionIdIpv6InfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEnsRegionIdIpv6InfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EnsRegionId, ensRegionId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEnsRegionIdIpv6InfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EnsRegionId, ensRegionId_);
    };
    DescribeEnsRegionIdIpv6InfoRequest() = default ;
    DescribeEnsRegionIdIpv6InfoRequest(const DescribeEnsRegionIdIpv6InfoRequest &) = default ;
    DescribeEnsRegionIdIpv6InfoRequest(DescribeEnsRegionIdIpv6InfoRequest &&) = default ;
    DescribeEnsRegionIdIpv6InfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEnsRegionIdIpv6InfoRequest() = default ;
    DescribeEnsRegionIdIpv6InfoRequest& operator=(const DescribeEnsRegionIdIpv6InfoRequest &) = default ;
    DescribeEnsRegionIdIpv6InfoRequest& operator=(DescribeEnsRegionIdIpv6InfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ensRegionId_ == nullptr; };
    // ensRegionId Field Functions 
    bool hasEnsRegionId() const { return this->ensRegionId_ != nullptr;};
    void deleteEnsRegionId() { this->ensRegionId_ = nullptr;};
    inline string ensRegionId() const { DARABONBA_PTR_GET_DEFAULT(ensRegionId_, "") };
    inline DescribeEnsRegionIdIpv6InfoRequest& setEnsRegionId(string ensRegionId) { DARABONBA_PTR_SET_VALUE(ensRegionId_, ensRegionId) };


  protected:
    // The ID of the node. You can specify only one node ID in a call.
    // 
    // This parameter is required.
    std::shared_ptr<string> ensRegionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
