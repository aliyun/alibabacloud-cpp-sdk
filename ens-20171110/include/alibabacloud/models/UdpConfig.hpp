// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UDPCONFIG_HPP_
#define ALIBABACLOUD_MODELS_UDPCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class UdpConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UdpConfig& obj) { 
      DARABONBA_PTR_TO_JSON(HashKey, hashKey_);
      DARABONBA_PTR_TO_JSON(Scheduler, scheduler_);
    };
    friend void from_json(const Darabonba::Json& j, UdpConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(HashKey, hashKey_);
      DARABONBA_PTR_FROM_JSON(Scheduler, scheduler_);
    };
    UdpConfig() = default ;
    UdpConfig(const UdpConfig &) = default ;
    UdpConfig(UdpConfig &&) = default ;
    UdpConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UdpConfig() = default ;
    UdpConfig& operator=(const UdpConfig &) = default ;
    UdpConfig& operator=(UdpConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->hashKey_ == nullptr
        && this->scheduler_ == nullptr; };
    // hashKey Field Functions 
    bool hasHashKey() const { return this->hashKey_ != nullptr;};
    void deleteHashKey() { this->hashKey_ = nullptr;};
    inline string getHashKey() const { DARABONBA_PTR_GET_DEFAULT(hashKey_, "") };
    inline UdpConfig& setHashKey(string hashKey) { DARABONBA_PTR_SET_VALUE(hashKey_, hashKey) };


    // scheduler Field Functions 
    bool hasScheduler() const { return this->scheduler_ != nullptr;};
    void deleteScheduler() { this->scheduler_ = nullptr;};
    inline string getScheduler() const { DARABONBA_PTR_GET_DEFAULT(scheduler_, "") };
    inline UdpConfig& setScheduler(string scheduler) { DARABONBA_PTR_SET_VALUE(scheduler_, scheduler) };


  protected:
    shared_ptr<string> hashKey_ {};
    shared_ptr<string> scheduler_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
