// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSERVICELISTRESPONSEBODYDATAMETHODS_HPP_
#define ALIBABACLOUD_MODELS_GETSERVICELISTRESPONSEBODYDATAMETHODS_HPP_
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
  class GetServiceListResponseBodyDataMethods : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetServiceListResponseBodyDataMethods& obj) { 
      DARABONBA_PTR_TO_JSON(MethodController, methodController_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ParameterTypes, parameterTypes_);
      DARABONBA_PTR_TO_JSON(Paths, paths_);
      DARABONBA_PTR_TO_JSON(RequestMethods, requestMethods_);
      DARABONBA_PTR_TO_JSON(ReturnType, returnType_);
    };
    friend void from_json(const Darabonba::Json& j, GetServiceListResponseBodyDataMethods& obj) { 
      DARABONBA_PTR_FROM_JSON(MethodController, methodController_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ParameterTypes, parameterTypes_);
      DARABONBA_PTR_FROM_JSON(Paths, paths_);
      DARABONBA_PTR_FROM_JSON(RequestMethods, requestMethods_);
      DARABONBA_PTR_FROM_JSON(ReturnType, returnType_);
    };
    GetServiceListResponseBodyDataMethods() = default ;
    GetServiceListResponseBodyDataMethods(const GetServiceListResponseBodyDataMethods &) = default ;
    GetServiceListResponseBodyDataMethods(GetServiceListResponseBodyDataMethods &&) = default ;
    GetServiceListResponseBodyDataMethods(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetServiceListResponseBodyDataMethods() = default ;
    GetServiceListResponseBodyDataMethods& operator=(const GetServiceListResponseBodyDataMethods &) = default ;
    GetServiceListResponseBodyDataMethods& operator=(GetServiceListResponseBodyDataMethods &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->methodController_ == nullptr
        && return this->name_ == nullptr && return this->parameterTypes_ == nullptr && return this->paths_ == nullptr && return this->requestMethods_ == nullptr && return this->returnType_ == nullptr; };
    // methodController Field Functions 
    bool hasMethodController() const { return this->methodController_ != nullptr;};
    void deleteMethodController() { this->methodController_ = nullptr;};
    inline string methodController() const { DARABONBA_PTR_GET_DEFAULT(methodController_, "") };
    inline GetServiceListResponseBodyDataMethods& setMethodController(string methodController) { DARABONBA_PTR_SET_VALUE(methodController_, methodController) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetServiceListResponseBodyDataMethods& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // parameterTypes Field Functions 
    bool hasParameterTypes() const { return this->parameterTypes_ != nullptr;};
    void deleteParameterTypes() { this->parameterTypes_ = nullptr;};
    inline const vector<string> & parameterTypes() const { DARABONBA_PTR_GET_CONST(parameterTypes_, vector<string>) };
    inline vector<string> parameterTypes() { DARABONBA_PTR_GET(parameterTypes_, vector<string>) };
    inline GetServiceListResponseBodyDataMethods& setParameterTypes(const vector<string> & parameterTypes) { DARABONBA_PTR_SET_VALUE(parameterTypes_, parameterTypes) };
    inline GetServiceListResponseBodyDataMethods& setParameterTypes(vector<string> && parameterTypes) { DARABONBA_PTR_SET_RVALUE(parameterTypes_, parameterTypes) };


    // paths Field Functions 
    bool hasPaths() const { return this->paths_ != nullptr;};
    void deletePaths() { this->paths_ = nullptr;};
    inline const vector<string> & paths() const { DARABONBA_PTR_GET_CONST(paths_, vector<string>) };
    inline vector<string> paths() { DARABONBA_PTR_GET(paths_, vector<string>) };
    inline GetServiceListResponseBodyDataMethods& setPaths(const vector<string> & paths) { DARABONBA_PTR_SET_VALUE(paths_, paths) };
    inline GetServiceListResponseBodyDataMethods& setPaths(vector<string> && paths) { DARABONBA_PTR_SET_RVALUE(paths_, paths) };


    // requestMethods Field Functions 
    bool hasRequestMethods() const { return this->requestMethods_ != nullptr;};
    void deleteRequestMethods() { this->requestMethods_ = nullptr;};
    inline const vector<string> & requestMethods() const { DARABONBA_PTR_GET_CONST(requestMethods_, vector<string>) };
    inline vector<string> requestMethods() { DARABONBA_PTR_GET(requestMethods_, vector<string>) };
    inline GetServiceListResponseBodyDataMethods& setRequestMethods(const vector<string> & requestMethods) { DARABONBA_PTR_SET_VALUE(requestMethods_, requestMethods) };
    inline GetServiceListResponseBodyDataMethods& setRequestMethods(vector<string> && requestMethods) { DARABONBA_PTR_SET_RVALUE(requestMethods_, requestMethods) };


    // returnType Field Functions 
    bool hasReturnType() const { return this->returnType_ != nullptr;};
    void deleteReturnType() { this->returnType_ = nullptr;};
    inline string returnType() const { DARABONBA_PTR_GET_DEFAULT(returnType_, "") };
    inline GetServiceListResponseBodyDataMethods& setReturnType(string returnType) { DARABONBA_PTR_SET_VALUE(returnType_, returnType) };


  protected:
    // The controller of the method.
    std::shared_ptr<string> methodController_ = nullptr;
    // The name of the method.
    std::shared_ptr<string> name_ = nullptr;
    // The data types of the parameters.
    std::shared_ptr<vector<string>> parameterTypes_ = nullptr;
    // The paths.
    std::shared_ptr<vector<string>> paths_ = nullptr;
    // The methods.
    std::shared_ptr<vector<string>> requestMethods_ = nullptr;
    // The type of the return value.
    std::shared_ptr<string> returnType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
