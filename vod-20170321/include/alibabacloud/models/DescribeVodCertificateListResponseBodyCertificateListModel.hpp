// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVODCERTIFICATELISTRESPONSEBODYCERTIFICATELISTMODEL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVODCERTIFICATELISTRESPONSEBODYCERTIFICATELISTMODEL_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeVodCertificateListResponseBodyCertificateListModelCertList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribeVodCertificateListResponseBodyCertificateListModel : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVodCertificateListResponseBodyCertificateListModel& obj) { 
      DARABONBA_PTR_TO_JSON(CertList, certList_);
      DARABONBA_PTR_TO_JSON(Count, count_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVodCertificateListResponseBodyCertificateListModel& obj) { 
      DARABONBA_PTR_FROM_JSON(CertList, certList_);
      DARABONBA_PTR_FROM_JSON(Count, count_);
    };
    DescribeVodCertificateListResponseBodyCertificateListModel() = default ;
    DescribeVodCertificateListResponseBodyCertificateListModel(const DescribeVodCertificateListResponseBodyCertificateListModel &) = default ;
    DescribeVodCertificateListResponseBodyCertificateListModel(DescribeVodCertificateListResponseBodyCertificateListModel &&) = default ;
    DescribeVodCertificateListResponseBodyCertificateListModel(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVodCertificateListResponseBodyCertificateListModel() = default ;
    DescribeVodCertificateListResponseBodyCertificateListModel& operator=(const DescribeVodCertificateListResponseBodyCertificateListModel &) = default ;
    DescribeVodCertificateListResponseBodyCertificateListModel& operator=(DescribeVodCertificateListResponseBodyCertificateListModel &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->certList_ == nullptr
        && return this->count_ == nullptr; };
    // certList Field Functions 
    bool hasCertList() const { return this->certList_ != nullptr;};
    void deleteCertList() { this->certList_ = nullptr;};
    inline const Models::DescribeVodCertificateListResponseBodyCertificateListModelCertList & certList() const { DARABONBA_PTR_GET_CONST(certList_, Models::DescribeVodCertificateListResponseBodyCertificateListModelCertList) };
    inline Models::DescribeVodCertificateListResponseBodyCertificateListModelCertList certList() { DARABONBA_PTR_GET(certList_, Models::DescribeVodCertificateListResponseBodyCertificateListModelCertList) };
    inline DescribeVodCertificateListResponseBodyCertificateListModel& setCertList(const Models::DescribeVodCertificateListResponseBodyCertificateListModelCertList & certList) { DARABONBA_PTR_SET_VALUE(certList_, certList) };
    inline DescribeVodCertificateListResponseBodyCertificateListModel& setCertList(Models::DescribeVodCertificateListResponseBodyCertificateListModelCertList && certList) { DARABONBA_PTR_SET_RVALUE(certList_, certList) };


    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline DescribeVodCertificateListResponseBodyCertificateListModel& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


  protected:
    // The list of certificates.
    std::shared_ptr<Models::DescribeVodCertificateListResponseBodyCertificateListModelCertList> certList_ = nullptr;
    // The number of certificates that are returned.
    std::shared_ptr<int32_t> count_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
