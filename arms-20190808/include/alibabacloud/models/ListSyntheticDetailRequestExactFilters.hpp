// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSYNTHETICDETAILREQUESTEXACTFILTERS_HPP_
#define ALIBABACLOUD_MODELS_LISTSYNTHETICDETAILREQUESTEXACTFILTERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class ListSyntheticDetailRequestExactFilters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSyntheticDetailRequestExactFilters& obj) { 
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(OpType, opType_);
      DARABONBA_ANY_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, ListSyntheticDetailRequestExactFilters& obj) { 
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(OpType, opType_);
      DARABONBA_ANY_FROM_JSON(Value, value_);
    };
    ListSyntheticDetailRequestExactFilters() = default ;
    ListSyntheticDetailRequestExactFilters(const ListSyntheticDetailRequestExactFilters &) = default ;
    ListSyntheticDetailRequestExactFilters(ListSyntheticDetailRequestExactFilters &&) = default ;
    ListSyntheticDetailRequestExactFilters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSyntheticDetailRequestExactFilters() = default ;
    ListSyntheticDetailRequestExactFilters& operator=(const ListSyntheticDetailRequestExactFilters &) = default ;
    ListSyntheticDetailRequestExactFilters& operator=(ListSyntheticDetailRequestExactFilters &&) = default ;
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
    inline ListSyntheticDetailRequestExactFilters& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // opType Field Functions 
    bool hasOpType() const { return this->opType_ != nullptr;};
    void deleteOpType() { this->opType_ = nullptr;};
    inline string opType() const { DARABONBA_PTR_GET_DEFAULT(opType_, "") };
    inline ListSyntheticDetailRequestExactFilters& setOpType(string opType) { DARABONBA_PTR_SET_VALUE(opType_, opType) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline     const Darabonba::Json & value() const { DARABONBA_GET(value_) };
    Darabonba::Json & value() { DARABONBA_GET(value_) };
    inline ListSyntheticDetailRequestExactFilters& setValue(const Darabonba::Json & value) { DARABONBA_SET_VALUE(value_, value) };
    inline ListSyntheticDetailRequestExactFilters& setValue(Darabonba::Json & value) { DARABONBA_SET_RVALUE(value_, value) };


  protected:
    // A reserved field.
    std::shared_ptr<string> key_ = nullptr;
    // A reserved field.
    std::shared_ptr<string> opType_ = nullptr;
    // A reserved field.
    Darabonba::Json value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
