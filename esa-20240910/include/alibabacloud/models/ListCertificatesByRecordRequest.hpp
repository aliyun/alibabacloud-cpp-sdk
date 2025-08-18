// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCERTIFICATESBYRECORDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTCERTIFICATESBYRECORDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class ListCertificatesByRecordRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCertificatesByRecordRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Detail, detail_);
      DARABONBA_PTR_TO_JSON(RecordName, recordName_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
      DARABONBA_PTR_TO_JSON(ValidOnly, validOnly_);
    };
    friend void from_json(const Darabonba::Json& j, ListCertificatesByRecordRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Detail, detail_);
      DARABONBA_PTR_FROM_JSON(RecordName, recordName_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
      DARABONBA_PTR_FROM_JSON(ValidOnly, validOnly_);
    };
    ListCertificatesByRecordRequest() = default ;
    ListCertificatesByRecordRequest(const ListCertificatesByRecordRequest &) = default ;
    ListCertificatesByRecordRequest(ListCertificatesByRecordRequest &&) = default ;
    ListCertificatesByRecordRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCertificatesByRecordRequest() = default ;
    ListCertificatesByRecordRequest& operator=(const ListCertificatesByRecordRequest &) = default ;
    ListCertificatesByRecordRequest& operator=(ListCertificatesByRecordRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->detail_ != nullptr
        && this->recordName_ != nullptr && this->siteId_ != nullptr && this->validOnly_ != nullptr; };
    // detail Field Functions 
    bool hasDetail() const { return this->detail_ != nullptr;};
    void deleteDetail() { this->detail_ = nullptr;};
    inline bool detail() const { DARABONBA_PTR_GET_DEFAULT(detail_, false) };
    inline ListCertificatesByRecordRequest& setDetail(bool detail) { DARABONBA_PTR_SET_VALUE(detail_, detail) };


    // recordName Field Functions 
    bool hasRecordName() const { return this->recordName_ != nullptr;};
    void deleteRecordName() { this->recordName_ = nullptr;};
    inline string recordName() const { DARABONBA_PTR_GET_DEFAULT(recordName_, "") };
    inline ListCertificatesByRecordRequest& setRecordName(string recordName) { DARABONBA_PTR_SET_VALUE(recordName_, recordName) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t siteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline ListCertificatesByRecordRequest& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


    // validOnly Field Functions 
    bool hasValidOnly() const { return this->validOnly_ != nullptr;};
    void deleteValidOnly() { this->validOnly_ = nullptr;};
    inline bool validOnly() const { DARABONBA_PTR_GET_DEFAULT(validOnly_, false) };
    inline ListCertificatesByRecordRequest& setValidOnly(bool validOnly) { DARABONBA_PTR_SET_VALUE(validOnly_, validOnly) };


  protected:
    std::shared_ptr<bool> detail_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> recordName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> siteId_ = nullptr;
    std::shared_ptr<bool> validOnly_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
