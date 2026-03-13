// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPLOADMODULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPLOADMODULEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IaCService20210806
{
namespace Models
{
  class UploadModuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UploadModuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(moduleId, moduleId_);
      DARABONBA_PTR_TO_JSON(moduleName, moduleName_);
      DARABONBA_PTR_TO_JSON(namespaceName, namespaceName_);
      DARABONBA_PTR_TO_JSON(url, url_);
    };
    friend void from_json(const Darabonba::Json& j, UploadModuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(moduleId, moduleId_);
      DARABONBA_PTR_FROM_JSON(moduleName, moduleName_);
      DARABONBA_PTR_FROM_JSON(namespaceName, namespaceName_);
      DARABONBA_PTR_FROM_JSON(url, url_);
    };
    UploadModuleRequest() = default ;
    UploadModuleRequest(const UploadModuleRequest &) = default ;
    UploadModuleRequest(UploadModuleRequest &&) = default ;
    UploadModuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UploadModuleRequest() = default ;
    UploadModuleRequest& operator=(const UploadModuleRequest &) = default ;
    UploadModuleRequest& operator=(UploadModuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && this->moduleId_ == nullptr && this->moduleName_ == nullptr && this->namespaceName_ == nullptr && this->url_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline const map<string, string> & getCode() const { DARABONBA_PTR_GET_CONST(code_, map<string, string>) };
    inline map<string, string> getCode() { DARABONBA_PTR_GET(code_, map<string, string>) };
    inline UploadModuleRequest& setCode(const map<string, string> & code) { DARABONBA_PTR_SET_VALUE(code_, code) };
    inline UploadModuleRequest& setCode(map<string, string> && code) { DARABONBA_PTR_SET_RVALUE(code_, code) };


    // moduleId Field Functions 
    bool hasModuleId() const { return this->moduleId_ != nullptr;};
    void deleteModuleId() { this->moduleId_ = nullptr;};
    inline string getModuleId() const { DARABONBA_PTR_GET_DEFAULT(moduleId_, "") };
    inline UploadModuleRequest& setModuleId(string moduleId) { DARABONBA_PTR_SET_VALUE(moduleId_, moduleId) };


    // moduleName Field Functions 
    bool hasModuleName() const { return this->moduleName_ != nullptr;};
    void deleteModuleName() { this->moduleName_ = nullptr;};
    inline string getModuleName() const { DARABONBA_PTR_GET_DEFAULT(moduleName_, "") };
    inline UploadModuleRequest& setModuleName(string moduleName) { DARABONBA_PTR_SET_VALUE(moduleName_, moduleName) };


    // namespaceName Field Functions 
    bool hasNamespaceName() const { return this->namespaceName_ != nullptr;};
    void deleteNamespaceName() { this->namespaceName_ = nullptr;};
    inline string getNamespaceName() const { DARABONBA_PTR_GET_DEFAULT(namespaceName_, "") };
    inline UploadModuleRequest& setNamespaceName(string namespaceName) { DARABONBA_PTR_SET_VALUE(namespaceName_, namespaceName) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline UploadModuleRequest& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    shared_ptr<map<string, string>> code_ {};
    shared_ptr<string> moduleId_ {};
    shared_ptr<string> moduleName_ {};
    shared_ptr<string> namespaceName_ {};
    shared_ptr<string> url_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IaCService20210806
#endif
