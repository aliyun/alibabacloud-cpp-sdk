// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRANSPORTENCRYPTIONINFO_HPP_
#define ALIBABACLOUD_MODELS_TRANSPORTENCRYPTIONINFO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/TransportCertificateInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class TransportEncryptionInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TransportEncryptionInfo& obj) { 
      DARABONBA_PTR_TO_JSON(certificates, certificates_);
      DARABONBA_PTR_TO_JSON(deployError, deployError_);
      DARABONBA_PTR_TO_JSON(deployStatus, deployStatus_);
      DARABONBA_PTR_TO_JSON(http2Enabled, http2Enabled_);
      DARABONBA_PTR_TO_JSON(tlsPolicy, tlsPolicy_);
    };
    friend void from_json(const Darabonba::Json& j, TransportEncryptionInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(certificates, certificates_);
      DARABONBA_PTR_FROM_JSON(deployError, deployError_);
      DARABONBA_PTR_FROM_JSON(deployStatus, deployStatus_);
      DARABONBA_PTR_FROM_JSON(http2Enabled, http2Enabled_);
      DARABONBA_PTR_FROM_JSON(tlsPolicy, tlsPolicy_);
    };
    TransportEncryptionInfo() = default ;
    TransportEncryptionInfo(const TransportEncryptionInfo &) = default ;
    TransportEncryptionInfo(TransportEncryptionInfo &&) = default ;
    TransportEncryptionInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TransportEncryptionInfo() = default ;
    TransportEncryptionInfo& operator=(const TransportEncryptionInfo &) = default ;
    TransportEncryptionInfo& operator=(TransportEncryptionInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->certificates_ == nullptr
        && this->deployError_ == nullptr && this->deployStatus_ == nullptr && this->http2Enabled_ == nullptr && this->tlsPolicy_ == nullptr; };
    // certificates Field Functions 
    bool hasCertificates() const { return this->certificates_ != nullptr;};
    void deleteCertificates() { this->certificates_ = nullptr;};
    inline const vector<TransportCertificateInfo> & getCertificates() const { DARABONBA_PTR_GET_CONST(certificates_, vector<TransportCertificateInfo>) };
    inline vector<TransportCertificateInfo> getCertificates() { DARABONBA_PTR_GET(certificates_, vector<TransportCertificateInfo>) };
    inline TransportEncryptionInfo& setCertificates(const vector<TransportCertificateInfo> & certificates) { DARABONBA_PTR_SET_VALUE(certificates_, certificates) };
    inline TransportEncryptionInfo& setCertificates(vector<TransportCertificateInfo> && certificates) { DARABONBA_PTR_SET_RVALUE(certificates_, certificates) };


    // deployError Field Functions 
    bool hasDeployError() const { return this->deployError_ != nullptr;};
    void deleteDeployError() { this->deployError_ = nullptr;};
    inline string getDeployError() const { DARABONBA_PTR_GET_DEFAULT(deployError_, "") };
    inline TransportEncryptionInfo& setDeployError(string deployError) { DARABONBA_PTR_SET_VALUE(deployError_, deployError) };


    // deployStatus Field Functions 
    bool hasDeployStatus() const { return this->deployStatus_ != nullptr;};
    void deleteDeployStatus() { this->deployStatus_ = nullptr;};
    inline string getDeployStatus() const { DARABONBA_PTR_GET_DEFAULT(deployStatus_, "") };
    inline TransportEncryptionInfo& setDeployStatus(string deployStatus) { DARABONBA_PTR_SET_VALUE(deployStatus_, deployStatus) };


    // http2Enabled Field Functions 
    bool hasHttp2Enabled() const { return this->http2Enabled_ != nullptr;};
    void deleteHttp2Enabled() { this->http2Enabled_ = nullptr;};
    inline bool getHttp2Enabled() const { DARABONBA_PTR_GET_DEFAULT(http2Enabled_, false) };
    inline TransportEncryptionInfo& setHttp2Enabled(bool http2Enabled) { DARABONBA_PTR_SET_VALUE(http2Enabled_, http2Enabled) };


    // tlsPolicy Field Functions 
    bool hasTlsPolicy() const { return this->tlsPolicy_ != nullptr;};
    void deleteTlsPolicy() { this->tlsPolicy_ = nullptr;};
    inline string getTlsPolicy() const { DARABONBA_PTR_GET_DEFAULT(tlsPolicy_, "") };
    inline TransportEncryptionInfo& setTlsPolicy(string tlsPolicy) { DARABONBA_PTR_SET_VALUE(tlsPolicy_, tlsPolicy) };


  protected:
    shared_ptr<vector<TransportCertificateInfo>> certificates_ {};
    shared_ptr<string> deployError_ {};
    shared_ptr<string> deployStatus_ {};
    shared_ptr<bool> http2Enabled_ {};
    shared_ptr<string> tlsPolicy_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
