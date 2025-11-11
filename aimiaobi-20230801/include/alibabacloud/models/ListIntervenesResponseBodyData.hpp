// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINTERVENESRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTINTERVENESRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListIntervenesResponseBodyDataInterveneList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class ListIntervenesResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListIntervenesResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(InterveneList, interveneList_);
      DARABONBA_PTR_TO_JSON(PageIndex, pageIndex_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(TotalSize, totalSize_);
    };
    friend void from_json(const Darabonba::Json& j, ListIntervenesResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(InterveneList, interveneList_);
      DARABONBA_PTR_FROM_JSON(PageIndex, pageIndex_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(TotalSize, totalSize_);
    };
    ListIntervenesResponseBodyData() = default ;
    ListIntervenesResponseBodyData(const ListIntervenesResponseBodyData &) = default ;
    ListIntervenesResponseBodyData(ListIntervenesResponseBodyData &&) = default ;
    ListIntervenesResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListIntervenesResponseBodyData() = default ;
    ListIntervenesResponseBodyData& operator=(const ListIntervenesResponseBodyData &) = default ;
    ListIntervenesResponseBodyData& operator=(ListIntervenesResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->interveneList_ == nullptr && return this->pageIndex_ == nullptr && return this->pageSize_ == nullptr && return this->totalSize_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t code() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline ListIntervenesResponseBodyData& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // interveneList Field Functions 
    bool hasInterveneList() const { return this->interveneList_ != nullptr;};
    void deleteInterveneList() { this->interveneList_ = nullptr;};
    inline const vector<Models::ListIntervenesResponseBodyDataInterveneList> & interveneList() const { DARABONBA_PTR_GET_CONST(interveneList_, vector<Models::ListIntervenesResponseBodyDataInterveneList>) };
    inline vector<Models::ListIntervenesResponseBodyDataInterveneList> interveneList() { DARABONBA_PTR_GET(interveneList_, vector<Models::ListIntervenesResponseBodyDataInterveneList>) };
    inline ListIntervenesResponseBodyData& setInterveneList(const vector<Models::ListIntervenesResponseBodyDataInterveneList> & interveneList) { DARABONBA_PTR_SET_VALUE(interveneList_, interveneList) };
    inline ListIntervenesResponseBodyData& setInterveneList(vector<Models::ListIntervenesResponseBodyDataInterveneList> && interveneList) { DARABONBA_PTR_SET_RVALUE(interveneList_, interveneList) };


    // pageIndex Field Functions 
    bool hasPageIndex() const { return this->pageIndex_ != nullptr;};
    void deletePageIndex() { this->pageIndex_ = nullptr;};
    inline int32_t pageIndex() const { DARABONBA_PTR_GET_DEFAULT(pageIndex_, 0) };
    inline ListIntervenesResponseBodyData& setPageIndex(int32_t pageIndex) { DARABONBA_PTR_SET_VALUE(pageIndex_, pageIndex) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListIntervenesResponseBodyData& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // totalSize Field Functions 
    bool hasTotalSize() const { return this->totalSize_ != nullptr;};
    void deleteTotalSize() { this->totalSize_ = nullptr;};
    inline int64_t totalSize() const { DARABONBA_PTR_GET_DEFAULT(totalSize_, 0L) };
    inline ListIntervenesResponseBodyData& setTotalSize(int64_t totalSize) { DARABONBA_PTR_SET_VALUE(totalSize_, totalSize) };


  protected:
    std::shared_ptr<int32_t> code_ = nullptr;
    std::shared_ptr<vector<Models::ListIntervenesResponseBodyDataInterveneList>> interveneList_ = nullptr;
    std::shared_ptr<int32_t> pageIndex_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<int64_t> totalSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
