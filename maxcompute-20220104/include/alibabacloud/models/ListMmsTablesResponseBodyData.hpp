// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMMSTABLESRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTMMSTABLESRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListMmsTablesResponseBodyDataObjectList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class ListMmsTablesResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMmsTablesResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(objectList, objectList_);
      DARABONBA_PTR_TO_JSON(pageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(total, total_);
    };
    friend void from_json(const Darabonba::Json& j, ListMmsTablesResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(objectList, objectList_);
      DARABONBA_PTR_FROM_JSON(pageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(total, total_);
    };
    ListMmsTablesResponseBodyData() = default ;
    ListMmsTablesResponseBodyData(const ListMmsTablesResponseBodyData &) = default ;
    ListMmsTablesResponseBodyData(ListMmsTablesResponseBodyData &&) = default ;
    ListMmsTablesResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMmsTablesResponseBodyData() = default ;
    ListMmsTablesResponseBodyData& operator=(const ListMmsTablesResponseBodyData &) = default ;
    ListMmsTablesResponseBodyData& operator=(ListMmsTablesResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->objectList_ == nullptr
        && return this->pageNum_ == nullptr && return this->pageSize_ == nullptr && return this->total_ == nullptr; };
    // objectList Field Functions 
    bool hasObjectList() const { return this->objectList_ != nullptr;};
    void deleteObjectList() { this->objectList_ = nullptr;};
    inline const vector<Models::ListMmsTablesResponseBodyDataObjectList> & objectList() const { DARABONBA_PTR_GET_CONST(objectList_, vector<Models::ListMmsTablesResponseBodyDataObjectList>) };
    inline vector<Models::ListMmsTablesResponseBodyDataObjectList> objectList() { DARABONBA_PTR_GET(objectList_, vector<Models::ListMmsTablesResponseBodyDataObjectList>) };
    inline ListMmsTablesResponseBodyData& setObjectList(const vector<Models::ListMmsTablesResponseBodyDataObjectList> & objectList) { DARABONBA_PTR_SET_VALUE(objectList_, objectList) };
    inline ListMmsTablesResponseBodyData& setObjectList(vector<Models::ListMmsTablesResponseBodyDataObjectList> && objectList) { DARABONBA_PTR_SET_RVALUE(objectList_, objectList) };


    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int32_t pageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
    inline ListMmsTablesResponseBodyData& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListMmsTablesResponseBodyData& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline ListMmsTablesResponseBodyData& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    std::shared_ptr<vector<Models::ListMmsTablesResponseBodyDataObjectList>> objectList_ = nullptr;
    std::shared_ptr<int32_t> pageNum_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<int32_t> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
