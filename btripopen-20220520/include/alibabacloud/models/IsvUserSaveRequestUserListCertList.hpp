// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ISVUSERSAVEREQUESTUSERLISTCERTLIST_HPP_
#define ALIBABACLOUD_MODELS_ISVUSERSAVEREQUESTUSERLISTCERTLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class IsvUserSaveRequestUserListCertList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IsvUserSaveRequestUserListCertList& obj) { 
      DARABONBA_PTR_TO_JSON(cert_expired_time, certExpiredTime_);
      DARABONBA_PTR_TO_JSON(cert_nation, certNation_);
      DARABONBA_PTR_TO_JSON(cert_no, certNo_);
      DARABONBA_PTR_TO_JSON(cert_type, certType_);
      DARABONBA_PTR_TO_JSON(nationality, nationality_);
    };
    friend void from_json(const Darabonba::Json& j, IsvUserSaveRequestUserListCertList& obj) { 
      DARABONBA_PTR_FROM_JSON(cert_expired_time, certExpiredTime_);
      DARABONBA_PTR_FROM_JSON(cert_nation, certNation_);
      DARABONBA_PTR_FROM_JSON(cert_no, certNo_);
      DARABONBA_PTR_FROM_JSON(cert_type, certType_);
      DARABONBA_PTR_FROM_JSON(nationality, nationality_);
    };
    IsvUserSaveRequestUserListCertList() = default ;
    IsvUserSaveRequestUserListCertList(const IsvUserSaveRequestUserListCertList &) = default ;
    IsvUserSaveRequestUserListCertList(IsvUserSaveRequestUserListCertList &&) = default ;
    IsvUserSaveRequestUserListCertList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IsvUserSaveRequestUserListCertList() = default ;
    IsvUserSaveRequestUserListCertList& operator=(const IsvUserSaveRequestUserListCertList &) = default ;
    IsvUserSaveRequestUserListCertList& operator=(IsvUserSaveRequestUserListCertList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->certExpiredTime_ != nullptr
        && this->certNation_ != nullptr && this->certNo_ != nullptr && this->certType_ != nullptr && this->nationality_ != nullptr; };
    // certExpiredTime Field Functions 
    bool hasCertExpiredTime() const { return this->certExpiredTime_ != nullptr;};
    void deleteCertExpiredTime() { this->certExpiredTime_ = nullptr;};
    inline string certExpiredTime() const { DARABONBA_PTR_GET_DEFAULT(certExpiredTime_, "") };
    inline IsvUserSaveRequestUserListCertList& setCertExpiredTime(string certExpiredTime) { DARABONBA_PTR_SET_VALUE(certExpiredTime_, certExpiredTime) };


    // certNation Field Functions 
    bool hasCertNation() const { return this->certNation_ != nullptr;};
    void deleteCertNation() { this->certNation_ = nullptr;};
    inline string certNation() const { DARABONBA_PTR_GET_DEFAULT(certNation_, "") };
    inline IsvUserSaveRequestUserListCertList& setCertNation(string certNation) { DARABONBA_PTR_SET_VALUE(certNation_, certNation) };


    // certNo Field Functions 
    bool hasCertNo() const { return this->certNo_ != nullptr;};
    void deleteCertNo() { this->certNo_ = nullptr;};
    inline string certNo() const { DARABONBA_PTR_GET_DEFAULT(certNo_, "") };
    inline IsvUserSaveRequestUserListCertList& setCertNo(string certNo) { DARABONBA_PTR_SET_VALUE(certNo_, certNo) };


    // certType Field Functions 
    bool hasCertType() const { return this->certType_ != nullptr;};
    void deleteCertType() { this->certType_ = nullptr;};
    inline int32_t certType() const { DARABONBA_PTR_GET_DEFAULT(certType_, 0) };
    inline IsvUserSaveRequestUserListCertList& setCertType(int32_t certType) { DARABONBA_PTR_SET_VALUE(certType_, certType) };


    // nationality Field Functions 
    bool hasNationality() const { return this->nationality_ != nullptr;};
    void deleteNationality() { this->nationality_ = nullptr;};
    inline string nationality() const { DARABONBA_PTR_GET_DEFAULT(nationality_, "") };
    inline IsvUserSaveRequestUserListCertList& setNationality(string nationality) { DARABONBA_PTR_SET_VALUE(nationality_, nationality) };


  protected:
    std::shared_ptr<string> certExpiredTime_ = nullptr;
    std::shared_ptr<string> certNation_ = nullptr;
    std::shared_ptr<string> certNo_ = nullptr;
    std::shared_ptr<int32_t> certType_ = nullptr;
    std::shared_ptr<string> nationality_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
