// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSERVICEMETHODPAGERESPONSEBODYDATARESULT_HPP_
#define ALIBABACLOUD_MODELS_GETSERVICEMETHODPAGERESPONSEBODYDATARESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetServiceMethodPageResponseBodyDataResultParameterDefinitions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class GetServiceMethodPageResponseBodyDataResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetServiceMethodPageResponseBodyDataResult& obj) { 
      DARABONBA_PTR_TO_JSON(MethodController, methodController_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NameDetail, nameDetail_);
      DARABONBA_PTR_TO_JSON(ParameterDefinitions, parameterDefinitions_);
      DARABONBA_PTR_TO_JSON(ParameterDetails, parameterDetails_);
      DARABONBA_PTR_TO_JSON(ParameterTypes, parameterTypes_);
      DARABONBA_PTR_TO_JSON(Paths, paths_);
      DARABONBA_PTR_TO_JSON(RequestMethods, requestMethods_);
      DARABONBA_PTR_TO_JSON(ReturnDetails, returnDetails_);
      DARABONBA_PTR_TO_JSON(ReturnType, returnType_);
    };
    friend void from_json(const Darabonba::Json& j, GetServiceMethodPageResponseBodyDataResult& obj) { 
      DARABONBA_PTR_FROM_JSON(MethodController, methodController_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NameDetail, nameDetail_);
      DARABONBA_PTR_FROM_JSON(ParameterDefinitions, parameterDefinitions_);
      DARABONBA_PTR_FROM_JSON(ParameterDetails, parameterDetails_);
      DARABONBA_PTR_FROM_JSON(ParameterTypes, parameterTypes_);
      DARABONBA_PTR_FROM_JSON(Paths, paths_);
      DARABONBA_PTR_FROM_JSON(RequestMethods, requestMethods_);
      DARABONBA_PTR_FROM_JSON(ReturnDetails, returnDetails_);
      DARABONBA_PTR_FROM_JSON(ReturnType, returnType_);
    };
    GetServiceMethodPageResponseBodyDataResult() = default ;
    GetServiceMethodPageResponseBodyDataResult(const GetServiceMethodPageResponseBodyDataResult &) = default ;
    GetServiceMethodPageResponseBodyDataResult(GetServiceMethodPageResponseBodyDataResult &&) = default ;
    GetServiceMethodPageResponseBodyDataResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetServiceMethodPageResponseBodyDataResult() = default ;
    GetServiceMethodPageResponseBodyDataResult& operator=(const GetServiceMethodPageResponseBodyDataResult &) = default ;
    GetServiceMethodPageResponseBodyDataResult& operator=(GetServiceMethodPageResponseBodyDataResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->methodController_ == nullptr
        && return this->name_ == nullptr && return this->nameDetail_ == nullptr && return this->parameterDefinitions_ == nullptr && return this->parameterDetails_ == nullptr && return this->parameterTypes_ == nullptr
        && return this->paths_ == nullptr && return this->requestMethods_ == nullptr && return this->returnDetails_ == nullptr && return this->returnType_ == nullptr; };
    // methodController Field Functions 
    bool hasMethodController() const { return this->methodController_ != nullptr;};
    void deleteMethodController() { this->methodController_ = nullptr;};
    inline string methodController() const { DARABONBA_PTR_GET_DEFAULT(methodController_, "") };
    inline GetServiceMethodPageResponseBodyDataResult& setMethodController(string methodController) { DARABONBA_PTR_SET_VALUE(methodController_, methodController) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetServiceMethodPageResponseBodyDataResult& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // nameDetail Field Functions 
    bool hasNameDetail() const { return this->nameDetail_ != nullptr;};
    void deleteNameDetail() { this->nameDetail_ = nullptr;};
    inline string nameDetail() const { DARABONBA_PTR_GET_DEFAULT(nameDetail_, "") };
    inline GetServiceMethodPageResponseBodyDataResult& setNameDetail(string nameDetail) { DARABONBA_PTR_SET_VALUE(nameDetail_, nameDetail) };


    // parameterDefinitions Field Functions 
    bool hasParameterDefinitions() const { return this->parameterDefinitions_ != nullptr;};
    void deleteParameterDefinitions() { this->parameterDefinitions_ = nullptr;};
    inline const vector<Models::GetServiceMethodPageResponseBodyDataResultParameterDefinitions> & parameterDefinitions() const { DARABONBA_PTR_GET_CONST(parameterDefinitions_, vector<Models::GetServiceMethodPageResponseBodyDataResultParameterDefinitions>) };
    inline vector<Models::GetServiceMethodPageResponseBodyDataResultParameterDefinitions> parameterDefinitions() { DARABONBA_PTR_GET(parameterDefinitions_, vector<Models::GetServiceMethodPageResponseBodyDataResultParameterDefinitions>) };
    inline GetServiceMethodPageResponseBodyDataResult& setParameterDefinitions(const vector<Models::GetServiceMethodPageResponseBodyDataResultParameterDefinitions> & parameterDefinitions) { DARABONBA_PTR_SET_VALUE(parameterDefinitions_, parameterDefinitions) };
    inline GetServiceMethodPageResponseBodyDataResult& setParameterDefinitions(vector<Models::GetServiceMethodPageResponseBodyDataResultParameterDefinitions> && parameterDefinitions) { DARABONBA_PTR_SET_RVALUE(parameterDefinitions_, parameterDefinitions) };


    // parameterDetails Field Functions 
    bool hasParameterDetails() const { return this->parameterDetails_ != nullptr;};
    void deleteParameterDetails() { this->parameterDetails_ = nullptr;};
    inline const vector<string> & parameterDetails() const { DARABONBA_PTR_GET_CONST(parameterDetails_, vector<string>) };
    inline vector<string> parameterDetails() { DARABONBA_PTR_GET(parameterDetails_, vector<string>) };
    inline GetServiceMethodPageResponseBodyDataResult& setParameterDetails(const vector<string> & parameterDetails) { DARABONBA_PTR_SET_VALUE(parameterDetails_, parameterDetails) };
    inline GetServiceMethodPageResponseBodyDataResult& setParameterDetails(vector<string> && parameterDetails) { DARABONBA_PTR_SET_RVALUE(parameterDetails_, parameterDetails) };


    // parameterTypes Field Functions 
    bool hasParameterTypes() const { return this->parameterTypes_ != nullptr;};
    void deleteParameterTypes() { this->parameterTypes_ = nullptr;};
    inline const vector<string> & parameterTypes() const { DARABONBA_PTR_GET_CONST(parameterTypes_, vector<string>) };
    inline vector<string> parameterTypes() { DARABONBA_PTR_GET(parameterTypes_, vector<string>) };
    inline GetServiceMethodPageResponseBodyDataResult& setParameterTypes(const vector<string> & parameterTypes) { DARABONBA_PTR_SET_VALUE(parameterTypes_, parameterTypes) };
    inline GetServiceMethodPageResponseBodyDataResult& setParameterTypes(vector<string> && parameterTypes) { DARABONBA_PTR_SET_RVALUE(parameterTypes_, parameterTypes) };


    // paths Field Functions 
    bool hasPaths() const { return this->paths_ != nullptr;};
    void deletePaths() { this->paths_ = nullptr;};
    inline const vector<string> & paths() const { DARABONBA_PTR_GET_CONST(paths_, vector<string>) };
    inline vector<string> paths() { DARABONBA_PTR_GET(paths_, vector<string>) };
    inline GetServiceMethodPageResponseBodyDataResult& setPaths(const vector<string> & paths) { DARABONBA_PTR_SET_VALUE(paths_, paths) };
    inline GetServiceMethodPageResponseBodyDataResult& setPaths(vector<string> && paths) { DARABONBA_PTR_SET_RVALUE(paths_, paths) };


    // requestMethods Field Functions 
    bool hasRequestMethods() const { return this->requestMethods_ != nullptr;};
    void deleteRequestMethods() { this->requestMethods_ = nullptr;};
    inline const vector<string> & requestMethods() const { DARABONBA_PTR_GET_CONST(requestMethods_, vector<string>) };
    inline vector<string> requestMethods() { DARABONBA_PTR_GET(requestMethods_, vector<string>) };
    inline GetServiceMethodPageResponseBodyDataResult& setRequestMethods(const vector<string> & requestMethods) { DARABONBA_PTR_SET_VALUE(requestMethods_, requestMethods) };
    inline GetServiceMethodPageResponseBodyDataResult& setRequestMethods(vector<string> && requestMethods) { DARABONBA_PTR_SET_RVALUE(requestMethods_, requestMethods) };


    // returnDetails Field Functions 
    bool hasReturnDetails() const { return this->returnDetails_ != nullptr;};
    void deleteReturnDetails() { this->returnDetails_ = nullptr;};
    inline string returnDetails() const { DARABONBA_PTR_GET_DEFAULT(returnDetails_, "") };
    inline GetServiceMethodPageResponseBodyDataResult& setReturnDetails(string returnDetails) { DARABONBA_PTR_SET_VALUE(returnDetails_, returnDetails) };


    // returnType Field Functions 
    bool hasReturnType() const { return this->returnType_ != nullptr;};
    void deleteReturnType() { this->returnType_ = nullptr;};
    inline string returnType() const { DARABONBA_PTR_GET_DEFAULT(returnType_, "") };
    inline GetServiceMethodPageResponseBodyDataResult& setReturnType(string returnType) { DARABONBA_PTR_SET_VALUE(returnType_, returnType) };


  protected:
    std::shared_ptr<string> methodController_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> nameDetail_ = nullptr;
    std::shared_ptr<vector<Models::GetServiceMethodPageResponseBodyDataResultParameterDefinitions>> parameterDefinitions_ = nullptr;
    std::shared_ptr<vector<string>> parameterDetails_ = nullptr;
    std::shared_ptr<vector<string>> parameterTypes_ = nullptr;
    std::shared_ptr<vector<string>> paths_ = nullptr;
    std::shared_ptr<vector<string>> requestMethods_ = nullptr;
    std::shared_ptr<string> returnDetails_ = nullptr;
    std::shared_ptr<string> returnType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
