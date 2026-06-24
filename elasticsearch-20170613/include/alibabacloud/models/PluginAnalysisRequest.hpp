// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PLUGINANALYSISREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PLUGINANALYSISREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class PluginAnalysisRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PluginAnalysisRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
      DARABONBA_PTR_TO_JSON(dryRun, dryRun_);
    };
    friend void from_json(const Darabonba::Json& j, PluginAnalysisRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
      DARABONBA_PTR_FROM_JSON(dryRun, dryRun_);
    };
    PluginAnalysisRequest() = default ;
    PluginAnalysisRequest(const PluginAnalysisRequest &) = default ;
    PluginAnalysisRequest(PluginAnalysisRequest &&) = default ;
    PluginAnalysisRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PluginAnalysisRequest() = default ;
    PluginAnalysisRequest& operator=(const PluginAnalysisRequest &) = default ;
    PluginAnalysisRequest& operator=(PluginAnalysisRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr
        && this->dryRun_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline string getBody() const { DARABONBA_PTR_GET_DEFAULT(body_, "") };
    inline PluginAnalysisRequest& setBody(string body) { DARABONBA_PTR_SET_VALUE(body_, body) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline string getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, "") };
    inline PluginAnalysisRequest& setDryRun(string dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


  protected:
    // Request body parameters  
    // 
    // ```json
    shared_ptr<string> body_ {};
    // Whether to perform pre-upgrade validation:  
    // 
    // - true: Validate only  
    // - false: Upload directly
    shared_ptr<string> dryRun_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
