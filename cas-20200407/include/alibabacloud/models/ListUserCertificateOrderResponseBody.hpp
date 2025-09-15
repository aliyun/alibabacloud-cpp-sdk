// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERCERTIFICATEORDERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERCERTIFICATEORDERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListUserCertificateOrderResponseBodyCertificateOrderList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cas20200407
{
namespace Models
{
  class ListUserCertificateOrderResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUserCertificateOrderResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CertificateOrderList, certificateOrderList_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ShowSize, showSize_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListUserCertificateOrderResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CertificateOrderList, certificateOrderList_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ShowSize, showSize_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListUserCertificateOrderResponseBody() = default ;
    ListUserCertificateOrderResponseBody(const ListUserCertificateOrderResponseBody &) = default ;
    ListUserCertificateOrderResponseBody(ListUserCertificateOrderResponseBody &&) = default ;
    ListUserCertificateOrderResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUserCertificateOrderResponseBody() = default ;
    ListUserCertificateOrderResponseBody& operator=(const ListUserCertificateOrderResponseBody &) = default ;
    ListUserCertificateOrderResponseBody& operator=(ListUserCertificateOrderResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->certificateOrderList_ != nullptr
        && this->currentPage_ != nullptr && this->requestId_ != nullptr && this->showSize_ != nullptr && this->totalCount_ != nullptr; };
    // certificateOrderList Field Functions 
    bool hasCertificateOrderList() const { return this->certificateOrderList_ != nullptr;};
    void deleteCertificateOrderList() { this->certificateOrderList_ = nullptr;};
    inline const vector<ListUserCertificateOrderResponseBodyCertificateOrderList> & certificateOrderList() const { DARABONBA_PTR_GET_CONST(certificateOrderList_, vector<ListUserCertificateOrderResponseBodyCertificateOrderList>) };
    inline vector<ListUserCertificateOrderResponseBodyCertificateOrderList> certificateOrderList() { DARABONBA_PTR_GET(certificateOrderList_, vector<ListUserCertificateOrderResponseBodyCertificateOrderList>) };
    inline ListUserCertificateOrderResponseBody& setCertificateOrderList(const vector<ListUserCertificateOrderResponseBodyCertificateOrderList> & certificateOrderList) { DARABONBA_PTR_SET_VALUE(certificateOrderList_, certificateOrderList) };
    inline ListUserCertificateOrderResponseBody& setCertificateOrderList(vector<ListUserCertificateOrderResponseBodyCertificateOrderList> && certificateOrderList) { DARABONBA_PTR_SET_RVALUE(certificateOrderList_, certificateOrderList) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int64_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0L) };
    inline ListUserCertificateOrderResponseBody& setCurrentPage(int64_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListUserCertificateOrderResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // showSize Field Functions 
    bool hasShowSize() const { return this->showSize_ != nullptr;};
    void deleteShowSize() { this->showSize_ = nullptr;};
    inline int64_t showSize() const { DARABONBA_PTR_GET_DEFAULT(showSize_, 0L) };
    inline ListUserCertificateOrderResponseBody& setShowSize(int64_t showSize) { DARABONBA_PTR_SET_VALUE(showSize_, showSize) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListUserCertificateOrderResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The certificates and orders.
    std::shared_ptr<vector<ListUserCertificateOrderResponseBodyCertificateOrderList>> certificateOrderList_ = nullptr;
    // The page number of the returned page.
    std::shared_ptr<int64_t> currentPage_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
    // The number of entries returned per page.
    std::shared_ptr<int64_t> showSize_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200407
#endif
