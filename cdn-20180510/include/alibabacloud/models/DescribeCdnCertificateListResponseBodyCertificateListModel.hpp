// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECDNCERTIFICATELISTRESPONSEBODYCERTIFICATELISTMODEL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECDNCERTIFICATELISTRESPONSEBODYCERTIFICATELISTMODEL_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeCdnCertificateListResponseBodyCertificateListModelCertList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeCdnCertificateListResponseBodyCertificateListModel : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCdnCertificateListResponseBodyCertificateListModel& obj) { 
      DARABONBA_PTR_TO_JSON(CertList, certList_);
      DARABONBA_PTR_TO_JSON(Count, count_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCdnCertificateListResponseBodyCertificateListModel& obj) { 
      DARABONBA_PTR_FROM_JSON(CertList, certList_);
      DARABONBA_PTR_FROM_JSON(Count, count_);
    };
    DescribeCdnCertificateListResponseBodyCertificateListModel() = default ;
    DescribeCdnCertificateListResponseBodyCertificateListModel(const DescribeCdnCertificateListResponseBodyCertificateListModel &) = default ;
    DescribeCdnCertificateListResponseBodyCertificateListModel(DescribeCdnCertificateListResponseBodyCertificateListModel &&) = default ;
    DescribeCdnCertificateListResponseBodyCertificateListModel(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCdnCertificateListResponseBodyCertificateListModel() = default ;
    DescribeCdnCertificateListResponseBodyCertificateListModel& operator=(const DescribeCdnCertificateListResponseBodyCertificateListModel &) = default ;
    DescribeCdnCertificateListResponseBodyCertificateListModel& operator=(DescribeCdnCertificateListResponseBodyCertificateListModel &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->certList_ == nullptr
        && return this->count_ == nullptr; };
    // certList Field Functions 
    bool hasCertList() const { return this->certList_ != nullptr;};
    void deleteCertList() { this->certList_ = nullptr;};
    inline const Models::DescribeCdnCertificateListResponseBodyCertificateListModelCertList & certList() const { DARABONBA_PTR_GET_CONST(certList_, Models::DescribeCdnCertificateListResponseBodyCertificateListModelCertList) };
    inline Models::DescribeCdnCertificateListResponseBodyCertificateListModelCertList certList() { DARABONBA_PTR_GET(certList_, Models::DescribeCdnCertificateListResponseBodyCertificateListModelCertList) };
    inline DescribeCdnCertificateListResponseBodyCertificateListModel& setCertList(const Models::DescribeCdnCertificateListResponseBodyCertificateListModelCertList & certList) { DARABONBA_PTR_SET_VALUE(certList_, certList) };
    inline DescribeCdnCertificateListResponseBodyCertificateListModel& setCertList(Models::DescribeCdnCertificateListResponseBodyCertificateListModelCertList && certList) { DARABONBA_PTR_SET_RVALUE(certList_, certList) };


    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline DescribeCdnCertificateListResponseBodyCertificateListModel& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


  protected:
    // The list of certificates.
    std::shared_ptr<Models::DescribeCdnCertificateListResponseBodyCertificateListModelCertList> certList_ = nullptr;
    // The number of certificates that are returned.
    std::shared_ptr<int32_t> count_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
