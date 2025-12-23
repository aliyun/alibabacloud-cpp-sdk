// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLOUDACCESSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCLOUDACCESSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListCloudAccessResponseBodyCloudAccessList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cas20200407
{
namespace Models
{
  class ListCloudAccessResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCloudAccessResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CloudAccessList, cloudAccessList_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ShowSize, showSize_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListCloudAccessResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CloudAccessList, cloudAccessList_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ShowSize, showSize_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListCloudAccessResponseBody() = default ;
    ListCloudAccessResponseBody(const ListCloudAccessResponseBody &) = default ;
    ListCloudAccessResponseBody(ListCloudAccessResponseBody &&) = default ;
    ListCloudAccessResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCloudAccessResponseBody() = default ;
    ListCloudAccessResponseBody& operator=(const ListCloudAccessResponseBody &) = default ;
    ListCloudAccessResponseBody& operator=(ListCloudAccessResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cloudAccessList_ == nullptr
        && return this->currentPage_ == nullptr && return this->requestId_ == nullptr && return this->showSize_ == nullptr && return this->totalCount_ == nullptr; };
    // cloudAccessList Field Functions 
    bool hasCloudAccessList() const { return this->cloudAccessList_ != nullptr;};
    void deleteCloudAccessList() { this->cloudAccessList_ = nullptr;};
    inline const vector<ListCloudAccessResponseBodyCloudAccessList> & cloudAccessList() const { DARABONBA_PTR_GET_CONST(cloudAccessList_, vector<ListCloudAccessResponseBodyCloudAccessList>) };
    inline vector<ListCloudAccessResponseBodyCloudAccessList> cloudAccessList() { DARABONBA_PTR_GET(cloudAccessList_, vector<ListCloudAccessResponseBodyCloudAccessList>) };
    inline ListCloudAccessResponseBody& setCloudAccessList(const vector<ListCloudAccessResponseBodyCloudAccessList> & cloudAccessList) { DARABONBA_PTR_SET_VALUE(cloudAccessList_, cloudAccessList) };
    inline ListCloudAccessResponseBody& setCloudAccessList(vector<ListCloudAccessResponseBodyCloudAccessList> && cloudAccessList) { DARABONBA_PTR_SET_RVALUE(cloudAccessList_, cloudAccessList) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline ListCloudAccessResponseBody& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListCloudAccessResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // showSize Field Functions 
    bool hasShowSize() const { return this->showSize_ != nullptr;};
    void deleteShowSize() { this->showSize_ = nullptr;};
    inline int32_t showSize() const { DARABONBA_PTR_GET_DEFAULT(showSize_, 0) };
    inline ListCloudAccessResponseBody& setShowSize(int32_t showSize) { DARABONBA_PTR_SET_VALUE(showSize_, showSize) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListCloudAccessResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The query results.
    std::shared_ptr<vector<ListCloudAccessResponseBodyCloudAccessList>> cloudAccessList_ = nullptr;
    // The default value is the current page. If CurrentPage is not specified, this parameter is not returned.
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The number of entries per page. If ShowSize is not specified, this parameter is not returned.
    std::shared_ptr<int32_t> showSize_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200407
#endif
