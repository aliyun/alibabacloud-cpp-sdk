// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSOURCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSOURCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ChannelAssemblySource.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListSourcesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSourcesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SourceList, sourceList_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListSourcesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SourceList, sourceList_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListSourcesResponseBody() = default ;
    ListSourcesResponseBody(const ListSourcesResponseBody &) = default ;
    ListSourcesResponseBody(ListSourcesResponseBody &&) = default ;
    ListSourcesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSourcesResponseBody() = default ;
    ListSourcesResponseBody& operator=(const ListSourcesResponseBody &) = default ;
    ListSourcesResponseBody& operator=(ListSourcesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pageNo_ == nullptr
        && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->sourceList_ == nullptr && this->totalCount_ == nullptr; };
    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int32_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
    inline ListSourcesResponseBody& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListSourcesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListSourcesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sourceList Field Functions 
    bool hasSourceList() const { return this->sourceList_ != nullptr;};
    void deleteSourceList() { this->sourceList_ = nullptr;};
    inline const vector<ChannelAssemblySource> & getSourceList() const { DARABONBA_PTR_GET_CONST(sourceList_, vector<ChannelAssemblySource>) };
    inline vector<ChannelAssemblySource> getSourceList() { DARABONBA_PTR_GET(sourceList_, vector<ChannelAssemblySource>) };
    inline ListSourcesResponseBody& setSourceList(const vector<ChannelAssemblySource> & sourceList) { DARABONBA_PTR_SET_VALUE(sourceList_, sourceList) };
    inline ListSourcesResponseBody& setSourceList(vector<ChannelAssemblySource> && sourceList) { DARABONBA_PTR_SET_RVALUE(sourceList_, sourceList) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListSourcesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The page number. Default value: 1.
    shared_ptr<int32_t> pageNo_ {};
    // The number of entries per page. Default value: 20. Valid values: 1 to 100.
    shared_ptr<int32_t> pageSize_ {};
    // **Request ID**
    shared_ptr<string> requestId_ {};
    // The sources.
    shared_ptr<vector<ChannelAssemblySource>> sourceList_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
