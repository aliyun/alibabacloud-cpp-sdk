// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTREPOBUILDRECORDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTREPOBUILDRECORDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListRepoBuildRecordResponseBodyBuildRecords.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cr20181201
{
namespace Models
{
  class ListRepoBuildRecordResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRepoBuildRecordResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BuildRecords, buildRecords_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(IsSuccess, isSuccess_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListRepoBuildRecordResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BuildRecords, buildRecords_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(IsSuccess, isSuccess_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListRepoBuildRecordResponseBody() = default ;
    ListRepoBuildRecordResponseBody(const ListRepoBuildRecordResponseBody &) = default ;
    ListRepoBuildRecordResponseBody(ListRepoBuildRecordResponseBody &&) = default ;
    ListRepoBuildRecordResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRepoBuildRecordResponseBody() = default ;
    ListRepoBuildRecordResponseBody& operator=(const ListRepoBuildRecordResponseBody &) = default ;
    ListRepoBuildRecordResponseBody& operator=(ListRepoBuildRecordResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->buildRecords_ != nullptr
        && this->code_ != nullptr && this->isSuccess_ != nullptr && this->pageNo_ != nullptr && this->pageSize_ != nullptr && this->requestId_ != nullptr
        && this->totalCount_ != nullptr; };
    // buildRecords Field Functions 
    bool hasBuildRecords() const { return this->buildRecords_ != nullptr;};
    void deleteBuildRecords() { this->buildRecords_ = nullptr;};
    inline const vector<ListRepoBuildRecordResponseBodyBuildRecords> & buildRecords() const { DARABONBA_PTR_GET_CONST(buildRecords_, vector<ListRepoBuildRecordResponseBodyBuildRecords>) };
    inline vector<ListRepoBuildRecordResponseBodyBuildRecords> buildRecords() { DARABONBA_PTR_GET(buildRecords_, vector<ListRepoBuildRecordResponseBodyBuildRecords>) };
    inline ListRepoBuildRecordResponseBody& setBuildRecords(const vector<ListRepoBuildRecordResponseBodyBuildRecords> & buildRecords) { DARABONBA_PTR_SET_VALUE(buildRecords_, buildRecords) };
    inline ListRepoBuildRecordResponseBody& setBuildRecords(vector<ListRepoBuildRecordResponseBodyBuildRecords> && buildRecords) { DARABONBA_PTR_SET_RVALUE(buildRecords_, buildRecords) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListRepoBuildRecordResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // isSuccess Field Functions 
    bool hasIsSuccess() const { return this->isSuccess_ != nullptr;};
    void deleteIsSuccess() { this->isSuccess_ = nullptr;};
    inline bool isSuccess() const { DARABONBA_PTR_GET_DEFAULT(isSuccess_, false) };
    inline ListRepoBuildRecordResponseBody& setIsSuccess(bool isSuccess) { DARABONBA_PTR_SET_VALUE(isSuccess_, isSuccess) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int32_t pageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
    inline ListRepoBuildRecordResponseBody& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListRepoBuildRecordResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListRepoBuildRecordResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline string totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, "") };
    inline ListRepoBuildRecordResponseBody& setTotalCount(string totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The list of image building records.
    std::shared_ptr<vector<ListRepoBuildRecordResponseBodyBuildRecords>> buildRecords_ = nullptr;
    // The return value.
    std::shared_ptr<string> code_ = nullptr;
    // Indicates whether the request is successful. Valid values:
    // 
    // *   `true`: The request is successful.
    // *   `false`: The request fails.
    std::shared_ptr<bool> isSuccess_ = nullptr;
    // The page number of the returned page.
    std::shared_ptr<int32_t> pageNo_ = nullptr;
    // The number of entries returned per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of returned entries.
    std::shared_ptr<string> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif
