// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECDNSMCERTIFICATELISTRESPONSEBODYCERTIFICATELISTMODEL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECDNSMCERTIFICATELISTRESPONSEBODYCERTIFICATELISTMODEL_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeCdnSMCertificateListResponseBodyCertificateListModelCertList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeCdnSMCertificateListResponseBodyCertificateListModel : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCdnSMCertificateListResponseBodyCertificateListModel& obj) { 
      DARABONBA_PTR_TO_JSON(CertList, certList_);
      DARABONBA_PTR_TO_JSON(Count, count_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCdnSMCertificateListResponseBodyCertificateListModel& obj) { 
      DARABONBA_PTR_FROM_JSON(CertList, certList_);
      DARABONBA_PTR_FROM_JSON(Count, count_);
    };
    DescribeCdnSMCertificateListResponseBodyCertificateListModel() = default ;
    DescribeCdnSMCertificateListResponseBodyCertificateListModel(const DescribeCdnSMCertificateListResponseBodyCertificateListModel &) = default ;
    DescribeCdnSMCertificateListResponseBodyCertificateListModel(DescribeCdnSMCertificateListResponseBodyCertificateListModel &&) = default ;
    DescribeCdnSMCertificateListResponseBodyCertificateListModel(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCdnSMCertificateListResponseBodyCertificateListModel() = default ;
    DescribeCdnSMCertificateListResponseBodyCertificateListModel& operator=(const DescribeCdnSMCertificateListResponseBodyCertificateListModel &) = default ;
    DescribeCdnSMCertificateListResponseBodyCertificateListModel& operator=(DescribeCdnSMCertificateListResponseBodyCertificateListModel &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->certList_ != nullptr
        && this->count_ != nullptr; };
    // certList Field Functions 
    bool hasCertList() const { return this->certList_ != nullptr;};
    void deleteCertList() { this->certList_ = nullptr;};
    inline const Models::DescribeCdnSMCertificateListResponseBodyCertificateListModelCertList & certList() const { DARABONBA_PTR_GET_CONST(certList_, Models::DescribeCdnSMCertificateListResponseBodyCertificateListModelCertList) };
    inline Models::DescribeCdnSMCertificateListResponseBodyCertificateListModelCertList certList() { DARABONBA_PTR_GET(certList_, Models::DescribeCdnSMCertificateListResponseBodyCertificateListModelCertList) };
    inline DescribeCdnSMCertificateListResponseBodyCertificateListModel& setCertList(const Models::DescribeCdnSMCertificateListResponseBodyCertificateListModelCertList & certList) { DARABONBA_PTR_SET_VALUE(certList_, certList) };
    inline DescribeCdnSMCertificateListResponseBodyCertificateListModel& setCertList(Models::DescribeCdnSMCertificateListResponseBodyCertificateListModelCertList && certList) { DARABONBA_PTR_SET_RVALUE(certList_, certList) };


    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline DescribeCdnSMCertificateListResponseBodyCertificateListModel& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


  protected:
    // The list of certificates.
    std::shared_ptr<Models::DescribeCdnSMCertificateListResponseBodyCertificateListModelCertList> certList_ = nullptr;
    // The number of certificates that are returned.
    std::shared_ptr<int32_t> count_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
