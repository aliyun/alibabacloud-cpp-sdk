// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAUTHPOLICYRESPONSEBODYDATARESULTAUTHRULEMETHOD_HPP_
#define ALIBABACLOUD_MODELS_LISTAUTHPOLICYRESPONSEBODYDATARESULTAUTHRULEMETHOD_HPP_
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
  class ListAuthPolicyResponseBodyDataResultAuthRuleMethod : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAuthPolicyResponseBodyDataResultAuthRuleMethod& obj) { 
      DARABONBA_PTR_TO_JSON(Group, group_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ParameterTypes, parameterTypes_);
      DARABONBA_PTR_TO_JSON(ReturnType, returnType_);
      DARABONBA_PTR_TO_JSON(ServiceName, serviceName_);
      DARABONBA_PTR_TO_JSON(Version, version_);
    };
    friend void from_json(const Darabonba::Json& j, ListAuthPolicyResponseBodyDataResultAuthRuleMethod& obj) { 
      DARABONBA_PTR_FROM_JSON(Group, group_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ParameterTypes, parameterTypes_);
      DARABONBA_PTR_FROM_JSON(ReturnType, returnType_);
      DARABONBA_PTR_FROM_JSON(ServiceName, serviceName_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
    };
    ListAuthPolicyResponseBodyDataResultAuthRuleMethod() = default ;
    ListAuthPolicyResponseBodyDataResultAuthRuleMethod(const ListAuthPolicyResponseBodyDataResultAuthRuleMethod &) = default ;
    ListAuthPolicyResponseBodyDataResultAuthRuleMethod(ListAuthPolicyResponseBodyDataResultAuthRuleMethod &&) = default ;
    ListAuthPolicyResponseBodyDataResultAuthRuleMethod(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAuthPolicyResponseBodyDataResultAuthRuleMethod() = default ;
    ListAuthPolicyResponseBodyDataResultAuthRuleMethod& operator=(const ListAuthPolicyResponseBodyDataResultAuthRuleMethod &) = default ;
    ListAuthPolicyResponseBodyDataResultAuthRuleMethod& operator=(ListAuthPolicyResponseBodyDataResultAuthRuleMethod &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->group_ != nullptr
        && this->name_ != nullptr && this->parameterTypes_ != nullptr && this->returnType_ != nullptr && this->serviceName_ != nullptr && this->version_ != nullptr; };
    // group Field Functions 
    bool hasGroup() const { return this->group_ != nullptr;};
    void deleteGroup() { this->group_ = nullptr;};
    inline string group() const { DARABONBA_PTR_GET_DEFAULT(group_, "") };
    inline ListAuthPolicyResponseBodyDataResultAuthRuleMethod& setGroup(string group) { DARABONBA_PTR_SET_VALUE(group_, group) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListAuthPolicyResponseBodyDataResultAuthRuleMethod& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // parameterTypes Field Functions 
    bool hasParameterTypes() const { return this->parameterTypes_ != nullptr;};
    void deleteParameterTypes() { this->parameterTypes_ = nullptr;};
    inline const vector<string> & parameterTypes() const { DARABONBA_PTR_GET_CONST(parameterTypes_, vector<string>) };
    inline vector<string> parameterTypes() { DARABONBA_PTR_GET(parameterTypes_, vector<string>) };
    inline ListAuthPolicyResponseBodyDataResultAuthRuleMethod& setParameterTypes(const vector<string> & parameterTypes) { DARABONBA_PTR_SET_VALUE(parameterTypes_, parameterTypes) };
    inline ListAuthPolicyResponseBodyDataResultAuthRuleMethod& setParameterTypes(vector<string> && parameterTypes) { DARABONBA_PTR_SET_RVALUE(parameterTypes_, parameterTypes) };


    // returnType Field Functions 
    bool hasReturnType() const { return this->returnType_ != nullptr;};
    void deleteReturnType() { this->returnType_ = nullptr;};
    inline string returnType() const { DARABONBA_PTR_GET_DEFAULT(returnType_, "") };
    inline ListAuthPolicyResponseBodyDataResultAuthRuleMethod& setReturnType(string returnType) { DARABONBA_PTR_SET_VALUE(returnType_, returnType) };


    // serviceName Field Functions 
    bool hasServiceName() const { return this->serviceName_ != nullptr;};
    void deleteServiceName() { this->serviceName_ = nullptr;};
    inline string serviceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
    inline ListAuthPolicyResponseBodyDataResultAuthRuleMethod& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline ListAuthPolicyResponseBodyDataResultAuthRuleMethod& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    // The group.
    std::shared_ptr<string> group_ = nullptr;
    // The method name.
    std::shared_ptr<string> name_ = nullptr;
    // The types of request parameters.
    std::shared_ptr<vector<string>> parameterTypes_ = nullptr;
    // The type of the return value.
    std::shared_ptr<string> returnType_ = nullptr;
    // The service name.
    std::shared_ptr<string> serviceName_ = nullptr;
    // The method version.
    std::shared_ptr<string> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
