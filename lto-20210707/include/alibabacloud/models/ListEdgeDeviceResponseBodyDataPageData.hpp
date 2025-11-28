// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEDGEDEVICERESPONSEBODYDATAPAGEDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTEDGEDEVICERESPONSEBODYDATAPAGEDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Lto20210707
{
namespace Models
{
  class ListEdgeDeviceResponseBodyDataPageData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEdgeDeviceResponseBodyDataPageData& obj) { 
      DARABONBA_PTR_TO_JSON(DeviceId, deviceId_);
      DARABONBA_PTR_TO_JSON(LastOnchainTime, lastOnchainTime_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(UsedOnchainCount, usedOnchainCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListEdgeDeviceResponseBodyDataPageData& obj) { 
      DARABONBA_PTR_FROM_JSON(DeviceId, deviceId_);
      DARABONBA_PTR_FROM_JSON(LastOnchainTime, lastOnchainTime_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(UsedOnchainCount, usedOnchainCount_);
    };
    ListEdgeDeviceResponseBodyDataPageData() = default ;
    ListEdgeDeviceResponseBodyDataPageData(const ListEdgeDeviceResponseBodyDataPageData &) = default ;
    ListEdgeDeviceResponseBodyDataPageData(ListEdgeDeviceResponseBodyDataPageData &&) = default ;
    ListEdgeDeviceResponseBodyDataPageData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEdgeDeviceResponseBodyDataPageData() = default ;
    ListEdgeDeviceResponseBodyDataPageData& operator=(const ListEdgeDeviceResponseBodyDataPageData &) = default ;
    ListEdgeDeviceResponseBodyDataPageData& operator=(ListEdgeDeviceResponseBodyDataPageData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deviceId_ == nullptr
        && return this->lastOnchainTime_ == nullptr && return this->name_ == nullptr && return this->status_ == nullptr && return this->usedOnchainCount_ == nullptr; };
    // deviceId Field Functions 
    bool hasDeviceId() const { return this->deviceId_ != nullptr;};
    void deleteDeviceId() { this->deviceId_ = nullptr;};
    inline string deviceId() const { DARABONBA_PTR_GET_DEFAULT(deviceId_, "") };
    inline ListEdgeDeviceResponseBodyDataPageData& setDeviceId(string deviceId) { DARABONBA_PTR_SET_VALUE(deviceId_, deviceId) };


    // lastOnchainTime Field Functions 
    bool hasLastOnchainTime() const { return this->lastOnchainTime_ != nullptr;};
    void deleteLastOnchainTime() { this->lastOnchainTime_ = nullptr;};
    inline string lastOnchainTime() const { DARABONBA_PTR_GET_DEFAULT(lastOnchainTime_, "") };
    inline ListEdgeDeviceResponseBodyDataPageData& setLastOnchainTime(string lastOnchainTime) { DARABONBA_PTR_SET_VALUE(lastOnchainTime_, lastOnchainTime) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListEdgeDeviceResponseBodyDataPageData& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListEdgeDeviceResponseBodyDataPageData& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // usedOnchainCount Field Functions 
    bool hasUsedOnchainCount() const { return this->usedOnchainCount_ != nullptr;};
    void deleteUsedOnchainCount() { this->usedOnchainCount_ = nullptr;};
    inline int64_t usedOnchainCount() const { DARABONBA_PTR_GET_DEFAULT(usedOnchainCount_, 0L) };
    inline ListEdgeDeviceResponseBodyDataPageData& setUsedOnchainCount(int64_t usedOnchainCount) { DARABONBA_PTR_SET_VALUE(usedOnchainCount_, usedOnchainCount) };


  protected:
    std::shared_ptr<string> deviceId_ = nullptr;
    std::shared_ptr<string> lastOnchainTime_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<int64_t> usedOnchainCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Lto20210707
#endif
