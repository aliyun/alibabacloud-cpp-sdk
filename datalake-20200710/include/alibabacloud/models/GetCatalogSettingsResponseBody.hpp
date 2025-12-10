// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCATALOGSETTINGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCATALOGSETTINGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CatalogSettings.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataLake20200710
{
namespace Models
{
  class GetCatalogSettingsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCatalogSettingsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CatalogSettings, catalogSettings_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetCatalogSettingsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CatalogSettings, catalogSettings_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetCatalogSettingsResponseBody() = default ;
    GetCatalogSettingsResponseBody(const GetCatalogSettingsResponseBody &) = default ;
    GetCatalogSettingsResponseBody(GetCatalogSettingsResponseBody &&) = default ;
    GetCatalogSettingsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCatalogSettingsResponseBody() = default ;
    GetCatalogSettingsResponseBody& operator=(const GetCatalogSettingsResponseBody &) = default ;
    GetCatalogSettingsResponseBody& operator=(GetCatalogSettingsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->catalogSettings_ == nullptr
        && return this->code_ == nullptr && return this->message_ == nullptr && return this->requestId_ == nullptr && return this->success_ == nullptr; };
    // catalogSettings Field Functions 
    bool hasCatalogSettings() const { return this->catalogSettings_ != nullptr;};
    void deleteCatalogSettings() { this->catalogSettings_ = nullptr;};
    inline const CatalogSettings & catalogSettings() const { DARABONBA_PTR_GET_CONST(catalogSettings_, CatalogSettings) };
    inline CatalogSettings catalogSettings() { DARABONBA_PTR_GET(catalogSettings_, CatalogSettings) };
    inline GetCatalogSettingsResponseBody& setCatalogSettings(const CatalogSettings & catalogSettings) { DARABONBA_PTR_SET_VALUE(catalogSettings_, catalogSettings) };
    inline GetCatalogSettingsResponseBody& setCatalogSettings(CatalogSettings && catalogSettings) { DARABONBA_PTR_SET_RVALUE(catalogSettings_, catalogSettings) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetCatalogSettingsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetCatalogSettingsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetCatalogSettingsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetCatalogSettingsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The data lake configurations.
    std::shared_ptr<CatalogSettings> catalogSettings_ = nullptr;
    // The response code.
    std::shared_ptr<string> code_ = nullptr;
    // The response message.
    std::shared_ptr<string> message_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request was successful. Valid values: Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataLake20200710
#endif
