// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINTERVENECNTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTINTERVENECNTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class ListInterveneCntResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInterveneCntResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(CntList, cntList_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(PageCnt, pageCnt_);
      DARABONBA_PTR_TO_JSON(PageIndex, pageIndex_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, ListInterveneCntResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(CntList, cntList_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(PageCnt, pageCnt_);
      DARABONBA_PTR_FROM_JSON(PageIndex, pageIndex_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
    };
    ListInterveneCntResponseBodyData() = default ;
    ListInterveneCntResponseBodyData(const ListInterveneCntResponseBodyData &) = default ;
    ListInterveneCntResponseBodyData(ListInterveneCntResponseBodyData &&) = default ;
    ListInterveneCntResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInterveneCntResponseBodyData() = default ;
    ListInterveneCntResponseBodyData& operator=(const ListInterveneCntResponseBodyData &) = default ;
    ListInterveneCntResponseBodyData& operator=(ListInterveneCntResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cntList_ == nullptr
        && return this->code_ == nullptr && return this->pageCnt_ == nullptr && return this->pageIndex_ == nullptr && return this->pageSize_ == nullptr; };
    // cntList Field Functions 
    bool hasCntList() const { return this->cntList_ != nullptr;};
    void deleteCntList() { this->cntList_ = nullptr;};
    inline const vector<Darabonba::Json> & cntList() const { DARABONBA_PTR_GET_CONST(cntList_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> cntList() { DARABONBA_PTR_GET(cntList_, vector<Darabonba::Json>) };
    inline ListInterveneCntResponseBodyData& setCntList(const vector<Darabonba::Json> & cntList) { DARABONBA_PTR_SET_VALUE(cntList_, cntList) };
    inline ListInterveneCntResponseBodyData& setCntList(vector<Darabonba::Json> && cntList) { DARABONBA_PTR_SET_RVALUE(cntList_, cntList) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t code() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline ListInterveneCntResponseBodyData& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // pageCnt Field Functions 
    bool hasPageCnt() const { return this->pageCnt_ != nullptr;};
    void deletePageCnt() { this->pageCnt_ = nullptr;};
    inline int32_t pageCnt() const { DARABONBA_PTR_GET_DEFAULT(pageCnt_, 0) };
    inline ListInterveneCntResponseBodyData& setPageCnt(int32_t pageCnt) { DARABONBA_PTR_SET_VALUE(pageCnt_, pageCnt) };


    // pageIndex Field Functions 
    bool hasPageIndex() const { return this->pageIndex_ != nullptr;};
    void deletePageIndex() { this->pageIndex_ = nullptr;};
    inline int32_t pageIndex() const { DARABONBA_PTR_GET_DEFAULT(pageIndex_, 0) };
    inline ListInterveneCntResponseBodyData& setPageIndex(int32_t pageIndex) { DARABONBA_PTR_SET_VALUE(pageIndex_, pageIndex) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListInterveneCntResponseBodyData& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    std::shared_ptr<vector<Darabonba::Json>> cntList_ = nullptr;
    std::shared_ptr<int32_t> code_ = nullptr;
    std::shared_ptr<int32_t> pageCnt_ = nullptr;
    std::shared_ptr<int32_t> pageIndex_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
