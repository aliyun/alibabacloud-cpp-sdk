// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEADDRESSESRESPONSEBODYADDRESSLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEADDRESSESRESPONSEBODYADDRESSLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeAddressesResponseBodyAddressList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAddressesResponseBodyAddressList& obj) { 
      DARABONBA_PTR_TO_JSON(Address, address_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAddressesResponseBodyAddressList& obj) { 
      DARABONBA_PTR_FROM_JSON(Address, address_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
    };
    DescribeAddressesResponseBodyAddressList() = default ;
    DescribeAddressesResponseBodyAddressList(const DescribeAddressesResponseBodyAddressList &) = default ;
    DescribeAddressesResponseBodyAddressList(DescribeAddressesResponseBodyAddressList &&) = default ;
    DescribeAddressesResponseBodyAddressList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAddressesResponseBodyAddressList() = default ;
    DescribeAddressesResponseBodyAddressList& operator=(const DescribeAddressesResponseBodyAddressList &) = default ;
    DescribeAddressesResponseBodyAddressList& operator=(DescribeAddressesResponseBodyAddressList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->address_ == nullptr
        && return this->gmtModified_ == nullptr && return this->ruleId_ == nullptr; };
    // address Field Functions 
    bool hasAddress() const { return this->address_ != nullptr;};
    void deleteAddress() { this->address_ = nullptr;};
    inline string address() const { DARABONBA_PTR_GET_DEFAULT(address_, "") };
    inline DescribeAddressesResponseBodyAddressList& setAddress(string address) { DARABONBA_PTR_SET_VALUE(address_, address) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline int64_t gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, 0L) };
    inline DescribeAddressesResponseBodyAddressList& setGmtModified(int64_t gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline int64_t ruleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, 0L) };
    inline DescribeAddressesResponseBodyAddressList& setRuleId(int64_t ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


  protected:
    std::shared_ptr<string> address_ = nullptr;
    std::shared_ptr<int64_t> gmtModified_ = nullptr;
    std::shared_ptr<int64_t> ruleId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
