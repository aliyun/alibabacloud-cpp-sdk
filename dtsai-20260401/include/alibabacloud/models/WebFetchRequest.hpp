// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_WEBFETCHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_WEBFETCHREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DtsAI20260401
{
namespace Models
{
  class WebFetchRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const WebFetchRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentName, agentName_);
      DARABONBA_PTR_TO_JSON(OutputFormat, outputFormat_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Url, url_);
    };
    friend void from_json(const Darabonba::Json& j, WebFetchRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentName, agentName_);
      DARABONBA_PTR_FROM_JSON(OutputFormat, outputFormat_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
    };
    WebFetchRequest() = default ;
    WebFetchRequest(const WebFetchRequest &) = default ;
    WebFetchRequest(WebFetchRequest &&) = default ;
    WebFetchRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~WebFetchRequest() = default ;
    WebFetchRequest& operator=(const WebFetchRequest &) = default ;
    WebFetchRequest& operator=(WebFetchRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentName_ == nullptr
        && this->outputFormat_ == nullptr && this->regionId_ == nullptr && this->url_ == nullptr; };
    // agentName Field Functions 
    bool hasAgentName() const { return this->agentName_ != nullptr;};
    void deleteAgentName() { this->agentName_ = nullptr;};
    inline string getAgentName() const { DARABONBA_PTR_GET_DEFAULT(agentName_, "") };
    inline WebFetchRequest& setAgentName(string agentName) { DARABONBA_PTR_SET_VALUE(agentName_, agentName) };


    // outputFormat Field Functions 
    bool hasOutputFormat() const { return this->outputFormat_ != nullptr;};
    void deleteOutputFormat() { this->outputFormat_ = nullptr;};
    inline string getOutputFormat() const { DARABONBA_PTR_GET_DEFAULT(outputFormat_, "") };
    inline WebFetchRequest& setOutputFormat(string outputFormat) { DARABONBA_PTR_SET_VALUE(outputFormat_, outputFormat) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline WebFetchRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline WebFetchRequest& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    shared_ptr<string> agentName_ {};
    // The output format. Valid values:
    // 
    // - **markdown**: Markdown format.
    // 
    // - **html**: HTML format.
    // 
    // - **text**: Plain text format.
    shared_ptr<string> outputFormat_ {};
    // The region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The URL of the target web page to crawl.
    // 
    // This parameter is required.
    shared_ptr<string> url_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DtsAI20260401
#endif
