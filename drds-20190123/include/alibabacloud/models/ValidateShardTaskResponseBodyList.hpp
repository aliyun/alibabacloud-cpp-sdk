// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VALIDATESHARDTASKRESPONSEBODYLIST_HPP_
#define ALIBABACLOUD_MODELS_VALIDATESHARDTASKRESPONSEBODYLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Drds20190123
{
namespace Models
{
  class ValidateShardTaskResponseBodyList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ValidateShardTaskResponseBodyList& obj) { 
      DARABONBA_PTR_TO_JSON(Item, item_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, ValidateShardTaskResponseBodyList& obj) { 
      DARABONBA_PTR_FROM_JSON(Item, item_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    ValidateShardTaskResponseBodyList() = default ;
    ValidateShardTaskResponseBodyList(const ValidateShardTaskResponseBodyList &) = default ;
    ValidateShardTaskResponseBodyList(ValidateShardTaskResponseBodyList &&) = default ;
    ValidateShardTaskResponseBodyList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ValidateShardTaskResponseBodyList() = default ;
    ValidateShardTaskResponseBodyList& operator=(const ValidateShardTaskResponseBodyList &) = default ;
    ValidateShardTaskResponseBodyList& operator=(ValidateShardTaskResponseBodyList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->item_ != nullptr
        && this->result_ != nullptr; };
    // item Field Functions 
    bool hasItem() const { return this->item_ != nullptr;};
    void deleteItem() { this->item_ = nullptr;};
    inline string item() const { DARABONBA_PTR_GET_DEFAULT(item_, "") };
    inline ValidateShardTaskResponseBodyList& setItem(string item) { DARABONBA_PTR_SET_VALUE(item_, item) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline int32_t result() const { DARABONBA_PTR_GET_DEFAULT(result_, 0) };
    inline ValidateShardTaskResponseBodyList& setResult(int32_t result) { DARABONBA_PTR_SET_VALUE(result_, result) };


  protected:
    // Indicates the name of a check item.
    std::shared_ptr<string> item_ = nullptr;
    // Indicates the result of the check item. Valid values:
    // 
    // *   **0**: indicates the task is valid.
    // *   **1**: indicates the task is invalid.
    std::shared_ptr<int32_t> result_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Drds20190123
#endif
