// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COMMODITYVALUERESULTSUBORDERSSUBORDERMODULEINSTANCEMODULEATTRS_HPP_
#define ALIBABACLOUD_MODELS_COMMODITYVALUERESULTSUBORDERSSUBORDERMODULEINSTANCEMODULEATTRS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNest20210601
{
namespace Models
{
  class CommodityValueResultSubOrdersSubOrderModuleInstanceModuleAttrs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CommodityValueResultSubOrdersSubOrderModuleInstanceModuleAttrs& obj) { 
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Value, value_);
      DARABONBA_PTR_TO_JSON(Unit, unit_);
    };
    friend void from_json(const Darabonba::Json& j, CommodityValueResultSubOrdersSubOrderModuleInstanceModuleAttrs& obj) { 
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
      DARABONBA_PTR_FROM_JSON(Unit, unit_);
    };
    CommodityValueResultSubOrdersSubOrderModuleInstanceModuleAttrs() = default ;
    CommodityValueResultSubOrdersSubOrderModuleInstanceModuleAttrs(const CommodityValueResultSubOrdersSubOrderModuleInstanceModuleAttrs &) = default ;
    CommodityValueResultSubOrdersSubOrderModuleInstanceModuleAttrs(CommodityValueResultSubOrdersSubOrderModuleInstanceModuleAttrs &&) = default ;
    CommodityValueResultSubOrdersSubOrderModuleInstanceModuleAttrs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CommodityValueResultSubOrdersSubOrderModuleInstanceModuleAttrs() = default ;
    CommodityValueResultSubOrdersSubOrderModuleInstanceModuleAttrs& operator=(const CommodityValueResultSubOrdersSubOrderModuleInstanceModuleAttrs &) = default ;
    CommodityValueResultSubOrdersSubOrderModuleInstanceModuleAttrs& operator=(CommodityValueResultSubOrdersSubOrderModuleInstanceModuleAttrs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->type_ != nullptr
        && this->name_ != nullptr && this->code_ != nullptr && this->value_ != nullptr && this->unit_ != nullptr; };
    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline int64_t type() const { DARABONBA_PTR_GET_DEFAULT(type_, 0L) };
    inline CommodityValueResultSubOrdersSubOrderModuleInstanceModuleAttrs& setType(int64_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CommodityValueResultSubOrdersSubOrderModuleInstanceModuleAttrs& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CommodityValueResultSubOrdersSubOrderModuleInstanceModuleAttrs& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline CommodityValueResultSubOrdersSubOrderModuleInstanceModuleAttrs& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    // unit Field Functions 
    bool hasUnit() const { return this->unit_ != nullptr;};
    void deleteUnit() { this->unit_ = nullptr;};
    inline string unit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
    inline CommodityValueResultSubOrdersSubOrderModuleInstanceModuleAttrs& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


  protected:
    // The type of the attribute. Valid values:
    // 
    // 1.  1: product
    // 2.  2\\. specifications
    // 3.  3: module
    // 4.  4: external parameters (backup)
    std::shared_ptr<int64_t> type_ = nullptr;
    // The attribute name.
    std::shared_ptr<string> name_ = nullptr;
    // The attribute code.
    std::shared_ptr<string> code_ = nullptr;
    // The attribute value.
    std::shared_ptr<string> value_ = nullptr;
    // The unit of the value.
    std::shared_ptr<string> unit_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNest20210601
#endif
