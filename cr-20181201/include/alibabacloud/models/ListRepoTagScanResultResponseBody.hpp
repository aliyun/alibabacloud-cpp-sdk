// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTREPOTAGSCANRESULTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTREPOTAGSCANRESULTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListRepoTagScanResultResponseBodyVulnerabilities.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cr20181201
{
namespace Models
{
  class ListRepoTagScanResultResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRepoTagScanResultResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(IsSuccess, isSuccess_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(Vulnerabilities, vulnerabilities_);
    };
    friend void from_json(const Darabonba::Json& j, ListRepoTagScanResultResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(IsSuccess, isSuccess_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(Vulnerabilities, vulnerabilities_);
    };
    ListRepoTagScanResultResponseBody() = default ;
    ListRepoTagScanResultResponseBody(const ListRepoTagScanResultResponseBody &) = default ;
    ListRepoTagScanResultResponseBody(ListRepoTagScanResultResponseBody &&) = default ;
    ListRepoTagScanResultResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRepoTagScanResultResponseBody() = default ;
    ListRepoTagScanResultResponseBody& operator=(const ListRepoTagScanResultResponseBody &) = default ;
    ListRepoTagScanResultResponseBody& operator=(ListRepoTagScanResultResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->isSuccess_ == nullptr && return this->pageNo_ == nullptr && return this->pageSize_ == nullptr && return this->requestId_ == nullptr && return this->totalCount_ == nullptr
        && return this->vulnerabilities_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListRepoTagScanResultResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // isSuccess Field Functions 
    bool hasIsSuccess() const { return this->isSuccess_ != nullptr;};
    void deleteIsSuccess() { this->isSuccess_ = nullptr;};
    inline bool isSuccess() const { DARABONBA_PTR_GET_DEFAULT(isSuccess_, false) };
    inline ListRepoTagScanResultResponseBody& setIsSuccess(bool isSuccess) { DARABONBA_PTR_SET_VALUE(isSuccess_, isSuccess) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int32_t pageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
    inline ListRepoTagScanResultResponseBody& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListRepoTagScanResultResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListRepoTagScanResultResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListRepoTagScanResultResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // vulnerabilities Field Functions 
    bool hasVulnerabilities() const { return this->vulnerabilities_ != nullptr;};
    void deleteVulnerabilities() { this->vulnerabilities_ = nullptr;};
    inline const vector<ListRepoTagScanResultResponseBodyVulnerabilities> & vulnerabilities() const { DARABONBA_PTR_GET_CONST(vulnerabilities_, vector<ListRepoTagScanResultResponseBodyVulnerabilities>) };
    inline vector<ListRepoTagScanResultResponseBodyVulnerabilities> vulnerabilities() { DARABONBA_PTR_GET(vulnerabilities_, vector<ListRepoTagScanResultResponseBodyVulnerabilities>) };
    inline ListRepoTagScanResultResponseBody& setVulnerabilities(const vector<ListRepoTagScanResultResponseBodyVulnerabilities> & vulnerabilities) { DARABONBA_PTR_SET_VALUE(vulnerabilities_, vulnerabilities) };
    inline ListRepoTagScanResultResponseBody& setVulnerabilities(vector<ListRepoTagScanResultResponseBodyVulnerabilities> && vulnerabilities) { DARABONBA_PTR_SET_RVALUE(vulnerabilities_, vulnerabilities) };


  protected:
    // The return value.
    std::shared_ptr<string> code_ = nullptr;
    // Indicates whether the request is successful. Valid values:
    // 
    // *   `true`: The request is successful.
    // *   `false`: The request failed.
    std::shared_ptr<bool> isSuccess_ = nullptr;
    // The number of the returned page.
    std::shared_ptr<int32_t> pageNo_ = nullptr;
    // The number of entries returned per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of vulnerabilities detected on images.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
    // The details about the detected vulnerabilities.
    std::shared_ptr<vector<ListRepoTagScanResultResponseBodyVulnerabilities>> vulnerabilities_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif
