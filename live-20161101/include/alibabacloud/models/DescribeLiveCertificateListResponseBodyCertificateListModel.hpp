// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVECERTIFICATELISTRESPONSEBODYCERTIFICATELISTMODEL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVECERTIFICATELISTRESPONSEBODYCERTIFICATELISTMODEL_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeLiveCertificateListResponseBodyCertificateListModelCertList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveCertificateListResponseBodyCertificateListModel : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveCertificateListResponseBodyCertificateListModel& obj) { 
      DARABONBA_PTR_TO_JSON(CertList, certList_);
      DARABONBA_PTR_TO_JSON(Count, count_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveCertificateListResponseBodyCertificateListModel& obj) { 
      DARABONBA_PTR_FROM_JSON(CertList, certList_);
      DARABONBA_PTR_FROM_JSON(Count, count_);
    };
    DescribeLiveCertificateListResponseBodyCertificateListModel() = default ;
    DescribeLiveCertificateListResponseBodyCertificateListModel(const DescribeLiveCertificateListResponseBodyCertificateListModel &) = default ;
    DescribeLiveCertificateListResponseBodyCertificateListModel(DescribeLiveCertificateListResponseBodyCertificateListModel &&) = default ;
    DescribeLiveCertificateListResponseBodyCertificateListModel(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveCertificateListResponseBodyCertificateListModel() = default ;
    DescribeLiveCertificateListResponseBodyCertificateListModel& operator=(const DescribeLiveCertificateListResponseBodyCertificateListModel &) = default ;
    DescribeLiveCertificateListResponseBodyCertificateListModel& operator=(DescribeLiveCertificateListResponseBodyCertificateListModel &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->certList_ == nullptr
        && return this->count_ == nullptr; };
    // certList Field Functions 
    bool hasCertList() const { return this->certList_ != nullptr;};
    void deleteCertList() { this->certList_ = nullptr;};
    inline const Models::DescribeLiveCertificateListResponseBodyCertificateListModelCertList & certList() const { DARABONBA_PTR_GET_CONST(certList_, Models::DescribeLiveCertificateListResponseBodyCertificateListModelCertList) };
    inline Models::DescribeLiveCertificateListResponseBodyCertificateListModelCertList certList() { DARABONBA_PTR_GET(certList_, Models::DescribeLiveCertificateListResponseBodyCertificateListModelCertList) };
    inline DescribeLiveCertificateListResponseBodyCertificateListModel& setCertList(const Models::DescribeLiveCertificateListResponseBodyCertificateListModelCertList & certList) { DARABONBA_PTR_SET_VALUE(certList_, certList) };
    inline DescribeLiveCertificateListResponseBodyCertificateListModel& setCertList(Models::DescribeLiveCertificateListResponseBodyCertificateListModelCertList && certList) { DARABONBA_PTR_SET_RVALUE(certList_, certList) };


    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline DescribeLiveCertificateListResponseBodyCertificateListModel& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


  protected:
    // The certificates.
    std::shared_ptr<Models::DescribeLiveCertificateListResponseBodyCertificateListModelCertList> certList_ = nullptr;
    // The number of certificates.
    std::shared_ptr<int32_t> count_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
