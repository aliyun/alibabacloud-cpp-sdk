// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCERTIFICATEATTRIBUTERESPONSEBODYCERTIFICATEATTRIBUTEDTO_HPP_
#define ALIBABACLOUD_MODELS_GETCERTIFICATEATTRIBUTERESPONSEBODYCERTIFICATEATTRIBUTEDTO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hologram20220601
{
namespace Models
{
  class GetCertificateAttributeResponseBodyCertificateAttributeDto : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCertificateAttributeResponseBodyCertificateAttributeDto& obj) { 
      DARABONBA_PTR_TO_JSON(enableSSL, enableSSL_);
      DARABONBA_PTR_TO_JSON(expirationTime, expirationTime_);
      DARABONBA_PTR_TO_JSON(status, status_);
    };
    friend void from_json(const Darabonba::Json& j, GetCertificateAttributeResponseBodyCertificateAttributeDto& obj) { 
      DARABONBA_PTR_FROM_JSON(enableSSL, enableSSL_);
      DARABONBA_PTR_FROM_JSON(expirationTime, expirationTime_);
      DARABONBA_PTR_FROM_JSON(status, status_);
    };
    GetCertificateAttributeResponseBodyCertificateAttributeDto() = default ;
    GetCertificateAttributeResponseBodyCertificateAttributeDto(const GetCertificateAttributeResponseBodyCertificateAttributeDto &) = default ;
    GetCertificateAttributeResponseBodyCertificateAttributeDto(GetCertificateAttributeResponseBodyCertificateAttributeDto &&) = default ;
    GetCertificateAttributeResponseBodyCertificateAttributeDto(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCertificateAttributeResponseBodyCertificateAttributeDto() = default ;
    GetCertificateAttributeResponseBodyCertificateAttributeDto& operator=(const GetCertificateAttributeResponseBodyCertificateAttributeDto &) = default ;
    GetCertificateAttributeResponseBodyCertificateAttributeDto& operator=(GetCertificateAttributeResponseBodyCertificateAttributeDto &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->enableSSL_ != nullptr
        && this->expirationTime_ != nullptr && this->status_ != nullptr; };
    // enableSSL Field Functions 
    bool hasEnableSSL() const { return this->enableSSL_ != nullptr;};
    void deleteEnableSSL() { this->enableSSL_ = nullptr;};
    inline bool enableSSL() const { DARABONBA_PTR_GET_DEFAULT(enableSSL_, false) };
    inline GetCertificateAttributeResponseBodyCertificateAttributeDto& setEnableSSL(bool enableSSL) { DARABONBA_PTR_SET_VALUE(enableSSL_, enableSSL) };


    // expirationTime Field Functions 
    bool hasExpirationTime() const { return this->expirationTime_ != nullptr;};
    void deleteExpirationTime() { this->expirationTime_ = nullptr;};
    inline int64_t expirationTime() const { DARABONBA_PTR_GET_DEFAULT(expirationTime_, 0L) };
    inline GetCertificateAttributeResponseBodyCertificateAttributeDto& setExpirationTime(int64_t expirationTime) { DARABONBA_PTR_SET_VALUE(expirationTime_, expirationTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetCertificateAttributeResponseBodyCertificateAttributeDto& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<bool> enableSSL_ = nullptr;
    std::shared_ptr<int64_t> expirationTime_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hologram20220601
#endif
