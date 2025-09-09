// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGTMINSTANCEADDRESSPOOLRESPONSEBODYADDRSADDR_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGTMINSTANCEADDRESSPOOLRESPONSEBODYADDRSADDR_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeGtmInstanceAddressPoolResponseBodyAddrsAddr : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGtmInstanceAddressPoolResponseBodyAddrsAddr& obj) { 
      DARABONBA_PTR_TO_JSON(AddrId, addrId_);
      DARABONBA_PTR_TO_JSON(AlertStatus, alertStatus_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(CreateTimestamp, createTimestamp_);
      DARABONBA_PTR_TO_JSON(LbaWeight, lbaWeight_);
      DARABONBA_PTR_TO_JSON(Mode, mode_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_TO_JSON(UpdateTimestamp, updateTimestamp_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGtmInstanceAddressPoolResponseBodyAddrsAddr& obj) { 
      DARABONBA_PTR_FROM_JSON(AddrId, addrId_);
      DARABONBA_PTR_FROM_JSON(AlertStatus, alertStatus_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(CreateTimestamp, createTimestamp_);
      DARABONBA_PTR_FROM_JSON(LbaWeight, lbaWeight_);
      DARABONBA_PTR_FROM_JSON(Mode, mode_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_FROM_JSON(UpdateTimestamp, updateTimestamp_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    DescribeGtmInstanceAddressPoolResponseBodyAddrsAddr() = default ;
    DescribeGtmInstanceAddressPoolResponseBodyAddrsAddr(const DescribeGtmInstanceAddressPoolResponseBodyAddrsAddr &) = default ;
    DescribeGtmInstanceAddressPoolResponseBodyAddrsAddr(DescribeGtmInstanceAddressPoolResponseBodyAddrsAddr &&) = default ;
    DescribeGtmInstanceAddressPoolResponseBodyAddrsAddr(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGtmInstanceAddressPoolResponseBodyAddrsAddr() = default ;
    DescribeGtmInstanceAddressPoolResponseBodyAddrsAddr& operator=(const DescribeGtmInstanceAddressPoolResponseBodyAddrsAddr &) = default ;
    DescribeGtmInstanceAddressPoolResponseBodyAddrsAddr& operator=(DescribeGtmInstanceAddressPoolResponseBodyAddrsAddr &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->addrId_ != nullptr
        && this->alertStatus_ != nullptr && this->createTime_ != nullptr && this->createTimestamp_ != nullptr && this->lbaWeight_ != nullptr && this->mode_ != nullptr
        && this->updateTime_ != nullptr && this->updateTimestamp_ != nullptr && this->value_ != nullptr; };
    // addrId Field Functions 
    bool hasAddrId() const { return this->addrId_ != nullptr;};
    void deleteAddrId() { this->addrId_ = nullptr;};
    inline int64_t addrId() const { DARABONBA_PTR_GET_DEFAULT(addrId_, 0L) };
    inline DescribeGtmInstanceAddressPoolResponseBodyAddrsAddr& setAddrId(int64_t addrId) { DARABONBA_PTR_SET_VALUE(addrId_, addrId) };


    // alertStatus Field Functions 
    bool hasAlertStatus() const { return this->alertStatus_ != nullptr;};
    void deleteAlertStatus() { this->alertStatus_ = nullptr;};
    inline string alertStatus() const { DARABONBA_PTR_GET_DEFAULT(alertStatus_, "") };
    inline DescribeGtmInstanceAddressPoolResponseBodyAddrsAddr& setAlertStatus(string alertStatus) { DARABONBA_PTR_SET_VALUE(alertStatus_, alertStatus) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeGtmInstanceAddressPoolResponseBodyAddrsAddr& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // createTimestamp Field Functions 
    bool hasCreateTimestamp() const { return this->createTimestamp_ != nullptr;};
    void deleteCreateTimestamp() { this->createTimestamp_ = nullptr;};
    inline int64_t createTimestamp() const { DARABONBA_PTR_GET_DEFAULT(createTimestamp_, 0L) };
    inline DescribeGtmInstanceAddressPoolResponseBodyAddrsAddr& setCreateTimestamp(int64_t createTimestamp) { DARABONBA_PTR_SET_VALUE(createTimestamp_, createTimestamp) };


    // lbaWeight Field Functions 
    bool hasLbaWeight() const { return this->lbaWeight_ != nullptr;};
    void deleteLbaWeight() { this->lbaWeight_ = nullptr;};
    inline int32_t lbaWeight() const { DARABONBA_PTR_GET_DEFAULT(lbaWeight_, 0) };
    inline DescribeGtmInstanceAddressPoolResponseBodyAddrsAddr& setLbaWeight(int32_t lbaWeight) { DARABONBA_PTR_SET_VALUE(lbaWeight_, lbaWeight) };


    // mode Field Functions 
    bool hasMode() const { return this->mode_ != nullptr;};
    void deleteMode() { this->mode_ = nullptr;};
    inline string mode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
    inline DescribeGtmInstanceAddressPoolResponseBodyAddrsAddr& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline DescribeGtmInstanceAddressPoolResponseBodyAddrsAddr& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    // updateTimestamp Field Functions 
    bool hasUpdateTimestamp() const { return this->updateTimestamp_ != nullptr;};
    void deleteUpdateTimestamp() { this->updateTimestamp_ = nullptr;};
    inline int64_t updateTimestamp() const { DARABONBA_PTR_GET_DEFAULT(updateTimestamp_, 0L) };
    inline DescribeGtmInstanceAddressPoolResponseBodyAddrsAddr& setUpdateTimestamp(int64_t updateTimestamp) { DARABONBA_PTR_SET_VALUE(updateTimestamp_, updateTimestamp) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline DescribeGtmInstanceAddressPoolResponseBodyAddrsAddr& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The ID of the address.
    std::shared_ptr<int64_t> addrId_ = nullptr;
    // Indicates whether health check was enabled for the address. Valid values:
    // 
    // *   **OK**: Normal
    // *   **ALERT**: Alert
    std::shared_ptr<string> alertStatus_ = nullptr;
    // The time when the address pool was created.
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<int64_t> createTimestamp_ = nullptr;
    // The weight of the address.
    std::shared_ptr<int32_t> lbaWeight_ = nullptr;
    // The mode of the address. Valid values:
    // 
    // *   **SMART**: Intelligent return
    // *   **ONLINE**: Always online
    // *   **OFFLINE**: Always offline
    std::shared_ptr<string> mode_ = nullptr;
    // The last time when the address was updated.
    std::shared_ptr<string> updateTime_ = nullptr;
    // A timestamp that indicates the last time when the address was updated.
    std::shared_ptr<int64_t> updateTimestamp_ = nullptr;
    // The address.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
