// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXPORTAPPLICATIONCONFIGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_EXPORTAPPLICATIONCONFIGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class ExportApplicationConfigsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExportApplicationConfigsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationConfigs, applicationConfigs_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ExportApplicationConfigsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationConfigs, applicationConfigs_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ExportApplicationConfigsResponseBody() = default ;
    ExportApplicationConfigsResponseBody(const ExportApplicationConfigsResponseBody &) = default ;
    ExportApplicationConfigsResponseBody(ExportApplicationConfigsResponseBody &&) = default ;
    ExportApplicationConfigsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExportApplicationConfigsResponseBody() = default ;
    ExportApplicationConfigsResponseBody& operator=(const ExportApplicationConfigsResponseBody &) = default ;
    ExportApplicationConfigsResponseBody& operator=(ExportApplicationConfigsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ApplicationConfigs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ApplicationConfigs& obj) { 
        DARABONBA_PTR_TO_JSON(ApplicationName, applicationName_);
        DARABONBA_PTR_TO_JSON(ConfigFileName, configFileName_);
        DARABONBA_PTR_TO_JSON(Content, content_);
      };
      friend void from_json(const Darabonba::Json& j, ApplicationConfigs& obj) { 
        DARABONBA_PTR_FROM_JSON(ApplicationName, applicationName_);
        DARABONBA_PTR_FROM_JSON(ConfigFileName, configFileName_);
        DARABONBA_PTR_FROM_JSON(Content, content_);
      };
      ApplicationConfigs() = default ;
      ApplicationConfigs(const ApplicationConfigs &) = default ;
      ApplicationConfigs(ApplicationConfigs &&) = default ;
      ApplicationConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ApplicationConfigs() = default ;
      ApplicationConfigs& operator=(const ApplicationConfigs &) = default ;
      ApplicationConfigs& operator=(ApplicationConfigs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->applicationName_ == nullptr
        && this->configFileName_ == nullptr && this->content_ == nullptr; };
      // applicationName Field Functions 
      bool hasApplicationName() const { return this->applicationName_ != nullptr;};
      void deleteApplicationName() { this->applicationName_ = nullptr;};
      inline string getApplicationName() const { DARABONBA_PTR_GET_DEFAULT(applicationName_, "") };
      inline ApplicationConfigs& setApplicationName(string applicationName) { DARABONBA_PTR_SET_VALUE(applicationName_, applicationName) };


      // configFileName Field Functions 
      bool hasConfigFileName() const { return this->configFileName_ != nullptr;};
      void deleteConfigFileName() { this->configFileName_ = nullptr;};
      inline string getConfigFileName() const { DARABONBA_PTR_GET_DEFAULT(configFileName_, "") };
      inline ApplicationConfigs& setConfigFileName(string configFileName) { DARABONBA_PTR_SET_VALUE(configFileName_, configFileName) };


      // content Field Functions 
      bool hasContent() const { return this->content_ != nullptr;};
      void deleteContent() { this->content_ = nullptr;};
      inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
      inline ApplicationConfigs& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    protected:
      // The application name.
      shared_ptr<string> applicationName_ {};
      // The file name.
      shared_ptr<string> configFileName_ {};
      // The file content. The content is Base64-encoded.
      shared_ptr<string> content_ {};
    };

    virtual bool empty() const override { return this->applicationConfigs_ == nullptr
        && this->requestId_ == nullptr; };
    // applicationConfigs Field Functions 
    bool hasApplicationConfigs() const { return this->applicationConfigs_ != nullptr;};
    void deleteApplicationConfigs() { this->applicationConfigs_ = nullptr;};
    inline const vector<ExportApplicationConfigsResponseBody::ApplicationConfigs> & getApplicationConfigs() const { DARABONBA_PTR_GET_CONST(applicationConfigs_, vector<ExportApplicationConfigsResponseBody::ApplicationConfigs>) };
    inline vector<ExportApplicationConfigsResponseBody::ApplicationConfigs> getApplicationConfigs() { DARABONBA_PTR_GET(applicationConfigs_, vector<ExportApplicationConfigsResponseBody::ApplicationConfigs>) };
    inline ExportApplicationConfigsResponseBody& setApplicationConfigs(const vector<ExportApplicationConfigsResponseBody::ApplicationConfigs> & applicationConfigs) { DARABONBA_PTR_SET_VALUE(applicationConfigs_, applicationConfigs) };
    inline ExportApplicationConfigsResponseBody& setApplicationConfigs(vector<ExportApplicationConfigsResponseBody::ApplicationConfigs> && applicationConfigs) { DARABONBA_PTR_SET_RVALUE(applicationConfigs_, applicationConfigs) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ExportApplicationConfigsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The list of exported application configurations.
    shared_ptr<vector<ExportApplicationConfigsResponseBody::ApplicationConfigs>> applicationConfigs_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
