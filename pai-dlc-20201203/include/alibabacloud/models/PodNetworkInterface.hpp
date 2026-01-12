// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PODNETWORKINTERFACE_HPP_
#define ALIBABACLOUD_MODELS_PODNETWORKINTERFACE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDlc20201203
{
namespace Models
{
  class PodNetworkInterface : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PodNetworkInterface& obj) { 
      DARABONBA_PTR_TO_JSON(InterfaceName, interfaceName_);
      DARABONBA_PTR_TO_JSON(Ip, ip_);
    };
    friend void from_json(const Darabonba::Json& j, PodNetworkInterface& obj) { 
      DARABONBA_PTR_FROM_JSON(InterfaceName, interfaceName_);
      DARABONBA_PTR_FROM_JSON(Ip, ip_);
    };
    PodNetworkInterface() = default ;
    PodNetworkInterface(const PodNetworkInterface &) = default ;
    PodNetworkInterface(PodNetworkInterface &&) = default ;
    PodNetworkInterface(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PodNetworkInterface() = default ;
    PodNetworkInterface& operator=(const PodNetworkInterface &) = default ;
    PodNetworkInterface& operator=(PodNetworkInterface &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->interfaceName_ == nullptr
        && this->ip_ == nullptr; };
    // interfaceName Field Functions 
    bool hasInterfaceName() const { return this->interfaceName_ != nullptr;};
    void deleteInterfaceName() { this->interfaceName_ = nullptr;};
    inline string getInterfaceName() const { DARABONBA_PTR_GET_DEFAULT(interfaceName_, "") };
    inline PodNetworkInterface& setInterfaceName(string interfaceName) { DARABONBA_PTR_SET_VALUE(interfaceName_, interfaceName) };


    // ip Field Functions 
    bool hasIp() const { return this->ip_ != nullptr;};
    void deleteIp() { this->ip_ = nullptr;};
    inline string getIp() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
    inline PodNetworkInterface& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


  protected:
    shared_ptr<string> interfaceName_ {};
    shared_ptr<string> ip_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDlc20201203
#endif
