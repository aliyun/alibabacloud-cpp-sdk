// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYALLSWIMMINGLANERESPONSEBODYDATAGATEWAYSWIMMINGLANEROUTECONDITIONS_HPP_
#define ALIBABACLOUD_MODELS_QUERYALLSWIMMINGLANERESPONSEBODYDATAGATEWAYSWIMMINGLANEROUTECONDITIONS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class QueryAllSwimmingLaneResponseBodyDataGatewaySwimmingLaneRouteConditions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryAllSwimmingLaneResponseBodyDataGatewaySwimmingLaneRouteConditions& obj) { 
      DARABONBA_PTR_TO_JSON(Cond, cond_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NameList, nameList_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, QueryAllSwimmingLaneResponseBodyDataGatewaySwimmingLaneRouteConditions& obj) { 
      DARABONBA_PTR_FROM_JSON(Cond, cond_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NameList, nameList_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    QueryAllSwimmingLaneResponseBodyDataGatewaySwimmingLaneRouteConditions() = default ;
    QueryAllSwimmingLaneResponseBodyDataGatewaySwimmingLaneRouteConditions(const QueryAllSwimmingLaneResponseBodyDataGatewaySwimmingLaneRouteConditions &) = default ;
    QueryAllSwimmingLaneResponseBodyDataGatewaySwimmingLaneRouteConditions(QueryAllSwimmingLaneResponseBodyDataGatewaySwimmingLaneRouteConditions &&) = default ;
    QueryAllSwimmingLaneResponseBodyDataGatewaySwimmingLaneRouteConditions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryAllSwimmingLaneResponseBodyDataGatewaySwimmingLaneRouteConditions() = default ;
    QueryAllSwimmingLaneResponseBodyDataGatewaySwimmingLaneRouteConditions& operator=(const QueryAllSwimmingLaneResponseBodyDataGatewaySwimmingLaneRouteConditions &) = default ;
    QueryAllSwimmingLaneResponseBodyDataGatewaySwimmingLaneRouteConditions& operator=(QueryAllSwimmingLaneResponseBodyDataGatewaySwimmingLaneRouteConditions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cond_ == nullptr
        && return this->name_ == nullptr && return this->nameList_ == nullptr && return this->type_ == nullptr && return this->value_ == nullptr; };
    // cond Field Functions 
    bool hasCond() const { return this->cond_ != nullptr;};
    void deleteCond() { this->cond_ = nullptr;};
    inline string cond() const { DARABONBA_PTR_GET_DEFAULT(cond_, "") };
    inline QueryAllSwimmingLaneResponseBodyDataGatewaySwimmingLaneRouteConditions& setCond(string cond) { DARABONBA_PTR_SET_VALUE(cond_, cond) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline QueryAllSwimmingLaneResponseBodyDataGatewaySwimmingLaneRouteConditions& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // nameList Field Functions 
    bool hasNameList() const { return this->nameList_ != nullptr;};
    void deleteNameList() { this->nameList_ = nullptr;};
    inline const vector<string> & nameList() const { DARABONBA_PTR_GET_CONST(nameList_, vector<string>) };
    inline vector<string> nameList() { DARABONBA_PTR_GET(nameList_, vector<string>) };
    inline QueryAllSwimmingLaneResponseBodyDataGatewaySwimmingLaneRouteConditions& setNameList(const vector<string> & nameList) { DARABONBA_PTR_SET_VALUE(nameList_, nameList) };
    inline QueryAllSwimmingLaneResponseBodyDataGatewaySwimmingLaneRouteConditions& setNameList(vector<string> && nameList) { DARABONBA_PTR_SET_RVALUE(nameList_, nameList) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline QueryAllSwimmingLaneResponseBodyDataGatewaySwimmingLaneRouteConditions& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline QueryAllSwimmingLaneResponseBodyDataGatewaySwimmingLaneRouteConditions& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    std::shared_ptr<string> cond_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<vector<string>> nameList_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
