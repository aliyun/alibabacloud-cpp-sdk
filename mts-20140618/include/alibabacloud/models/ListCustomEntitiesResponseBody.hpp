// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCUSTOMENTITIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCUSTOMENTITIESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListCustomEntitiesResponseBodyCustomEntities.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class ListCustomEntitiesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCustomEntitiesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CustomEntities, customEntities_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListCustomEntitiesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CustomEntities, customEntities_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListCustomEntitiesResponseBody() = default ;
    ListCustomEntitiesResponseBody(const ListCustomEntitiesResponseBody &) = default ;
    ListCustomEntitiesResponseBody(ListCustomEntitiesResponseBody &&) = default ;
    ListCustomEntitiesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCustomEntitiesResponseBody() = default ;
    ListCustomEntitiesResponseBody& operator=(const ListCustomEntitiesResponseBody &) = default ;
    ListCustomEntitiesResponseBody& operator=(ListCustomEntitiesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->customEntities_ == nullptr
        && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // customEntities Field Functions 
    bool hasCustomEntities() const { return this->customEntities_ != nullptr;};
    void deleteCustomEntities() { this->customEntities_ = nullptr;};
    inline const ListCustomEntitiesResponseBodyCustomEntities & customEntities() const { DARABONBA_PTR_GET_CONST(customEntities_, ListCustomEntitiesResponseBodyCustomEntities) };
    inline ListCustomEntitiesResponseBodyCustomEntities customEntities() { DARABONBA_PTR_GET(customEntities_, ListCustomEntitiesResponseBodyCustomEntities) };
    inline ListCustomEntitiesResponseBody& setCustomEntities(const ListCustomEntitiesResponseBodyCustomEntities & customEntities) { DARABONBA_PTR_SET_VALUE(customEntities_, customEntities) };
    inline ListCustomEntitiesResponseBody& setCustomEntities(ListCustomEntitiesResponseBodyCustomEntities && customEntities) { DARABONBA_PTR_SET_RVALUE(customEntities_, customEntities) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListCustomEntitiesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListCustomEntitiesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListCustomEntitiesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListCustomEntitiesResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<ListCustomEntitiesResponseBodyCustomEntities> customEntities_ = nullptr;
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
