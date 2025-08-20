// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCHANGESETSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCHANGESETSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListChangeSetsResponseBodyChangeSets.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class ListChangeSetsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListChangeSetsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ChangeSets, changeSets_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListChangeSetsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ChangeSets, changeSets_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListChangeSetsResponseBody() = default ;
    ListChangeSetsResponseBody(const ListChangeSetsResponseBody &) = default ;
    ListChangeSetsResponseBody(ListChangeSetsResponseBody &&) = default ;
    ListChangeSetsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListChangeSetsResponseBody() = default ;
    ListChangeSetsResponseBody& operator=(const ListChangeSetsResponseBody &) = default ;
    ListChangeSetsResponseBody& operator=(ListChangeSetsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->changeSets_ != nullptr
        && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->requestId_ != nullptr && this->totalCount_ != nullptr; };
    // changeSets Field Functions 
    bool hasChangeSets() const { return this->changeSets_ != nullptr;};
    void deleteChangeSets() { this->changeSets_ = nullptr;};
    inline const vector<ListChangeSetsResponseBodyChangeSets> & changeSets() const { DARABONBA_PTR_GET_CONST(changeSets_, vector<ListChangeSetsResponseBodyChangeSets>) };
    inline vector<ListChangeSetsResponseBodyChangeSets> changeSets() { DARABONBA_PTR_GET(changeSets_, vector<ListChangeSetsResponseBodyChangeSets>) };
    inline ListChangeSetsResponseBody& setChangeSets(const vector<ListChangeSetsResponseBodyChangeSets> & changeSets) { DARABONBA_PTR_SET_VALUE(changeSets_, changeSets) };
    inline ListChangeSetsResponseBody& setChangeSets(vector<ListChangeSetsResponseBodyChangeSets> && changeSets) { DARABONBA_PTR_SET_RVALUE(changeSets_, changeSets) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListChangeSetsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListChangeSetsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListChangeSetsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListChangeSetsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The change sets.
    std::shared_ptr<vector<ListChangeSetsResponseBodyChangeSets>> changeSets_ = nullptr;
    // The page number.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of change sets returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
