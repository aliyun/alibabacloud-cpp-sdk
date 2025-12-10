// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PODIP_HPP_
#define ALIBABACLOUD_MODELS_PODIP_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDsw20220101
{
namespace Models
{
  class PodIp : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PodIp& obj) { 
      DARABONBA_PTR_TO_JSON(InterfaceName, interfaceName_);
      DARABONBA_PTR_TO_JSON(Ip, ip_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, PodIp& obj) { 
      DARABONBA_PTR_FROM_JSON(InterfaceName, interfaceName_);
      DARABONBA_PTR_FROM_JSON(Ip, ip_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    PodIp() = default ;
    PodIp(const PodIp &) = default ;
    PodIp(PodIp &&) = default ;
    PodIp(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PodIp() = default ;
    PodIp& operator=(const PodIp &) = default ;
    PodIp& operator=(PodIp &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->interfaceName_ == nullptr
        && return this->ip_ == nullptr && return this->type_ == nullptr; };
    // interfaceName Field Functions 
    bool hasInterfaceName() const { return this->interfaceName_ != nullptr;};
    void deleteInterfaceName() { this->interfaceName_ = nullptr;};
    inline string interfaceName() const { DARABONBA_PTR_GET_DEFAULT(interfaceName_, "") };
    inline PodIp& setInterfaceName(string interfaceName) { DARABONBA_PTR_SET_VALUE(interfaceName_, interfaceName) };


    // ip Field Functions 
    bool hasIp() const { return this->ip_ != nullptr;};
    void deleteIp() { this->ip_ = nullptr;};
    inline string ip() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
    inline PodIp& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline PodIp& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<string> interfaceName_ = nullptr;
    std::shared_ptr<string> ip_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDsw20220101
#endif
