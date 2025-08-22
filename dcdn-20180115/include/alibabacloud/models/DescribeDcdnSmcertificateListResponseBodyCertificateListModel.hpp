// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNSMCERTIFICATELISTRESPONSEBODYCERTIFICATELISTMODEL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNSMCERTIFICATELISTRESPONSEBODYCERTIFICATELISTMODEL_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDcdnSMCertificateListResponseBodyCertificateListModelCertList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnSMCertificateListResponseBodyCertificateListModel : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnSMCertificateListResponseBodyCertificateListModel& obj) { 
      DARABONBA_PTR_TO_JSON(CertList, certList_);
      DARABONBA_PTR_TO_JSON(Count, count_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnSMCertificateListResponseBodyCertificateListModel& obj) { 
      DARABONBA_PTR_FROM_JSON(CertList, certList_);
      DARABONBA_PTR_FROM_JSON(Count, count_);
    };
    DescribeDcdnSMCertificateListResponseBodyCertificateListModel() = default ;
    DescribeDcdnSMCertificateListResponseBodyCertificateListModel(const DescribeDcdnSMCertificateListResponseBodyCertificateListModel &) = default ;
    DescribeDcdnSMCertificateListResponseBodyCertificateListModel(DescribeDcdnSMCertificateListResponseBodyCertificateListModel &&) = default ;
    DescribeDcdnSMCertificateListResponseBodyCertificateListModel(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnSMCertificateListResponseBodyCertificateListModel() = default ;
    DescribeDcdnSMCertificateListResponseBodyCertificateListModel& operator=(const DescribeDcdnSMCertificateListResponseBodyCertificateListModel &) = default ;
    DescribeDcdnSMCertificateListResponseBodyCertificateListModel& operator=(DescribeDcdnSMCertificateListResponseBodyCertificateListModel &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->certList_ != nullptr
        && this->count_ != nullptr; };
    // certList Field Functions 
    bool hasCertList() const { return this->certList_ != nullptr;};
    void deleteCertList() { this->certList_ = nullptr;};
    inline const vector<Models::DescribeDcdnSMCertificateListResponseBodyCertificateListModelCertList> & certList() const { DARABONBA_PTR_GET_CONST(certList_, vector<Models::DescribeDcdnSMCertificateListResponseBodyCertificateListModelCertList>) };
    inline vector<Models::DescribeDcdnSMCertificateListResponseBodyCertificateListModelCertList> certList() { DARABONBA_PTR_GET(certList_, vector<Models::DescribeDcdnSMCertificateListResponseBodyCertificateListModelCertList>) };
    inline DescribeDcdnSMCertificateListResponseBodyCertificateListModel& setCertList(const vector<Models::DescribeDcdnSMCertificateListResponseBodyCertificateListModelCertList> & certList) { DARABONBA_PTR_SET_VALUE(certList_, certList) };
    inline DescribeDcdnSMCertificateListResponseBodyCertificateListModel& setCertList(vector<Models::DescribeDcdnSMCertificateListResponseBodyCertificateListModelCertList> && certList) { DARABONBA_PTR_SET_RVALUE(certList_, certList) };


    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline DescribeDcdnSMCertificateListResponseBodyCertificateListModel& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


  protected:
    // A list of certificates.
    std::shared_ptr<vector<Models::DescribeDcdnSMCertificateListResponseBodyCertificateListModelCertList>> certList_ = nullptr;
    // The number of certificates that are returned.
    std::shared_ptr<int32_t> count_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
