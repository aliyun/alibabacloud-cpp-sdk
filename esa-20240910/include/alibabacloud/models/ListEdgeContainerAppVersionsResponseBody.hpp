// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEDGECONTAINERAPPVERSIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTEDGECONTAINERAPPVERSIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListEdgeContainerAppVersionsResponseBodyVersions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class ListEdgeContainerAppVersionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEdgeContainerAppVersionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(Versions, versions_);
    };
    friend void from_json(const Darabonba::Json& j, ListEdgeContainerAppVersionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(Versions, versions_);
    };
    ListEdgeContainerAppVersionsResponseBody() = default ;
    ListEdgeContainerAppVersionsResponseBody(const ListEdgeContainerAppVersionsResponseBody &) = default ;
    ListEdgeContainerAppVersionsResponseBody(ListEdgeContainerAppVersionsResponseBody &&) = default ;
    ListEdgeContainerAppVersionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEdgeContainerAppVersionsResponseBody() = default ;
    ListEdgeContainerAppVersionsResponseBody& operator=(const ListEdgeContainerAppVersionsResponseBody &) = default ;
    ListEdgeContainerAppVersionsResponseBody& operator=(ListEdgeContainerAppVersionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && return this->pageSize_ == nullptr && return this->requestId_ == nullptr && return this->totalCount_ == nullptr && return this->versions_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListEdgeContainerAppVersionsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListEdgeContainerAppVersionsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListEdgeContainerAppVersionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListEdgeContainerAppVersionsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // versions Field Functions 
    bool hasVersions() const { return this->versions_ != nullptr;};
    void deleteVersions() { this->versions_ = nullptr;};
    inline const vector<ListEdgeContainerAppVersionsResponseBodyVersions> & versions() const { DARABONBA_PTR_GET_CONST(versions_, vector<ListEdgeContainerAppVersionsResponseBodyVersions>) };
    inline vector<ListEdgeContainerAppVersionsResponseBodyVersions> versions() { DARABONBA_PTR_GET(versions_, vector<ListEdgeContainerAppVersionsResponseBodyVersions>) };
    inline ListEdgeContainerAppVersionsResponseBody& setVersions(const vector<ListEdgeContainerAppVersionsResponseBodyVersions> & versions) { DARABONBA_PTR_SET_VALUE(versions_, versions) };
    inline ListEdgeContainerAppVersionsResponseBody& setVersions(vector<ListEdgeContainerAppVersionsResponseBodyVersions> && versions) { DARABONBA_PTR_SET_RVALUE(versions_, versions) };


  protected:
    // The page number.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of entries.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
    // The versions.
    std::shared_ptr<vector<ListEdgeContainerAppVersionsResponseBodyVersions>> versions_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
