// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DATAINSTANCESVALUE_HPP_
#define ALIBABACLOUD_MODELS_DATAINSTANCESVALUE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/DataInstancesValueListenersValue.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class DataInstancesValue : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DataInstancesValue& obj) { 
      DARABONBA_PTR_TO_JSON(DnsName, dnsName_);
      DARABONBA_PTR_TO_JSON(Listeners, listeners_);
      DARABONBA_PTR_TO_JSON(CreatedBySae, createdBySae_);
    };
    friend void from_json(const Darabonba::Json& j, DataInstancesValue& obj) { 
      DARABONBA_PTR_FROM_JSON(DnsName, dnsName_);
      DARABONBA_PTR_FROM_JSON(Listeners, listeners_);
      DARABONBA_PTR_FROM_JSON(CreatedBySae, createdBySae_);
    };
    DataInstancesValue() = default ;
    DataInstancesValue(const DataInstancesValue &) = default ;
    DataInstancesValue(DataInstancesValue &&) = default ;
    DataInstancesValue(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DataInstancesValue() = default ;
    DataInstancesValue& operator=(const DataInstancesValue &) = default ;
    DataInstancesValue& operator=(DataInstancesValue &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dnsName_ != nullptr
        && this->listeners_ != nullptr && this->createdBySae_ != nullptr; };
    // dnsName Field Functions 
    bool hasDnsName() const { return this->dnsName_ != nullptr;};
    void deleteDnsName() { this->dnsName_ = nullptr;};
    inline string dnsName() const { DARABONBA_PTR_GET_DEFAULT(dnsName_, "") };
    inline DataInstancesValue& setDnsName(string dnsName) { DARABONBA_PTR_SET_VALUE(dnsName_, dnsName) };


    // listeners Field Functions 
    bool hasListeners() const { return this->listeners_ != nullptr;};
    void deleteListeners() { this->listeners_ = nullptr;};
    inline const map<string, DataInstancesValueListenersValue> & listeners() const { DARABONBA_PTR_GET_CONST(listeners_, map<string, DataInstancesValueListenersValue>) };
    inline map<string, DataInstancesValueListenersValue> listeners() { DARABONBA_PTR_GET(listeners_, map<string, DataInstancesValueListenersValue>) };
    inline DataInstancesValue& setListeners(const map<string, DataInstancesValueListenersValue> & listeners) { DARABONBA_PTR_SET_VALUE(listeners_, listeners) };
    inline DataInstancesValue& setListeners(map<string, DataInstancesValueListenersValue> && listeners) { DARABONBA_PTR_SET_RVALUE(listeners_, listeners) };


    // createdBySae Field Functions 
    bool hasCreatedBySae() const { return this->createdBySae_ != nullptr;};
    void deleteCreatedBySae() { this->createdBySae_ = nullptr;};
    inline bool createdBySae() const { DARABONBA_PTR_GET_DEFAULT(createdBySae_, false) };
    inline DataInstancesValue& setCreatedBySae(bool createdBySae) { DARABONBA_PTR_SET_VALUE(createdBySae_, createdBySae) };


  protected:
    // The domain name.
    std::shared_ptr<string> dnsName_ = nullptr;
    // The listeners.
    std::shared_ptr<map<string, DataInstancesValueListenersValue>> listeners_ = nullptr;
    // Indicates whether the instance is created by SAE.
    // 
    // *   **true**: The instance is created by SAE.
    // *   **false**: The existing instance is reused.
    std::shared_ptr<bool> createdBySae_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
