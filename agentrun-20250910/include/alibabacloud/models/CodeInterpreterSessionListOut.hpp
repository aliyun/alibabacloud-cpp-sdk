// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CODEINTERPRETERSESSIONLISTOUT_HPP_
#define ALIBABACLOUD_MODELS_CODEINTERPRETERSESSIONLISTOUT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CodeInterpreterSessionOut.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class CodeInterpreterSessionListOut : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CodeInterpreterSessionListOut& obj) { 
      DARABONBA_PTR_TO_JSON(items, items_);
      DARABONBA_PTR_TO_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(total, total_);
    };
    friend void from_json(const Darabonba::Json& j, CodeInterpreterSessionListOut& obj) { 
      DARABONBA_PTR_FROM_JSON(items, items_);
      DARABONBA_PTR_FROM_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(total, total_);
    };
    CodeInterpreterSessionListOut() = default ;
    CodeInterpreterSessionListOut(const CodeInterpreterSessionListOut &) = default ;
    CodeInterpreterSessionListOut(CodeInterpreterSessionListOut &&) = default ;
    CodeInterpreterSessionListOut(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CodeInterpreterSessionListOut() = default ;
    CodeInterpreterSessionListOut& operator=(const CodeInterpreterSessionListOut &) = default ;
    CodeInterpreterSessionListOut& operator=(CodeInterpreterSessionListOut &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->items_ != nullptr
        && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->total_ != nullptr; };
    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<CodeInterpreterSessionOut> & items() const { DARABONBA_PTR_GET_CONST(items_, vector<CodeInterpreterSessionOut>) };
    inline vector<CodeInterpreterSessionOut> items() { DARABONBA_PTR_GET(items_, vector<CodeInterpreterSessionOut>) };
    inline CodeInterpreterSessionListOut& setItems(const vector<CodeInterpreterSessionOut> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline CodeInterpreterSessionListOut& setItems(vector<CodeInterpreterSessionOut> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline CodeInterpreterSessionListOut& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline CodeInterpreterSessionListOut& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline CodeInterpreterSessionListOut& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    std::shared_ptr<vector<CodeInterpreterSessionOut>> items_ = nullptr;
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<int64_t> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
