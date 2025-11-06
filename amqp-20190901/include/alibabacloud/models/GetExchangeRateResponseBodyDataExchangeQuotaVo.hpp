// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETEXCHANGERATERESPONSEBODYDATAEXCHANGEQUOTAVO_HPP_
#define ALIBABACLOUD_MODELS_GETEXCHANGERATERESPONSEBODYDATAEXCHANGEQUOTAVO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Amqp20190901
{
namespace Models
{
  class GetExchangeRateResponseBodyDataExchangeQuotaVO : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetExchangeRateResponseBodyDataExchangeQuotaVO& obj) { 
      DARABONBA_PTR_TO_JSON(ExchangeName, exchangeName_);
      DARABONBA_PTR_TO_JSON(InQps, inQps_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(OutQps, outQps_);
      DARABONBA_PTR_TO_JSON(VhostName, vhostName_);
    };
    friend void from_json(const Darabonba::Json& j, GetExchangeRateResponseBodyDataExchangeQuotaVO& obj) { 
      DARABONBA_PTR_FROM_JSON(ExchangeName, exchangeName_);
      DARABONBA_PTR_FROM_JSON(InQps, inQps_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(OutQps, outQps_);
      DARABONBA_PTR_FROM_JSON(VhostName, vhostName_);
    };
    GetExchangeRateResponseBodyDataExchangeQuotaVO() = default ;
    GetExchangeRateResponseBodyDataExchangeQuotaVO(const GetExchangeRateResponseBodyDataExchangeQuotaVO &) = default ;
    GetExchangeRateResponseBodyDataExchangeQuotaVO(GetExchangeRateResponseBodyDataExchangeQuotaVO &&) = default ;
    GetExchangeRateResponseBodyDataExchangeQuotaVO(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetExchangeRateResponseBodyDataExchangeQuotaVO() = default ;
    GetExchangeRateResponseBodyDataExchangeQuotaVO& operator=(const GetExchangeRateResponseBodyDataExchangeQuotaVO &) = default ;
    GetExchangeRateResponseBodyDataExchangeQuotaVO& operator=(GetExchangeRateResponseBodyDataExchangeQuotaVO &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->exchangeName_ == nullptr
        && return this->inQps_ == nullptr && return this->instanceId_ == nullptr && return this->outQps_ == nullptr && return this->vhostName_ == nullptr; };
    // exchangeName Field Functions 
    bool hasExchangeName() const { return this->exchangeName_ != nullptr;};
    void deleteExchangeName() { this->exchangeName_ = nullptr;};
    inline string exchangeName() const { DARABONBA_PTR_GET_DEFAULT(exchangeName_, "") };
    inline GetExchangeRateResponseBodyDataExchangeQuotaVO& setExchangeName(string exchangeName) { DARABONBA_PTR_SET_VALUE(exchangeName_, exchangeName) };


    // inQps Field Functions 
    bool hasInQps() const { return this->inQps_ != nullptr;};
    void deleteInQps() { this->inQps_ = nullptr;};
    inline int64_t inQps() const { DARABONBA_PTR_GET_DEFAULT(inQps_, 0L) };
    inline GetExchangeRateResponseBodyDataExchangeQuotaVO& setInQps(int64_t inQps) { DARABONBA_PTR_SET_VALUE(inQps_, inQps) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetExchangeRateResponseBodyDataExchangeQuotaVO& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // outQps Field Functions 
    bool hasOutQps() const { return this->outQps_ != nullptr;};
    void deleteOutQps() { this->outQps_ = nullptr;};
    inline int64_t outQps() const { DARABONBA_PTR_GET_DEFAULT(outQps_, 0L) };
    inline GetExchangeRateResponseBodyDataExchangeQuotaVO& setOutQps(int64_t outQps) { DARABONBA_PTR_SET_VALUE(outQps_, outQps) };


    // vhostName Field Functions 
    bool hasVhostName() const { return this->vhostName_ != nullptr;};
    void deleteVhostName() { this->vhostName_ = nullptr;};
    inline string vhostName() const { DARABONBA_PTR_GET_DEFAULT(vhostName_, "") };
    inline GetExchangeRateResponseBodyDataExchangeQuotaVO& setVhostName(string vhostName) { DARABONBA_PTR_SET_VALUE(vhostName_, vhostName) };


  protected:
    std::shared_ptr<string> exchangeName_ = nullptr;
    std::shared_ptr<int64_t> inQps_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<int64_t> outQps_ = nullptr;
    std::shared_ptr<string> vhostName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Amqp20190901
#endif
