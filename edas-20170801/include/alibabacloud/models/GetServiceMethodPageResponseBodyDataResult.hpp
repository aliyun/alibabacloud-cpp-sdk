// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSERVICEMETHODPAGERESPONSEBODYDATARESULT_HPP_
#define ALIBABACLOUD_MODELS_GETSERVICEMETHODPAGERESPONSEBODYDATARESULT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetServiceMethodPageResponseBodyDataResultReturnDefinition.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
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
      DARABONBA_PTR_TO_JSON(ParameterNames, parameterNames_);
      DARABONBA_PTR_TO_JSON(ParameterTypes, parameterTypes_);
      DARABONBA_PTR_TO_JSON(Paths, paths_);
      DARABONBA_PTR_TO_JSON(RequestMethods, requestMethods_);
      DARABONBA_PTR_TO_JSON(ReturnDefinition, returnDefinition_);
      DARABONBA_PTR_TO_JSON(ReturnDetails, returnDetails_);
      DARABONBA_PTR_TO_JSON(ReturnType, returnType_);
    };
    friend void from_json(const Darabonba::Json& j, GetServiceMethodPageResponseBodyDataResult& obj) { 
      DARABONBA_PTR_FROM_JSON(MethodController, methodController_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NameDetail, nameDetail_);
      DARABONBA_PTR_FROM_JSON(ParameterDefinitions, parameterDefinitions_);
      DARABONBA_PTR_FROM_JSON(ParameterDetails, parameterDetails_);
      DARABONBA_PTR_FROM_JSON(ParameterNames, parameterNames_);
      DARABONBA_PTR_FROM_JSON(ParameterTypes, parameterTypes_);
      DARABONBA_PTR_FROM_JSON(Paths, paths_);
      DARABONBA_PTR_FROM_JSON(RequestMethods, requestMethods_);
      DARABONBA_PTR_FROM_JSON(ReturnDefinition, returnDefinition_);
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
        && return this->name_ == nullptr && return this->nameDetail_ == nullptr && return this->parameterDefinitions_ == nullptr && return this->parameterDetails_ == nullptr && return this->parameterNames_ == nullptr
        && return this->parameterTypes_ == nullptr && return this->paths_ == nullptr && return this->requestMethods_ == nullptr && return this->returnDefinition_ == nullptr && return this->returnDetails_ == nullptr
        && return this->returnType_ == nullptr; };
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
    inline string parameterDefinitions() const { DARABONBA_PTR_GET_DEFAULT(parameterDefinitions_, "") };
    inline GetServiceMethodPageResponseBodyDataResult& setParameterDefinitions(string parameterDefinitions) { DARABONBA_PTR_SET_VALUE(parameterDefinitions_, parameterDefinitions) };


    // parameterDetails Field Functions 
    bool hasParameterDetails() const { return this->parameterDetails_ != nullptr;};
    void deleteParameterDetails() { this->parameterDetails_ = nullptr;};
    inline string parameterDetails() const { DARABONBA_PTR_GET_DEFAULT(parameterDetails_, "") };
    inline GetServiceMethodPageResponseBodyDataResult& setParameterDetails(string parameterDetails) { DARABONBA_PTR_SET_VALUE(parameterDetails_, parameterDetails) };


    // parameterNames Field Functions 
    bool hasParameterNames() const { return this->parameterNames_ != nullptr;};
    void deleteParameterNames() { this->parameterNames_ = nullptr;};
    inline string parameterNames() const { DARABONBA_PTR_GET_DEFAULT(parameterNames_, "") };
    inline GetServiceMethodPageResponseBodyDataResult& setParameterNames(string parameterNames) { DARABONBA_PTR_SET_VALUE(parameterNames_, parameterNames) };


    // parameterTypes Field Functions 
    bool hasParameterTypes() const { return this->parameterTypes_ != nullptr;};
    void deleteParameterTypes() { this->parameterTypes_ = nullptr;};
    inline string parameterTypes() const { DARABONBA_PTR_GET_DEFAULT(parameterTypes_, "") };
    inline GetServiceMethodPageResponseBodyDataResult& setParameterTypes(string parameterTypes) { DARABONBA_PTR_SET_VALUE(parameterTypes_, parameterTypes) };


    // paths Field Functions 
    bool hasPaths() const { return this->paths_ != nullptr;};
    void deletePaths() { this->paths_ = nullptr;};
    inline string paths() const { DARABONBA_PTR_GET_DEFAULT(paths_, "") };
    inline GetServiceMethodPageResponseBodyDataResult& setPaths(string paths) { DARABONBA_PTR_SET_VALUE(paths_, paths) };


    // requestMethods Field Functions 
    bool hasRequestMethods() const { return this->requestMethods_ != nullptr;};
    void deleteRequestMethods() { this->requestMethods_ = nullptr;};
    inline string requestMethods() const { DARABONBA_PTR_GET_DEFAULT(requestMethods_, "") };
    inline GetServiceMethodPageResponseBodyDataResult& setRequestMethods(string requestMethods) { DARABONBA_PTR_SET_VALUE(requestMethods_, requestMethods) };


    // returnDefinition Field Functions 
    bool hasReturnDefinition() const { return this->returnDefinition_ != nullptr;};
    void deleteReturnDefinition() { this->returnDefinition_ = nullptr;};
    inline const Models::GetServiceMethodPageResponseBodyDataResultReturnDefinition & returnDefinition() const { DARABONBA_PTR_GET_CONST(returnDefinition_, Models::GetServiceMethodPageResponseBodyDataResultReturnDefinition) };
    inline Models::GetServiceMethodPageResponseBodyDataResultReturnDefinition returnDefinition() { DARABONBA_PTR_GET(returnDefinition_, Models::GetServiceMethodPageResponseBodyDataResultReturnDefinition) };
    inline GetServiceMethodPageResponseBodyDataResult& setReturnDefinition(const Models::GetServiceMethodPageResponseBodyDataResultReturnDefinition & returnDefinition) { DARABONBA_PTR_SET_VALUE(returnDefinition_, returnDefinition) };
    inline GetServiceMethodPageResponseBodyDataResult& setReturnDefinition(Models::GetServiceMethodPageResponseBodyDataResultReturnDefinition && returnDefinition) { DARABONBA_PTR_SET_RVALUE(returnDefinition_, returnDefinition) };


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
    // The method.
    std::shared_ptr<string> methodController_ = nullptr;
    // The name of the method.
    std::shared_ptr<string> name_ = nullptr;
    // The details of the method.
    std::shared_ptr<string> nameDetail_ = nullptr;
    // The definition of the parameter.
    std::shared_ptr<string> parameterDefinitions_ = nullptr;
    // The details of the parameters.
    std::shared_ptr<string> parameterDetails_ = nullptr;
    // The name of the parameter.
    std::shared_ptr<string> parameterNames_ = nullptr;
    // The data type of the parameter.
    std::shared_ptr<string> parameterTypes_ = nullptr;
    // The method path.
    std::shared_ptr<string> paths_ = nullptr;
    // The request method.
    std::shared_ptr<string> requestMethods_ = nullptr;
    // The return value.
    std::shared_ptr<Models::GetServiceMethodPageResponseBodyDataResultReturnDefinition> returnDefinition_ = nullptr;
    // The details of the response.
    std::shared_ptr<string> returnDetails_ = nullptr;
    // The data format of the response.
    std::shared_ptr<string> returnType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
