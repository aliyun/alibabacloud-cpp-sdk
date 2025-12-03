// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETREGIONRESPONSEBODYAVAILABLEZONESOPTIONS_HPP_
#define ALIBABACLOUD_MODELS_GETREGIONRESPONSEBODYAVAILABLEZONESOPTIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DFS20180620
{
namespace Models
{
  class GetRegionResponseBodyAvailableZonesOptions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRegionResponseBodyAvailableZonesOptions& obj) { 
      DARABONBA_PTR_TO_JSON(ProtocolType, protocolType_);
      DARABONBA_PTR_TO_JSON(StorageType, storageType_);
    };
    friend void from_json(const Darabonba::Json& j, GetRegionResponseBodyAvailableZonesOptions& obj) { 
      DARABONBA_PTR_FROM_JSON(ProtocolType, protocolType_);
      DARABONBA_PTR_FROM_JSON(StorageType, storageType_);
    };
    GetRegionResponseBodyAvailableZonesOptions() = default ;
    GetRegionResponseBodyAvailableZonesOptions(const GetRegionResponseBodyAvailableZonesOptions &) = default ;
    GetRegionResponseBodyAvailableZonesOptions(GetRegionResponseBodyAvailableZonesOptions &&) = default ;
    GetRegionResponseBodyAvailableZonesOptions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRegionResponseBodyAvailableZonesOptions() = default ;
    GetRegionResponseBodyAvailableZonesOptions& operator=(const GetRegionResponseBodyAvailableZonesOptions &) = default ;
    GetRegionResponseBodyAvailableZonesOptions& operator=(GetRegionResponseBodyAvailableZonesOptions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->protocolType_ == nullptr
        && return this->storageType_ == nullptr; };
    // protocolType Field Functions 
    bool hasProtocolType() const { return this->protocolType_ != nullptr;};
    void deleteProtocolType() { this->protocolType_ = nullptr;};
    inline string protocolType() const { DARABONBA_PTR_GET_DEFAULT(protocolType_, "") };
    inline GetRegionResponseBodyAvailableZonesOptions& setProtocolType(string protocolType) { DARABONBA_PTR_SET_VALUE(protocolType_, protocolType) };


    // storageType Field Functions 
    bool hasStorageType() const { return this->storageType_ != nullptr;};
    void deleteStorageType() { this->storageType_ = nullptr;};
    inline string storageType() const { DARABONBA_PTR_GET_DEFAULT(storageType_, "") };
    inline GetRegionResponseBodyAvailableZonesOptions& setStorageType(string storageType) { DARABONBA_PTR_SET_VALUE(storageType_, storageType) };


  protected:
    std::shared_ptr<string> protocolType_ = nullptr;
    std::shared_ptr<string> storageType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DFS20180620
#endif
