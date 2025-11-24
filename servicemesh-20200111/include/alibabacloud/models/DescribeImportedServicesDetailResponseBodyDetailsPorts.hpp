// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMPORTEDSERVICESDETAILRESPONSEBODYDETAILSPORTS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMPORTEDSERVICESDETAILRESPONSEBODYDETAILSPORTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class DescribeImportedServicesDetailResponseBodyDetailsPorts : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeImportedServicesDetailResponseBodyDetailsPorts& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NodePort, nodePort_);
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(Protocol, protocol_);
      DARABONBA_PTR_TO_JSON(TargetPort, targetPort_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeImportedServicesDetailResponseBodyDetailsPorts& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NodePort, nodePort_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
      DARABONBA_PTR_FROM_JSON(TargetPort, targetPort_);
    };
    DescribeImportedServicesDetailResponseBodyDetailsPorts() = default ;
    DescribeImportedServicesDetailResponseBodyDetailsPorts(const DescribeImportedServicesDetailResponseBodyDetailsPorts &) = default ;
    DescribeImportedServicesDetailResponseBodyDetailsPorts(DescribeImportedServicesDetailResponseBodyDetailsPorts &&) = default ;
    DescribeImportedServicesDetailResponseBodyDetailsPorts(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeImportedServicesDetailResponseBodyDetailsPorts() = default ;
    DescribeImportedServicesDetailResponseBodyDetailsPorts& operator=(const DescribeImportedServicesDetailResponseBodyDetailsPorts &) = default ;
    DescribeImportedServicesDetailResponseBodyDetailsPorts& operator=(DescribeImportedServicesDetailResponseBodyDetailsPorts &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->name_ == nullptr
        && return this->nodePort_ == nullptr && return this->port_ == nullptr && return this->protocol_ == nullptr && return this->targetPort_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeImportedServicesDetailResponseBodyDetailsPorts& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // nodePort Field Functions 
    bool hasNodePort() const { return this->nodePort_ != nullptr;};
    void deleteNodePort() { this->nodePort_ = nullptr;};
    inline int32_t nodePort() const { DARABONBA_PTR_GET_DEFAULT(nodePort_, 0) };
    inline DescribeImportedServicesDetailResponseBodyDetailsPorts& setNodePort(int32_t nodePort) { DARABONBA_PTR_SET_VALUE(nodePort_, nodePort) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline int32_t port() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
    inline DescribeImportedServicesDetailResponseBodyDetailsPorts& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string protocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline DescribeImportedServicesDetailResponseBodyDetailsPorts& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


    // targetPort Field Functions 
    bool hasTargetPort() const { return this->targetPort_ != nullptr;};
    void deleteTargetPort() { this->targetPort_ = nullptr;};
    inline int32_t targetPort() const { DARABONBA_PTR_GET_DEFAULT(targetPort_, 0) };
    inline DescribeImportedServicesDetailResponseBodyDetailsPorts& setTargetPort(int32_t targetPort) { DARABONBA_PTR_SET_VALUE(targetPort_, targetPort) };


  protected:
    // The name of a port.
    std::shared_ptr<string> name_ = nullptr;
    // The node port.
    std::shared_ptr<int32_t> nodePort_ = nullptr;
    // The port number.
    std::shared_ptr<int32_t> port_ = nullptr;
    // The protocol of the port.
    std::shared_ptr<string> protocol_ = nullptr;
    // The container port.
    std::shared_ptr<int32_t> targetPort_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
