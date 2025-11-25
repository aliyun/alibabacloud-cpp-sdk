// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVPCFIREWALLZONERESPONSEBODYZONELIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVPCFIREWALLZONERESPONSEBODYZONELIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeVpcFirewallZoneResponseBodyZoneList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVpcFirewallZoneResponseBodyZoneList& obj) { 
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
      DARABONBA_PTR_TO_JSON(LocalName, localName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVpcFirewallZoneResponseBodyZoneList& obj) { 
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
      DARABONBA_PTR_FROM_JSON(LocalName, localName_);
    };
    DescribeVpcFirewallZoneResponseBodyZoneList() = default ;
    DescribeVpcFirewallZoneResponseBodyZoneList(const DescribeVpcFirewallZoneResponseBodyZoneList &) = default ;
    DescribeVpcFirewallZoneResponseBodyZoneList(DescribeVpcFirewallZoneResponseBodyZoneList &&) = default ;
    DescribeVpcFirewallZoneResponseBodyZoneList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVpcFirewallZoneResponseBodyZoneList() = default ;
    DescribeVpcFirewallZoneResponseBodyZoneList& operator=(const DescribeVpcFirewallZoneResponseBodyZoneList &) = default ;
    DescribeVpcFirewallZoneResponseBodyZoneList& operator=(DescribeVpcFirewallZoneResponseBodyZoneList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->zoneId_ == nullptr
        && return this->localName_ == nullptr; };
    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline DescribeVpcFirewallZoneResponseBodyZoneList& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


    // localName Field Functions 
    bool hasLocalName() const { return this->localName_ != nullptr;};
    void deleteLocalName() { this->localName_ = nullptr;};
    inline string localName() const { DARABONBA_PTR_GET_DEFAULT(localName_, "") };
    inline DescribeVpcFirewallZoneResponseBodyZoneList& setLocalName(string localName) { DARABONBA_PTR_SET_VALUE(localName_, localName) };


  protected:
    std::shared_ptr<string> zoneId_ = nullptr;
    std::shared_ptr<string> localName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
