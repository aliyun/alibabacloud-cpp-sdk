// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCERTIFICATESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTCERTIFICATESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cas20200407
{
namespace Models
{
  class ListCertificatesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCertificatesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CertificateSource, certificateSource_);
      DARABONBA_PTR_TO_JSON(CertificateStatus, certificateStatus_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Keyword, keyword_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ShowSize, showSize_);
    };
    friend void from_json(const Darabonba::Json& j, ListCertificatesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CertificateSource, certificateSource_);
      DARABONBA_PTR_FROM_JSON(CertificateStatus, certificateStatus_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Keyword, keyword_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ShowSize, showSize_);
    };
    ListCertificatesRequest() = default ;
    ListCertificatesRequest(const ListCertificatesRequest &) = default ;
    ListCertificatesRequest(ListCertificatesRequest &&) = default ;
    ListCertificatesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCertificatesRequest() = default ;
    ListCertificatesRequest& operator=(const ListCertificatesRequest &) = default ;
    ListCertificatesRequest& operator=(ListCertificatesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->certificateSource_ == nullptr
        && this->certificateStatus_ == nullptr && this->currentPage_ == nullptr && this->instanceId_ == nullptr && this->keyword_ == nullptr && this->resourceGroupId_ == nullptr
        && this->showSize_ == nullptr; };
    // certificateSource Field Functions 
    bool hasCertificateSource() const { return this->certificateSource_ != nullptr;};
    void deleteCertificateSource() { this->certificateSource_ = nullptr;};
    inline string getCertificateSource() const { DARABONBA_PTR_GET_DEFAULT(certificateSource_, "") };
    inline ListCertificatesRequest& setCertificateSource(string certificateSource) { DARABONBA_PTR_SET_VALUE(certificateSource_, certificateSource) };


    // certificateStatus Field Functions 
    bool hasCertificateStatus() const { return this->certificateStatus_ != nullptr;};
    void deleteCertificateStatus() { this->certificateStatus_ = nullptr;};
    inline string getCertificateStatus() const { DARABONBA_PTR_GET_DEFAULT(certificateStatus_, "") };
    inline ListCertificatesRequest& setCertificateStatus(string certificateStatus) { DARABONBA_PTR_SET_VALUE(certificateStatus_, certificateStatus) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline ListCertificatesRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListCertificatesRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // keyword Field Functions 
    bool hasKeyword() const { return this->keyword_ != nullptr;};
    void deleteKeyword() { this->keyword_ = nullptr;};
    inline string getKeyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, "") };
    inline ListCertificatesRequest& setKeyword(string keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListCertificatesRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // showSize Field Functions 
    bool hasShowSize() const { return this->showSize_ != nullptr;};
    void deleteShowSize() { this->showSize_ = nullptr;};
    inline int32_t getShowSize() const { DARABONBA_PTR_GET_DEFAULT(showSize_, 0) };
    inline ListCertificatesRequest& setShowSize(int32_t showSize) { DARABONBA_PTR_SET_VALUE(showSize_, showSize) };


  protected:
    shared_ptr<string> certificateSource_ {};
    shared_ptr<string> certificateStatus_ {};
    shared_ptr<int32_t> currentPage_ {};
    shared_ptr<string> instanceId_ {};
    shared_ptr<string> keyword_ {};
    shared_ptr<string> resourceGroupId_ {};
    shared_ptr<int32_t> showSize_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200407
#endif
