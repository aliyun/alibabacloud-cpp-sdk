// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKCERTIFICATERESPONSEBODYDEVELOPMENTCERTINFO_HPP_
#define ALIBABACLOUD_MODELS_CHECKCERTIFICATERESPONSEBODYDEVELOPMENTCERTINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Push20160801
{
namespace Models
{
  class CheckCertificateResponseBodyDevelopmentCertInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckCertificateResponseBodyDevelopmentCertInfo& obj) { 
      DARABONBA_PTR_TO_JSON(ExipreTime, exipreTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, CheckCertificateResponseBodyDevelopmentCertInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(ExipreTime, exipreTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    CheckCertificateResponseBodyDevelopmentCertInfo() = default ;
    CheckCertificateResponseBodyDevelopmentCertInfo(const CheckCertificateResponseBodyDevelopmentCertInfo &) = default ;
    CheckCertificateResponseBodyDevelopmentCertInfo(CheckCertificateResponseBodyDevelopmentCertInfo &&) = default ;
    CheckCertificateResponseBodyDevelopmentCertInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckCertificateResponseBodyDevelopmentCertInfo() = default ;
    CheckCertificateResponseBodyDevelopmentCertInfo& operator=(const CheckCertificateResponseBodyDevelopmentCertInfo &) = default ;
    CheckCertificateResponseBodyDevelopmentCertInfo& operator=(CheckCertificateResponseBodyDevelopmentCertInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->exipreTime_ != nullptr
        && this->status_ != nullptr; };
    // exipreTime Field Functions 
    bool hasExipreTime() const { return this->exipreTime_ != nullptr;};
    void deleteExipreTime() { this->exipreTime_ = nullptr;};
    inline int64_t exipreTime() const { DARABONBA_PTR_GET_DEFAULT(exipreTime_, 0L) };
    inline CheckCertificateResponseBodyDevelopmentCertInfo& setExipreTime(int64_t exipreTime) { DARABONBA_PTR_SET_VALUE(exipreTime_, exipreTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline CheckCertificateResponseBodyDevelopmentCertInfo& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<int64_t> exipreTime_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Push20160801
#endif
