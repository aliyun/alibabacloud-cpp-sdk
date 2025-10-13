// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APPSTACKINSTANCEENDPOINTS_HPP_
#define ALIBABACLOUD_MODELS_APPSTACKINSTANCEENDPOINTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class AppStackInstanceEndpoints : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AppStackInstanceEndpoints& obj) { 
      DARABONBA_PTR_TO_JSON(Address, address_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Protocol, protocol_);
    };
    friend void from_json(const Darabonba::Json& j, AppStackInstanceEndpoints& obj) { 
      DARABONBA_PTR_FROM_JSON(Address, address_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
    };
    AppStackInstanceEndpoints() = default ;
    AppStackInstanceEndpoints(const AppStackInstanceEndpoints &) = default ;
    AppStackInstanceEndpoints(AppStackInstanceEndpoints &&) = default ;
    AppStackInstanceEndpoints(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AppStackInstanceEndpoints() = default ;
    AppStackInstanceEndpoints& operator=(const AppStackInstanceEndpoints &) = default ;
    AppStackInstanceEndpoints& operator=(AppStackInstanceEndpoints &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->address_ == nullptr
        && return this->name_ == nullptr && return this->protocol_ == nullptr; };
    // address Field Functions 
    bool hasAddress() const { return this->address_ != nullptr;};
    void deleteAddress() { this->address_ = nullptr;};
    inline string address() const { DARABONBA_PTR_GET_DEFAULT(address_, "") };
    inline AppStackInstanceEndpoints& setAddress(string address) { DARABONBA_PTR_SET_VALUE(address_, address) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline AppStackInstanceEndpoints& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string protocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline AppStackInstanceEndpoints& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


  protected:
    std::shared_ptr<string> address_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> protocol_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
