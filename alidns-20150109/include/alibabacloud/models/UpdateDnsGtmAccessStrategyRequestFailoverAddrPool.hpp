// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDNSGTMACCESSSTRATEGYREQUESTFAILOVERADDRPOOL_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDNSGTMACCESSSTRATEGYREQUESTFAILOVERADDRPOOL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class UpdateDnsGtmAccessStrategyRequestFailoverAddrPool : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateDnsGtmAccessStrategyRequestFailoverAddrPool& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(LbaWeight, lbaWeight_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateDnsGtmAccessStrategyRequestFailoverAddrPool& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(LbaWeight, lbaWeight_);
    };
    UpdateDnsGtmAccessStrategyRequestFailoverAddrPool() = default ;
    UpdateDnsGtmAccessStrategyRequestFailoverAddrPool(const UpdateDnsGtmAccessStrategyRequestFailoverAddrPool &) = default ;
    UpdateDnsGtmAccessStrategyRequestFailoverAddrPool(UpdateDnsGtmAccessStrategyRequestFailoverAddrPool &&) = default ;
    UpdateDnsGtmAccessStrategyRequestFailoverAddrPool(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateDnsGtmAccessStrategyRequestFailoverAddrPool() = default ;
    UpdateDnsGtmAccessStrategyRequestFailoverAddrPool& operator=(const UpdateDnsGtmAccessStrategyRequestFailoverAddrPool &) = default ;
    UpdateDnsGtmAccessStrategyRequestFailoverAddrPool& operator=(UpdateDnsGtmAccessStrategyRequestFailoverAddrPool &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->id_ != nullptr
        && this->lbaWeight_ != nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline UpdateDnsGtmAccessStrategyRequestFailoverAddrPool& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // lbaWeight Field Functions 
    bool hasLbaWeight() const { return this->lbaWeight_ != nullptr;};
    void deleteLbaWeight() { this->lbaWeight_ = nullptr;};
    inline int32_t lbaWeight() const { DARABONBA_PTR_GET_DEFAULT(lbaWeight_, 0) };
    inline UpdateDnsGtmAccessStrategyRequestFailoverAddrPool& setLbaWeight(int32_t lbaWeight) { DARABONBA_PTR_SET_VALUE(lbaWeight_, lbaWeight) };


  protected:
    // The ID of the address pool in the secondary address pool set.
    std::shared_ptr<string> id_ = nullptr;
    // The weight of the address pool in the secondary address pool set.
    std::shared_ptr<int32_t> lbaWeight_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
