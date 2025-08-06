// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDRMCERTINFORESPONSEBODYDRMCERTINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTDRMCERTINFORESPONSEBODYDRMCERTINFOLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class ListDRMCertInfoResponseBodyDRMCertInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDRMCertInfoResponseBodyDRMCertInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(Ask, ask_);
      DARABONBA_PTR_TO_JSON(CertId, certId_);
      DARABONBA_PTR_TO_JSON(CertName, certName_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(DRMType, DRMType_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(PassPhrase, passPhrase_);
      DARABONBA_PTR_TO_JSON(PrivateKey, privateKey_);
      DARABONBA_PTR_TO_JSON(ServCert, servCert_);
    };
    friend void from_json(const Darabonba::Json& j, ListDRMCertInfoResponseBodyDRMCertInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(Ask, ask_);
      DARABONBA_PTR_FROM_JSON(CertId, certId_);
      DARABONBA_PTR_FROM_JSON(CertName, certName_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(DRMType, DRMType_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(PassPhrase, passPhrase_);
      DARABONBA_PTR_FROM_JSON(PrivateKey, privateKey_);
      DARABONBA_PTR_FROM_JSON(ServCert, servCert_);
    };
    ListDRMCertInfoResponseBodyDRMCertInfoList() = default ;
    ListDRMCertInfoResponseBodyDRMCertInfoList(const ListDRMCertInfoResponseBodyDRMCertInfoList &) = default ;
    ListDRMCertInfoResponseBodyDRMCertInfoList(ListDRMCertInfoResponseBodyDRMCertInfoList &&) = default ;
    ListDRMCertInfoResponseBodyDRMCertInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDRMCertInfoResponseBodyDRMCertInfoList() = default ;
    ListDRMCertInfoResponseBodyDRMCertInfoList& operator=(const ListDRMCertInfoResponseBodyDRMCertInfoList &) = default ;
    ListDRMCertInfoResponseBodyDRMCertInfoList& operator=(ListDRMCertInfoResponseBodyDRMCertInfoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ask_ != nullptr
        && this->certId_ != nullptr && this->certName_ != nullptr && this->creationTime_ != nullptr && this->DRMType_ != nullptr && this->description_ != nullptr
        && this->passPhrase_ != nullptr && this->privateKey_ != nullptr && this->servCert_ != nullptr; };
    // ask Field Functions 
    bool hasAsk() const { return this->ask_ != nullptr;};
    void deleteAsk() { this->ask_ = nullptr;};
    inline string ask() const { DARABONBA_PTR_GET_DEFAULT(ask_, "") };
    inline ListDRMCertInfoResponseBodyDRMCertInfoList& setAsk(string ask) { DARABONBA_PTR_SET_VALUE(ask_, ask) };


    // certId Field Functions 
    bool hasCertId() const { return this->certId_ != nullptr;};
    void deleteCertId() { this->certId_ = nullptr;};
    inline string certId() const { DARABONBA_PTR_GET_DEFAULT(certId_, "") };
    inline ListDRMCertInfoResponseBodyDRMCertInfoList& setCertId(string certId) { DARABONBA_PTR_SET_VALUE(certId_, certId) };


    // certName Field Functions 
    bool hasCertName() const { return this->certName_ != nullptr;};
    void deleteCertName() { this->certName_ = nullptr;};
    inline string certName() const { DARABONBA_PTR_GET_DEFAULT(certName_, "") };
    inline ListDRMCertInfoResponseBodyDRMCertInfoList& setCertName(string certName) { DARABONBA_PTR_SET_VALUE(certName_, certName) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline ListDRMCertInfoResponseBodyDRMCertInfoList& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // DRMType Field Functions 
    bool hasDRMType() const { return this->DRMType_ != nullptr;};
    void deleteDRMType() { this->DRMType_ = nullptr;};
    inline string DRMType() const { DARABONBA_PTR_GET_DEFAULT(DRMType_, "") };
    inline ListDRMCertInfoResponseBodyDRMCertInfoList& setDRMType(string DRMType) { DARABONBA_PTR_SET_VALUE(DRMType_, DRMType) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListDRMCertInfoResponseBodyDRMCertInfoList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // passPhrase Field Functions 
    bool hasPassPhrase() const { return this->passPhrase_ != nullptr;};
    void deletePassPhrase() { this->passPhrase_ = nullptr;};
    inline string passPhrase() const { DARABONBA_PTR_GET_DEFAULT(passPhrase_, "") };
    inline ListDRMCertInfoResponseBodyDRMCertInfoList& setPassPhrase(string passPhrase) { DARABONBA_PTR_SET_VALUE(passPhrase_, passPhrase) };


    // privateKey Field Functions 
    bool hasPrivateKey() const { return this->privateKey_ != nullptr;};
    void deletePrivateKey() { this->privateKey_ = nullptr;};
    inline string privateKey() const { DARABONBA_PTR_GET_DEFAULT(privateKey_, "") };
    inline ListDRMCertInfoResponseBodyDRMCertInfoList& setPrivateKey(string privateKey) { DARABONBA_PTR_SET_VALUE(privateKey_, privateKey) };


    // servCert Field Functions 
    bool hasServCert() const { return this->servCert_ != nullptr;};
    void deleteServCert() { this->servCert_ = nullptr;};
    inline string servCert() const { DARABONBA_PTR_GET_DEFAULT(servCert_, "") };
    inline ListDRMCertInfoResponseBodyDRMCertInfoList& setServCert(string servCert) { DARABONBA_PTR_SET_VALUE(servCert_, servCert) };


  protected:
    std::shared_ptr<string> ask_ = nullptr;
    std::shared_ptr<string> certId_ = nullptr;
    std::shared_ptr<string> certName_ = nullptr;
    std::shared_ptr<string> creationTime_ = nullptr;
    std::shared_ptr<string> DRMType_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> passPhrase_ = nullptr;
    std::shared_ptr<string> privateKey_ = nullptr;
    std::shared_ptr<string> servCert_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
