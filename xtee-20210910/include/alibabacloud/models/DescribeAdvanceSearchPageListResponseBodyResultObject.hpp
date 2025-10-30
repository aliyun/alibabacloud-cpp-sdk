// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEADVANCESEARCHPAGELISTRESPONSEBODYRESULTOBJECT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEADVANCESEARCHPAGELISTRESPONSEBODYRESULTOBJECT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeAdvanceSearchPageListResponseBodyResultObjectHeader.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeAdvanceSearchPageListResponseBodyResultObject : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAdvanceSearchPageListResponseBodyResultObject& obj) { 
      DARABONBA_PTR_TO_JSON(currentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(header, header_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(totalItem, totalItem_);
      DARABONBA_PTR_TO_JSON(totalPage, totalPage_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAdvanceSearchPageListResponseBodyResultObject& obj) { 
      DARABONBA_PTR_FROM_JSON(currentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(header, header_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(totalItem, totalItem_);
      DARABONBA_PTR_FROM_JSON(totalPage, totalPage_);
    };
    DescribeAdvanceSearchPageListResponseBodyResultObject() = default ;
    DescribeAdvanceSearchPageListResponseBodyResultObject(const DescribeAdvanceSearchPageListResponseBodyResultObject &) = default ;
    DescribeAdvanceSearchPageListResponseBodyResultObject(DescribeAdvanceSearchPageListResponseBodyResultObject &&) = default ;
    DescribeAdvanceSearchPageListResponseBodyResultObject(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAdvanceSearchPageListResponseBodyResultObject() = default ;
    DescribeAdvanceSearchPageListResponseBodyResultObject& operator=(const DescribeAdvanceSearchPageListResponseBodyResultObject &) = default ;
    DescribeAdvanceSearchPageListResponseBodyResultObject& operator=(DescribeAdvanceSearchPageListResponseBodyResultObject &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentPage_ == nullptr
        && return this->data_ == nullptr && return this->header_ == nullptr && return this->pageSize_ == nullptr && return this->totalItem_ == nullptr && return this->totalPage_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int64_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0L) };
    inline DescribeAdvanceSearchPageListResponseBodyResultObject& setCurrentPage(int64_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<Darabonba::Json> & data() const { DARABONBA_PTR_GET_CONST(data_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> data() { DARABONBA_PTR_GET(data_, vector<Darabonba::Json>) };
    inline DescribeAdvanceSearchPageListResponseBodyResultObject& setData(const vector<Darabonba::Json> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeAdvanceSearchPageListResponseBodyResultObject& setData(vector<Darabonba::Json> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // header Field Functions 
    bool hasHeader() const { return this->header_ != nullptr;};
    void deleteHeader() { this->header_ = nullptr;};
    inline const vector<Models::DescribeAdvanceSearchPageListResponseBodyResultObjectHeader> & header() const { DARABONBA_PTR_GET_CONST(header_, vector<Models::DescribeAdvanceSearchPageListResponseBodyResultObjectHeader>) };
    inline vector<Models::DescribeAdvanceSearchPageListResponseBodyResultObjectHeader> header() { DARABONBA_PTR_GET(header_, vector<Models::DescribeAdvanceSearchPageListResponseBodyResultObjectHeader>) };
    inline DescribeAdvanceSearchPageListResponseBodyResultObject& setHeader(const vector<Models::DescribeAdvanceSearchPageListResponseBodyResultObjectHeader> & header) { DARABONBA_PTR_SET_VALUE(header_, header) };
    inline DescribeAdvanceSearchPageListResponseBodyResultObject& setHeader(vector<Models::DescribeAdvanceSearchPageListResponseBodyResultObjectHeader> && header) { DARABONBA_PTR_SET_RVALUE(header_, header) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline DescribeAdvanceSearchPageListResponseBodyResultObject& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // totalItem Field Functions 
    bool hasTotalItem() const { return this->totalItem_ != nullptr;};
    void deleteTotalItem() { this->totalItem_ = nullptr;};
    inline int64_t totalItem() const { DARABONBA_PTR_GET_DEFAULT(totalItem_, 0L) };
    inline DescribeAdvanceSearchPageListResponseBodyResultObject& setTotalItem(int64_t totalItem) { DARABONBA_PTR_SET_VALUE(totalItem_, totalItem) };


    // totalPage Field Functions 
    bool hasTotalPage() const { return this->totalPage_ != nullptr;};
    void deleteTotalPage() { this->totalPage_ = nullptr;};
    inline int64_t totalPage() const { DARABONBA_PTR_GET_DEFAULT(totalPage_, 0L) };
    inline DescribeAdvanceSearchPageListResponseBodyResultObject& setTotalPage(int64_t totalPage) { DARABONBA_PTR_SET_VALUE(totalPage_, totalPage) };


  protected:
    // Current page number.
    std::shared_ptr<int64_t> currentPage_ = nullptr;
    // Returned data object
    std::shared_ptr<vector<Darabonba::Json>> data_ = nullptr;
    // Table header
    std::shared_ptr<vector<Models::DescribeAdvanceSearchPageListResponseBodyResultObjectHeader>> header_ = nullptr;
    // Number of items per page. Default value: 20, minimum value: 1, maximum value: 50.
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    // Total number of items
    std::shared_ptr<int64_t> totalItem_ = nullptr;
    // Total number of pages
    std::shared_ptr<int64_t> totalPage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
