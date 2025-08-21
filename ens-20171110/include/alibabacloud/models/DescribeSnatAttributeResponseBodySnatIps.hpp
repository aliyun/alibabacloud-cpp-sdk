// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESNATATTRIBUTERESPONSEBODYSNATIPS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESNATATTRIBUTERESPONSEBODYSNATIPS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeSnatAttributeResponseBodySnatIps : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSnatAttributeResponseBodySnatIps& obj) { 
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(Ip, ip_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSnatAttributeResponseBodySnatIps& obj) { 
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(Ip, ip_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeSnatAttributeResponseBodySnatIps() = default ;
    DescribeSnatAttributeResponseBodySnatIps(const DescribeSnatAttributeResponseBodySnatIps &) = default ;
    DescribeSnatAttributeResponseBodySnatIps(DescribeSnatAttributeResponseBodySnatIps &&) = default ;
    DescribeSnatAttributeResponseBodySnatIps(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSnatAttributeResponseBodySnatIps() = default ;
    DescribeSnatAttributeResponseBodySnatIps& operator=(const DescribeSnatAttributeResponseBodySnatIps &) = default ;
    DescribeSnatAttributeResponseBodySnatIps& operator=(DescribeSnatAttributeResponseBodySnatIps &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->creationTime_ != nullptr
        && this->ip_ != nullptr && this->status_ != nullptr; };
    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline DescribeSnatAttributeResponseBodySnatIps& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // ip Field Functions 
    bool hasIp() const { return this->ip_ != nullptr;};
    void deleteIp() { this->ip_ = nullptr;};
    inline string ip() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
    inline DescribeSnatAttributeResponseBodySnatIps& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeSnatAttributeResponseBodySnatIps& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The time when the IP address was created. The time is displayed in UTC.
    std::shared_ptr<string> creationTime_ = nullptr;
    // The IP address.
    std::shared_ptr<string> ip_ = nullptr;
    // The status of the IP address.
    // 
    // *   Running
    // *   Stopping
    // *   Stopped
    // *   Starting
    // *   Releasing
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
