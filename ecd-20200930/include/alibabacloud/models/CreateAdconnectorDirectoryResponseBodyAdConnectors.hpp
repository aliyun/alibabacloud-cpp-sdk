// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEADCONNECTORDIRECTORYRESPONSEBODYADCONNECTORS_HPP_
#define ALIBABACLOUD_MODELS_CREATEADCONNECTORDIRECTORYRESPONSEBODYADCONNECTORS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class CreateADConnectorDirectoryResponseBodyAdConnectors : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateADConnectorDirectoryResponseBodyAdConnectors& obj) { 
      DARABONBA_PTR_TO_JSON(Address, address_);
    };
    friend void from_json(const Darabonba::Json& j, CreateADConnectorDirectoryResponseBodyAdConnectors& obj) { 
      DARABONBA_PTR_FROM_JSON(Address, address_);
    };
    CreateADConnectorDirectoryResponseBodyAdConnectors() = default ;
    CreateADConnectorDirectoryResponseBodyAdConnectors(const CreateADConnectorDirectoryResponseBodyAdConnectors &) = default ;
    CreateADConnectorDirectoryResponseBodyAdConnectors(CreateADConnectorDirectoryResponseBodyAdConnectors &&) = default ;
    CreateADConnectorDirectoryResponseBodyAdConnectors(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateADConnectorDirectoryResponseBodyAdConnectors() = default ;
    CreateADConnectorDirectoryResponseBodyAdConnectors& operator=(const CreateADConnectorDirectoryResponseBodyAdConnectors &) = default ;
    CreateADConnectorDirectoryResponseBodyAdConnectors& operator=(CreateADConnectorDirectoryResponseBodyAdConnectors &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->address_ != nullptr; };
    // address Field Functions 
    bool hasAddress() const { return this->address_ != nullptr;};
    void deleteAddress() { this->address_ = nullptr;};
    inline string address() const { DARABONBA_PTR_GET_DEFAULT(address_, "") };
    inline CreateADConnectorDirectoryResponseBodyAdConnectors& setAddress(string address) { DARABONBA_PTR_SET_VALUE(address_, address) };


  protected:
    // The connection address.
    std::shared_ptr<string> address_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
