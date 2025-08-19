// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTHANDSHAKESFORRESOURCEDIRECTORYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTHANDSHAKESFORRESOURCEDIRECTORYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListHandshakesForResourceDirectoryResponseBodyHandshakes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceDirectoryMaster20220419
{
namespace Models
{
  class ListHandshakesForResourceDirectoryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListHandshakesForResourceDirectoryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Handshakes, handshakes_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListHandshakesForResourceDirectoryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Handshakes, handshakes_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListHandshakesForResourceDirectoryResponseBody() = default ;
    ListHandshakesForResourceDirectoryResponseBody(const ListHandshakesForResourceDirectoryResponseBody &) = default ;
    ListHandshakesForResourceDirectoryResponseBody(ListHandshakesForResourceDirectoryResponseBody &&) = default ;
    ListHandshakesForResourceDirectoryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListHandshakesForResourceDirectoryResponseBody() = default ;
    ListHandshakesForResourceDirectoryResponseBody& operator=(const ListHandshakesForResourceDirectoryResponseBody &) = default ;
    ListHandshakesForResourceDirectoryResponseBody& operator=(ListHandshakesForResourceDirectoryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->handshakes_ != nullptr
        && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->requestId_ != nullptr && this->totalCount_ != nullptr; };
    // handshakes Field Functions 
    bool hasHandshakes() const { return this->handshakes_ != nullptr;};
    void deleteHandshakes() { this->handshakes_ = nullptr;};
    inline const ListHandshakesForResourceDirectoryResponseBodyHandshakes & handshakes() const { DARABONBA_PTR_GET_CONST(handshakes_, ListHandshakesForResourceDirectoryResponseBodyHandshakes) };
    inline ListHandshakesForResourceDirectoryResponseBodyHandshakes handshakes() { DARABONBA_PTR_GET(handshakes_, ListHandshakesForResourceDirectoryResponseBodyHandshakes) };
    inline ListHandshakesForResourceDirectoryResponseBody& setHandshakes(const ListHandshakesForResourceDirectoryResponseBodyHandshakes & handshakes) { DARABONBA_PTR_SET_VALUE(handshakes_, handshakes) };
    inline ListHandshakesForResourceDirectoryResponseBody& setHandshakes(ListHandshakesForResourceDirectoryResponseBodyHandshakes && handshakes) { DARABONBA_PTR_SET_RVALUE(handshakes_, handshakes) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListHandshakesForResourceDirectoryResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListHandshakesForResourceDirectoryResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListHandshakesForResourceDirectoryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListHandshakesForResourceDirectoryResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The information of the invitations.
    std::shared_ptr<ListHandshakesForResourceDirectoryResponseBodyHandshakes> handshakes_ = nullptr;
    // The page number of the returned page.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries returned per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceDirectoryMaster20220419
#endif
