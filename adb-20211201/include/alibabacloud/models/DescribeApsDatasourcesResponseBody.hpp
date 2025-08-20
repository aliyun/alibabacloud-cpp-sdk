// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPSDATASOURCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPSDATASOURCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeApsDatasourcesResponseBodyApsDatasources.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeApsDatasourcesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApsDatasourcesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ApsDatasources, apsDatasources_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApsDatasourcesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ApsDatasources, apsDatasources_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeApsDatasourcesResponseBody() = default ;
    DescribeApsDatasourcesResponseBody(const DescribeApsDatasourcesResponseBody &) = default ;
    DescribeApsDatasourcesResponseBody(DescribeApsDatasourcesResponseBody &&) = default ;
    DescribeApsDatasourcesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApsDatasourcesResponseBody() = default ;
    DescribeApsDatasourcesResponseBody& operator=(const DescribeApsDatasourcesResponseBody &) = default ;
    DescribeApsDatasourcesResponseBody& operator=(DescribeApsDatasourcesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->apsDatasources_ != nullptr
        && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->requestId_ != nullptr && this->totalCount_ != nullptr; };
    // apsDatasources Field Functions 
    bool hasApsDatasources() const { return this->apsDatasources_ != nullptr;};
    void deleteApsDatasources() { this->apsDatasources_ = nullptr;};
    inline const vector<DescribeApsDatasourcesResponseBodyApsDatasources> & apsDatasources() const { DARABONBA_PTR_GET_CONST(apsDatasources_, vector<DescribeApsDatasourcesResponseBodyApsDatasources>) };
    inline vector<DescribeApsDatasourcesResponseBodyApsDatasources> apsDatasources() { DARABONBA_PTR_GET(apsDatasources_, vector<DescribeApsDatasourcesResponseBodyApsDatasources>) };
    inline DescribeApsDatasourcesResponseBody& setApsDatasources(const vector<DescribeApsDatasourcesResponseBodyApsDatasources> & apsDatasources) { DARABONBA_PTR_SET_VALUE(apsDatasources_, apsDatasources) };
    inline DescribeApsDatasourcesResponseBody& setApsDatasources(vector<DescribeApsDatasourcesResponseBodyApsDatasources> && apsDatasources) { DARABONBA_PTR_SET_RVALUE(apsDatasources_, apsDatasources) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline string pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, "") };
    inline DescribeApsDatasourcesResponseBody& setPageNumber(string pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline DescribeApsDatasourcesResponseBody& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeApsDatasourcesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline string totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, "") };
    inline DescribeApsDatasourcesResponseBody& setTotalCount(string totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The queried APS data sources.
    std::shared_ptr<vector<DescribeApsDatasourcesResponseBodyApsDatasources>> apsDatasources_ = nullptr;
    // The page number.
    std::shared_ptr<string> pageNumber_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<string> pageSize_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<string> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
