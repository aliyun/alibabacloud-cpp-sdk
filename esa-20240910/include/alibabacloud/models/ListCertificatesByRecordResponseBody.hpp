// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCERTIFICATESBYRECORDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCERTIFICATESBYRECORDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListCertificatesByRecordResponseBodyResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class ListCertificatesByRecordResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCertificatesByRecordResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
      DARABONBA_PTR_TO_JSON(SiteName, siteName_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListCertificatesByRecordResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
      DARABONBA_PTR_FROM_JSON(SiteName, siteName_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListCertificatesByRecordResponseBody() = default ;
    ListCertificatesByRecordResponseBody(const ListCertificatesByRecordResponseBody &) = default ;
    ListCertificatesByRecordResponseBody(ListCertificatesByRecordResponseBody &&) = default ;
    ListCertificatesByRecordResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCertificatesByRecordResponseBody() = default ;
    ListCertificatesByRecordResponseBody& operator=(const ListCertificatesByRecordResponseBody &) = default ;
    ListCertificatesByRecordResponseBody& operator=(ListCertificatesByRecordResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->result_ != nullptr && this->siteId_ != nullptr && this->siteName_ != nullptr && this->totalCount_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListCertificatesByRecordResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<ListCertificatesByRecordResponseBodyResult> & result() const { DARABONBA_PTR_GET_CONST(result_, vector<ListCertificatesByRecordResponseBodyResult>) };
    inline vector<ListCertificatesByRecordResponseBodyResult> result() { DARABONBA_PTR_GET(result_, vector<ListCertificatesByRecordResponseBodyResult>) };
    inline ListCertificatesByRecordResponseBody& setResult(const vector<ListCertificatesByRecordResponseBodyResult> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline ListCertificatesByRecordResponseBody& setResult(vector<ListCertificatesByRecordResponseBodyResult> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t siteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline ListCertificatesByRecordResponseBody& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


    // siteName Field Functions 
    bool hasSiteName() const { return this->siteName_ != nullptr;};
    void deleteSiteName() { this->siteName_ = nullptr;};
    inline string siteName() const { DARABONBA_PTR_GET_DEFAULT(siteName_, "") };
    inline ListCertificatesByRecordResponseBody& setSiteName(string siteName) { DARABONBA_PTR_SET_VALUE(siteName_, siteName) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListCertificatesByRecordResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<vector<ListCertificatesByRecordResponseBodyResult>> result_ = nullptr;
    std::shared_ptr<int64_t> siteId_ = nullptr;
    std::shared_ptr<string> siteName_ = nullptr;
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
