// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSYNTHETICDETAILREQUESTADVANCEDFILTERS_HPP_
#define ALIBABACLOUD_MODELS_LISTSYNTHETICDETAILREQUESTADVANCEDFILTERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class ListSyntheticDetailRequestAdvancedFilters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSyntheticDetailRequestAdvancedFilters& obj) { 
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(OpType, opType_);
      DARABONBA_ANY_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, ListSyntheticDetailRequestAdvancedFilters& obj) { 
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(OpType, opType_);
      DARABONBA_ANY_FROM_JSON(Value, value_);
    };
    ListSyntheticDetailRequestAdvancedFilters() = default ;
    ListSyntheticDetailRequestAdvancedFilters(const ListSyntheticDetailRequestAdvancedFilters &) = default ;
    ListSyntheticDetailRequestAdvancedFilters(ListSyntheticDetailRequestAdvancedFilters &&) = default ;
    ListSyntheticDetailRequestAdvancedFilters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSyntheticDetailRequestAdvancedFilters() = default ;
    ListSyntheticDetailRequestAdvancedFilters& operator=(const ListSyntheticDetailRequestAdvancedFilters &) = default ;
    ListSyntheticDetailRequestAdvancedFilters& operator=(ListSyntheticDetailRequestAdvancedFilters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->key_ != nullptr
        && this->opType_ != nullptr && this->value_ != nullptr; };
    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline ListSyntheticDetailRequestAdvancedFilters& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // opType Field Functions 
    bool hasOpType() const { return this->opType_ != nullptr;};
    void deleteOpType() { this->opType_ = nullptr;};
    inline string opType() const { DARABONBA_PTR_GET_DEFAULT(opType_, "") };
    inline ListSyntheticDetailRequestAdvancedFilters& setOpType(string opType) { DARABONBA_PTR_SET_VALUE(opType_, opType) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline     const Darabonba::Json & value() const { DARABONBA_GET(value_) };
    Darabonba::Json & value() { DARABONBA_GET(value_) };
    inline ListSyntheticDetailRequestAdvancedFilters& setValue(const Darabonba::Json & value) { DARABONBA_SET_VALUE(value_, value) };
    inline ListSyntheticDetailRequestAdvancedFilters& setValue(Darabonba::Json & value) { DARABONBA_SET_RVALUE(value_, value) };


  protected:
    // The filter condition. The taskType and dataId fields are supported.
    // 
    // *   To query the list of synthetic test results, set the key to taskType.
    // *   To query the result details of a synthetic monitoring task, set the key to dataId.
    std::shared_ptr<string> key_ = nullptr;
    // The type of the filter condition. Valid values: eq and in. eq: equal to. in: include.
    std::shared_ptr<string> opType_ = nullptr;
    // The value of the filter condition. The type of the task. Valid values: 1: ICMP 2: TCP 3: DNS 4: HTTP 5: website speed measurement 6: file download
    Darabonba::Json value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
