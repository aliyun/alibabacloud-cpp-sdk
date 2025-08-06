// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SIMPLELISTREPORTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SIMPLELISTREPORTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SimpleListReportResponseBodyDataList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class SimpleListReportResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SimpleListReportResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(dataList, dataList_);
      DARABONBA_PTR_TO_JSON(hasMore, hasMore_);
      DARABONBA_PTR_TO_JSON(nextCursor, nextCursor_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(size, size_);
    };
    friend void from_json(const Darabonba::Json& j, SimpleListReportResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(dataList, dataList_);
      DARABONBA_PTR_FROM_JSON(hasMore, hasMore_);
      DARABONBA_PTR_FROM_JSON(nextCursor, nextCursor_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(size, size_);
    };
    SimpleListReportResponseBody() = default ;
    SimpleListReportResponseBody(const SimpleListReportResponseBody &) = default ;
    SimpleListReportResponseBody(SimpleListReportResponseBody &&) = default ;
    SimpleListReportResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SimpleListReportResponseBody() = default ;
    SimpleListReportResponseBody& operator=(const SimpleListReportResponseBody &) = default ;
    SimpleListReportResponseBody& operator=(SimpleListReportResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dataList_ != nullptr
        && this->hasMore_ != nullptr && this->nextCursor_ != nullptr && this->requestId_ != nullptr && this->size_ != nullptr; };
    // dataList Field Functions 
    bool hasDataList() const { return this->dataList_ != nullptr;};
    void deleteDataList() { this->dataList_ = nullptr;};
    inline const vector<SimpleListReportResponseBodyDataList> & dataList() const { DARABONBA_PTR_GET_CONST(dataList_, vector<SimpleListReportResponseBodyDataList>) };
    inline vector<SimpleListReportResponseBodyDataList> dataList() { DARABONBA_PTR_GET(dataList_, vector<SimpleListReportResponseBodyDataList>) };
    inline SimpleListReportResponseBody& setDataList(const vector<SimpleListReportResponseBodyDataList> & dataList) { DARABONBA_PTR_SET_VALUE(dataList_, dataList) };
    inline SimpleListReportResponseBody& setDataList(vector<SimpleListReportResponseBodyDataList> && dataList) { DARABONBA_PTR_SET_RVALUE(dataList_, dataList) };


    // hasMore Field Functions 
    bool hasHasMore() const { return this->hasMore_ != nullptr;};
    void deleteHasMore() { this->hasMore_ = nullptr;};
    inline bool hasMore() const { DARABONBA_PTR_GET_DEFAULT(hasMore_, false) };
    inline SimpleListReportResponseBody& setHasMore(bool hasMore) { DARABONBA_PTR_SET_VALUE(hasMore_, hasMore) };


    // nextCursor Field Functions 
    bool hasNextCursor() const { return this->nextCursor_ != nullptr;};
    void deleteNextCursor() { this->nextCursor_ = nullptr;};
    inline int64_t nextCursor() const { DARABONBA_PTR_GET_DEFAULT(nextCursor_, 0L) };
    inline SimpleListReportResponseBody& setNextCursor(int64_t nextCursor) { DARABONBA_PTR_SET_VALUE(nextCursor_, nextCursor) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SimpleListReportResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int64_t size() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
    inline SimpleListReportResponseBody& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


  protected:
    std::shared_ptr<vector<SimpleListReportResponseBodyDataList>> dataList_ = nullptr;
    std::shared_ptr<bool> hasMore_ = nullptr;
    std::shared_ptr<int64_t> nextCursor_ = nullptr;
    // requestId
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int64_t> size_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
