// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESDGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESDGREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeSDGRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSDGRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(SDGIds, SDGIds_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSDGRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(SDGIds, SDGIds_);
    };
    DescribeSDGRequest() = default ;
    DescribeSDGRequest(const DescribeSDGRequest &) = default ;
    DescribeSDGRequest(DescribeSDGRequest &&) = default ;
    DescribeSDGRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSDGRequest() = default ;
    DescribeSDGRequest& operator=(const DescribeSDGRequest &) = default ;
    DescribeSDGRequest& operator=(DescribeSDGRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->SDGIds_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeSDGRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeSDGRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // SDGIds Field Functions 
    bool hasSDGIds() const { return this->SDGIds_ != nullptr;};
    void deleteSDGIds() { this->SDGIds_ = nullptr;};
    inline const vector<string> & getSDGIds() const { DARABONBA_PTR_GET_CONST(SDGIds_, vector<string>) };
    inline vector<string> getSDGIds() { DARABONBA_PTR_GET(SDGIds_, vector<string>) };
    inline DescribeSDGRequest& setSDGIds(const vector<string> & SDGIds) { DARABONBA_PTR_SET_VALUE(SDGIds_, SDGIds) };
    inline DescribeSDGRequest& setSDGIds(vector<string> && SDGIds) { DARABONBA_PTR_SET_RVALUE(SDGIds_, SDGIds) };


  protected:
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries to return on each page.
    // 
    // Default value: 10.
    shared_ptr<int32_t> pageSize_ {};
    // The IDs of SDGs that you want to query. By default, all SDGs are queried.
    shared_ptr<vector<string>> SDGIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
