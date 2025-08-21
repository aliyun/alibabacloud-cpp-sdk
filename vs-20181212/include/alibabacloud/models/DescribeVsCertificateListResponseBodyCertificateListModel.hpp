// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVSCERTIFICATELISTRESPONSEBODYCERTIFICATELISTMODEL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVSCERTIFICATELISTRESPONSEBODYCERTIFICATELISTMODEL_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeVsCertificateListResponseBodyCertificateListModelCertList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class DescribeVsCertificateListResponseBodyCertificateListModel : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVsCertificateListResponseBodyCertificateListModel& obj) { 
      DARABONBA_PTR_TO_JSON(CertList, certList_);
      DARABONBA_PTR_TO_JSON(Count, count_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVsCertificateListResponseBodyCertificateListModel& obj) { 
      DARABONBA_PTR_FROM_JSON(CertList, certList_);
      DARABONBA_PTR_FROM_JSON(Count, count_);
    };
    DescribeVsCertificateListResponseBodyCertificateListModel() = default ;
    DescribeVsCertificateListResponseBodyCertificateListModel(const DescribeVsCertificateListResponseBodyCertificateListModel &) = default ;
    DescribeVsCertificateListResponseBodyCertificateListModel(DescribeVsCertificateListResponseBodyCertificateListModel &&) = default ;
    DescribeVsCertificateListResponseBodyCertificateListModel(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVsCertificateListResponseBodyCertificateListModel() = default ;
    DescribeVsCertificateListResponseBodyCertificateListModel& operator=(const DescribeVsCertificateListResponseBodyCertificateListModel &) = default ;
    DescribeVsCertificateListResponseBodyCertificateListModel& operator=(DescribeVsCertificateListResponseBodyCertificateListModel &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->certList_ != nullptr
        && this->count_ != nullptr; };
    // certList Field Functions 
    bool hasCertList() const { return this->certList_ != nullptr;};
    void deleteCertList() { this->certList_ = nullptr;};
    inline const vector<Models::DescribeVsCertificateListResponseBodyCertificateListModelCertList> & certList() const { DARABONBA_PTR_GET_CONST(certList_, vector<Models::DescribeVsCertificateListResponseBodyCertificateListModelCertList>) };
    inline vector<Models::DescribeVsCertificateListResponseBodyCertificateListModelCertList> certList() { DARABONBA_PTR_GET(certList_, vector<Models::DescribeVsCertificateListResponseBodyCertificateListModelCertList>) };
    inline DescribeVsCertificateListResponseBodyCertificateListModel& setCertList(const vector<Models::DescribeVsCertificateListResponseBodyCertificateListModelCertList> & certList) { DARABONBA_PTR_SET_VALUE(certList_, certList) };
    inline DescribeVsCertificateListResponseBodyCertificateListModel& setCertList(vector<Models::DescribeVsCertificateListResponseBodyCertificateListModelCertList> && certList) { DARABONBA_PTR_SET_RVALUE(certList_, certList) };


    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline DescribeVsCertificateListResponseBodyCertificateListModel& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


  protected:
    std::shared_ptr<vector<Models::DescribeVsCertificateListResponseBodyCertificateListModelCertList>> certList_ = nullptr;
    std::shared_ptr<int32_t> count_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
