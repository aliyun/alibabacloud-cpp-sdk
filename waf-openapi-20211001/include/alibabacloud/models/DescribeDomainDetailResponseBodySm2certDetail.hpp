// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINDETAILRESPONSEBODYSM2CERTDETAIL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINDETAILRESPONSEBODYSM2CERTDETAIL_HPP_
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
  class DescribeDomainDetailResponseBodySM2CertDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainDetailResponseBodySM2CertDetail& obj) { 
      DARABONBA_PTR_TO_JSON(CommonName, commonName_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Sans, sans_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainDetailResponseBodySM2CertDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(CommonName, commonName_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Sans, sans_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeDomainDetailResponseBodySM2CertDetail() = default ;
    DescribeDomainDetailResponseBodySM2CertDetail(const DescribeDomainDetailResponseBodySM2CertDetail &) = default ;
    DescribeDomainDetailResponseBodySM2CertDetail(DescribeDomainDetailResponseBodySM2CertDetail &&) = default ;
    DescribeDomainDetailResponseBodySM2CertDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainDetailResponseBodySM2CertDetail() = default ;
    DescribeDomainDetailResponseBodySM2CertDetail& operator=(const DescribeDomainDetailResponseBodySM2CertDetail &) = default ;
    DescribeDomainDetailResponseBodySM2CertDetail& operator=(DescribeDomainDetailResponseBodySM2CertDetail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->commonName_ != nullptr
        && this->endTime_ != nullptr && this->id_ != nullptr && this->name_ != nullptr && this->sans_ != nullptr && this->startTime_ != nullptr; };
    // commonName Field Functions 
    bool hasCommonName() const { return this->commonName_ != nullptr;};
    void deleteCommonName() { this->commonName_ = nullptr;};
    inline string commonName() const { DARABONBA_PTR_GET_DEFAULT(commonName_, "") };
    inline DescribeDomainDetailResponseBodySM2CertDetail& setCommonName(string commonName) { DARABONBA_PTR_SET_VALUE(commonName_, commonName) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline DescribeDomainDetailResponseBodySM2CertDetail& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline DescribeDomainDetailResponseBodySM2CertDetail& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeDomainDetailResponseBodySM2CertDetail& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // sans Field Functions 
    bool hasSans() const { return this->sans_ != nullptr;};
    void deleteSans() { this->sans_ = nullptr;};
    inline const vector<string> & sans() const { DARABONBA_PTR_GET_CONST(sans_, vector<string>) };
    inline vector<string> sans() { DARABONBA_PTR_GET(sans_, vector<string>) };
    inline DescribeDomainDetailResponseBodySM2CertDetail& setSans(const vector<string> & sans) { DARABONBA_PTR_SET_VALUE(sans_, sans) };
    inline DescribeDomainDetailResponseBodySM2CertDetail& setSans(vector<string> && sans) { DARABONBA_PTR_SET_RVALUE(sans_, sans) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline DescribeDomainDetailResponseBodySM2CertDetail& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The domain name of your website.
    std::shared_ptr<string> commonName_ = nullptr;
    // The end of the validity period of the SSL certificate. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<int64_t> endTime_ = nullptr;
    // The ID of the SSL certificate.
    std::shared_ptr<string> id_ = nullptr;
    // The name of the SSL certificate.
    std::shared_ptr<string> name_ = nullptr;
    // All domain names that are bound to the certificate.
    std::shared_ptr<vector<string>> sans_ = nullptr;
    // The beginning of the validity period of the SSL certificate. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<int64_t> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
