// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCEATTRIBUTERESPONSEBODYINSTANCEATTRIBUTEPORTS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCEATTRIBUTERESPONSEBODYINSTANCEATTRIBUTEPORTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class DescribeInstanceAttributeResponseBodyInstanceAttributePorts : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceAttributeResponseBodyInstanceAttributePorts& obj) { 
      DARABONBA_PTR_TO_JSON(CustomPort, customPort_);
      DARABONBA_PTR_TO_JSON(StandardPort, standardPort_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceAttributeResponseBodyInstanceAttributePorts& obj) { 
      DARABONBA_PTR_FROM_JSON(CustomPort, customPort_);
      DARABONBA_PTR_FROM_JSON(StandardPort, standardPort_);
    };
    DescribeInstanceAttributeResponseBodyInstanceAttributePorts() = default ;
    DescribeInstanceAttributeResponseBodyInstanceAttributePorts(const DescribeInstanceAttributeResponseBodyInstanceAttributePorts &) = default ;
    DescribeInstanceAttributeResponseBodyInstanceAttributePorts(DescribeInstanceAttributeResponseBodyInstanceAttributePorts &&) = default ;
    DescribeInstanceAttributeResponseBodyInstanceAttributePorts(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceAttributeResponseBodyInstanceAttributePorts() = default ;
    DescribeInstanceAttributeResponseBodyInstanceAttributePorts& operator=(const DescribeInstanceAttributeResponseBodyInstanceAttributePorts &) = default ;
    DescribeInstanceAttributeResponseBodyInstanceAttributePorts& operator=(DescribeInstanceAttributeResponseBodyInstanceAttributePorts &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->customPort_ == nullptr
        && return this->standardPort_ == nullptr; };
    // customPort Field Functions 
    bool hasCustomPort() const { return this->customPort_ != nullptr;};
    void deleteCustomPort() { this->customPort_ = nullptr;};
    inline int32_t customPort() const { DARABONBA_PTR_GET_DEFAULT(customPort_, 0) };
    inline DescribeInstanceAttributeResponseBodyInstanceAttributePorts& setCustomPort(int32_t customPort) { DARABONBA_PTR_SET_VALUE(customPort_, customPort) };


    // standardPort Field Functions 
    bool hasStandardPort() const { return this->standardPort_ != nullptr;};
    void deleteStandardPort() { this->standardPort_ = nullptr;};
    inline int32_t standardPort() const { DARABONBA_PTR_GET_DEFAULT(standardPort_, 0) };
    inline DescribeInstanceAttributeResponseBodyInstanceAttributePorts& setStandardPort(int32_t standardPort) { DARABONBA_PTR_SET_VALUE(standardPort_, standardPort) };


  protected:
    // The custom port.
    // 
    // > Only the SSH and RDP ports can be changed. If no custom O\\&M port is specified for the bastion host, the value of StandardPort is returned.
    std::shared_ptr<int32_t> customPort_ = nullptr;
    // The standard port of the bastion host. Valid values:
    // 
    // *   **SSH**: 60022.
    // *   **RDP**: 63389.
    // *   **HTTPS**: 443.
    std::shared_ptr<int32_t> standardPort_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
