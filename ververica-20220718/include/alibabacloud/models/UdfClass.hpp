// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UDFCLASS_HPP_
#define ALIBABACLOUD_MODELS_UDFCLASS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ververica20220718
{
namespace Models
{
  class UdfClass : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UdfClass& obj) { 
      DARABONBA_PTR_TO_JSON(className, className_);
      DARABONBA_PTR_TO_JSON(classType, classType_);
      DARABONBA_PTR_TO_JSON(functionNames, functionNames_);
      DARABONBA_PTR_TO_JSON(udfArtifactName, udfArtifactName_);
    };
    friend void from_json(const Darabonba::Json& j, UdfClass& obj) { 
      DARABONBA_PTR_FROM_JSON(className, className_);
      DARABONBA_PTR_FROM_JSON(classType, classType_);
      DARABONBA_PTR_FROM_JSON(functionNames, functionNames_);
      DARABONBA_PTR_FROM_JSON(udfArtifactName, udfArtifactName_);
    };
    UdfClass() = default ;
    UdfClass(const UdfClass &) = default ;
    UdfClass(UdfClass &&) = default ;
    UdfClass(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UdfClass() = default ;
    UdfClass& operator=(const UdfClass &) = default ;
    UdfClass& operator=(UdfClass &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->className_ == nullptr
        && return this->classType_ == nullptr && return this->functionNames_ == nullptr && return this->udfArtifactName_ == nullptr; };
    // className Field Functions 
    bool hasClassName() const { return this->className_ != nullptr;};
    void deleteClassName() { this->className_ = nullptr;};
    inline string className() const { DARABONBA_PTR_GET_DEFAULT(className_, "") };
    inline UdfClass& setClassName(string className) { DARABONBA_PTR_SET_VALUE(className_, className) };


    // classType Field Functions 
    bool hasClassType() const { return this->classType_ != nullptr;};
    void deleteClassType() { this->classType_ = nullptr;};
    inline string classType() const { DARABONBA_PTR_GET_DEFAULT(classType_, "") };
    inline UdfClass& setClassType(string classType) { DARABONBA_PTR_SET_VALUE(classType_, classType) };


    // functionNames Field Functions 
    bool hasFunctionNames() const { return this->functionNames_ != nullptr;};
    void deleteFunctionNames() { this->functionNames_ = nullptr;};
    inline const vector<string> & functionNames() const { DARABONBA_PTR_GET_CONST(functionNames_, vector<string>) };
    inline vector<string> functionNames() { DARABONBA_PTR_GET(functionNames_, vector<string>) };
    inline UdfClass& setFunctionNames(const vector<string> & functionNames) { DARABONBA_PTR_SET_VALUE(functionNames_, functionNames) };
    inline UdfClass& setFunctionNames(vector<string> && functionNames) { DARABONBA_PTR_SET_RVALUE(functionNames_, functionNames) };


    // udfArtifactName Field Functions 
    bool hasUdfArtifactName() const { return this->udfArtifactName_ != nullptr;};
    void deleteUdfArtifactName() { this->udfArtifactName_ = nullptr;};
    inline string udfArtifactName() const { DARABONBA_PTR_GET_DEFAULT(udfArtifactName_, "") };
    inline UdfClass& setUdfArtifactName(string udfArtifactName) { DARABONBA_PTR_SET_VALUE(udfArtifactName_, udfArtifactName) };


  protected:
    std::shared_ptr<string> className_ = nullptr;
    std::shared_ptr<string> classType_ = nullptr;
    std::shared_ptr<vector<string>> functionNames_ = nullptr;
    std::shared_ptr<string> udfArtifactName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ververica20220718
#endif
