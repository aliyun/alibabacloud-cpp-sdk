// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCUSTOMAGENTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTCUSTOMAGENTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListCustomAgentResponseBodyDataContent.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class ListCustomAgentResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCustomAgentResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(TotalElements, totalElements_);
      DARABONBA_PTR_TO_JSON(TotalPages, totalPages_);
    };
    friend void from_json(const Darabonba::Json& j, ListCustomAgentResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(TotalElements, totalElements_);
      DARABONBA_PTR_FROM_JSON(TotalPages, totalPages_);
    };
    ListCustomAgentResponseBodyData() = default ;
    ListCustomAgentResponseBodyData(const ListCustomAgentResponseBodyData &) = default ;
    ListCustomAgentResponseBodyData(ListCustomAgentResponseBodyData &&) = default ;
    ListCustomAgentResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCustomAgentResponseBodyData() = default ;
    ListCustomAgentResponseBodyData& operator=(const ListCustomAgentResponseBodyData &) = default ;
    ListCustomAgentResponseBodyData& operator=(ListCustomAgentResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->content_ == nullptr
        && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->totalElements_ == nullptr && return this->totalPages_ == nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline const vector<Models::ListCustomAgentResponseBodyDataContent> & content() const { DARABONBA_PTR_GET_CONST(content_, vector<Models::ListCustomAgentResponseBodyDataContent>) };
    inline vector<Models::ListCustomAgentResponseBodyDataContent> content() { DARABONBA_PTR_GET(content_, vector<Models::ListCustomAgentResponseBodyDataContent>) };
    inline ListCustomAgentResponseBodyData& setContent(const vector<Models::ListCustomAgentResponseBodyDataContent> & content) { DARABONBA_PTR_SET_VALUE(content_, content) };
    inline ListCustomAgentResponseBodyData& setContent(vector<Models::ListCustomAgentResponseBodyDataContent> && content) { DARABONBA_PTR_SET_RVALUE(content_, content) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline ListCustomAgentResponseBodyData& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListCustomAgentResponseBodyData& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // totalElements Field Functions 
    bool hasTotalElements() const { return this->totalElements_ != nullptr;};
    void deleteTotalElements() { this->totalElements_ = nullptr;};
    inline int64_t totalElements() const { DARABONBA_PTR_GET_DEFAULT(totalElements_, 0L) };
    inline ListCustomAgentResponseBodyData& setTotalElements(int64_t totalElements) { DARABONBA_PTR_SET_VALUE(totalElements_, totalElements) };


    // totalPages Field Functions 
    bool hasTotalPages() const { return this->totalPages_ != nullptr;};
    void deleteTotalPages() { this->totalPages_ = nullptr;};
    inline int64_t totalPages() const { DARABONBA_PTR_GET_DEFAULT(totalPages_, 0L) };
    inline ListCustomAgentResponseBodyData& setTotalPages(int64_t totalPages) { DARABONBA_PTR_SET_VALUE(totalPages_, totalPages) };


  protected:
    std::shared_ptr<vector<Models::ListCustomAgentResponseBodyDataContent>> content_ = nullptr;
    std::shared_ptr<int64_t> pageNumber_ = nullptr;
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    std::shared_ptr<int64_t> totalElements_ = nullptr;
    std::shared_ptr<int64_t> totalPages_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
