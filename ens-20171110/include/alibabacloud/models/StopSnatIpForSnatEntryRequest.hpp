// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STOPSNATIPFORSNATENTRYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STOPSNATIPFORSNATENTRYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class StopSnatIpForSnatEntryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StopSnatIpForSnatEntryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(SnatEntryId, snatEntryId_);
      DARABONBA_PTR_TO_JSON(SnatIp, snatIp_);
    };
    friend void from_json(const Darabonba::Json& j, StopSnatIpForSnatEntryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(SnatEntryId, snatEntryId_);
      DARABONBA_PTR_FROM_JSON(SnatIp, snatIp_);
    };
    StopSnatIpForSnatEntryRequest() = default ;
    StopSnatIpForSnatEntryRequest(const StopSnatIpForSnatEntryRequest &) = default ;
    StopSnatIpForSnatEntryRequest(StopSnatIpForSnatEntryRequest &&) = default ;
    StopSnatIpForSnatEntryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StopSnatIpForSnatEntryRequest() = default ;
    StopSnatIpForSnatEntryRequest& operator=(const StopSnatIpForSnatEntryRequest &) = default ;
    StopSnatIpForSnatEntryRequest& operator=(StopSnatIpForSnatEntryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->snatEntryId_ == nullptr
        && return this->snatIp_ == nullptr; };
    // snatEntryId Field Functions 
    bool hasSnatEntryId() const { return this->snatEntryId_ != nullptr;};
    void deleteSnatEntryId() { this->snatEntryId_ = nullptr;};
    inline string snatEntryId() const { DARABONBA_PTR_GET_DEFAULT(snatEntryId_, "") };
    inline StopSnatIpForSnatEntryRequest& setSnatEntryId(string snatEntryId) { DARABONBA_PTR_SET_VALUE(snatEntryId_, snatEntryId) };


    // snatIp Field Functions 
    bool hasSnatIp() const { return this->snatIp_ != nullptr;};
    void deleteSnatIp() { this->snatIp_ = nullptr;};
    inline string snatIp() const { DARABONBA_PTR_GET_DEFAULT(snatIp_, "") };
    inline StopSnatIpForSnatEntryRequest& setSnatIp(string snatIp) { DARABONBA_PTR_SET_VALUE(snatIp_, snatIp) };


  protected:
    // The ID of the SNAT entry.
    // 
    // This parameter is required.
    std::shared_ptr<string> snatEntryId_ = nullptr;
    // The EIP specified in the SNAT entry.
    // 
    // This parameter is required.
    std::shared_ptr<string> snatIp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
