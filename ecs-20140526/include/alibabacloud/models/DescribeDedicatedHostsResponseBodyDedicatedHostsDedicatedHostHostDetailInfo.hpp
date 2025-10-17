// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDEDICATEDHOSTSRESPONSEBODYDEDICATEDHOSTSDEDICATEDHOSTHOSTDETAILINFO_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDEDICATEDHOSTSRESPONSEBODYDEDICATEDHOSTSDEDICATEDHOSTHOSTDETAILINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostHostDetailInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostHostDetailInfo& obj) { 
      DARABONBA_PTR_TO_JSON(SerialNumber, serialNumber_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostHostDetailInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(SerialNumber, serialNumber_);
    };
    DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostHostDetailInfo() = default ;
    DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostHostDetailInfo(const DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostHostDetailInfo &) = default ;
    DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostHostDetailInfo(DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostHostDetailInfo &&) = default ;
    DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostHostDetailInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostHostDetailInfo() = default ;
    DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostHostDetailInfo& operator=(const DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostHostDetailInfo &) = default ;
    DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostHostDetailInfo& operator=(DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostHostDetailInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->serialNumber_ == nullptr; };
    // serialNumber Field Functions 
    bool hasSerialNumber() const { return this->serialNumber_ != nullptr;};
    void deleteSerialNumber() { this->serialNumber_ = nullptr;};
    inline string serialNumber() const { DARABONBA_PTR_GET_DEFAULT(serialNumber_, "") };
    inline DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostHostDetailInfo& setSerialNumber(string serialNumber) { DARABONBA_PTR_SET_VALUE(serialNumber_, serialNumber) };


  protected:
    // This parameter will be removed in the future. We recommend that you use other parameters to ensure future compatibility.
    std::shared_ptr<string> serialNumber_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
