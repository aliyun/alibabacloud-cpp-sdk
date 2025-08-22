// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINDETAILRESPONSEBODYDOMAINDETAIL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINDETAILRESPONSEBODYDOMAINDETAIL_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDcdnDomainDetailResponseBodyDomainDetailSources.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnDomainDetailResponseBodyDomainDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnDomainDetailResponseBodyDomainDetail& obj) { 
      DARABONBA_PTR_TO_JSON(Cname, cname_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(DomainStatus, domainStatus_);
      DARABONBA_PTR_TO_JSON(FunctionType, functionType_);
      DARABONBA_PTR_TO_JSON(GmtCreated, gmtCreated_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(SSLProtocol, SSLProtocol_);
      DARABONBA_PTR_TO_JSON(SSLPub, SSLPub_);
      DARABONBA_PTR_TO_JSON(Scene, scene_);
      DARABONBA_PTR_TO_JSON(Scope, scope_);
      DARABONBA_PTR_TO_JSON(Sources, sources_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnDomainDetailResponseBodyDomainDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(Cname, cname_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(DomainStatus, domainStatus_);
      DARABONBA_PTR_FROM_JSON(FunctionType, functionType_);
      DARABONBA_PTR_FROM_JSON(GmtCreated, gmtCreated_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SSLProtocol, SSLProtocol_);
      DARABONBA_PTR_FROM_JSON(SSLPub, SSLPub_);
      DARABONBA_PTR_FROM_JSON(Scene, scene_);
      DARABONBA_PTR_FROM_JSON(Scope, scope_);
      DARABONBA_PTR_FROM_JSON(Sources, sources_);
    };
    DescribeDcdnDomainDetailResponseBodyDomainDetail() = default ;
    DescribeDcdnDomainDetailResponseBodyDomainDetail(const DescribeDcdnDomainDetailResponseBodyDomainDetail &) = default ;
    DescribeDcdnDomainDetailResponseBodyDomainDetail(DescribeDcdnDomainDetailResponseBodyDomainDetail &&) = default ;
    DescribeDcdnDomainDetailResponseBodyDomainDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnDomainDetailResponseBodyDomainDetail() = default ;
    DescribeDcdnDomainDetailResponseBodyDomainDetail& operator=(const DescribeDcdnDomainDetailResponseBodyDomainDetail &) = default ;
    DescribeDcdnDomainDetailResponseBodyDomainDetail& operator=(DescribeDcdnDomainDetailResponseBodyDomainDetail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cname_ != nullptr
        && this->description_ != nullptr && this->domainName_ != nullptr && this->domainStatus_ != nullptr && this->functionType_ != nullptr && this->gmtCreated_ != nullptr
        && this->gmtModified_ != nullptr && this->resourceGroupId_ != nullptr && this->SSLProtocol_ != nullptr && this->SSLPub_ != nullptr && this->scene_ != nullptr
        && this->scope_ != nullptr && this->sources_ != nullptr; };
    // cname Field Functions 
    bool hasCname() const { return this->cname_ != nullptr;};
    void deleteCname() { this->cname_ = nullptr;};
    inline string cname() const { DARABONBA_PTR_GET_DEFAULT(cname_, "") };
    inline DescribeDcdnDomainDetailResponseBodyDomainDetail& setCname(string cname) { DARABONBA_PTR_SET_VALUE(cname_, cname) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeDcdnDomainDetailResponseBodyDomainDetail& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeDcdnDomainDetailResponseBodyDomainDetail& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // domainStatus Field Functions 
    bool hasDomainStatus() const { return this->domainStatus_ != nullptr;};
    void deleteDomainStatus() { this->domainStatus_ = nullptr;};
    inline string domainStatus() const { DARABONBA_PTR_GET_DEFAULT(domainStatus_, "") };
    inline DescribeDcdnDomainDetailResponseBodyDomainDetail& setDomainStatus(string domainStatus) { DARABONBA_PTR_SET_VALUE(domainStatus_, domainStatus) };


    // functionType Field Functions 
    bool hasFunctionType() const { return this->functionType_ != nullptr;};
    void deleteFunctionType() { this->functionType_ = nullptr;};
    inline string functionType() const { DARABONBA_PTR_GET_DEFAULT(functionType_, "") };
    inline DescribeDcdnDomainDetailResponseBodyDomainDetail& setFunctionType(string functionType) { DARABONBA_PTR_SET_VALUE(functionType_, functionType) };


    // gmtCreated Field Functions 
    bool hasGmtCreated() const { return this->gmtCreated_ != nullptr;};
    void deleteGmtCreated() { this->gmtCreated_ = nullptr;};
    inline string gmtCreated() const { DARABONBA_PTR_GET_DEFAULT(gmtCreated_, "") };
    inline DescribeDcdnDomainDetailResponseBodyDomainDetail& setGmtCreated(string gmtCreated) { DARABONBA_PTR_SET_VALUE(gmtCreated_, gmtCreated) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline DescribeDcdnDomainDetailResponseBodyDomainDetail& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeDcdnDomainDetailResponseBodyDomainDetail& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // SSLProtocol Field Functions 
    bool hasSSLProtocol() const { return this->SSLProtocol_ != nullptr;};
    void deleteSSLProtocol() { this->SSLProtocol_ = nullptr;};
    inline string SSLProtocol() const { DARABONBA_PTR_GET_DEFAULT(SSLProtocol_, "") };
    inline DescribeDcdnDomainDetailResponseBodyDomainDetail& setSSLProtocol(string SSLProtocol) { DARABONBA_PTR_SET_VALUE(SSLProtocol_, SSLProtocol) };


    // SSLPub Field Functions 
    bool hasSSLPub() const { return this->SSLPub_ != nullptr;};
    void deleteSSLPub() { this->SSLPub_ = nullptr;};
    inline string SSLPub() const { DARABONBA_PTR_GET_DEFAULT(SSLPub_, "") };
    inline DescribeDcdnDomainDetailResponseBodyDomainDetail& setSSLPub(string SSLPub) { DARABONBA_PTR_SET_VALUE(SSLPub_, SSLPub) };


    // scene Field Functions 
    bool hasScene() const { return this->scene_ != nullptr;};
    void deleteScene() { this->scene_ = nullptr;};
    inline string scene() const { DARABONBA_PTR_GET_DEFAULT(scene_, "") };
    inline DescribeDcdnDomainDetailResponseBodyDomainDetail& setScene(string scene) { DARABONBA_PTR_SET_VALUE(scene_, scene) };


    // scope Field Functions 
    bool hasScope() const { return this->scope_ != nullptr;};
    void deleteScope() { this->scope_ = nullptr;};
    inline string scope() const { DARABONBA_PTR_GET_DEFAULT(scope_, "") };
    inline DescribeDcdnDomainDetailResponseBodyDomainDetail& setScope(string scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };


    // sources Field Functions 
    bool hasSources() const { return this->sources_ != nullptr;};
    void deleteSources() { this->sources_ = nullptr;};
    inline const Models::DescribeDcdnDomainDetailResponseBodyDomainDetailSources & sources() const { DARABONBA_PTR_GET_CONST(sources_, Models::DescribeDcdnDomainDetailResponseBodyDomainDetailSources) };
    inline Models::DescribeDcdnDomainDetailResponseBodyDomainDetailSources sources() { DARABONBA_PTR_GET(sources_, Models::DescribeDcdnDomainDetailResponseBodyDomainDetailSources) };
    inline DescribeDcdnDomainDetailResponseBodyDomainDetail& setSources(const Models::DescribeDcdnDomainDetailResponseBodyDomainDetailSources & sources) { DARABONBA_PTR_SET_VALUE(sources_, sources) };
    inline DescribeDcdnDomainDetailResponseBodyDomainDetail& setSources(Models::DescribeDcdnDomainDetailResponseBodyDomainDetailSources && sources) { DARABONBA_PTR_SET_RVALUE(sources_, sources) };


  protected:
    // The CNAME that is assigned to the accelerated domain name. You must add the CNAME record to the system of your Domain Name System (DNS) provider to map the accelerated domain name to the CNAME.
    std::shared_ptr<string> cname_ = nullptr;
    // The information about the Internet content provider (ICP) filing of the domain name.
    std::shared_ptr<string> description_ = nullptr;
    // The accelerated domain name.
    std::shared_ptr<string> domainName_ = nullptr;
    // The status of the accelerated domain name. Valid values:
    // 
    // *   **online**
    // *   **offline**
    // *   **configuring**
    // *   **configure_failed**
    // *   **checking**
    // *   **check_failed**
    std::shared_ptr<string> domainStatus_ = nullptr;
    // Computing service type. Valid values:
    // 
    // *   **routine**
    // *   **image**
    // *   **cloudFunction**
    std::shared_ptr<string> functionType_ = nullptr;
    // The time when the domain name was added.
    std::shared_ptr<string> gmtCreated_ = nullptr;
    // The time when the domain name was last modified.
    std::shared_ptr<string> gmtModified_ = nullptr;
    // The ID of the resource group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // Indicates whether the Security Socket Layer (SSL) certificate is enabled. Valid values:
    // 
    // *   **on**: **enabled**
    // *   **off**: **disabled**
    std::shared_ptr<string> SSLProtocol_ = nullptr;
    // The public key of the certificate if HTTPS is enabled.
    std::shared_ptr<string> SSLPub_ = nullptr;
    // Acceleration scenario. Valid values:
    // 
    // *   **apiscene**: API acceleration.
    // *   **webservicescene**: website acceleration.
    // *   **staticscene**: video, image, and text acceleration.
    // *   **an empty string**: no acceleration scenario is used.
    std::shared_ptr<string> scene_ = nullptr;
    // The acceleration region. Default value: domestic. Valid values:
    // 
    // *   **domestic**: Chinese mainland
    // *   **overseas**: global (excluding the Chinese mainland)
    // *   **global**: global
    std::shared_ptr<string> scope_ = nullptr;
    // The information about the origin server.
    std::shared_ptr<Models::DescribeDcdnDomainDetailResponseBodyDomainDetailSources> sources_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
