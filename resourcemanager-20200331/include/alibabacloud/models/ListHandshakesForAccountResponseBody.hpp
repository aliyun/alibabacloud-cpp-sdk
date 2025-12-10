// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTHANDSHAKESFORACCOUNTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTHANDSHAKESFORACCOUNTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListHandshakesForAccountResponseBodyHandshakes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceManager20200331
{
namespace Models
{
  class ListHandshakesForAccountResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListHandshakesForAccountResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Handshakes, handshakes_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListHandshakesForAccountResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Handshakes, handshakes_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListHandshakesForAccountResponseBody() = default ;
    ListHandshakesForAccountResponseBody(const ListHandshakesForAccountResponseBody &) = default ;
    ListHandshakesForAccountResponseBody(ListHandshakesForAccountResponseBody &&) = default ;
    ListHandshakesForAccountResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListHandshakesForAccountResponseBody() = default ;
    ListHandshakesForAccountResponseBody& operator=(const ListHandshakesForAccountResponseBody &) = default ;
    ListHandshakesForAccountResponseBody& operator=(ListHandshakesForAccountResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->handshakes_ == nullptr
        && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // handshakes Field Functions 
    bool hasHandshakes() const { return this->handshakes_ != nullptr;};
    void deleteHandshakes() { this->handshakes_ = nullptr;};
    inline const ListHandshakesForAccountResponseBodyHandshakes & handshakes() const { DARABONBA_PTR_GET_CONST(handshakes_, ListHandshakesForAccountResponseBodyHandshakes) };
    inline ListHandshakesForAccountResponseBodyHandshakes handshakes() { DARABONBA_PTR_GET(handshakes_, ListHandshakesForAccountResponseBodyHandshakes) };
    inline ListHandshakesForAccountResponseBody& setHandshakes(const ListHandshakesForAccountResponseBodyHandshakes & handshakes) { DARABONBA_PTR_SET_VALUE(handshakes_, handshakes) };
    inline ListHandshakesForAccountResponseBody& setHandshakes(ListHandshakesForAccountResponseBodyHandshakes && handshakes) { DARABONBA_PTR_SET_RVALUE(handshakes_, handshakes) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListHandshakesForAccountResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListHandshakesForAccountResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListHandshakesForAccountResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListHandshakesForAccountResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The information of the invitations.
    std::shared_ptr<ListHandshakesForAccountResponseBodyHandshakes> handshakes_ = nullptr;
    // The page number of the returned page.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries returned per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of invitations.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceManager20200331
#endif
