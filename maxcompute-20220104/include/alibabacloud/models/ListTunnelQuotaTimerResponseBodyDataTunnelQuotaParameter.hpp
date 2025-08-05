// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTUNNELQUOTATIMERRESPONSEBODYDATATUNNELQUOTAPARAMETER_HPP_
#define ALIBABACLOUD_MODELS_LISTTUNNELQUOTATIMERRESPONSEBODYDATATUNNELQUOTAPARAMETER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class ListTunnelQuotaTimerResponseBodyDataTunnelQuotaParameter : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTunnelQuotaTimerResponseBodyDataTunnelQuotaParameter& obj) { 
      DARABONBA_PTR_TO_JSON(elasticReservedSlotNum, elasticReservedSlotNum_);
      DARABONBA_PTR_TO_JSON(slotNum, slotNum_);
    };
    friend void from_json(const Darabonba::Json& j, ListTunnelQuotaTimerResponseBodyDataTunnelQuotaParameter& obj) { 
      DARABONBA_PTR_FROM_JSON(elasticReservedSlotNum, elasticReservedSlotNum_);
      DARABONBA_PTR_FROM_JSON(slotNum, slotNum_);
    };
    ListTunnelQuotaTimerResponseBodyDataTunnelQuotaParameter() = default ;
    ListTunnelQuotaTimerResponseBodyDataTunnelQuotaParameter(const ListTunnelQuotaTimerResponseBodyDataTunnelQuotaParameter &) = default ;
    ListTunnelQuotaTimerResponseBodyDataTunnelQuotaParameter(ListTunnelQuotaTimerResponseBodyDataTunnelQuotaParameter &&) = default ;
    ListTunnelQuotaTimerResponseBodyDataTunnelQuotaParameter(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTunnelQuotaTimerResponseBodyDataTunnelQuotaParameter() = default ;
    ListTunnelQuotaTimerResponseBodyDataTunnelQuotaParameter& operator=(const ListTunnelQuotaTimerResponseBodyDataTunnelQuotaParameter &) = default ;
    ListTunnelQuotaTimerResponseBodyDataTunnelQuotaParameter& operator=(ListTunnelQuotaTimerResponseBodyDataTunnelQuotaParameter &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->elasticReservedSlotNum_ != nullptr
        && this->slotNum_ != nullptr; };
    // elasticReservedSlotNum Field Functions 
    bool hasElasticReservedSlotNum() const { return this->elasticReservedSlotNum_ != nullptr;};
    void deleteElasticReservedSlotNum() { this->elasticReservedSlotNum_ = nullptr;};
    inline int64_t elasticReservedSlotNum() const { DARABONBA_PTR_GET_DEFAULT(elasticReservedSlotNum_, 0L) };
    inline ListTunnelQuotaTimerResponseBodyDataTunnelQuotaParameter& setElasticReservedSlotNum(int64_t elasticReservedSlotNum) { DARABONBA_PTR_SET_VALUE(elasticReservedSlotNum_, elasticReservedSlotNum) };


    // slotNum Field Functions 
    bool hasSlotNum() const { return this->slotNum_ != nullptr;};
    void deleteSlotNum() { this->slotNum_ = nullptr;};
    inline int64_t slotNum() const { DARABONBA_PTR_GET_DEFAULT(slotNum_, 0L) };
    inline ListTunnelQuotaTimerResponseBodyDataTunnelQuotaParameter& setSlotNum(int64_t slotNum) { DARABONBA_PTR_SET_VALUE(slotNum_, slotNum) };


  protected:
    // The number of elastically reserved slots.
    std::shared_ptr<int64_t> elasticReservedSlotNum_ = nullptr;
    // The number of reserved slots.
    std::shared_ptr<int64_t> slotNum_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
