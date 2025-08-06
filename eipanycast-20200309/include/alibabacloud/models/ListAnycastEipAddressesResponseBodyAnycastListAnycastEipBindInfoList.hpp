// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTANYCASTEIPADDRESSESRESPONSEBODYANYCASTLISTANYCASTEIPBINDINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTANYCASTEIPADDRESSESRESPONSEBODYANYCASTLISTANYCASTEIPBINDINFOLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eipanycast20200309
{
namespace Models
{
  class ListAnycastEipAddressesResponseBodyAnycastListAnycastEipBindInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAnycastEipAddressesResponseBodyAnycastListAnycastEipBindInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(BindInstanceId, bindInstanceId_);
      DARABONBA_PTR_TO_JSON(BindInstanceRegionId, bindInstanceRegionId_);
      DARABONBA_PTR_TO_JSON(BindInstanceType, bindInstanceType_);
      DARABONBA_PTR_TO_JSON(BindTime, bindTime_);
    };
    friend void from_json(const Darabonba::Json& j, ListAnycastEipAddressesResponseBodyAnycastListAnycastEipBindInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(BindInstanceId, bindInstanceId_);
      DARABONBA_PTR_FROM_JSON(BindInstanceRegionId, bindInstanceRegionId_);
      DARABONBA_PTR_FROM_JSON(BindInstanceType, bindInstanceType_);
      DARABONBA_PTR_FROM_JSON(BindTime, bindTime_);
    };
    ListAnycastEipAddressesResponseBodyAnycastListAnycastEipBindInfoList() = default ;
    ListAnycastEipAddressesResponseBodyAnycastListAnycastEipBindInfoList(const ListAnycastEipAddressesResponseBodyAnycastListAnycastEipBindInfoList &) = default ;
    ListAnycastEipAddressesResponseBodyAnycastListAnycastEipBindInfoList(ListAnycastEipAddressesResponseBodyAnycastListAnycastEipBindInfoList &&) = default ;
    ListAnycastEipAddressesResponseBodyAnycastListAnycastEipBindInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAnycastEipAddressesResponseBodyAnycastListAnycastEipBindInfoList() = default ;
    ListAnycastEipAddressesResponseBodyAnycastListAnycastEipBindInfoList& operator=(const ListAnycastEipAddressesResponseBodyAnycastListAnycastEipBindInfoList &) = default ;
    ListAnycastEipAddressesResponseBodyAnycastListAnycastEipBindInfoList& operator=(ListAnycastEipAddressesResponseBodyAnycastListAnycastEipBindInfoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bindInstanceId_ != nullptr
        && this->bindInstanceRegionId_ != nullptr && this->bindInstanceType_ != nullptr && this->bindTime_ != nullptr; };
    // bindInstanceId Field Functions 
    bool hasBindInstanceId() const { return this->bindInstanceId_ != nullptr;};
    void deleteBindInstanceId() { this->bindInstanceId_ = nullptr;};
    inline string bindInstanceId() const { DARABONBA_PTR_GET_DEFAULT(bindInstanceId_, "") };
    inline ListAnycastEipAddressesResponseBodyAnycastListAnycastEipBindInfoList& setBindInstanceId(string bindInstanceId) { DARABONBA_PTR_SET_VALUE(bindInstanceId_, bindInstanceId) };


    // bindInstanceRegionId Field Functions 
    bool hasBindInstanceRegionId() const { return this->bindInstanceRegionId_ != nullptr;};
    void deleteBindInstanceRegionId() { this->bindInstanceRegionId_ = nullptr;};
    inline string bindInstanceRegionId() const { DARABONBA_PTR_GET_DEFAULT(bindInstanceRegionId_, "") };
    inline ListAnycastEipAddressesResponseBodyAnycastListAnycastEipBindInfoList& setBindInstanceRegionId(string bindInstanceRegionId) { DARABONBA_PTR_SET_VALUE(bindInstanceRegionId_, bindInstanceRegionId) };


    // bindInstanceType Field Functions 
    bool hasBindInstanceType() const { return this->bindInstanceType_ != nullptr;};
    void deleteBindInstanceType() { this->bindInstanceType_ = nullptr;};
    inline string bindInstanceType() const { DARABONBA_PTR_GET_DEFAULT(bindInstanceType_, "") };
    inline ListAnycastEipAddressesResponseBodyAnycastListAnycastEipBindInfoList& setBindInstanceType(string bindInstanceType) { DARABONBA_PTR_SET_VALUE(bindInstanceType_, bindInstanceType) };


    // bindTime Field Functions 
    bool hasBindTime() const { return this->bindTime_ != nullptr;};
    void deleteBindTime() { this->bindTime_ = nullptr;};
    inline string bindTime() const { DARABONBA_PTR_GET_DEFAULT(bindTime_, "") };
    inline ListAnycastEipAddressesResponseBodyAnycastListAnycastEipBindInfoList& setBindTime(string bindTime) { DARABONBA_PTR_SET_VALUE(bindTime_, bindTime) };


  protected:
    // The ID of the cloud resource with which the Anycast EIP is associated.
    std::shared_ptr<string> bindInstanceId_ = nullptr;
    // The ID of the region where the cloud resource is deployed.
    std::shared_ptr<string> bindInstanceRegionId_ = nullptr;
    // The type of cloud resource with which the Anycast EIP is associated.
    // 
    // *   **SlbInstance**: an internal-facing Classic Load Balancer (CLB) instance deployed in a virtual private cloud (VPC). CLB is formerly known as Server Load Balancer (SLB).
    // *   **NetworkInterface**: an elastic network interface (ENI).
    std::shared_ptr<string> bindInstanceType_ = nullptr;
    // The time when the Anycast EIP was associated.
    std::shared_ptr<string> bindTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eipanycast20200309
#endif
