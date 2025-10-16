// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPINSTANCEGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPINSTANCEGROUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListAppInstanceGroupResponseBodyAppInstanceGroupModels.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class ListAppInstanceGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAppInstanceGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AppInstanceGroupModels, appInstanceGroupModels_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListAppInstanceGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AppInstanceGroupModels, appInstanceGroupModels_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListAppInstanceGroupResponseBody() = default ;
    ListAppInstanceGroupResponseBody(const ListAppInstanceGroupResponseBody &) = default ;
    ListAppInstanceGroupResponseBody(ListAppInstanceGroupResponseBody &&) = default ;
    ListAppInstanceGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAppInstanceGroupResponseBody() = default ;
    ListAppInstanceGroupResponseBody& operator=(const ListAppInstanceGroupResponseBody &) = default ;
    ListAppInstanceGroupResponseBody& operator=(ListAppInstanceGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appInstanceGroupModels_ == nullptr
        && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // appInstanceGroupModels Field Functions 
    bool hasAppInstanceGroupModels() const { return this->appInstanceGroupModels_ != nullptr;};
    void deleteAppInstanceGroupModels() { this->appInstanceGroupModels_ = nullptr;};
    inline const vector<ListAppInstanceGroupResponseBodyAppInstanceGroupModels> & appInstanceGroupModels() const { DARABONBA_PTR_GET_CONST(appInstanceGroupModels_, vector<ListAppInstanceGroupResponseBodyAppInstanceGroupModels>) };
    inline vector<ListAppInstanceGroupResponseBodyAppInstanceGroupModels> appInstanceGroupModels() { DARABONBA_PTR_GET(appInstanceGroupModels_, vector<ListAppInstanceGroupResponseBodyAppInstanceGroupModels>) };
    inline ListAppInstanceGroupResponseBody& setAppInstanceGroupModels(const vector<ListAppInstanceGroupResponseBodyAppInstanceGroupModels> & appInstanceGroupModels) { DARABONBA_PTR_SET_VALUE(appInstanceGroupModels_, appInstanceGroupModels) };
    inline ListAppInstanceGroupResponseBody& setAppInstanceGroupModels(vector<ListAppInstanceGroupResponseBodyAppInstanceGroupModels> && appInstanceGroupModels) { DARABONBA_PTR_SET_RVALUE(appInstanceGroupModels_, appInstanceGroupModels) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListAppInstanceGroupResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListAppInstanceGroupResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAppInstanceGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListAppInstanceGroupResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The delivery groups.
    std::shared_ptr<vector<ListAppInstanceGroupResponseBodyAppInstanceGroupModels>> appInstanceGroupModels_ = nullptr;
    // The page number.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page.
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
