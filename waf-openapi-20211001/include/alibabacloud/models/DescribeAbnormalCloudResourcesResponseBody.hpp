// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEABNORMALCLOUDRESOURCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEABNORMALCLOUDRESOURCESRESPONSEBODY_HPP_
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
  class DescribeAbnormalCloudResourcesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAbnormalCloudResourcesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AbnormalCloudResources, abnormalCloudResources_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAbnormalCloudResourcesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AbnormalCloudResources, abnormalCloudResources_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeAbnormalCloudResourcesResponseBody() = default ;
    DescribeAbnormalCloudResourcesResponseBody(const DescribeAbnormalCloudResourcesResponseBody &) = default ;
    DescribeAbnormalCloudResourcesResponseBody(DescribeAbnormalCloudResourcesResponseBody &&) = default ;
    DescribeAbnormalCloudResourcesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAbnormalCloudResourcesResponseBody() = default ;
    DescribeAbnormalCloudResourcesResponseBody& operator=(const DescribeAbnormalCloudResourcesResponseBody &) = default ;
    DescribeAbnormalCloudResourcesResponseBody& operator=(DescribeAbnormalCloudResourcesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AbnormalCloudResources : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AbnormalCloudResources& obj) { 
        DARABONBA_PTR_TO_JSON(CloudResourceId, cloudResourceId_);
        DARABONBA_PTR_TO_JSON(Details, details_);
        DARABONBA_PTR_TO_JSON(Reason, reason_);
        DARABONBA_PTR_TO_JSON(ResourceInstanceId, resourceInstanceId_);
        DARABONBA_PTR_TO_JSON(ResourceInstanceName, resourceInstanceName_);
        DARABONBA_PTR_TO_JSON(ResourceInstancePort, resourceInstancePort_);
        DARABONBA_PTR_TO_JSON(ResourceProduct, resourceProduct_);
      };
      friend void from_json(const Darabonba::Json& j, AbnormalCloudResources& obj) { 
        DARABONBA_PTR_FROM_JSON(CloudResourceId, cloudResourceId_);
        DARABONBA_PTR_FROM_JSON(Details, details_);
        DARABONBA_PTR_FROM_JSON(Reason, reason_);
        DARABONBA_PTR_FROM_JSON(ResourceInstanceId, resourceInstanceId_);
        DARABONBA_PTR_FROM_JSON(ResourceInstanceName, resourceInstanceName_);
        DARABONBA_PTR_FROM_JSON(ResourceInstancePort, resourceInstancePort_);
        DARABONBA_PTR_FROM_JSON(ResourceProduct, resourceProduct_);
      };
      AbnormalCloudResources() = default ;
      AbnormalCloudResources(const AbnormalCloudResources &) = default ;
      AbnormalCloudResources(AbnormalCloudResources &&) = default ;
      AbnormalCloudResources(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AbnormalCloudResources() = default ;
      AbnormalCloudResources& operator=(const AbnormalCloudResources &) = default ;
      AbnormalCloudResources& operator=(AbnormalCloudResources &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Details : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Details& obj) { 
          DARABONBA_PTR_TO_JSON(AppliedType, appliedType_);
          DARABONBA_PTR_TO_JSON(CertName, certName_);
          DARABONBA_PTR_TO_JSON(Code, code_);
          DARABONBA_PTR_TO_JSON(CommonName, commonName_);
          DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
          DARABONBA_PTR_TO_JSON(ProductCertId, productCertId_);
          DARABONBA_PTR_TO_JSON(ProductCertName, productCertName_);
          DARABONBA_PTR_TO_JSON(ProductDomainExtension, productDomainExtension_);
        };
        friend void from_json(const Darabonba::Json& j, Details& obj) { 
          DARABONBA_PTR_FROM_JSON(AppliedType, appliedType_);
          DARABONBA_PTR_FROM_JSON(CertName, certName_);
          DARABONBA_PTR_FROM_JSON(Code, code_);
          DARABONBA_PTR_FROM_JSON(CommonName, commonName_);
          DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
          DARABONBA_PTR_FROM_JSON(ProductCertId, productCertId_);
          DARABONBA_PTR_FROM_JSON(ProductCertName, productCertName_);
          DARABONBA_PTR_FROM_JSON(ProductDomainExtension, productDomainExtension_);
        };
        Details() = default ;
        Details(const Details &) = default ;
        Details(Details &&) = default ;
        Details(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Details() = default ;
        Details& operator=(const Details &) = default ;
        Details& operator=(Details &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->appliedType_ == nullptr
        && this->certName_ == nullptr && this->code_ == nullptr && this->commonName_ == nullptr && this->expireTime_ == nullptr && this->productCertId_ == nullptr
        && this->productCertName_ == nullptr && this->productDomainExtension_ == nullptr; };
        // appliedType Field Functions 
        bool hasAppliedType() const { return this->appliedType_ != nullptr;};
        void deleteAppliedType() { this->appliedType_ = nullptr;};
        inline string getAppliedType() const { DARABONBA_PTR_GET_DEFAULT(appliedType_, "") };
        inline Details& setAppliedType(string appliedType) { DARABONBA_PTR_SET_VALUE(appliedType_, appliedType) };


        // certName Field Functions 
        bool hasCertName() const { return this->certName_ != nullptr;};
        void deleteCertName() { this->certName_ = nullptr;};
        inline string getCertName() const { DARABONBA_PTR_GET_DEFAULT(certName_, "") };
        inline Details& setCertName(string certName) { DARABONBA_PTR_SET_VALUE(certName_, certName) };


        // code Field Functions 
        bool hasCode() const { return this->code_ != nullptr;};
        void deleteCode() { this->code_ = nullptr;};
        inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
        inline Details& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


        // commonName Field Functions 
        bool hasCommonName() const { return this->commonName_ != nullptr;};
        void deleteCommonName() { this->commonName_ = nullptr;};
        inline string getCommonName() const { DARABONBA_PTR_GET_DEFAULT(commonName_, "") };
        inline Details& setCommonName(string commonName) { DARABONBA_PTR_SET_VALUE(commonName_, commonName) };


        // expireTime Field Functions 
        bool hasExpireTime() const { return this->expireTime_ != nullptr;};
        void deleteExpireTime() { this->expireTime_ = nullptr;};
        inline int64_t getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, 0L) };
        inline Details& setExpireTime(int64_t expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


        // productCertId Field Functions 
        bool hasProductCertId() const { return this->productCertId_ != nullptr;};
        void deleteProductCertId() { this->productCertId_ = nullptr;};
        inline string getProductCertId() const { DARABONBA_PTR_GET_DEFAULT(productCertId_, "") };
        inline Details& setProductCertId(string productCertId) { DARABONBA_PTR_SET_VALUE(productCertId_, productCertId) };


        // productCertName Field Functions 
        bool hasProductCertName() const { return this->productCertName_ != nullptr;};
        void deleteProductCertName() { this->productCertName_ = nullptr;};
        inline string getProductCertName() const { DARABONBA_PTR_GET_DEFAULT(productCertName_, "") };
        inline Details& setProductCertName(string productCertName) { DARABONBA_PTR_SET_VALUE(productCertName_, productCertName) };


        // productDomainExtension Field Functions 
        bool hasProductDomainExtension() const { return this->productDomainExtension_ != nullptr;};
        void deleteProductDomainExtension() { this->productDomainExtension_ = nullptr;};
        inline string getProductDomainExtension() const { DARABONBA_PTR_GET_DEFAULT(productDomainExtension_, "") };
        inline Details& setProductDomainExtension(string productDomainExtension) { DARABONBA_PTR_SET_VALUE(productDomainExtension_, productDomainExtension) };


      protected:
        shared_ptr<string> appliedType_ {};
        shared_ptr<string> certName_ {};
        shared_ptr<string> code_ {};
        shared_ptr<string> commonName_ {};
        shared_ptr<int64_t> expireTime_ {};
        shared_ptr<string> productCertId_ {};
        shared_ptr<string> productCertName_ {};
        shared_ptr<string> productDomainExtension_ {};
      };

      virtual bool empty() const override { return this->cloudResourceId_ == nullptr
        && this->details_ == nullptr && this->reason_ == nullptr && this->resourceInstanceId_ == nullptr && this->resourceInstanceName_ == nullptr && this->resourceInstancePort_ == nullptr
        && this->resourceProduct_ == nullptr; };
      // cloudResourceId Field Functions 
      bool hasCloudResourceId() const { return this->cloudResourceId_ != nullptr;};
      void deleteCloudResourceId() { this->cloudResourceId_ = nullptr;};
      inline string getCloudResourceId() const { DARABONBA_PTR_GET_DEFAULT(cloudResourceId_, "") };
      inline AbnormalCloudResources& setCloudResourceId(string cloudResourceId) { DARABONBA_PTR_SET_VALUE(cloudResourceId_, cloudResourceId) };


      // details Field Functions 
      bool hasDetails() const { return this->details_ != nullptr;};
      void deleteDetails() { this->details_ = nullptr;};
      inline const vector<AbnormalCloudResources::Details> & getDetails() const { DARABONBA_PTR_GET_CONST(details_, vector<AbnormalCloudResources::Details>) };
      inline vector<AbnormalCloudResources::Details> getDetails() { DARABONBA_PTR_GET(details_, vector<AbnormalCloudResources::Details>) };
      inline AbnormalCloudResources& setDetails(const vector<AbnormalCloudResources::Details> & details) { DARABONBA_PTR_SET_VALUE(details_, details) };
      inline AbnormalCloudResources& setDetails(vector<AbnormalCloudResources::Details> && details) { DARABONBA_PTR_SET_RVALUE(details_, details) };


      // reason Field Functions 
      bool hasReason() const { return this->reason_ != nullptr;};
      void deleteReason() { this->reason_ = nullptr;};
      inline string getReason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
      inline AbnormalCloudResources& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


      // resourceInstanceId Field Functions 
      bool hasResourceInstanceId() const { return this->resourceInstanceId_ != nullptr;};
      void deleteResourceInstanceId() { this->resourceInstanceId_ = nullptr;};
      inline string getResourceInstanceId() const { DARABONBA_PTR_GET_DEFAULT(resourceInstanceId_, "") };
      inline AbnormalCloudResources& setResourceInstanceId(string resourceInstanceId) { DARABONBA_PTR_SET_VALUE(resourceInstanceId_, resourceInstanceId) };


      // resourceInstanceName Field Functions 
      bool hasResourceInstanceName() const { return this->resourceInstanceName_ != nullptr;};
      void deleteResourceInstanceName() { this->resourceInstanceName_ = nullptr;};
      inline string getResourceInstanceName() const { DARABONBA_PTR_GET_DEFAULT(resourceInstanceName_, "") };
      inline AbnormalCloudResources& setResourceInstanceName(string resourceInstanceName) { DARABONBA_PTR_SET_VALUE(resourceInstanceName_, resourceInstanceName) };


      // resourceInstancePort Field Functions 
      bool hasResourceInstancePort() const { return this->resourceInstancePort_ != nullptr;};
      void deleteResourceInstancePort() { this->resourceInstancePort_ = nullptr;};
      inline int32_t getResourceInstancePort() const { DARABONBA_PTR_GET_DEFAULT(resourceInstancePort_, 0) };
      inline AbnormalCloudResources& setResourceInstancePort(int32_t resourceInstancePort) { DARABONBA_PTR_SET_VALUE(resourceInstancePort_, resourceInstancePort) };


      // resourceProduct Field Functions 
      bool hasResourceProduct() const { return this->resourceProduct_ != nullptr;};
      void deleteResourceProduct() { this->resourceProduct_ = nullptr;};
      inline string getResourceProduct() const { DARABONBA_PTR_GET_DEFAULT(resourceProduct_, "") };
      inline AbnormalCloudResources& setResourceProduct(string resourceProduct) { DARABONBA_PTR_SET_VALUE(resourceProduct_, resourceProduct) };


    protected:
      shared_ptr<string> cloudResourceId_ {};
      shared_ptr<vector<AbnormalCloudResources::Details>> details_ {};
      shared_ptr<string> reason_ {};
      shared_ptr<string> resourceInstanceId_ {};
      shared_ptr<string> resourceInstanceName_ {};
      shared_ptr<int32_t> resourceInstancePort_ {};
      shared_ptr<string> resourceProduct_ {};
    };

    virtual bool empty() const override { return this->abnormalCloudResources_ == nullptr
        && this->requestId_ == nullptr; };
    // abnormalCloudResources Field Functions 
    bool hasAbnormalCloudResources() const { return this->abnormalCloudResources_ != nullptr;};
    void deleteAbnormalCloudResources() { this->abnormalCloudResources_ = nullptr;};
    inline const vector<DescribeAbnormalCloudResourcesResponseBody::AbnormalCloudResources> & getAbnormalCloudResources() const { DARABONBA_PTR_GET_CONST(abnormalCloudResources_, vector<DescribeAbnormalCloudResourcesResponseBody::AbnormalCloudResources>) };
    inline vector<DescribeAbnormalCloudResourcesResponseBody::AbnormalCloudResources> getAbnormalCloudResources() { DARABONBA_PTR_GET(abnormalCloudResources_, vector<DescribeAbnormalCloudResourcesResponseBody::AbnormalCloudResources>) };
    inline DescribeAbnormalCloudResourcesResponseBody& setAbnormalCloudResources(const vector<DescribeAbnormalCloudResourcesResponseBody::AbnormalCloudResources> & abnormalCloudResources) { DARABONBA_PTR_SET_VALUE(abnormalCloudResources_, abnormalCloudResources) };
    inline DescribeAbnormalCloudResourcesResponseBody& setAbnormalCloudResources(vector<DescribeAbnormalCloudResourcesResponseBody::AbnormalCloudResources> && abnormalCloudResources) { DARABONBA_PTR_SET_RVALUE(abnormalCloudResources_, abnormalCloudResources) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAbnormalCloudResourcesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<DescribeAbnormalCloudResourcesResponseBody::AbnormalCloudResources>> abnormalCloudResources_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
