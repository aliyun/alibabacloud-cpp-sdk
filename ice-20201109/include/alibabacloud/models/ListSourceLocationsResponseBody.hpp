// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSOURCELOCATIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSOURCELOCATIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ChannelAssemblySourceLocation.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListSourceLocationsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSourceLocationsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SourceLocationList, sourceLocationList_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListSourceLocationsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SourceLocationList, sourceLocationList_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListSourceLocationsResponseBody() = default ;
    ListSourceLocationsResponseBody(const ListSourceLocationsResponseBody &) = default ;
    ListSourceLocationsResponseBody(ListSourceLocationsResponseBody &&) = default ;
    ListSourceLocationsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSourceLocationsResponseBody() = default ;
    ListSourceLocationsResponseBody& operator=(const ListSourceLocationsResponseBody &) = default ;
    ListSourceLocationsResponseBody& operator=(ListSourceLocationsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pageNo_ == nullptr
        && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->sourceLocationList_ == nullptr && this->totalCount_ == nullptr; };
    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int32_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
    inline ListSourceLocationsResponseBody& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListSourceLocationsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListSourceLocationsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sourceLocationList Field Functions 
    bool hasSourceLocationList() const { return this->sourceLocationList_ != nullptr;};
    void deleteSourceLocationList() { this->sourceLocationList_ = nullptr;};
    inline const vector<ChannelAssemblySourceLocation> & getSourceLocationList() const { DARABONBA_PTR_GET_CONST(sourceLocationList_, vector<ChannelAssemblySourceLocation>) };
    inline vector<ChannelAssemblySourceLocation> getSourceLocationList() { DARABONBA_PTR_GET(sourceLocationList_, vector<ChannelAssemblySourceLocation>) };
    inline ListSourceLocationsResponseBody& setSourceLocationList(const vector<ChannelAssemblySourceLocation> & sourceLocationList) { DARABONBA_PTR_SET_VALUE(sourceLocationList_, sourceLocationList) };
    inline ListSourceLocationsResponseBody& setSourceLocationList(vector<ChannelAssemblySourceLocation> && sourceLocationList) { DARABONBA_PTR_SET_RVALUE(sourceLocationList_, sourceLocationList) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListSourceLocationsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The page number. Default value: 1.
    shared_ptr<int32_t> pageNo_ {};
    // The number of entries per page. Default value: 20. Valid values: 1 to 100.
    shared_ptr<int32_t> pageSize_ {};
    // **Request ID**
    shared_ptr<string> requestId_ {};
    // The source locations.
    shared_ptr<vector<ChannelAssemblySourceLocation>> sourceLocationList_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
