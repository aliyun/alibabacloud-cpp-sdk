// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDEFAULTHTTPSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDEFAULTHTTPSREQUEST_HPP_
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
  class ModifyDefaultHttpsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDefaultHttpsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CertId, certId_);
      DARABONBA_PTR_TO_JSON(CipherSuite, cipherSuite_);
      DARABONBA_PTR_TO_JSON(CustomCiphers, customCiphers_);
      DARABONBA_PTR_TO_JSON(EnableTLSv3, enableTLSv3_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
      DARABONBA_PTR_TO_JSON(TLSVersion, TLSVersion_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDefaultHttpsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CertId, certId_);
      DARABONBA_PTR_FROM_JSON(CipherSuite, cipherSuite_);
      DARABONBA_PTR_FROM_JSON(CustomCiphers, customCiphers_);
      DARABONBA_PTR_FROM_JSON(EnableTLSv3, enableTLSv3_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
      DARABONBA_PTR_FROM_JSON(TLSVersion, TLSVersion_);
    };
    ModifyDefaultHttpsRequest() = default ;
    ModifyDefaultHttpsRequest(const ModifyDefaultHttpsRequest &) = default ;
    ModifyDefaultHttpsRequest(ModifyDefaultHttpsRequest &&) = default ;
    ModifyDefaultHttpsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDefaultHttpsRequest() = default ;
    ModifyDefaultHttpsRequest& operator=(const ModifyDefaultHttpsRequest &) = default ;
    ModifyDefaultHttpsRequest& operator=(ModifyDefaultHttpsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->certId_ == nullptr
        && this->cipherSuite_ == nullptr && this->customCiphers_ == nullptr && this->enableTLSv3_ == nullptr && this->instanceId_ == nullptr && this->regionId_ == nullptr
        && this->resourceManagerResourceGroupId_ == nullptr && this->TLSVersion_ == nullptr; };
    // certId Field Functions 
    bool hasCertId() const { return this->certId_ != nullptr;};
    void deleteCertId() { this->certId_ = nullptr;};
    inline string getCertId() const { DARABONBA_PTR_GET_DEFAULT(certId_, "") };
    inline ModifyDefaultHttpsRequest& setCertId(string certId) { DARABONBA_PTR_SET_VALUE(certId_, certId) };


    // cipherSuite Field Functions 
    bool hasCipherSuite() const { return this->cipherSuite_ != nullptr;};
    void deleteCipherSuite() { this->cipherSuite_ = nullptr;};
    inline int32_t getCipherSuite() const { DARABONBA_PTR_GET_DEFAULT(cipherSuite_, 0) };
    inline ModifyDefaultHttpsRequest& setCipherSuite(int32_t cipherSuite) { DARABONBA_PTR_SET_VALUE(cipherSuite_, cipherSuite) };


    // customCiphers Field Functions 
    bool hasCustomCiphers() const { return this->customCiphers_ != nullptr;};
    void deleteCustomCiphers() { this->customCiphers_ = nullptr;};
    inline const vector<string> & getCustomCiphers() const { DARABONBA_PTR_GET_CONST(customCiphers_, vector<string>) };
    inline vector<string> getCustomCiphers() { DARABONBA_PTR_GET(customCiphers_, vector<string>) };
    inline ModifyDefaultHttpsRequest& setCustomCiphers(const vector<string> & customCiphers) { DARABONBA_PTR_SET_VALUE(customCiphers_, customCiphers) };
    inline ModifyDefaultHttpsRequest& setCustomCiphers(vector<string> && customCiphers) { DARABONBA_PTR_SET_RVALUE(customCiphers_, customCiphers) };


    // enableTLSv3 Field Functions 
    bool hasEnableTLSv3() const { return this->enableTLSv3_ != nullptr;};
    void deleteEnableTLSv3() { this->enableTLSv3_ = nullptr;};
    inline bool getEnableTLSv3() const { DARABONBA_PTR_GET_DEFAULT(enableTLSv3_, false) };
    inline ModifyDefaultHttpsRequest& setEnableTLSv3(bool enableTLSv3) { DARABONBA_PTR_SET_VALUE(enableTLSv3_, enableTLSv3) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifyDefaultHttpsRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyDefaultHttpsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceManagerResourceGroupId Field Functions 
    bool hasResourceManagerResourceGroupId() const { return this->resourceManagerResourceGroupId_ != nullptr;};
    void deleteResourceManagerResourceGroupId() { this->resourceManagerResourceGroupId_ = nullptr;};
    inline string getResourceManagerResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceManagerResourceGroupId_, "") };
    inline ModifyDefaultHttpsRequest& setResourceManagerResourceGroupId(string resourceManagerResourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceManagerResourceGroupId_, resourceManagerResourceGroupId) };


    // TLSVersion Field Functions 
    bool hasTLSVersion() const { return this->TLSVersion_ != nullptr;};
    void deleteTLSVersion() { this->TLSVersion_ = nullptr;};
    inline string getTLSVersion() const { DARABONBA_PTR_GET_DEFAULT(TLSVersion_, "") };
    inline ModifyDefaultHttpsRequest& setTLSVersion(string TLSVersion) { DARABONBA_PTR_SET_VALUE(TLSVersion_, TLSVersion) };


  protected:
    // The ID of the certificate.
    // 
    // This parameter is required.
    shared_ptr<string> certId_ {};
    // The type of the cipher suites. Valid values:
    // 
    // *   **1**: all cipher suites.
    // *   **2**: strong cipher suites.
    // *   **99**: custom cipher suites.
    shared_ptr<int32_t> cipherSuite_ {};
    // The custom cipher suites that you want to add. This parameter is available only if you set **CipherSuite** to **99**.
    shared_ptr<vector<string>> customCiphers_ {};
    // Specifies whether to support TLS 1.3. Valid values:
    // 
    // *   **true**
    // *   **false**
    shared_ptr<bool> enableTLSv3_ {};
    // The ID of the Web Application Firewall (WAF) instance.
    // 
    // >  You can call the [DescribeInstance](https://help.aliyun.com/document_detail/433756.html) operation to query the ID of the WAF instance.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The region in which the WAF instance is deployed. Valid values:
    // 
    // *   **cn-hangzhou**: the Chinese mainland.
    // *   **ap-southeast-1**: outside the Chinese mainland.
    shared_ptr<string> regionId_ {};
    // 阿里云资源组ID。
    shared_ptr<string> resourceManagerResourceGroupId_ {};
    // The version of the TLS protocol. Valid values:
    // 
    // *   **tlsv1**
    // *   **tlsv1.1**
    // *   **tlsv1.2**
    // 
    // This parameter is required.
    shared_ptr<string> TLSVersion_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
