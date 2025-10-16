// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BROWSERSESSIONLISTOUT_HPP_
#define ALIBABACLOUD_MODELS_BROWSERSESSIONLISTOUT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/BrowserSessionOut.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class BrowserSessionListOut : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BrowserSessionListOut& obj) { 
      DARABONBA_PTR_TO_JSON(items, items_);
      DARABONBA_PTR_TO_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(total, total_);
    };
    friend void from_json(const Darabonba::Json& j, BrowserSessionListOut& obj) { 
      DARABONBA_PTR_FROM_JSON(items, items_);
      DARABONBA_PTR_FROM_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(total, total_);
    };
    BrowserSessionListOut() = default ;
    BrowserSessionListOut(const BrowserSessionListOut &) = default ;
    BrowserSessionListOut(BrowserSessionListOut &&) = default ;
    BrowserSessionListOut(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BrowserSessionListOut() = default ;
    BrowserSessionListOut& operator=(const BrowserSessionListOut &) = default ;
    BrowserSessionListOut& operator=(BrowserSessionListOut &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->items_ == nullptr
        && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->total_ == nullptr; };
    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<BrowserSessionOut> & items() const { DARABONBA_PTR_GET_CONST(items_, vector<BrowserSessionOut>) };
    inline vector<BrowserSessionOut> items() { DARABONBA_PTR_GET(items_, vector<BrowserSessionOut>) };
    inline BrowserSessionListOut& setItems(const vector<BrowserSessionOut> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline BrowserSessionListOut& setItems(vector<BrowserSessionOut> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline BrowserSessionListOut& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline BrowserSessionListOut& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline BrowserSessionListOut& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    std::shared_ptr<vector<BrowserSessionOut>> items_ = nullptr;
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<int64_t> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
