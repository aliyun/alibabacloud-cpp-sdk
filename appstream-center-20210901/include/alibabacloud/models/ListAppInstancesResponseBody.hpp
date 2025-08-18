// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPINSTANCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPINSTANCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListAppInstancesResponseBodyAppInstanceModels.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class ListAppInstancesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAppInstancesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AppInstanceModels, appInstanceModels_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListAppInstancesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AppInstanceModels, appInstanceModels_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListAppInstancesResponseBody() = default ;
    ListAppInstancesResponseBody(const ListAppInstancesResponseBody &) = default ;
    ListAppInstancesResponseBody(ListAppInstancesResponseBody &&) = default ;
    ListAppInstancesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAppInstancesResponseBody() = default ;
    ListAppInstancesResponseBody& operator=(const ListAppInstancesResponseBody &) = default ;
    ListAppInstancesResponseBody& operator=(ListAppInstancesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appInstanceModels_ != nullptr
        && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->requestId_ != nullptr && this->totalCount_ != nullptr; };
    // appInstanceModels Field Functions 
    bool hasAppInstanceModels() const { return this->appInstanceModels_ != nullptr;};
    void deleteAppInstanceModels() { this->appInstanceModels_ = nullptr;};
    inline const vector<ListAppInstancesResponseBodyAppInstanceModels> & appInstanceModels() const { DARABONBA_PTR_GET_CONST(appInstanceModels_, vector<ListAppInstancesResponseBodyAppInstanceModels>) };
    inline vector<ListAppInstancesResponseBodyAppInstanceModels> appInstanceModels() { DARABONBA_PTR_GET(appInstanceModels_, vector<ListAppInstancesResponseBodyAppInstanceModels>) };
    inline ListAppInstancesResponseBody& setAppInstanceModels(const vector<ListAppInstancesResponseBodyAppInstanceModels> & appInstanceModels) { DARABONBA_PTR_SET_VALUE(appInstanceModels_, appInstanceModels) };
    inline ListAppInstancesResponseBody& setAppInstanceModels(vector<ListAppInstancesResponseBodyAppInstanceModels> && appInstanceModels) { DARABONBA_PTR_SET_RVALUE(appInstanceModels_, appInstanceModels) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListAppInstancesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListAppInstancesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAppInstancesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListAppInstancesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The app instances.
    std::shared_ptr<vector<ListAppInstancesResponseBodyAppInstanceModels>> appInstanceModels_ = nullptr;
    // The page number of the returned page. We recommend that you configure this parameter.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries returned on each page. The value cannot be greater than `100`. We recommend that you configure this parameter.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
