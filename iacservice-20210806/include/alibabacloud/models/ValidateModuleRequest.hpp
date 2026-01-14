// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VALIDATEMODULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_VALIDATEMODULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IaCService20210806
{
namespace Models
{
  class ValidateModuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ValidateModuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(clientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_ANY_TO_JSON(codeMap, codeMap_);
      DARABONBA_PTR_TO_JSON(source, source_);
      DARABONBA_PTR_TO_JSON(sourcePath, sourcePath_);
    };
    friend void from_json(const Darabonba::Json& j, ValidateModuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(clientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_ANY_FROM_JSON(codeMap, codeMap_);
      DARABONBA_PTR_FROM_JSON(source, source_);
      DARABONBA_PTR_FROM_JSON(sourcePath, sourcePath_);
    };
    ValidateModuleRequest() = default ;
    ValidateModuleRequest(const ValidateModuleRequest &) = default ;
    ValidateModuleRequest(ValidateModuleRequest &&) = default ;
    ValidateModuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ValidateModuleRequest() = default ;
    ValidateModuleRequest& operator=(const ValidateModuleRequest &) = default ;
    ValidateModuleRequest& operator=(ValidateModuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->code_ == nullptr && this->codeMap_ == nullptr && this->source_ == nullptr && this->sourcePath_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline ValidateModuleRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ValidateModuleRequest& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // codeMap Field Functions 
    bool hasCodeMap() const { return this->codeMap_ != nullptr;};
    void deleteCodeMap() { this->codeMap_ = nullptr;};
    inline     const Darabonba::Json & getCodeMap() const { DARABONBA_GET(codeMap_) };
    Darabonba::Json & getCodeMap() { DARABONBA_GET(codeMap_) };
    inline ValidateModuleRequest& setCodeMap(const Darabonba::Json & codeMap) { DARABONBA_SET_VALUE(codeMap_, codeMap) };
    inline ValidateModuleRequest& setCodeMap(Darabonba::Json && codeMap) { DARABONBA_SET_RVALUE(codeMap_, codeMap) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline ValidateModuleRequest& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // sourcePath Field Functions 
    bool hasSourcePath() const { return this->sourcePath_ != nullptr;};
    void deleteSourcePath() { this->sourcePath_ = nullptr;};
    inline string getSourcePath() const { DARABONBA_PTR_GET_DEFAULT(sourcePath_, "") };
    inline ValidateModuleRequest& setSourcePath(string sourcePath) { DARABONBA_PTR_SET_VALUE(sourcePath_, sourcePath) };


  protected:
    shared_ptr<string> clientToken_ {};
    shared_ptr<string> code_ {};
    Darabonba::Json codeMap_ {};
    shared_ptr<string> source_ {};
    shared_ptr<string> sourcePath_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IaCService20210806
#endif
