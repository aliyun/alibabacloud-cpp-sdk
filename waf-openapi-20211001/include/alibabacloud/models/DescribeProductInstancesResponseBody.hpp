// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPRODUCTINSTANCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPRODUCTINSTANCESRESPONSEBODY_HPP_
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
  class DescribeProductInstancesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeProductInstancesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ProductInstances, productInstances_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeProductInstancesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ProductInstances, productInstances_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeProductInstancesResponseBody() = default ;
    DescribeProductInstancesResponseBody(const DescribeProductInstancesResponseBody &) = default ;
    DescribeProductInstancesResponseBody(DescribeProductInstancesResponseBody &&) = default ;
    DescribeProductInstancesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeProductInstancesResponseBody() = default ;
    DescribeProductInstancesResponseBody& operator=(const DescribeProductInstancesResponseBody &) = default ;
    DescribeProductInstancesResponseBody& operator=(DescribeProductInstancesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ProductInstances : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ProductInstances& obj) { 
        DARABONBA_PTR_TO_JSON(AccessInstanceId, accessInstanceId_);
        DARABONBA_PTR_TO_JSON(AccessPortAndProtocols, accessPortAndProtocols_);
        DARABONBA_PTR_TO_JSON(AccessPorts, accessPorts_);
        DARABONBA_PTR_TO_JSON(OwnerUserId, ownerUserId_);
        DARABONBA_PTR_TO_JSON(ResourceInstanceAccessStatus, resourceInstanceAccessStatus_);
        DARABONBA_PTR_TO_JSON(ResourceInstanceEdition, resourceInstanceEdition_);
        DARABONBA_PTR_TO_JSON(ResourceInstanceId, resourceInstanceId_);
        DARABONBA_PTR_TO_JSON(ResourceInstanceIp, resourceInstanceIp_);
        DARABONBA_PTR_TO_JSON(ResourceInstanceName, resourceInstanceName_);
        DARABONBA_PTR_TO_JSON(ResourceIp, resourceIp_);
        DARABONBA_PTR_TO_JSON(ResourceName, resourceName_);
        DARABONBA_PTR_TO_JSON(ResourcePorts, resourcePorts_);
        DARABONBA_PTR_TO_JSON(ResourceProduct, resourceProduct_);
        DARABONBA_PTR_TO_JSON(ResourceRegionId, resourceRegionId_);
      };
      friend void from_json(const Darabonba::Json& j, ProductInstances& obj) { 
        DARABONBA_PTR_FROM_JSON(AccessInstanceId, accessInstanceId_);
        DARABONBA_PTR_FROM_JSON(AccessPortAndProtocols, accessPortAndProtocols_);
        DARABONBA_PTR_FROM_JSON(AccessPorts, accessPorts_);
        DARABONBA_PTR_FROM_JSON(OwnerUserId, ownerUserId_);
        DARABONBA_PTR_FROM_JSON(ResourceInstanceAccessStatus, resourceInstanceAccessStatus_);
        DARABONBA_PTR_FROM_JSON(ResourceInstanceEdition, resourceInstanceEdition_);
        DARABONBA_PTR_FROM_JSON(ResourceInstanceId, resourceInstanceId_);
        DARABONBA_PTR_FROM_JSON(ResourceInstanceIp, resourceInstanceIp_);
        DARABONBA_PTR_FROM_JSON(ResourceInstanceName, resourceInstanceName_);
        DARABONBA_PTR_FROM_JSON(ResourceIp, resourceIp_);
        DARABONBA_PTR_FROM_JSON(ResourceName, resourceName_);
        DARABONBA_PTR_FROM_JSON(ResourcePorts, resourcePorts_);
        DARABONBA_PTR_FROM_JSON(ResourceProduct, resourceProduct_);
        DARABONBA_PTR_FROM_JSON(ResourceRegionId, resourceRegionId_);
      };
      ProductInstances() = default ;
      ProductInstances(const ProductInstances &) = default ;
      ProductInstances(ProductInstances &&) = default ;
      ProductInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ProductInstances() = default ;
      ProductInstances& operator=(const ProductInstances &) = default ;
      ProductInstances& operator=(ProductInstances &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ResourcePorts : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ResourcePorts& obj) { 
          DARABONBA_PTR_TO_JSON(Certificates, certificates_);
          DARABONBA_PTR_TO_JSON(Port, port_);
          DARABONBA_PTR_TO_JSON(Protocol, protocol_);
        };
        friend void from_json(const Darabonba::Json& j, ResourcePorts& obj) { 
          DARABONBA_PTR_FROM_JSON(Certificates, certificates_);
          DARABONBA_PTR_FROM_JSON(Port, port_);
          DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
        };
        ResourcePorts() = default ;
        ResourcePorts(const ResourcePorts &) = default ;
        ResourcePorts(ResourcePorts &&) = default ;
        ResourcePorts(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ResourcePorts() = default ;
        ResourcePorts& operator=(const ResourcePorts &) = default ;
        ResourcePorts& operator=(ResourcePorts &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Certificates : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Certificates& obj) { 
            DARABONBA_PTR_TO_JSON(AppliedType, appliedType_);
            DARABONBA_PTR_TO_JSON(CertificateId, certificateId_);
            DARABONBA_PTR_TO_JSON(CertificateName, certificateName_);
            DARABONBA_PTR_TO_JSON(Domain, domain_);
          };
          friend void from_json(const Darabonba::Json& j, Certificates& obj) { 
            DARABONBA_PTR_FROM_JSON(AppliedType, appliedType_);
            DARABONBA_PTR_FROM_JSON(CertificateId, certificateId_);
            DARABONBA_PTR_FROM_JSON(CertificateName, certificateName_);
            DARABONBA_PTR_FROM_JSON(Domain, domain_);
          };
          Certificates() = default ;
          Certificates(const Certificates &) = default ;
          Certificates(Certificates &&) = default ;
          Certificates(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Certificates() = default ;
          Certificates& operator=(const Certificates &) = default ;
          Certificates& operator=(Certificates &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->appliedType_ == nullptr
        && this->certificateId_ == nullptr && this->certificateName_ == nullptr && this->domain_ == nullptr; };
          // appliedType Field Functions 
          bool hasAppliedType() const { return this->appliedType_ != nullptr;};
          void deleteAppliedType() { this->appliedType_ = nullptr;};
          inline string getAppliedType() const { DARABONBA_PTR_GET_DEFAULT(appliedType_, "") };
          inline Certificates& setAppliedType(string appliedType) { DARABONBA_PTR_SET_VALUE(appliedType_, appliedType) };


          // certificateId Field Functions 
          bool hasCertificateId() const { return this->certificateId_ != nullptr;};
          void deleteCertificateId() { this->certificateId_ = nullptr;};
          inline string getCertificateId() const { DARABONBA_PTR_GET_DEFAULT(certificateId_, "") };
          inline Certificates& setCertificateId(string certificateId) { DARABONBA_PTR_SET_VALUE(certificateId_, certificateId) };


          // certificateName Field Functions 
          bool hasCertificateName() const { return this->certificateName_ != nullptr;};
          void deleteCertificateName() { this->certificateName_ = nullptr;};
          inline string getCertificateName() const { DARABONBA_PTR_GET_DEFAULT(certificateName_, "") };
          inline Certificates& setCertificateName(string certificateName) { DARABONBA_PTR_SET_VALUE(certificateName_, certificateName) };


          // domain Field Functions 
          bool hasDomain() const { return this->domain_ != nullptr;};
          void deleteDomain() { this->domain_ = nullptr;};
          inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
          inline Certificates& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


        protected:
          shared_ptr<string> appliedType_ {};
          // The ID of the certificate.
          shared_ptr<string> certificateId_ {};
          // The name of the certificate.
          shared_ptr<string> certificateName_ {};
          shared_ptr<string> domain_ {};
        };

        virtual bool empty() const override { return this->certificates_ == nullptr
        && this->port_ == nullptr && this->protocol_ == nullptr; };
        // certificates Field Functions 
        bool hasCertificates() const { return this->certificates_ != nullptr;};
        void deleteCertificates() { this->certificates_ = nullptr;};
        inline const vector<ResourcePorts::Certificates> & getCertificates() const { DARABONBA_PTR_GET_CONST(certificates_, vector<ResourcePorts::Certificates>) };
        inline vector<ResourcePorts::Certificates> getCertificates() { DARABONBA_PTR_GET(certificates_, vector<ResourcePorts::Certificates>) };
        inline ResourcePorts& setCertificates(const vector<ResourcePorts::Certificates> & certificates) { DARABONBA_PTR_SET_VALUE(certificates_, certificates) };
        inline ResourcePorts& setCertificates(vector<ResourcePorts::Certificates> && certificates) { DARABONBA_PTR_SET_RVALUE(certificates_, certificates) };


        // port Field Functions 
        bool hasPort() const { return this->port_ != nullptr;};
        void deletePort() { this->port_ = nullptr;};
        inline int32_t getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
        inline ResourcePorts& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


        // protocol Field Functions 
        bool hasProtocol() const { return this->protocol_ != nullptr;};
        void deleteProtocol() { this->protocol_ = nullptr;};
        inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
        inline ResourcePorts& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


      protected:
        // The information about the certificates.
        shared_ptr<vector<ResourcePorts::Certificates>> certificates_ {};
        // The port number.
        shared_ptr<int32_t> port_ {};
        // The protocol type. Valid values:
        // 
        // *   **http**
        // *   **https**
        shared_ptr<string> protocol_ {};
      };

      class AccessPortAndProtocols : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AccessPortAndProtocols& obj) { 
          DARABONBA_PTR_TO_JSON(CertificateIds, certificateIds_);
          DARABONBA_PTR_TO_JSON(Port, port_);
          DARABONBA_PTR_TO_JSON(Protocol, protocol_);
        };
        friend void from_json(const Darabonba::Json& j, AccessPortAndProtocols& obj) { 
          DARABONBA_PTR_FROM_JSON(CertificateIds, certificateIds_);
          DARABONBA_PTR_FROM_JSON(Port, port_);
          DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
        };
        AccessPortAndProtocols() = default ;
        AccessPortAndProtocols(const AccessPortAndProtocols &) = default ;
        AccessPortAndProtocols(AccessPortAndProtocols &&) = default ;
        AccessPortAndProtocols(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AccessPortAndProtocols() = default ;
        AccessPortAndProtocols& operator=(const AccessPortAndProtocols &) = default ;
        AccessPortAndProtocols& operator=(AccessPortAndProtocols &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->certificateIds_ == nullptr
        && this->port_ == nullptr && this->protocol_ == nullptr; };
        // certificateIds Field Functions 
        bool hasCertificateIds() const { return this->certificateIds_ != nullptr;};
        void deleteCertificateIds() { this->certificateIds_ = nullptr;};
        inline const vector<string> & getCertificateIds() const { DARABONBA_PTR_GET_CONST(certificateIds_, vector<string>) };
        inline vector<string> getCertificateIds() { DARABONBA_PTR_GET(certificateIds_, vector<string>) };
        inline AccessPortAndProtocols& setCertificateIds(const vector<string> & certificateIds) { DARABONBA_PTR_SET_VALUE(certificateIds_, certificateIds) };
        inline AccessPortAndProtocols& setCertificateIds(vector<string> && certificateIds) { DARABONBA_PTR_SET_RVALUE(certificateIds_, certificateIds) };


        // port Field Functions 
        bool hasPort() const { return this->port_ != nullptr;};
        void deletePort() { this->port_ = nullptr;};
        inline int32_t getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
        inline AccessPortAndProtocols& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


        // protocol Field Functions 
        bool hasProtocol() const { return this->protocol_ != nullptr;};
        void deleteProtocol() { this->protocol_ = nullptr;};
        inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
        inline AccessPortAndProtocols& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


      protected:
        shared_ptr<vector<string>> certificateIds_ {};
        shared_ptr<int32_t> port_ {};
        shared_ptr<string> protocol_ {};
      };

      virtual bool empty() const override { return this->accessInstanceId_ == nullptr
        && this->accessPortAndProtocols_ == nullptr && this->accessPorts_ == nullptr && this->ownerUserId_ == nullptr && this->resourceInstanceAccessStatus_ == nullptr && this->resourceInstanceEdition_ == nullptr
        && this->resourceInstanceId_ == nullptr && this->resourceInstanceIp_ == nullptr && this->resourceInstanceName_ == nullptr && this->resourceIp_ == nullptr && this->resourceName_ == nullptr
        && this->resourcePorts_ == nullptr && this->resourceProduct_ == nullptr && this->resourceRegionId_ == nullptr; };
      // accessInstanceId Field Functions 
      bool hasAccessInstanceId() const { return this->accessInstanceId_ != nullptr;};
      void deleteAccessInstanceId() { this->accessInstanceId_ = nullptr;};
      inline string getAccessInstanceId() const { DARABONBA_PTR_GET_DEFAULT(accessInstanceId_, "") };
      inline ProductInstances& setAccessInstanceId(string accessInstanceId) { DARABONBA_PTR_SET_VALUE(accessInstanceId_, accessInstanceId) };


      // accessPortAndProtocols Field Functions 
      bool hasAccessPortAndProtocols() const { return this->accessPortAndProtocols_ != nullptr;};
      void deleteAccessPortAndProtocols() { this->accessPortAndProtocols_ = nullptr;};
      inline const vector<ProductInstances::AccessPortAndProtocols> & getAccessPortAndProtocols() const { DARABONBA_PTR_GET_CONST(accessPortAndProtocols_, vector<ProductInstances::AccessPortAndProtocols>) };
      inline vector<ProductInstances::AccessPortAndProtocols> getAccessPortAndProtocols() { DARABONBA_PTR_GET(accessPortAndProtocols_, vector<ProductInstances::AccessPortAndProtocols>) };
      inline ProductInstances& setAccessPortAndProtocols(const vector<ProductInstances::AccessPortAndProtocols> & accessPortAndProtocols) { DARABONBA_PTR_SET_VALUE(accessPortAndProtocols_, accessPortAndProtocols) };
      inline ProductInstances& setAccessPortAndProtocols(vector<ProductInstances::AccessPortAndProtocols> && accessPortAndProtocols) { DARABONBA_PTR_SET_RVALUE(accessPortAndProtocols_, accessPortAndProtocols) };


      // accessPorts Field Functions 
      bool hasAccessPorts() const { return this->accessPorts_ != nullptr;};
      void deleteAccessPorts() { this->accessPorts_ = nullptr;};
      inline const vector<int32_t> & getAccessPorts() const { DARABONBA_PTR_GET_CONST(accessPorts_, vector<int32_t>) };
      inline vector<int32_t> getAccessPorts() { DARABONBA_PTR_GET(accessPorts_, vector<int32_t>) };
      inline ProductInstances& setAccessPorts(const vector<int32_t> & accessPorts) { DARABONBA_PTR_SET_VALUE(accessPorts_, accessPorts) };
      inline ProductInstances& setAccessPorts(vector<int32_t> && accessPorts) { DARABONBA_PTR_SET_RVALUE(accessPorts_, accessPorts) };


      // ownerUserId Field Functions 
      bool hasOwnerUserId() const { return this->ownerUserId_ != nullptr;};
      void deleteOwnerUserId() { this->ownerUserId_ = nullptr;};
      inline string getOwnerUserId() const { DARABONBA_PTR_GET_DEFAULT(ownerUserId_, "") };
      inline ProductInstances& setOwnerUserId(string ownerUserId) { DARABONBA_PTR_SET_VALUE(ownerUserId_, ownerUserId) };


      // resourceInstanceAccessStatus Field Functions 
      bool hasResourceInstanceAccessStatus() const { return this->resourceInstanceAccessStatus_ != nullptr;};
      void deleteResourceInstanceAccessStatus() { this->resourceInstanceAccessStatus_ = nullptr;};
      inline string getResourceInstanceAccessStatus() const { DARABONBA_PTR_GET_DEFAULT(resourceInstanceAccessStatus_, "") };
      inline ProductInstances& setResourceInstanceAccessStatus(string resourceInstanceAccessStatus) { DARABONBA_PTR_SET_VALUE(resourceInstanceAccessStatus_, resourceInstanceAccessStatus) };


      // resourceInstanceEdition Field Functions 
      bool hasResourceInstanceEdition() const { return this->resourceInstanceEdition_ != nullptr;};
      void deleteResourceInstanceEdition() { this->resourceInstanceEdition_ = nullptr;};
      inline string getResourceInstanceEdition() const { DARABONBA_PTR_GET_DEFAULT(resourceInstanceEdition_, "") };
      inline ProductInstances& setResourceInstanceEdition(string resourceInstanceEdition) { DARABONBA_PTR_SET_VALUE(resourceInstanceEdition_, resourceInstanceEdition) };


      // resourceInstanceId Field Functions 
      bool hasResourceInstanceId() const { return this->resourceInstanceId_ != nullptr;};
      void deleteResourceInstanceId() { this->resourceInstanceId_ = nullptr;};
      inline string getResourceInstanceId() const { DARABONBA_PTR_GET_DEFAULT(resourceInstanceId_, "") };
      inline ProductInstances& setResourceInstanceId(string resourceInstanceId) { DARABONBA_PTR_SET_VALUE(resourceInstanceId_, resourceInstanceId) };


      // resourceInstanceIp Field Functions 
      bool hasResourceInstanceIp() const { return this->resourceInstanceIp_ != nullptr;};
      void deleteResourceInstanceIp() { this->resourceInstanceIp_ = nullptr;};
      inline string getResourceInstanceIp() const { DARABONBA_PTR_GET_DEFAULT(resourceInstanceIp_, "") };
      inline ProductInstances& setResourceInstanceIp(string resourceInstanceIp) { DARABONBA_PTR_SET_VALUE(resourceInstanceIp_, resourceInstanceIp) };


      // resourceInstanceName Field Functions 
      bool hasResourceInstanceName() const { return this->resourceInstanceName_ != nullptr;};
      void deleteResourceInstanceName() { this->resourceInstanceName_ = nullptr;};
      inline string getResourceInstanceName() const { DARABONBA_PTR_GET_DEFAULT(resourceInstanceName_, "") };
      inline ProductInstances& setResourceInstanceName(string resourceInstanceName) { DARABONBA_PTR_SET_VALUE(resourceInstanceName_, resourceInstanceName) };


      // resourceIp Field Functions 
      bool hasResourceIp() const { return this->resourceIp_ != nullptr;};
      void deleteResourceIp() { this->resourceIp_ = nullptr;};
      inline string getResourceIp() const { DARABONBA_PTR_GET_DEFAULT(resourceIp_, "") };
      inline ProductInstances& setResourceIp(string resourceIp) { DARABONBA_PTR_SET_VALUE(resourceIp_, resourceIp) };


      // resourceName Field Functions 
      bool hasResourceName() const { return this->resourceName_ != nullptr;};
      void deleteResourceName() { this->resourceName_ = nullptr;};
      inline string getResourceName() const { DARABONBA_PTR_GET_DEFAULT(resourceName_, "") };
      inline ProductInstances& setResourceName(string resourceName) { DARABONBA_PTR_SET_VALUE(resourceName_, resourceName) };


      // resourcePorts Field Functions 
      bool hasResourcePorts() const { return this->resourcePorts_ != nullptr;};
      void deleteResourcePorts() { this->resourcePorts_ = nullptr;};
      inline const vector<ProductInstances::ResourcePorts> & getResourcePorts() const { DARABONBA_PTR_GET_CONST(resourcePorts_, vector<ProductInstances::ResourcePorts>) };
      inline vector<ProductInstances::ResourcePorts> getResourcePorts() { DARABONBA_PTR_GET(resourcePorts_, vector<ProductInstances::ResourcePorts>) };
      inline ProductInstances& setResourcePorts(const vector<ProductInstances::ResourcePorts> & resourcePorts) { DARABONBA_PTR_SET_VALUE(resourcePorts_, resourcePorts) };
      inline ProductInstances& setResourcePorts(vector<ProductInstances::ResourcePorts> && resourcePorts) { DARABONBA_PTR_SET_RVALUE(resourcePorts_, resourcePorts) };


      // resourceProduct Field Functions 
      bool hasResourceProduct() const { return this->resourceProduct_ != nullptr;};
      void deleteResourceProduct() { this->resourceProduct_ = nullptr;};
      inline string getResourceProduct() const { DARABONBA_PTR_GET_DEFAULT(resourceProduct_, "") };
      inline ProductInstances& setResourceProduct(string resourceProduct) { DARABONBA_PTR_SET_VALUE(resourceProduct_, resourceProduct) };


      // resourceRegionId Field Functions 
      bool hasResourceRegionId() const { return this->resourceRegionId_ != nullptr;};
      void deleteResourceRegionId() { this->resourceRegionId_ = nullptr;};
      inline string getResourceRegionId() const { DARABONBA_PTR_GET_DEFAULT(resourceRegionId_, "") };
      inline ProductInstances& setResourceRegionId(string resourceRegionId) { DARABONBA_PTR_SET_VALUE(resourceRegionId_, resourceRegionId) };


    protected:
      shared_ptr<string> accessInstanceId_ {};
      shared_ptr<vector<ProductInstances::AccessPortAndProtocols>> accessPortAndProtocols_ {};
      shared_ptr<vector<int32_t>> accessPorts_ {};
      // The ID of the Alibaba Cloud account to which the resource belongs.
      shared_ptr<string> ownerUserId_ {};
      shared_ptr<string> resourceInstanceAccessStatus_ {};
      shared_ptr<string> resourceInstanceEdition_ {};
      // The ID of the instance.
      shared_ptr<string> resourceInstanceId_ {};
      // The IP address of the instance that is added to WAF.
      shared_ptr<string> resourceInstanceIp_ {};
      // The name of the instance that is added to WAF.
      shared_ptr<string> resourceInstanceName_ {};
      // The public IP address of the instance.
      shared_ptr<string> resourceIp_ {};
      // The name of the instance.
      shared_ptr<string> resourceName_ {};
      // The information about the ports.
      shared_ptr<vector<ProductInstances::ResourcePorts>> resourcePorts_ {};
      // The cloud service to which the instance belongs. Valid values:
      // 
      // *   **clb4**: Layer 4 CLB.
      // *   **clb7**: Layer 7 CLB.
      // *   **ecs**: ECS.
      shared_ptr<string> resourceProduct_ {};
      // The region ID of the instance. Valid values:
      // 
      // *   **cn-chengdu**: China (Chengdu).
      // *   **cn-beijing**: China (Beijing).
      // *   **cn-zhangjiakou**: China (Zhangjiakou).
      // *   **cn-hangzhou**: China (Hangzhou).
      // *   **cn-shanghai**: China (Shanghai).
      // *   **cn-shenzhen**: China (Shenzhen).
      // *   **cn-qingdao**: China (Qingdao).
      // *   **cn-hongkong**: China (Hong Kong).
      // *   **ap-southeast-3**: Malaysia (Kuala Lumpur).
      // *   **ap-southeast-5**: Indonesia (Jakarta).
      shared_ptr<string> resourceRegionId_ {};
    };

    virtual bool empty() const override { return this->productInstances_ == nullptr
        && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // productInstances Field Functions 
    bool hasProductInstances() const { return this->productInstances_ != nullptr;};
    void deleteProductInstances() { this->productInstances_ = nullptr;};
    inline const vector<DescribeProductInstancesResponseBody::ProductInstances> & getProductInstances() const { DARABONBA_PTR_GET_CONST(productInstances_, vector<DescribeProductInstancesResponseBody::ProductInstances>) };
    inline vector<DescribeProductInstancesResponseBody::ProductInstances> getProductInstances() { DARABONBA_PTR_GET(productInstances_, vector<DescribeProductInstancesResponseBody::ProductInstances>) };
    inline DescribeProductInstancesResponseBody& setProductInstances(const vector<DescribeProductInstancesResponseBody::ProductInstances> & productInstances) { DARABONBA_PTR_SET_VALUE(productInstances_, productInstances) };
    inline DescribeProductInstancesResponseBody& setProductInstances(vector<DescribeProductInstancesResponseBody::ProductInstances> && productInstances) { DARABONBA_PTR_SET_RVALUE(productInstances_, productInstances) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeProductInstancesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeProductInstancesResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The information about the instances.
    shared_ptr<vector<DescribeProductInstancesResponseBody::ProductInstances>> productInstances_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
