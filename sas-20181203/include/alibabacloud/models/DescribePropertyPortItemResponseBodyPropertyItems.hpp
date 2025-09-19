// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPROPERTYPORTITEMRESPONSEBODYPROPERTYITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPROPERTYPORTITEMRESPONSEBODYPROPERTYITEMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribePropertyPortItemResponseBodyPropertyItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePropertyPortItemResponseBodyPropertyItems& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(Proto, proto_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePropertyPortItemResponseBodyPropertyItems& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(Proto, proto_);
    };
    DescribePropertyPortItemResponseBodyPropertyItems() = default ;
    DescribePropertyPortItemResponseBodyPropertyItems(const DescribePropertyPortItemResponseBodyPropertyItems &) = default ;
    DescribePropertyPortItemResponseBodyPropertyItems(DescribePropertyPortItemResponseBodyPropertyItems &&) = default ;
    DescribePropertyPortItemResponseBodyPropertyItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePropertyPortItemResponseBodyPropertyItems() = default ;
    DescribePropertyPortItemResponseBodyPropertyItems& operator=(const DescribePropertyPortItemResponseBodyPropertyItems &) = default ;
    DescribePropertyPortItemResponseBodyPropertyItems& operator=(DescribePropertyPortItemResponseBodyPropertyItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->count_ != nullptr
        && this->port_ != nullptr && this->proto_ != nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline DescribePropertyPortItemResponseBodyPropertyItems& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline string port() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
    inline DescribePropertyPortItemResponseBodyPropertyItems& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // proto Field Functions 
    bool hasProto() const { return this->proto_ != nullptr;};
    void deleteProto() { this->proto_ = nullptr;};
    inline string proto() const { DARABONBA_PTR_GET_DEFAULT(proto_, "") };
    inline DescribePropertyPortItemResponseBodyPropertyItems& setProto(string proto) { DARABONBA_PTR_SET_VALUE(proto_, proto) };


  protected:
    // The number of servers that use the port.
    std::shared_ptr<int32_t> count_ = nullptr;
    // The number of the listening port.
    std::shared_ptr<string> port_ = nullptr;
    // The network protocol of the port.
    std::shared_ptr<string> proto_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
