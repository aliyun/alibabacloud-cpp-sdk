// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUSERLANGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETUSERLANGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetUserLangResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUserLangResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SasUserLang, sasUserLang_);
    };
    friend void from_json(const Darabonba::Json& j, GetUserLangResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SasUserLang, sasUserLang_);
    };
    GetUserLangResponseBody() = default ;
    GetUserLangResponseBody(const GetUserLangResponseBody &) = default ;
    GetUserLangResponseBody(GetUserLangResponseBody &&) = default ;
    GetUserLangResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUserLangResponseBody() = default ;
    GetUserLangResponseBody& operator=(const GetUserLangResponseBody &) = default ;
    GetUserLangResponseBody& operator=(GetUserLangResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SasUserLang : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SasUserLang& obj) { 
        DARABONBA_PTR_TO_JSON(Lang, lang_);
      };
      friend void from_json(const Darabonba::Json& j, SasUserLang& obj) { 
        DARABONBA_PTR_FROM_JSON(Lang, lang_);
      };
      SasUserLang() = default ;
      SasUserLang(const SasUserLang &) = default ;
      SasUserLang(SasUserLang &&) = default ;
      SasUserLang(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SasUserLang() = default ;
      SasUserLang& operator=(const SasUserLang &) = default ;
      SasUserLang& operator=(SasUserLang &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->lang_ == nullptr; };
      // lang Field Functions 
      bool hasLang() const { return this->lang_ != nullptr;};
      void deleteLang() { this->lang_ = nullptr;};
      inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
      inline SasUserLang& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    protected:
      // The language specified for log analysis. Valid values:
      // 
      // *   zh: Chinese
      // *   en: English
      shared_ptr<string> lang_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->sasUserLang_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetUserLangResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sasUserLang Field Functions 
    bool hasSasUserLang() const { return this->sasUserLang_ != nullptr;};
    void deleteSasUserLang() { this->sasUserLang_ = nullptr;};
    inline const GetUserLangResponseBody::SasUserLang & getSasUserLang() const { DARABONBA_PTR_GET_CONST(sasUserLang_, GetUserLangResponseBody::SasUserLang) };
    inline GetUserLangResponseBody::SasUserLang getSasUserLang() { DARABONBA_PTR_GET(sasUserLang_, GetUserLangResponseBody::SasUserLang) };
    inline GetUserLangResponseBody& setSasUserLang(const GetUserLangResponseBody::SasUserLang & sasUserLang) { DARABONBA_PTR_SET_VALUE(sasUserLang_, sasUserLang) };
    inline GetUserLangResponseBody& setSasUserLang(GetUserLangResponseBody::SasUserLang && sasUserLang) { DARABONBA_PTR_SET_RVALUE(sasUserLang_, sasUserLang) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The language settings.
    shared_ptr<GetUserLangResponseBody::SasUserLang> sasUserLang_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
