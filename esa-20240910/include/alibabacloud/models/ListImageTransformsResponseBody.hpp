// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTIMAGETRANSFORMSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTIMAGETRANSFORMSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListImageTransformsResponseBodyConfigs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class ListImageTransformsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListImageTransformsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Configs, configs_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(TotalPage, totalPage_);
    };
    friend void from_json(const Darabonba::Json& j, ListImageTransformsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Configs, configs_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(TotalPage, totalPage_);
    };
    ListImageTransformsResponseBody() = default ;
    ListImageTransformsResponseBody(const ListImageTransformsResponseBody &) = default ;
    ListImageTransformsResponseBody(ListImageTransformsResponseBody &&) = default ;
    ListImageTransformsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListImageTransformsResponseBody() = default ;
    ListImageTransformsResponseBody& operator=(const ListImageTransformsResponseBody &) = default ;
    ListImageTransformsResponseBody& operator=(ListImageTransformsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->configs_ != nullptr
        && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->requestId_ != nullptr && this->totalCount_ != nullptr && this->totalPage_ != nullptr; };
    // configs Field Functions 
    bool hasConfigs() const { return this->configs_ != nullptr;};
    void deleteConfigs() { this->configs_ = nullptr;};
    inline const vector<ListImageTransformsResponseBodyConfigs> & configs() const { DARABONBA_PTR_GET_CONST(configs_, vector<ListImageTransformsResponseBodyConfigs>) };
    inline vector<ListImageTransformsResponseBodyConfigs> configs() { DARABONBA_PTR_GET(configs_, vector<ListImageTransformsResponseBodyConfigs>) };
    inline ListImageTransformsResponseBody& setConfigs(const vector<ListImageTransformsResponseBodyConfigs> & configs) { DARABONBA_PTR_SET_VALUE(configs_, configs) };
    inline ListImageTransformsResponseBody& setConfigs(vector<ListImageTransformsResponseBodyConfigs> && configs) { DARABONBA_PTR_SET_RVALUE(configs_, configs) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListImageTransformsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListImageTransformsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListImageTransformsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListImageTransformsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // totalPage Field Functions 
    bool hasTotalPage() const { return this->totalPage_ != nullptr;};
    void deleteTotalPage() { this->totalPage_ = nullptr;};
    inline int32_t totalPage() const { DARABONBA_PTR_GET_DEFAULT(totalPage_, 0) };
    inline ListImageTransformsResponseBody& setTotalPage(int32_t totalPage) { DARABONBA_PTR_SET_VALUE(totalPage_, totalPage) };


  protected:
    // Configuration list.
    std::shared_ptr<vector<ListImageTransformsResponseBodyConfigs>> configs_ = nullptr;
    // Current page number.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // Page size. Range: **1~500**, default is **500**.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // Request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Total number of records.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
    // Total number of pages.
    std::shared_ptr<int32_t> totalPage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
