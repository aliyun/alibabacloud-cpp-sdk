// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTWHITELISTTEMPLATESRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTWHITELISTTEMPLATESRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListWhitelistTemplatesResponseBodyDataTemplates.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20230522
{
namespace Models
{
  class ListWhitelistTemplatesResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListWhitelistTemplatesResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(CurrPageNumbers, currPageNumbers_);
      DARABONBA_PTR_TO_JSON(HasNext, hasNext_);
      DARABONBA_PTR_TO_JSON(HasPrev, hasPrev_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Templates, templates_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(TotalPageNumbers, totalPageNumbers_);
    };
    friend void from_json(const Darabonba::Json& j, ListWhitelistTemplatesResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrPageNumbers, currPageNumbers_);
      DARABONBA_PTR_FROM_JSON(HasNext, hasNext_);
      DARABONBA_PTR_FROM_JSON(HasPrev, hasPrev_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Templates, templates_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(TotalPageNumbers, totalPageNumbers_);
    };
    ListWhitelistTemplatesResponseBodyData() = default ;
    ListWhitelistTemplatesResponseBodyData(const ListWhitelistTemplatesResponseBodyData &) = default ;
    ListWhitelistTemplatesResponseBodyData(ListWhitelistTemplatesResponseBodyData &&) = default ;
    ListWhitelistTemplatesResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListWhitelistTemplatesResponseBodyData() = default ;
    ListWhitelistTemplatesResponseBodyData& operator=(const ListWhitelistTemplatesResponseBodyData &) = default ;
    ListWhitelistTemplatesResponseBodyData& operator=(ListWhitelistTemplatesResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currPageNumbers_ == nullptr
        && return this->hasNext_ == nullptr && return this->hasPrev_ == nullptr && return this->pageSize_ == nullptr && return this->templates_ == nullptr && return this->totalCount_ == nullptr
        && return this->totalPageNumbers_ == nullptr; };
    // currPageNumbers Field Functions 
    bool hasCurrPageNumbers() const { return this->currPageNumbers_ != nullptr;};
    void deleteCurrPageNumbers() { this->currPageNumbers_ = nullptr;};
    inline int32_t currPageNumbers() const { DARABONBA_PTR_GET_DEFAULT(currPageNumbers_, 0) };
    inline ListWhitelistTemplatesResponseBodyData& setCurrPageNumbers(int32_t currPageNumbers) { DARABONBA_PTR_SET_VALUE(currPageNumbers_, currPageNumbers) };


    // hasNext Field Functions 
    bool hasHasNext() const { return this->hasNext_ != nullptr;};
    void deleteHasNext() { this->hasNext_ = nullptr;};
    inline bool hasNext() const { DARABONBA_PTR_GET_DEFAULT(hasNext_, false) };
    inline ListWhitelistTemplatesResponseBodyData& setHasNext(bool hasNext) { DARABONBA_PTR_SET_VALUE(hasNext_, hasNext) };


    // hasPrev Field Functions 
    bool hasHasPrev() const { return this->hasPrev_ != nullptr;};
    void deleteHasPrev() { this->hasPrev_ = nullptr;};
    inline bool hasPrev() const { DARABONBA_PTR_GET_DEFAULT(hasPrev_, false) };
    inline ListWhitelistTemplatesResponseBodyData& setHasPrev(bool hasPrev) { DARABONBA_PTR_SET_VALUE(hasPrev_, hasPrev) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListWhitelistTemplatesResponseBodyData& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // templates Field Functions 
    bool hasTemplates() const { return this->templates_ != nullptr;};
    void deleteTemplates() { this->templates_ = nullptr;};
    inline const vector<Models::ListWhitelistTemplatesResponseBodyDataTemplates> & templates() const { DARABONBA_PTR_GET_CONST(templates_, vector<Models::ListWhitelistTemplatesResponseBodyDataTemplates>) };
    inline vector<Models::ListWhitelistTemplatesResponseBodyDataTemplates> templates() { DARABONBA_PTR_GET(templates_, vector<Models::ListWhitelistTemplatesResponseBodyDataTemplates>) };
    inline ListWhitelistTemplatesResponseBodyData& setTemplates(const vector<Models::ListWhitelistTemplatesResponseBodyDataTemplates> & templates) { DARABONBA_PTR_SET_VALUE(templates_, templates) };
    inline ListWhitelistTemplatesResponseBodyData& setTemplates(vector<Models::ListWhitelistTemplatesResponseBodyDataTemplates> && templates) { DARABONBA_PTR_SET_RVALUE(templates_, templates) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListWhitelistTemplatesResponseBodyData& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // totalPageNumbers Field Functions 
    bool hasTotalPageNumbers() const { return this->totalPageNumbers_ != nullptr;};
    void deleteTotalPageNumbers() { this->totalPageNumbers_ = nullptr;};
    inline int32_t totalPageNumbers() const { DARABONBA_PTR_GET_DEFAULT(totalPageNumbers_, 0) };
    inline ListWhitelistTemplatesResponseBodyData& setTotalPageNumbers(int32_t totalPageNumbers) { DARABONBA_PTR_SET_VALUE(totalPageNumbers_, totalPageNumbers) };


  protected:
    std::shared_ptr<int32_t> currPageNumbers_ = nullptr;
    std::shared_ptr<bool> hasNext_ = nullptr;
    std::shared_ptr<bool> hasPrev_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<vector<Models::ListWhitelistTemplatesResponseBodyDataTemplates>> templates_ = nullptr;
    std::shared_ptr<int32_t> totalCount_ = nullptr;
    std::shared_ptr<int32_t> totalPageNumbers_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20230522
#endif
