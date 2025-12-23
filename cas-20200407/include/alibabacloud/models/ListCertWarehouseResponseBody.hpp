// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCERTWAREHOUSERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCERTWAREHOUSERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListCertWarehouseResponseBodyCertWarehouseList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cas20200407
{
namespace Models
{
  class ListCertWarehouseResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCertWarehouseResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CertWarehouseList, certWarehouseList_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ShowSize, showSize_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListCertWarehouseResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CertWarehouseList, certWarehouseList_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ShowSize, showSize_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListCertWarehouseResponseBody() = default ;
    ListCertWarehouseResponseBody(const ListCertWarehouseResponseBody &) = default ;
    ListCertWarehouseResponseBody(ListCertWarehouseResponseBody &&) = default ;
    ListCertWarehouseResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCertWarehouseResponseBody() = default ;
    ListCertWarehouseResponseBody& operator=(const ListCertWarehouseResponseBody &) = default ;
    ListCertWarehouseResponseBody& operator=(ListCertWarehouseResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->certWarehouseList_ == nullptr
        && return this->currentPage_ == nullptr && return this->requestId_ == nullptr && return this->showSize_ == nullptr && return this->totalCount_ == nullptr; };
    // certWarehouseList Field Functions 
    bool hasCertWarehouseList() const { return this->certWarehouseList_ != nullptr;};
    void deleteCertWarehouseList() { this->certWarehouseList_ = nullptr;};
    inline const vector<ListCertWarehouseResponseBodyCertWarehouseList> & certWarehouseList() const { DARABONBA_PTR_GET_CONST(certWarehouseList_, vector<ListCertWarehouseResponseBodyCertWarehouseList>) };
    inline vector<ListCertWarehouseResponseBodyCertWarehouseList> certWarehouseList() { DARABONBA_PTR_GET(certWarehouseList_, vector<ListCertWarehouseResponseBodyCertWarehouseList>) };
    inline ListCertWarehouseResponseBody& setCertWarehouseList(const vector<ListCertWarehouseResponseBodyCertWarehouseList> & certWarehouseList) { DARABONBA_PTR_SET_VALUE(certWarehouseList_, certWarehouseList) };
    inline ListCertWarehouseResponseBody& setCertWarehouseList(vector<ListCertWarehouseResponseBodyCertWarehouseList> && certWarehouseList) { DARABONBA_PTR_SET_RVALUE(certWarehouseList_, certWarehouseList) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int64_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0L) };
    inline ListCertWarehouseResponseBody& setCurrentPage(int64_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListCertWarehouseResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // showSize Field Functions 
    bool hasShowSize() const { return this->showSize_ != nullptr;};
    void deleteShowSize() { this->showSize_ = nullptr;};
    inline int64_t showSize() const { DARABONBA_PTR_GET_DEFAULT(showSize_, 0L) };
    inline ListCertWarehouseResponseBody& setShowSize(int64_t showSize) { DARABONBA_PTR_SET_VALUE(showSize_, showSize) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListCertWarehouseResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The certificate application repositories.
    std::shared_ptr<vector<ListCertWarehouseResponseBodyCertWarehouseList>> certWarehouseList_ = nullptr;
    // The page number of the returned page. Default value: 1.
    std::shared_ptr<int64_t> currentPage_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The number of entries returned per page. Default value: 50.
    std::shared_ptr<int64_t> showSize_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200407
#endif
