// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBGPPEERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBGPPEERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeBgpPeersResponseBodyBgpPeers.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeBgpPeersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBgpPeersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BgpPeers, bgpPeers_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBgpPeersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BgpPeers, bgpPeers_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeBgpPeersResponseBody() = default ;
    DescribeBgpPeersResponseBody(const DescribeBgpPeersResponseBody &) = default ;
    DescribeBgpPeersResponseBody(DescribeBgpPeersResponseBody &&) = default ;
    DescribeBgpPeersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBgpPeersResponseBody() = default ;
    DescribeBgpPeersResponseBody& operator=(const DescribeBgpPeersResponseBody &) = default ;
    DescribeBgpPeersResponseBody& operator=(DescribeBgpPeersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bgpPeers_ == nullptr
        && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // bgpPeers Field Functions 
    bool hasBgpPeers() const { return this->bgpPeers_ != nullptr;};
    void deleteBgpPeers() { this->bgpPeers_ = nullptr;};
    inline const DescribeBgpPeersResponseBodyBgpPeers & bgpPeers() const { DARABONBA_PTR_GET_CONST(bgpPeers_, DescribeBgpPeersResponseBodyBgpPeers) };
    inline DescribeBgpPeersResponseBodyBgpPeers bgpPeers() { DARABONBA_PTR_GET(bgpPeers_, DescribeBgpPeersResponseBodyBgpPeers) };
    inline DescribeBgpPeersResponseBody& setBgpPeers(const DescribeBgpPeersResponseBodyBgpPeers & bgpPeers) { DARABONBA_PTR_SET_VALUE(bgpPeers_, bgpPeers) };
    inline DescribeBgpPeersResponseBody& setBgpPeers(DescribeBgpPeersResponseBodyBgpPeers && bgpPeers) { DARABONBA_PTR_SET_RVALUE(bgpPeers_, bgpPeers) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeBgpPeersResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeBgpPeersResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeBgpPeersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeBgpPeersResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The information about the BGP peer.
    std::shared_ptr<DescribeBgpPeersResponseBodyBgpPeers> bgpPeers_ = nullptr;
    // The page number.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
