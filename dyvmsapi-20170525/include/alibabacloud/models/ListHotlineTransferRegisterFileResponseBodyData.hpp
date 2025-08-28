// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTHOTLINETRANSFERREGISTERFILERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTHOTLINETRANSFERREGISTERFILERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListHotlineTransferRegisterFileResponseBodyDataValues.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyvmsapi20170525
{
namespace Models
{
  class ListHotlineTransferRegisterFileResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListHotlineTransferRegisterFileResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Total, total_);
      DARABONBA_PTR_TO_JSON(Values, values_);
    };
    friend void from_json(const Darabonba::Json& j, ListHotlineTransferRegisterFileResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
      DARABONBA_PTR_FROM_JSON(Values, values_);
    };
    ListHotlineTransferRegisterFileResponseBodyData() = default ;
    ListHotlineTransferRegisterFileResponseBodyData(const ListHotlineTransferRegisterFileResponseBodyData &) = default ;
    ListHotlineTransferRegisterFileResponseBodyData(ListHotlineTransferRegisterFileResponseBodyData &&) = default ;
    ListHotlineTransferRegisterFileResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListHotlineTransferRegisterFileResponseBodyData() = default ;
    ListHotlineTransferRegisterFileResponseBodyData& operator=(const ListHotlineTransferRegisterFileResponseBodyData &) = default ;
    ListHotlineTransferRegisterFileResponseBodyData& operator=(ListHotlineTransferRegisterFileResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->pageNo_ != nullptr
        && this->pageSize_ != nullptr && this->total_ != nullptr && this->values_ != nullptr; };
    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int32_t pageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
    inline ListHotlineTransferRegisterFileResponseBodyData& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListHotlineTransferRegisterFileResponseBodyData& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline ListHotlineTransferRegisterFileResponseBodyData& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    // values Field Functions 
    bool hasValues() const { return this->values_ != nullptr;};
    void deleteValues() { this->values_ = nullptr;};
    inline const vector<Models::ListHotlineTransferRegisterFileResponseBodyDataValues> & values() const { DARABONBA_PTR_GET_CONST(values_, vector<Models::ListHotlineTransferRegisterFileResponseBodyDataValues>) };
    inline vector<Models::ListHotlineTransferRegisterFileResponseBodyDataValues> values() { DARABONBA_PTR_GET(values_, vector<Models::ListHotlineTransferRegisterFileResponseBodyDataValues>) };
    inline ListHotlineTransferRegisterFileResponseBodyData& setValues(const vector<Models::ListHotlineTransferRegisterFileResponseBodyDataValues> & values) { DARABONBA_PTR_SET_VALUE(values_, values) };
    inline ListHotlineTransferRegisterFileResponseBodyData& setValues(vector<Models::ListHotlineTransferRegisterFileResponseBodyDataValues> && values) { DARABONBA_PTR_SET_RVALUE(values_, values) };


  protected:
    // The page number.
    std::shared_ptr<int32_t> pageNo_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int64_t> total_ = nullptr;
    // The registration file.
    std::shared_ptr<vector<Models::ListHotlineTransferRegisterFileResponseBodyDataValues>> values_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyvmsapi20170525
#endif
