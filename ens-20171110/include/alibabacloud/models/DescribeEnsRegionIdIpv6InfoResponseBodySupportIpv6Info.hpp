// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEENSREGIONIDIPV6INFORESPONSEBODYSUPPORTIPV6INFO_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEENSREGIONIDIPV6INFORESPONSEBODYSUPPORTIPV6INFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeEnsRegionIdIpv6InfoResponseBodySupportIpv6Info : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEnsRegionIdIpv6InfoResponseBodySupportIpv6Info& obj) { 
      DARABONBA_PTR_TO_JSON(EnsRegionId, ensRegionId_);
      DARABONBA_PTR_TO_JSON(SupportIpv6, supportIpv6_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEnsRegionIdIpv6InfoResponseBodySupportIpv6Info& obj) { 
      DARABONBA_PTR_FROM_JSON(EnsRegionId, ensRegionId_);
      DARABONBA_PTR_FROM_JSON(SupportIpv6, supportIpv6_);
    };
    DescribeEnsRegionIdIpv6InfoResponseBodySupportIpv6Info() = default ;
    DescribeEnsRegionIdIpv6InfoResponseBodySupportIpv6Info(const DescribeEnsRegionIdIpv6InfoResponseBodySupportIpv6Info &) = default ;
    DescribeEnsRegionIdIpv6InfoResponseBodySupportIpv6Info(DescribeEnsRegionIdIpv6InfoResponseBodySupportIpv6Info &&) = default ;
    DescribeEnsRegionIdIpv6InfoResponseBodySupportIpv6Info(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEnsRegionIdIpv6InfoResponseBodySupportIpv6Info() = default ;
    DescribeEnsRegionIdIpv6InfoResponseBodySupportIpv6Info& operator=(const DescribeEnsRegionIdIpv6InfoResponseBodySupportIpv6Info &) = default ;
    DescribeEnsRegionIdIpv6InfoResponseBodySupportIpv6Info& operator=(DescribeEnsRegionIdIpv6InfoResponseBodySupportIpv6Info &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ensRegionId_ == nullptr
        && return this->supportIpv6_ == nullptr; };
    // ensRegionId Field Functions 
    bool hasEnsRegionId() const { return this->ensRegionId_ != nullptr;};
    void deleteEnsRegionId() { this->ensRegionId_ = nullptr;};
    inline string ensRegionId() const { DARABONBA_PTR_GET_DEFAULT(ensRegionId_, "") };
    inline DescribeEnsRegionIdIpv6InfoResponseBodySupportIpv6Info& setEnsRegionId(string ensRegionId) { DARABONBA_PTR_SET_VALUE(ensRegionId_, ensRegionId) };


    // supportIpv6 Field Functions 
    bool hasSupportIpv6() const { return this->supportIpv6_ != nullptr;};
    void deleteSupportIpv6() { this->supportIpv6_ = nullptr;};
    inline bool supportIpv6() const { DARABONBA_PTR_GET_DEFAULT(supportIpv6_, false) };
    inline DescribeEnsRegionIdIpv6InfoResponseBodySupportIpv6Info& setSupportIpv6(bool supportIpv6) { DARABONBA_PTR_SET_VALUE(supportIpv6_, supportIpv6) };


  protected:
    // The ID of the node.
    std::shared_ptr<string> ensRegionId_ = nullptr;
    // Specifies whether IPv6 is supported. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> supportIpv6_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
