// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLUSTERNETINFORESPONSEBODYITEMSADDRESSPORTSPORTS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLUSTERNETINFORESPONSEBODYITEMSADDRESSPORTSPORTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeClusterNetInfoResponseBodyItemsAddressPortsPorts : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClusterNetInfoResponseBodyItemsAddressPortsPorts& obj) { 
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(Protocol, protocol_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClusterNetInfoResponseBodyItemsAddressPortsPorts& obj) { 
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
    };
    DescribeClusterNetInfoResponseBodyItemsAddressPortsPorts() = default ;
    DescribeClusterNetInfoResponseBodyItemsAddressPortsPorts(const DescribeClusterNetInfoResponseBodyItemsAddressPortsPorts &) = default ;
    DescribeClusterNetInfoResponseBodyItemsAddressPortsPorts(DescribeClusterNetInfoResponseBodyItemsAddressPortsPorts &&) = default ;
    DescribeClusterNetInfoResponseBodyItemsAddressPortsPorts(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClusterNetInfoResponseBodyItemsAddressPortsPorts() = default ;
    DescribeClusterNetInfoResponseBodyItemsAddressPortsPorts& operator=(const DescribeClusterNetInfoResponseBodyItemsAddressPortsPorts &) = default ;
    DescribeClusterNetInfoResponseBodyItemsAddressPortsPorts& operator=(DescribeClusterNetInfoResponseBodyItemsAddressPortsPorts &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->port_ == nullptr
        && return this->protocol_ == nullptr; };
    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline string port() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
    inline DescribeClusterNetInfoResponseBodyItemsAddressPortsPorts& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string protocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline DescribeClusterNetInfoResponseBodyItemsAddressPortsPorts& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


  protected:
    // The port.
    std::shared_ptr<string> port_ = nullptr;
    // The type of the protocol. Valid values:
    // 
    // *   **tcp**
    // *   **http**
    // *   **https**
    // *   **mysql**
    std::shared_ptr<string> protocol_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
