// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REGISTERUDFFUNCTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REGISTERUDFFUNCTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ververica20220718
{
namespace Models
{
  class RegisterUdfFunctionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RegisterUdfFunctionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(className, className_);
      DARABONBA_PTR_TO_JSON(functionName, functionName_);
      DARABONBA_PTR_TO_JSON(udfArtifactName, udfArtifactName_);
    };
    friend void from_json(const Darabonba::Json& j, RegisterUdfFunctionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(className, className_);
      DARABONBA_PTR_FROM_JSON(functionName, functionName_);
      DARABONBA_PTR_FROM_JSON(udfArtifactName, udfArtifactName_);
    };
    RegisterUdfFunctionRequest() = default ;
    RegisterUdfFunctionRequest(const RegisterUdfFunctionRequest &) = default ;
    RegisterUdfFunctionRequest(RegisterUdfFunctionRequest &&) = default ;
    RegisterUdfFunctionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RegisterUdfFunctionRequest() = default ;
    RegisterUdfFunctionRequest& operator=(const RegisterUdfFunctionRequest &) = default ;
    RegisterUdfFunctionRequest& operator=(RegisterUdfFunctionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->className_ == nullptr
        && return this->functionName_ == nullptr && return this->udfArtifactName_ == nullptr; };
    // className Field Functions 
    bool hasClassName() const { return this->className_ != nullptr;};
    void deleteClassName() { this->className_ = nullptr;};
    inline string className() const { DARABONBA_PTR_GET_DEFAULT(className_, "") };
    inline RegisterUdfFunctionRequest& setClassName(string className) { DARABONBA_PTR_SET_VALUE(className_, className) };


    // functionName Field Functions 
    bool hasFunctionName() const { return this->functionName_ != nullptr;};
    void deleteFunctionName() { this->functionName_ = nullptr;};
    inline string functionName() const { DARABONBA_PTR_GET_DEFAULT(functionName_, "") };
    inline RegisterUdfFunctionRequest& setFunctionName(string functionName) { DARABONBA_PTR_SET_VALUE(functionName_, functionName) };


    // udfArtifactName Field Functions 
    bool hasUdfArtifactName() const { return this->udfArtifactName_ != nullptr;};
    void deleteUdfArtifactName() { this->udfArtifactName_ = nullptr;};
    inline string udfArtifactName() const { DARABONBA_PTR_GET_DEFAULT(udfArtifactName_, "") };
    inline RegisterUdfFunctionRequest& setUdfArtifactName(string udfArtifactName) { DARABONBA_PTR_SET_VALUE(udfArtifactName_, udfArtifactName) };


  protected:
    // The name of the class that corresponds to the UDF.
    // 
    // This parameter is required.
    std::shared_ptr<string> className_ = nullptr;
    // The name of the UDF. In most cases, the name of the UDF is the same as the class name. You can specify a name for the UDF.
    // 
    // This parameter is required.
    std::shared_ptr<string> functionName_ = nullptr;
    // The name of the JAR or Python file that corresponds to the UDF.
    // 
    // This parameter is required.
    std::shared_ptr<string> udfArtifactName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ververica20220718
#endif
