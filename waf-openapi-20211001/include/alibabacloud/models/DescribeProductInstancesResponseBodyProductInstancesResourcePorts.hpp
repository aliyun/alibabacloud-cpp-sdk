// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPRODUCTINSTANCESRESPONSEBODYPRODUCTINSTANCESRESOURCEPORTS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPRODUCTINSTANCESRESPONSEBODYPRODUCTINSTANCESRESOURCEPORTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeProductInstancesResponseBodyProductInstancesResourcePortsCertificates.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeProductInstancesResponseBodyProductInstancesResourcePorts : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeProductInstancesResponseBodyProductInstancesResourcePorts& obj) { 
      DARABONBA_PTR_TO_JSON(Certificates, certificates_);
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(Protocol, protocol_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeProductInstancesResponseBodyProductInstancesResourcePorts& obj) { 
      DARABONBA_PTR_FROM_JSON(Certificates, certificates_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
    };
    DescribeProductInstancesResponseBodyProductInstancesResourcePorts() = default ;
    DescribeProductInstancesResponseBodyProductInstancesResourcePorts(const DescribeProductInstancesResponseBodyProductInstancesResourcePorts &) = default ;
    DescribeProductInstancesResponseBodyProductInstancesResourcePorts(DescribeProductInstancesResponseBodyProductInstancesResourcePorts &&) = default ;
    DescribeProductInstancesResponseBodyProductInstancesResourcePorts(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeProductInstancesResponseBodyProductInstancesResourcePorts() = default ;
    DescribeProductInstancesResponseBodyProductInstancesResourcePorts& operator=(const DescribeProductInstancesResponseBodyProductInstancesResourcePorts &) = default ;
    DescribeProductInstancesResponseBodyProductInstancesResourcePorts& operator=(DescribeProductInstancesResponseBodyProductInstancesResourcePorts &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->certificates_ == nullptr
        && return this->port_ == nullptr && return this->protocol_ == nullptr; };
    // certificates Field Functions 
    bool hasCertificates() const { return this->certificates_ != nullptr;};
    void deleteCertificates() { this->certificates_ = nullptr;};
    inline const vector<Models::DescribeProductInstancesResponseBodyProductInstancesResourcePortsCertificates> & certificates() const { DARABONBA_PTR_GET_CONST(certificates_, vector<Models::DescribeProductInstancesResponseBodyProductInstancesResourcePortsCertificates>) };
    inline vector<Models::DescribeProductInstancesResponseBodyProductInstancesResourcePortsCertificates> certificates() { DARABONBA_PTR_GET(certificates_, vector<Models::DescribeProductInstancesResponseBodyProductInstancesResourcePortsCertificates>) };
    inline DescribeProductInstancesResponseBodyProductInstancesResourcePorts& setCertificates(const vector<Models::DescribeProductInstancesResponseBodyProductInstancesResourcePortsCertificates> & certificates) { DARABONBA_PTR_SET_VALUE(certificates_, certificates) };
    inline DescribeProductInstancesResponseBodyProductInstancesResourcePorts& setCertificates(vector<Models::DescribeProductInstancesResponseBodyProductInstancesResourcePortsCertificates> && certificates) { DARABONBA_PTR_SET_RVALUE(certificates_, certificates) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline int32_t port() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
    inline DescribeProductInstancesResponseBodyProductInstancesResourcePorts& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string protocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline DescribeProductInstancesResponseBodyProductInstancesResourcePorts& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


  protected:
    // The information about the certificates.
    std::shared_ptr<vector<Models::DescribeProductInstancesResponseBodyProductInstancesResourcePortsCertificates>> certificates_ = nullptr;
    // The port number.
    std::shared_ptr<int32_t> port_ = nullptr;
    // The protocol type. Valid values:
    // 
    // *   **http**
    // *   **https**
    std::shared_ptr<string> protocol_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
