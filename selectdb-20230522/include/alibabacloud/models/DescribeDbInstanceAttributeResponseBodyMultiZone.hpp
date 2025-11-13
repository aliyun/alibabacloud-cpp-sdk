// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCEATTRIBUTERESPONSEBODYMULTIZONE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCEATTRIBUTERESPONSEBODYMULTIZONE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Selectdb20230522
{
namespace Models
{
  class DescribeDBInstanceAttributeResponseBodyMultiZone : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBInstanceAttributeResponseBodyMultiZone& obj) { 
      DARABONBA_PTR_TO_JSON(AvailableIpCount, availableIpCount_);
      DARABONBA_PTR_TO_JSON(Cidr, cidr_);
      DARABONBA_PTR_TO_JSON(VSwitchIds, vSwitchIds_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBInstanceAttributeResponseBodyMultiZone& obj) { 
      DARABONBA_PTR_FROM_JSON(AvailableIpCount, availableIpCount_);
      DARABONBA_PTR_FROM_JSON(Cidr, cidr_);
      DARABONBA_PTR_FROM_JSON(VSwitchIds, vSwitchIds_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    DescribeDBInstanceAttributeResponseBodyMultiZone() = default ;
    DescribeDBInstanceAttributeResponseBodyMultiZone(const DescribeDBInstanceAttributeResponseBodyMultiZone &) = default ;
    DescribeDBInstanceAttributeResponseBodyMultiZone(DescribeDBInstanceAttributeResponseBodyMultiZone &&) = default ;
    DescribeDBInstanceAttributeResponseBodyMultiZone(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBInstanceAttributeResponseBodyMultiZone() = default ;
    DescribeDBInstanceAttributeResponseBodyMultiZone& operator=(const DescribeDBInstanceAttributeResponseBodyMultiZone &) = default ;
    DescribeDBInstanceAttributeResponseBodyMultiZone& operator=(DescribeDBInstanceAttributeResponseBodyMultiZone &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->availableIpCount_ == nullptr
        && return this->cidr_ == nullptr && return this->vSwitchIds_ == nullptr && return this->zoneId_ == nullptr; };
    // availableIpCount Field Functions 
    bool hasAvailableIpCount() const { return this->availableIpCount_ != nullptr;};
    void deleteAvailableIpCount() { this->availableIpCount_ = nullptr;};
    inline int64_t availableIpCount() const { DARABONBA_PTR_GET_DEFAULT(availableIpCount_, 0L) };
    inline DescribeDBInstanceAttributeResponseBodyMultiZone& setAvailableIpCount(int64_t availableIpCount) { DARABONBA_PTR_SET_VALUE(availableIpCount_, availableIpCount) };


    // cidr Field Functions 
    bool hasCidr() const { return this->cidr_ != nullptr;};
    void deleteCidr() { this->cidr_ = nullptr;};
    inline string cidr() const { DARABONBA_PTR_GET_DEFAULT(cidr_, "") };
    inline DescribeDBInstanceAttributeResponseBodyMultiZone& setCidr(string cidr) { DARABONBA_PTR_SET_VALUE(cidr_, cidr) };


    // vSwitchIds Field Functions 
    bool hasVSwitchIds() const { return this->vSwitchIds_ != nullptr;};
    void deleteVSwitchIds() { this->vSwitchIds_ = nullptr;};
    inline const vector<string> & vSwitchIds() const { DARABONBA_PTR_GET_CONST(vSwitchIds_, vector<string>) };
    inline vector<string> vSwitchIds() { DARABONBA_PTR_GET(vSwitchIds_, vector<string>) };
    inline DescribeDBInstanceAttributeResponseBodyMultiZone& setVSwitchIds(const vector<string> & vSwitchIds) { DARABONBA_PTR_SET_VALUE(vSwitchIds_, vSwitchIds) };
    inline DescribeDBInstanceAttributeResponseBodyMultiZone& setVSwitchIds(vector<string> && vSwitchIds) { DARABONBA_PTR_SET_RVALUE(vSwitchIds_, vSwitchIds) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline DescribeDBInstanceAttributeResponseBodyMultiZone& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    std::shared_ptr<int64_t> availableIpCount_ = nullptr;
    std::shared_ptr<string> cidr_ = nullptr;
    std::shared_ptr<vector<string>> vSwitchIds_ = nullptr;
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Selectdb20230522
#endif
