// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPCACACERTIFICATERESPONSEBODYLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTPCACACERTIFICATERESPONSEBODYLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cas20200630
{
namespace Models
{
  class ListPcaCaCertificateResponseBodyList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPcaCaCertificateResponseBodyList& obj) { 
      DARABONBA_PTR_TO_JSON(CertIdentifier, certIdentifier_);
      DARABONBA_PTR_TO_JSON(CommonName, commonName_);
      DARABONBA_PTR_TO_JSON(IssuerIdentifier, issuerIdentifier_);
      DARABONBA_PTR_TO_JSON(PrivateCaInstanceId, privateCaInstanceId_);
      DARABONBA_PTR_TO_JSON(PrivateCaRegionId, privateCaRegionId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, ListPcaCaCertificateResponseBodyList& obj) { 
      DARABONBA_PTR_FROM_JSON(CertIdentifier, certIdentifier_);
      DARABONBA_PTR_FROM_JSON(CommonName, commonName_);
      DARABONBA_PTR_FROM_JSON(IssuerIdentifier, issuerIdentifier_);
      DARABONBA_PTR_FROM_JSON(PrivateCaInstanceId, privateCaInstanceId_);
      DARABONBA_PTR_FROM_JSON(PrivateCaRegionId, privateCaRegionId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    ListPcaCaCertificateResponseBodyList() = default ;
    ListPcaCaCertificateResponseBodyList(const ListPcaCaCertificateResponseBodyList &) = default ;
    ListPcaCaCertificateResponseBodyList(ListPcaCaCertificateResponseBodyList &&) = default ;
    ListPcaCaCertificateResponseBodyList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPcaCaCertificateResponseBodyList() = default ;
    ListPcaCaCertificateResponseBodyList& operator=(const ListPcaCaCertificateResponseBodyList &) = default ;
    ListPcaCaCertificateResponseBodyList& operator=(ListPcaCaCertificateResponseBodyList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->certIdentifier_ == nullptr
        && return this->commonName_ == nullptr && return this->issuerIdentifier_ == nullptr && return this->privateCaInstanceId_ == nullptr && return this->privateCaRegionId_ == nullptr && return this->status_ == nullptr
        && return this->userId_ == nullptr; };
    // certIdentifier Field Functions 
    bool hasCertIdentifier() const { return this->certIdentifier_ != nullptr;};
    void deleteCertIdentifier() { this->certIdentifier_ = nullptr;};
    inline string certIdentifier() const { DARABONBA_PTR_GET_DEFAULT(certIdentifier_, "") };
    inline ListPcaCaCertificateResponseBodyList& setCertIdentifier(string certIdentifier) { DARABONBA_PTR_SET_VALUE(certIdentifier_, certIdentifier) };


    // commonName Field Functions 
    bool hasCommonName() const { return this->commonName_ != nullptr;};
    void deleteCommonName() { this->commonName_ = nullptr;};
    inline string commonName() const { DARABONBA_PTR_GET_DEFAULT(commonName_, "") };
    inline ListPcaCaCertificateResponseBodyList& setCommonName(string commonName) { DARABONBA_PTR_SET_VALUE(commonName_, commonName) };


    // issuerIdentifier Field Functions 
    bool hasIssuerIdentifier() const { return this->issuerIdentifier_ != nullptr;};
    void deleteIssuerIdentifier() { this->issuerIdentifier_ = nullptr;};
    inline string issuerIdentifier() const { DARABONBA_PTR_GET_DEFAULT(issuerIdentifier_, "") };
    inline ListPcaCaCertificateResponseBodyList& setIssuerIdentifier(string issuerIdentifier) { DARABONBA_PTR_SET_VALUE(issuerIdentifier_, issuerIdentifier) };


    // privateCaInstanceId Field Functions 
    bool hasPrivateCaInstanceId() const { return this->privateCaInstanceId_ != nullptr;};
    void deletePrivateCaInstanceId() { this->privateCaInstanceId_ = nullptr;};
    inline string privateCaInstanceId() const { DARABONBA_PTR_GET_DEFAULT(privateCaInstanceId_, "") };
    inline ListPcaCaCertificateResponseBodyList& setPrivateCaInstanceId(string privateCaInstanceId) { DARABONBA_PTR_SET_VALUE(privateCaInstanceId_, privateCaInstanceId) };


    // privateCaRegionId Field Functions 
    bool hasPrivateCaRegionId() const { return this->privateCaRegionId_ != nullptr;};
    void deletePrivateCaRegionId() { this->privateCaRegionId_ = nullptr;};
    inline string privateCaRegionId() const { DARABONBA_PTR_GET_DEFAULT(privateCaRegionId_, "") };
    inline ListPcaCaCertificateResponseBodyList& setPrivateCaRegionId(string privateCaRegionId) { DARABONBA_PTR_SET_VALUE(privateCaRegionId_, privateCaRegionId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListPcaCaCertificateResponseBodyList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline ListPcaCaCertificateResponseBodyList& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    std::shared_ptr<string> certIdentifier_ = nullptr;
    std::shared_ptr<string> commonName_ = nullptr;
    std::shared_ptr<string> issuerIdentifier_ = nullptr;
    std::shared_ptr<string> privateCaInstanceId_ = nullptr;
    std::shared_ptr<string> privateCaRegionId_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200630
#endif
