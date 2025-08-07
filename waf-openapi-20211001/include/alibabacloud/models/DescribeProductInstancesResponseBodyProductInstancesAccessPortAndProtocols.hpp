// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPRODUCTINSTANCESRESPONSEBODYPRODUCTINSTANCESACCESSPORTANDPROTOCOLS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPRODUCTINSTANCESRESPONSEBODYPRODUCTINSTANCESACCESSPORTANDPROTOCOLS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeProductInstancesResponseBodyProductInstancesAccessPortAndProtocols : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeProductInstancesResponseBodyProductInstancesAccessPortAndProtocols& obj) { 
      DARABONBA_PTR_TO_JSON(CertificateIds, certificateIds_);
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(Protocol, protocol_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeProductInstancesResponseBodyProductInstancesAccessPortAndProtocols& obj) { 
      DARABONBA_PTR_FROM_JSON(CertificateIds, certificateIds_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
    };
    DescribeProductInstancesResponseBodyProductInstancesAccessPortAndProtocols() = default ;
    DescribeProductInstancesResponseBodyProductInstancesAccessPortAndProtocols(const DescribeProductInstancesResponseBodyProductInstancesAccessPortAndProtocols &) = default ;
    DescribeProductInstancesResponseBodyProductInstancesAccessPortAndProtocols(DescribeProductInstancesResponseBodyProductInstancesAccessPortAndProtocols &&) = default ;
    DescribeProductInstancesResponseBodyProductInstancesAccessPortAndProtocols(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeProductInstancesResponseBodyProductInstancesAccessPortAndProtocols() = default ;
    DescribeProductInstancesResponseBodyProductInstancesAccessPortAndProtocols& operator=(const DescribeProductInstancesResponseBodyProductInstancesAccessPortAndProtocols &) = default ;
    DescribeProductInstancesResponseBodyProductInstancesAccessPortAndProtocols& operator=(DescribeProductInstancesResponseBodyProductInstancesAccessPortAndProtocols &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->certificateIds_ != nullptr
        && this->port_ != nullptr && this->protocol_ != nullptr; };
    // certificateIds Field Functions 
    bool hasCertificateIds() const { return this->certificateIds_ != nullptr;};
    void deleteCertificateIds() { this->certificateIds_ = nullptr;};
    inline const vector<string> & certificateIds() const { DARABONBA_PTR_GET_CONST(certificateIds_, vector<string>) };
    inline vector<string> certificateIds() { DARABONBA_PTR_GET(certificateIds_, vector<string>) };
    inline DescribeProductInstancesResponseBodyProductInstancesAccessPortAndProtocols& setCertificateIds(const vector<string> & certificateIds) { DARABONBA_PTR_SET_VALUE(certificateIds_, certificateIds) };
    inline DescribeProductInstancesResponseBodyProductInstancesAccessPortAndProtocols& setCertificateIds(vector<string> && certificateIds) { DARABONBA_PTR_SET_RVALUE(certificateIds_, certificateIds) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline int32_t port() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
    inline DescribeProductInstancesResponseBodyProductInstancesAccessPortAndProtocols& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string protocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline DescribeProductInstancesResponseBodyProductInstancesAccessPortAndProtocols& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


  protected:
    std::shared_ptr<vector<string>> certificateIds_ = nullptr;
    std::shared_ptr<int32_t> port_ = nullptr;
    std::shared_ptr<string> protocol_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
