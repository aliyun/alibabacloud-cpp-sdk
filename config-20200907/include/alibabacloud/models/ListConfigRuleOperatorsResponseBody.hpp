// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCONFIGRULEOPERATORSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCONFIGRULEOPERATORSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class ListConfigRuleOperatorsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListConfigRuleOperatorsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Operators, operators_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListConfigRuleOperatorsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Operators, operators_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListConfigRuleOperatorsResponseBody() = default ;
    ListConfigRuleOperatorsResponseBody(const ListConfigRuleOperatorsResponseBody &) = default ;
    ListConfigRuleOperatorsResponseBody(ListConfigRuleOperatorsResponseBody &&) = default ;
    ListConfigRuleOperatorsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListConfigRuleOperatorsResponseBody() = default ;
    ListConfigRuleOperatorsResponseBody& operator=(const ListConfigRuleOperatorsResponseBody &) = default ;
    ListConfigRuleOperatorsResponseBody& operator=(ListConfigRuleOperatorsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Operators : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Operators& obj) { 
        DARABONBA_PTR_TO_JSON(DataType, dataType_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Operator, operator_);
      };
      friend void from_json(const Darabonba::Json& j, Operators& obj) { 
        DARABONBA_PTR_FROM_JSON(DataType, dataType_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Operator, operator_);
      };
      Operators() = default ;
      Operators(const Operators &) = default ;
      Operators(Operators &&) = default ;
      Operators(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Operators() = default ;
      Operators& operator=(const Operators &) = default ;
      Operators& operator=(Operators &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->dataType_ == nullptr
        && this->description_ == nullptr && this->name_ == nullptr && this->operator_ == nullptr; };
      // dataType Field Functions 
      bool hasDataType() const { return this->dataType_ != nullptr;};
      void deleteDataType() { this->dataType_ = nullptr;};
      inline string getDataType() const { DARABONBA_PTR_GET_DEFAULT(dataType_, "") };
      inline Operators& setDataType(string dataType) { DARABONBA_PTR_SET_VALUE(dataType_, dataType) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Operators& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Operators& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // operator Field Functions 
      bool hasOperator() const { return this->operator_ != nullptr;};
      void deleteOperator() { this->operator_ = nullptr;};
      inline string getOperator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
      inline Operators& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


    protected:
      shared_ptr<string> dataType_ {};
      shared_ptr<string> description_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> operator_ {};
    };

    virtual bool empty() const override { return this->operators_ == nullptr
        && this->requestId_ == nullptr; };
    // operators Field Functions 
    bool hasOperators() const { return this->operators_ != nullptr;};
    void deleteOperators() { this->operators_ = nullptr;};
    inline const vector<ListConfigRuleOperatorsResponseBody::Operators> & getOperators() const { DARABONBA_PTR_GET_CONST(operators_, vector<ListConfigRuleOperatorsResponseBody::Operators>) };
    inline vector<ListConfigRuleOperatorsResponseBody::Operators> getOperators() { DARABONBA_PTR_GET(operators_, vector<ListConfigRuleOperatorsResponseBody::Operators>) };
    inline ListConfigRuleOperatorsResponseBody& setOperators(const vector<ListConfigRuleOperatorsResponseBody::Operators> & operators) { DARABONBA_PTR_SET_VALUE(operators_, operators) };
    inline ListConfigRuleOperatorsResponseBody& setOperators(vector<ListConfigRuleOperatorsResponseBody::Operators> && operators) { DARABONBA_PTR_SET_RVALUE(operators_, operators) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListConfigRuleOperatorsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<ListConfigRuleOperatorsResponseBody::Operators>> operators_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
