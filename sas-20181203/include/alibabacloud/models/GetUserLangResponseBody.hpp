// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUSERLANGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETUSERLANGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetUserLangResponseBodySasUserLang.hpp>
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
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->sasUserLang_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetUserLangResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sasUserLang Field Functions 
    bool hasSasUserLang() const { return this->sasUserLang_ != nullptr;};
    void deleteSasUserLang() { this->sasUserLang_ = nullptr;};
    inline const GetUserLangResponseBodySasUserLang & sasUserLang() const { DARABONBA_PTR_GET_CONST(sasUserLang_, GetUserLangResponseBodySasUserLang) };
    inline GetUserLangResponseBodySasUserLang sasUserLang() { DARABONBA_PTR_GET(sasUserLang_, GetUserLangResponseBodySasUserLang) };
    inline GetUserLangResponseBody& setSasUserLang(const GetUserLangResponseBodySasUserLang & sasUserLang) { DARABONBA_PTR_SET_VALUE(sasUserLang_, sasUserLang) };
    inline GetUserLangResponseBody& setSasUserLang(GetUserLangResponseBodySasUserLang && sasUserLang) { DARABONBA_PTR_SET_RVALUE(sasUserLang_, sasUserLang) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The language settings.
    std::shared_ptr<GetUserLangResponseBodySasUserLang> sasUserLang_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
