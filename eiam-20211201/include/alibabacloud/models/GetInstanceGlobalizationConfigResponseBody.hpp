// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCEGLOBALIZATIONCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCEGLOBALIZATIONCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class GetInstanceGlobalizationConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstanceGlobalizationConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(GlobalizationConfig, globalizationConfig_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstanceGlobalizationConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(GlobalizationConfig, globalizationConfig_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetInstanceGlobalizationConfigResponseBody() = default ;
    GetInstanceGlobalizationConfigResponseBody(const GetInstanceGlobalizationConfigResponseBody &) = default ;
    GetInstanceGlobalizationConfigResponseBody(GetInstanceGlobalizationConfigResponseBody &&) = default ;
    GetInstanceGlobalizationConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstanceGlobalizationConfigResponseBody() = default ;
    GetInstanceGlobalizationConfigResponseBody& operator=(const GetInstanceGlobalizationConfigResponseBody &) = default ;
    GetInstanceGlobalizationConfigResponseBody& operator=(GetInstanceGlobalizationConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class GlobalizationConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const GlobalizationConfig& obj) { 
        DARABONBA_PTR_TO_JSON(Language, language_);
        DARABONBA_PTR_TO_JSON(TimeZone, timeZone_);
      };
      friend void from_json(const Darabonba::Json& j, GlobalizationConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(Language, language_);
        DARABONBA_PTR_FROM_JSON(TimeZone, timeZone_);
      };
      GlobalizationConfig() = default ;
      GlobalizationConfig(const GlobalizationConfig &) = default ;
      GlobalizationConfig(GlobalizationConfig &&) = default ;
      GlobalizationConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~GlobalizationConfig() = default ;
      GlobalizationConfig& operator=(const GlobalizationConfig &) = default ;
      GlobalizationConfig& operator=(GlobalizationConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->language_ == nullptr
        && this->timeZone_ == nullptr; };
      // language Field Functions 
      bool hasLanguage() const { return this->language_ != nullptr;};
      void deleteLanguage() { this->language_ = nullptr;};
      inline string getLanguage() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
      inline GlobalizationConfig& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


      // timeZone Field Functions 
      bool hasTimeZone() const { return this->timeZone_ != nullptr;};
      void deleteTimeZone() { this->timeZone_ = nullptr;};
      inline string getTimeZone() const { DARABONBA_PTR_GET_DEFAULT(timeZone_, "") };
      inline GlobalizationConfig& setTimeZone(string timeZone) { DARABONBA_PTR_SET_VALUE(timeZone_, timeZone) };


    protected:
      // 语言
      shared_ptr<string> language_ {};
      // 时区
      shared_ptr<string> timeZone_ {};
    };

    virtual bool empty() const override { return this->globalizationConfig_ == nullptr
        && this->requestId_ == nullptr; };
    // globalizationConfig Field Functions 
    bool hasGlobalizationConfig() const { return this->globalizationConfig_ != nullptr;};
    void deleteGlobalizationConfig() { this->globalizationConfig_ = nullptr;};
    inline const GetInstanceGlobalizationConfigResponseBody::GlobalizationConfig & getGlobalizationConfig() const { DARABONBA_PTR_GET_CONST(globalizationConfig_, GetInstanceGlobalizationConfigResponseBody::GlobalizationConfig) };
    inline GetInstanceGlobalizationConfigResponseBody::GlobalizationConfig getGlobalizationConfig() { DARABONBA_PTR_GET(globalizationConfig_, GetInstanceGlobalizationConfigResponseBody::GlobalizationConfig) };
    inline GetInstanceGlobalizationConfigResponseBody& setGlobalizationConfig(const GetInstanceGlobalizationConfigResponseBody::GlobalizationConfig & globalizationConfig) { DARABONBA_PTR_SET_VALUE(globalizationConfig_, globalizationConfig) };
    inline GetInstanceGlobalizationConfigResponseBody& setGlobalizationConfig(GetInstanceGlobalizationConfigResponseBody::GlobalizationConfig && globalizationConfig) { DARABONBA_PTR_SET_RVALUE(globalizationConfig_, globalizationConfig) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetInstanceGlobalizationConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<GetInstanceGlobalizationConfigResponseBody::GlobalizationConfig> globalizationConfig_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
