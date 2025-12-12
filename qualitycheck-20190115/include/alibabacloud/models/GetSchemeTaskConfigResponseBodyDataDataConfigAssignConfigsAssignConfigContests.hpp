// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSCHEMETASKCONFIGRESPONSEBODYDATADATACONFIGASSIGNCONFIGSASSIGNCONFIGCONTESTS_HPP_
#define ALIBABACLOUD_MODELS_GETSCHEMETASKCONFIGRESPONSEBODYDATADATACONFIGASSIGNCONFIGSASSIGNCONFIGCONTESTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class GetSchemeTaskConfigResponseBodyDataDataConfigAssignConfigsAssignConfigContests : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSchemeTaskConfigResponseBodyDataDataConfigAssignConfigsAssignConfigContests& obj) { 
      DARABONBA_PTR_TO_JSON(DataType, dataType_);
      DARABONBA_PTR_TO_JSON(ListObject, listObject_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Symbol, symbol_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, GetSchemeTaskConfigResponseBodyDataDataConfigAssignConfigsAssignConfigContests& obj) { 
      DARABONBA_PTR_FROM_JSON(DataType, dataType_);
      DARABONBA_PTR_FROM_JSON(ListObject, listObject_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Symbol, symbol_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    GetSchemeTaskConfigResponseBodyDataDataConfigAssignConfigsAssignConfigContests() = default ;
    GetSchemeTaskConfigResponseBodyDataDataConfigAssignConfigsAssignConfigContests(const GetSchemeTaskConfigResponseBodyDataDataConfigAssignConfigsAssignConfigContests &) = default ;
    GetSchemeTaskConfigResponseBodyDataDataConfigAssignConfigsAssignConfigContests(GetSchemeTaskConfigResponseBodyDataDataConfigAssignConfigsAssignConfigContests &&) = default ;
    GetSchemeTaskConfigResponseBodyDataDataConfigAssignConfigsAssignConfigContests(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSchemeTaskConfigResponseBodyDataDataConfigAssignConfigsAssignConfigContests() = default ;
    GetSchemeTaskConfigResponseBodyDataDataConfigAssignConfigsAssignConfigContests& operator=(const GetSchemeTaskConfigResponseBodyDataDataConfigAssignConfigsAssignConfigContests &) = default ;
    GetSchemeTaskConfigResponseBodyDataDataConfigAssignConfigsAssignConfigContests& operator=(GetSchemeTaskConfigResponseBodyDataDataConfigAssignConfigsAssignConfigContests &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataType_ == nullptr
        && return this->listObject_ == nullptr && return this->name_ == nullptr && return this->symbol_ == nullptr && return this->value_ == nullptr; };
    // dataType Field Functions 
    bool hasDataType() const { return this->dataType_ != nullptr;};
    void deleteDataType() { this->dataType_ = nullptr;};
    inline int32_t dataType() const { DARABONBA_PTR_GET_DEFAULT(dataType_, 0) };
    inline GetSchemeTaskConfigResponseBodyDataDataConfigAssignConfigsAssignConfigContests& setDataType(int32_t dataType) { DARABONBA_PTR_SET_VALUE(dataType_, dataType) };


    // listObject Field Functions 
    bool hasListObject() const { return this->listObject_ != nullptr;};
    void deleteListObject() { this->listObject_ = nullptr;};
    inline const vector<Darabonba::Json> & listObject() const { DARABONBA_PTR_GET_CONST(listObject_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> listObject() { DARABONBA_PTR_GET(listObject_, vector<Darabonba::Json>) };
    inline GetSchemeTaskConfigResponseBodyDataDataConfigAssignConfigsAssignConfigContests& setListObject(const vector<Darabonba::Json> & listObject) { DARABONBA_PTR_SET_VALUE(listObject_, listObject) };
    inline GetSchemeTaskConfigResponseBodyDataDataConfigAssignConfigsAssignConfigContests& setListObject(vector<Darabonba::Json> && listObject) { DARABONBA_PTR_SET_RVALUE(listObject_, listObject) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetSchemeTaskConfigResponseBodyDataDataConfigAssignConfigsAssignConfigContests& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // symbol Field Functions 
    bool hasSymbol() const { return this->symbol_ != nullptr;};
    void deleteSymbol() { this->symbol_ = nullptr;};
    inline int32_t symbol() const { DARABONBA_PTR_GET_DEFAULT(symbol_, 0) };
    inline GetSchemeTaskConfigResponseBodyDataDataConfigAssignConfigsAssignConfigContests& setSymbol(int32_t symbol) { DARABONBA_PTR_SET_VALUE(symbol_, symbol) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline GetSchemeTaskConfigResponseBodyDataDataConfigAssignConfigsAssignConfigContests& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    std::shared_ptr<int32_t> dataType_ = nullptr;
    std::shared_ptr<vector<Darabonba::Json>> listObject_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<int32_t> symbol_ = nullptr;
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
