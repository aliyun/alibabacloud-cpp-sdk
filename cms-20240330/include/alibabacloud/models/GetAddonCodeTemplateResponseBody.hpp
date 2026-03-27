// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETADDONCODETEMPLATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETADDONCODETEMPLATERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class GetAddonCodeTemplateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAddonCodeTemplateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(codes, codes_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAddonCodeTemplateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(codes, codes_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetAddonCodeTemplateResponseBody() = default ;
    GetAddonCodeTemplateResponseBody(const GetAddonCodeTemplateResponseBody &) = default ;
    GetAddonCodeTemplateResponseBody(GetAddonCodeTemplateResponseBody &&) = default ;
    GetAddonCodeTemplateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAddonCodeTemplateResponseBody() = default ;
    GetAddonCodeTemplateResponseBody& operator=(const GetAddonCodeTemplateResponseBody &) = default ;
    GetAddonCodeTemplateResponseBody& operator=(GetAddonCodeTemplateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Codes : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Codes& obj) { 
        DARABONBA_PTR_TO_JSON(codeTemplate, codeTemplate_);
        DARABONBA_PTR_TO_JSON(name, name_);
      };
      friend void from_json(const Darabonba::Json& j, Codes& obj) { 
        DARABONBA_PTR_FROM_JSON(codeTemplate, codeTemplate_);
        DARABONBA_PTR_FROM_JSON(name, name_);
      };
      Codes() = default ;
      Codes(const Codes &) = default ;
      Codes(Codes &&) = default ;
      Codes(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Codes() = default ;
      Codes& operator=(const Codes &) = default ;
      Codes& operator=(Codes &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->codeTemplate_ == nullptr
        && this->name_ == nullptr; };
      // codeTemplate Field Functions 
      bool hasCodeTemplate() const { return this->codeTemplate_ != nullptr;};
      void deleteCodeTemplate() { this->codeTemplate_ = nullptr;};
      inline string getCodeTemplate() const { DARABONBA_PTR_GET_DEFAULT(codeTemplate_, "") };
      inline Codes& setCodeTemplate(string codeTemplate) { DARABONBA_PTR_SET_VALUE(codeTemplate_, codeTemplate) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Codes& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    protected:
      shared_ptr<string> codeTemplate_ {};
      shared_ptr<string> name_ {};
    };

    virtual bool empty() const override { return this->codes_ == nullptr
        && this->requestId_ == nullptr; };
    // codes Field Functions 
    bool hasCodes() const { return this->codes_ != nullptr;};
    void deleteCodes() { this->codes_ = nullptr;};
    inline const vector<GetAddonCodeTemplateResponseBody::Codes> & getCodes() const { DARABONBA_PTR_GET_CONST(codes_, vector<GetAddonCodeTemplateResponseBody::Codes>) };
    inline vector<GetAddonCodeTemplateResponseBody::Codes> getCodes() { DARABONBA_PTR_GET(codes_, vector<GetAddonCodeTemplateResponseBody::Codes>) };
    inline GetAddonCodeTemplateResponseBody& setCodes(const vector<GetAddonCodeTemplateResponseBody::Codes> & codes) { DARABONBA_PTR_SET_VALUE(codes_, codes) };
    inline GetAddonCodeTemplateResponseBody& setCodes(vector<GetAddonCodeTemplateResponseBody::Codes> && codes) { DARABONBA_PTR_SET_RVALUE(codes_, codes) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAddonCodeTemplateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<GetAddonCodeTemplateResponseBody::Codes>> codes_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
