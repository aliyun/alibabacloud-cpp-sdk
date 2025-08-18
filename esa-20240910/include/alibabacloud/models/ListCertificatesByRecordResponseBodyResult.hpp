// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCERTIFICATESBYRECORDRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_LISTCERTIFICATESBYRECORDRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListCertificatesByRecordResponseBodyResultCertificates.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class ListCertificatesByRecordResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCertificatesByRecordResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(ApplylingCount, applylingCount_);
      DARABONBA_PTR_TO_JSON(Certificates, certificates_);
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(RecordName, recordName_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListCertificatesByRecordResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplylingCount, applylingCount_);
      DARABONBA_PTR_FROM_JSON(Certificates, certificates_);
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(RecordName, recordName_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ListCertificatesByRecordResponseBodyResult() = default ;
    ListCertificatesByRecordResponseBodyResult(const ListCertificatesByRecordResponseBodyResult &) = default ;
    ListCertificatesByRecordResponseBodyResult(ListCertificatesByRecordResponseBodyResult &&) = default ;
    ListCertificatesByRecordResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCertificatesByRecordResponseBodyResult() = default ;
    ListCertificatesByRecordResponseBodyResult& operator=(const ListCertificatesByRecordResponseBodyResult &) = default ;
    ListCertificatesByRecordResponseBodyResult& operator=(ListCertificatesByRecordResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->applylingCount_ != nullptr
        && this->certificates_ != nullptr && this->count_ != nullptr && this->recordName_ != nullptr && this->status_ != nullptr; };
    // applylingCount Field Functions 
    bool hasApplylingCount() const { return this->applylingCount_ != nullptr;};
    void deleteApplylingCount() { this->applylingCount_ = nullptr;};
    inline int64_t applylingCount() const { DARABONBA_PTR_GET_DEFAULT(applylingCount_, 0L) };
    inline ListCertificatesByRecordResponseBodyResult& setApplylingCount(int64_t applylingCount) { DARABONBA_PTR_SET_VALUE(applylingCount_, applylingCount) };


    // certificates Field Functions 
    bool hasCertificates() const { return this->certificates_ != nullptr;};
    void deleteCertificates() { this->certificates_ = nullptr;};
    inline const vector<Models::ListCertificatesByRecordResponseBodyResultCertificates> & certificates() const { DARABONBA_PTR_GET_CONST(certificates_, vector<Models::ListCertificatesByRecordResponseBodyResultCertificates>) };
    inline vector<Models::ListCertificatesByRecordResponseBodyResultCertificates> certificates() { DARABONBA_PTR_GET(certificates_, vector<Models::ListCertificatesByRecordResponseBodyResultCertificates>) };
    inline ListCertificatesByRecordResponseBodyResult& setCertificates(const vector<Models::ListCertificatesByRecordResponseBodyResultCertificates> & certificates) { DARABONBA_PTR_SET_VALUE(certificates_, certificates) };
    inline ListCertificatesByRecordResponseBodyResult& setCertificates(vector<Models::ListCertificatesByRecordResponseBodyResultCertificates> && certificates) { DARABONBA_PTR_SET_RVALUE(certificates_, certificates) };


    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int64_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
    inline ListCertificatesByRecordResponseBodyResult& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // recordName Field Functions 
    bool hasRecordName() const { return this->recordName_ != nullptr;};
    void deleteRecordName() { this->recordName_ = nullptr;};
    inline string recordName() const { DARABONBA_PTR_GET_DEFAULT(recordName_, "") };
    inline ListCertificatesByRecordResponseBodyResult& setRecordName(string recordName) { DARABONBA_PTR_SET_VALUE(recordName_, recordName) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListCertificatesByRecordResponseBodyResult& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<int64_t> applylingCount_ = nullptr;
    std::shared_ptr<vector<Models::ListCertificatesByRecordResponseBodyResultCertificates>> certificates_ = nullptr;
    std::shared_ptr<int64_t> count_ = nullptr;
    std::shared_ptr<string> recordName_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
