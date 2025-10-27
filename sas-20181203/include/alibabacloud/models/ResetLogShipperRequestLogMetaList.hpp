// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESETLOGSHIPPERREQUESTLOGMETALIST_HPP_
#define ALIBABACLOUD_MODELS_RESETLOGSHIPPERREQUESTLOGMETALIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ResetLogShipperRequestLogMetaList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ResetLogShipperRequestLogMetaList& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigLogStore, configLogStore_);
      DARABONBA_PTR_TO_JSON(HotTtl, hotTtl_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Ttl, ttl_);
    };
    friend void from_json(const Darabonba::Json& j, ResetLogShipperRequestLogMetaList& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigLogStore, configLogStore_);
      DARABONBA_PTR_FROM_JSON(HotTtl, hotTtl_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Ttl, ttl_);
    };
    ResetLogShipperRequestLogMetaList() = default ;
    ResetLogShipperRequestLogMetaList(const ResetLogShipperRequestLogMetaList &) = default ;
    ResetLogShipperRequestLogMetaList(ResetLogShipperRequestLogMetaList &&) = default ;
    ResetLogShipperRequestLogMetaList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ResetLogShipperRequestLogMetaList() = default ;
    ResetLogShipperRequestLogMetaList& operator=(const ResetLogShipperRequestLogMetaList &) = default ;
    ResetLogShipperRequestLogMetaList& operator=(ResetLogShipperRequestLogMetaList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->configLogStore_ == nullptr
        && return this->hotTtl_ == nullptr && return this->status_ == nullptr && return this->ttl_ == nullptr; };
    // configLogStore Field Functions 
    bool hasConfigLogStore() const { return this->configLogStore_ != nullptr;};
    void deleteConfigLogStore() { this->configLogStore_ = nullptr;};
    inline string configLogStore() const { DARABONBA_PTR_GET_DEFAULT(configLogStore_, "") };
    inline ResetLogShipperRequestLogMetaList& setConfigLogStore(string configLogStore) { DARABONBA_PTR_SET_VALUE(configLogStore_, configLogStore) };


    // hotTtl Field Functions 
    bool hasHotTtl() const { return this->hotTtl_ != nullptr;};
    void deleteHotTtl() { this->hotTtl_ = nullptr;};
    inline int32_t hotTtl() const { DARABONBA_PTR_GET_DEFAULT(hotTtl_, 0) };
    inline ResetLogShipperRequestLogMetaList& setHotTtl(int32_t hotTtl) { DARABONBA_PTR_SET_VALUE(hotTtl_, hotTtl) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ResetLogShipperRequestLogMetaList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // ttl Field Functions 
    bool hasTtl() const { return this->ttl_ != nullptr;};
    void deleteTtl() { this->ttl_ = nullptr;};
    inline int32_t ttl() const { DARABONBA_PTR_GET_DEFAULT(ttl_, 0) };
    inline ResetLogShipperRequestLogMetaList& setTtl(int32_t ttl) { DARABONBA_PTR_SET_VALUE(ttl_, ttl) };


  protected:
    // The Logstore that you want to configure.
    // 
    // >  You can call the [DescribeLogMeta](~~DescribeLogMeta~~) operation to query the Logstore.
    std::shared_ptr<string> configLogStore_ = nullptr;
    // The retention period of hot data in the Logstore.
    // 
    // >  The value of this parameter must be at least 7 and smaller than the log retention period. Unit: days. If you specify this parameter for the Logstore, the global retention period of hot data specified by the HotTtl parameter is overwritten.
    std::shared_ptr<int32_t> hotTtl_ = nullptr;
    // The status of the log analysis feature. Valid values:
    // 
    // *   **disabled**
    // *   **enabled**
    std::shared_ptr<string> status_ = nullptr;
    // The log retention period of the Logstore.
    // 
    // >  If you specify this parameter for the Logstore, the global log retention period specified by the Ttl parameter is overwritten.
    std::shared_ptr<int32_t> ttl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
