// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTOUTBOUNDNUMBERSOFUSERRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTOUTBOUNDNUMBERSOFUSERRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListOutboundNumbersOfUserResponseBodyDataList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class ListOutboundNumbersOfUserResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListOutboundNumbersOfUserResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(List, list_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListOutboundNumbersOfUserResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(List, list_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListOutboundNumbersOfUserResponseBodyData() = default ;
    ListOutboundNumbersOfUserResponseBodyData(const ListOutboundNumbersOfUserResponseBodyData &) = default ;
    ListOutboundNumbersOfUserResponseBodyData(ListOutboundNumbersOfUserResponseBodyData &&) = default ;
    ListOutboundNumbersOfUserResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListOutboundNumbersOfUserResponseBodyData() = default ;
    ListOutboundNumbersOfUserResponseBodyData& operator=(const ListOutboundNumbersOfUserResponseBodyData &) = default ;
    ListOutboundNumbersOfUserResponseBodyData& operator=(ListOutboundNumbersOfUserResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->list_ != nullptr
        && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->totalCount_ != nullptr; };
    // list Field Functions 
    bool hasList() const { return this->list_ != nullptr;};
    void deleteList() { this->list_ = nullptr;};
    inline const vector<Models::ListOutboundNumbersOfUserResponseBodyDataList> & list() const { DARABONBA_PTR_GET_CONST(list_, vector<Models::ListOutboundNumbersOfUserResponseBodyDataList>) };
    inline vector<Models::ListOutboundNumbersOfUserResponseBodyDataList> list() { DARABONBA_PTR_GET(list_, vector<Models::ListOutboundNumbersOfUserResponseBodyDataList>) };
    inline ListOutboundNumbersOfUserResponseBodyData& setList(const vector<Models::ListOutboundNumbersOfUserResponseBodyDataList> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
    inline ListOutboundNumbersOfUserResponseBodyData& setList(vector<Models::ListOutboundNumbersOfUserResponseBodyDataList> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListOutboundNumbersOfUserResponseBodyData& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListOutboundNumbersOfUserResponseBodyData& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListOutboundNumbersOfUserResponseBodyData& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<vector<Models::ListOutboundNumbersOfUserResponseBodyDataList>> list_ = nullptr;
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
