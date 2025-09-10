// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBINARYLOGLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBINARYLOGLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeBinaryLogListResponseBodyLogList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class DescribeBinaryLogListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBinaryLogListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(LogList, logList_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalNumber, totalNumber_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBinaryLogListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(LogList, logList_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalNumber, totalNumber_);
    };
    DescribeBinaryLogListResponseBody() = default ;
    DescribeBinaryLogListResponseBody(const DescribeBinaryLogListResponseBody &) = default ;
    DescribeBinaryLogListResponseBody(DescribeBinaryLogListResponseBody &&) = default ;
    DescribeBinaryLogListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBinaryLogListResponseBody() = default ;
    DescribeBinaryLogListResponseBody& operator=(const DescribeBinaryLogListResponseBody &) = default ;
    DescribeBinaryLogListResponseBody& operator=(DescribeBinaryLogListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->logList_ != nullptr
        && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->requestId_ != nullptr && this->totalNumber_ != nullptr; };
    // logList Field Functions 
    bool hasLogList() const { return this->logList_ != nullptr;};
    void deleteLogList() { this->logList_ = nullptr;};
    inline const vector<DescribeBinaryLogListResponseBodyLogList> & logList() const { DARABONBA_PTR_GET_CONST(logList_, vector<DescribeBinaryLogListResponseBodyLogList>) };
    inline vector<DescribeBinaryLogListResponseBodyLogList> logList() { DARABONBA_PTR_GET(logList_, vector<DescribeBinaryLogListResponseBodyLogList>) };
    inline DescribeBinaryLogListResponseBody& setLogList(const vector<DescribeBinaryLogListResponseBodyLogList> & logList) { DARABONBA_PTR_SET_VALUE(logList_, logList) };
    inline DescribeBinaryLogListResponseBody& setLogList(vector<DescribeBinaryLogListResponseBodyLogList> && logList) { DARABONBA_PTR_SET_RVALUE(logList_, logList) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeBinaryLogListResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeBinaryLogListResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeBinaryLogListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalNumber Field Functions 
    bool hasTotalNumber() const { return this->totalNumber_ != nullptr;};
    void deleteTotalNumber() { this->totalNumber_ = nullptr;};
    inline int32_t totalNumber() const { DARABONBA_PTR_GET_DEFAULT(totalNumber_, 0) };
    inline DescribeBinaryLogListResponseBody& setTotalNumber(int32_t totalNumber) { DARABONBA_PTR_SET_VALUE(totalNumber_, totalNumber) };


  protected:
    std::shared_ptr<vector<DescribeBinaryLogListResponseBodyLogList>> logList_ = nullptr;
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int32_t> totalNumber_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
