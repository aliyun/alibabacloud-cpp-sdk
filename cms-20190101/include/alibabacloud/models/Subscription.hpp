// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBSCRIPTION_HPP_
#define ALIBABACLOUD_MODELS_SUBSCRIPTION_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class Subscription : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Subscription& obj) { 
      DARABONBA_PTR_TO_JSON(Conditions, conditions_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Enabled, enabled_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Product, product_);
      DARABONBA_PTR_TO_JSON(Relation, relation_);
      DARABONBA_PTR_TO_JSON(StrategyUuid, strategyUuid_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
    };
    friend void from_json(const Darabonba::Json& j, Subscription& obj) { 
      DARABONBA_PTR_FROM_JSON(Conditions, conditions_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Product, product_);
      DARABONBA_PTR_FROM_JSON(Relation, relation_);
      DARABONBA_PTR_FROM_JSON(StrategyUuid, strategyUuid_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
    };
    Subscription() = default ;
    Subscription(const Subscription &) = default ;
    Subscription(Subscription &&) = default ;
    Subscription(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Subscription() = default ;
    Subscription& operator=(const Subscription &) = default ;
    Subscription& operator=(Subscription &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Conditions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Conditions& obj) { 
        DARABONBA_PTR_TO_JSON(Field, field_);
        DARABONBA_PTR_TO_JSON(Operator, operator_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Conditions& obj) { 
        DARABONBA_PTR_FROM_JSON(Field, field_);
        DARABONBA_PTR_FROM_JSON(Operator, operator_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Conditions() = default ;
      Conditions(const Conditions &) = default ;
      Conditions(Conditions &&) = default ;
      Conditions(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Conditions() = default ;
      Conditions& operator=(const Conditions &) = default ;
      Conditions& operator=(Conditions &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->field_ == nullptr
        && this->operator_ == nullptr && this->value_ == nullptr; };
      // field Field Functions 
      bool hasField() const { return this->field_ != nullptr;};
      void deleteField() { this->field_ = nullptr;};
      inline string getField() const { DARABONBA_PTR_GET_DEFAULT(field_, "") };
      inline Conditions& setField(string field) { DARABONBA_PTR_SET_VALUE(field_, field) };


      // operator Field Functions 
      bool hasOperator() const { return this->operator_ != nullptr;};
      void deleteOperator() { this->operator_ = nullptr;};
      inline string getOperator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
      inline Conditions& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Conditions& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      shared_ptr<string> field_ {};
      shared_ptr<string> operator_ {};
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->conditions_ == nullptr
        && this->createTime_ == nullptr && this->description_ == nullptr && this->enabled_ == nullptr && this->name_ == nullptr && this->product_ == nullptr
        && this->relation_ == nullptr && this->strategyUuid_ == nullptr && this->updateTime_ == nullptr && this->uuid_ == nullptr; };
    // conditions Field Functions 
    bool hasConditions() const { return this->conditions_ != nullptr;};
    void deleteConditions() { this->conditions_ = nullptr;};
    inline const vector<Subscription::Conditions> & getConditions() const { DARABONBA_PTR_GET_CONST(conditions_, vector<Subscription::Conditions>) };
    inline vector<Subscription::Conditions> getConditions() { DARABONBA_PTR_GET(conditions_, vector<Subscription::Conditions>) };
    inline Subscription& setConditions(const vector<Subscription::Conditions> & conditions) { DARABONBA_PTR_SET_VALUE(conditions_, conditions) };
    inline Subscription& setConditions(vector<Subscription::Conditions> && conditions) { DARABONBA_PTR_SET_RVALUE(conditions_, conditions) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline Subscription& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline Subscription& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline Subscription& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline Subscription& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // product Field Functions 
    bool hasProduct() const { return this->product_ != nullptr;};
    void deleteProduct() { this->product_ = nullptr;};
    inline string getProduct() const { DARABONBA_PTR_GET_DEFAULT(product_, "") };
    inline Subscription& setProduct(string product) { DARABONBA_PTR_SET_VALUE(product_, product) };


    // relation Field Functions 
    bool hasRelation() const { return this->relation_ != nullptr;};
    void deleteRelation() { this->relation_ = nullptr;};
    inline string getRelation() const { DARABONBA_PTR_GET_DEFAULT(relation_, "") };
    inline Subscription& setRelation(string relation) { DARABONBA_PTR_SET_VALUE(relation_, relation) };


    // strategyUuid Field Functions 
    bool hasStrategyUuid() const { return this->strategyUuid_ != nullptr;};
    void deleteStrategyUuid() { this->strategyUuid_ = nullptr;};
    inline string getStrategyUuid() const { DARABONBA_PTR_GET_DEFAULT(strategyUuid_, "") };
    inline Subscription& setStrategyUuid(string strategyUuid) { DARABONBA_PTR_SET_VALUE(strategyUuid_, strategyUuid) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline Subscription& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline Subscription& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    shared_ptr<vector<Subscription::Conditions>> conditions_ {};
    shared_ptr<string> createTime_ {};
    shared_ptr<string> description_ {};
    shared_ptr<bool> enabled_ {};
    // This parameter is required.
    shared_ptr<string> name_ {};
    shared_ptr<string> product_ {};
    shared_ptr<string> relation_ {};
    shared_ptr<string> strategyUuid_ {};
    shared_ptr<string> updateTime_ {};
    shared_ptr<string> uuid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
