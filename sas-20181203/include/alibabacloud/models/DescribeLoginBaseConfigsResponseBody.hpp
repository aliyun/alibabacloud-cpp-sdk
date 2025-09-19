// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELOGINBASECONFIGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELOGINBASECONFIGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeLoginBaseConfigsResponseBodyBaseConfigs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeLoginBaseConfigsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLoginBaseConfigsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BaseConfigs, baseConfigs_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLoginBaseConfigsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BaseConfigs, baseConfigs_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeLoginBaseConfigsResponseBody() = default ;
    DescribeLoginBaseConfigsResponseBody(const DescribeLoginBaseConfigsResponseBody &) = default ;
    DescribeLoginBaseConfigsResponseBody(DescribeLoginBaseConfigsResponseBody &&) = default ;
    DescribeLoginBaseConfigsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLoginBaseConfigsResponseBody() = default ;
    DescribeLoginBaseConfigsResponseBody& operator=(const DescribeLoginBaseConfigsResponseBody &) = default ;
    DescribeLoginBaseConfigsResponseBody& operator=(DescribeLoginBaseConfigsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->baseConfigs_ != nullptr
        && this->currentPage_ != nullptr && this->pageSize_ != nullptr && this->requestId_ != nullptr && this->totalCount_ != nullptr; };
    // baseConfigs Field Functions 
    bool hasBaseConfigs() const { return this->baseConfigs_ != nullptr;};
    void deleteBaseConfigs() { this->baseConfigs_ = nullptr;};
    inline const vector<DescribeLoginBaseConfigsResponseBodyBaseConfigs> & baseConfigs() const { DARABONBA_PTR_GET_CONST(baseConfigs_, vector<DescribeLoginBaseConfigsResponseBodyBaseConfigs>) };
    inline vector<DescribeLoginBaseConfigsResponseBodyBaseConfigs> baseConfigs() { DARABONBA_PTR_GET(baseConfigs_, vector<DescribeLoginBaseConfigsResponseBodyBaseConfigs>) };
    inline DescribeLoginBaseConfigsResponseBody& setBaseConfigs(const vector<DescribeLoginBaseConfigsResponseBodyBaseConfigs> & baseConfigs) { DARABONBA_PTR_SET_VALUE(baseConfigs_, baseConfigs) };
    inline DescribeLoginBaseConfigsResponseBody& setBaseConfigs(vector<DescribeLoginBaseConfigsResponseBodyBaseConfigs> && baseConfigs) { DARABONBA_PTR_SET_RVALUE(baseConfigs_, baseConfigs) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeLoginBaseConfigsResponseBody& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeLoginBaseConfigsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLoginBaseConfigsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeLoginBaseConfigsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The description of the configuration.
    std::shared_ptr<vector<DescribeLoginBaseConfigsResponseBodyBaseConfigs>> baseConfigs_ = nullptr;
    // The page number of the returned page.
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    // The number of entries returned per page. Default value: **20**.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
