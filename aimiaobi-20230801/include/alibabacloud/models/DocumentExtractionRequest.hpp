// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DOCUMENTEXTRACTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DOCUMENTEXTRACTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class DocumentExtractionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DocumentExtractionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_TO_JSON(Urls, urls_);
    };
    friend void from_json(const Darabonba::Json& j, DocumentExtractionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_FROM_JSON(Urls, urls_);
    };
    DocumentExtractionRequest() = default ;
    DocumentExtractionRequest(const DocumentExtractionRequest &) = default ;
    DocumentExtractionRequest(DocumentExtractionRequest &&) = default ;
    DocumentExtractionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DocumentExtractionRequest() = default ;
    DocumentExtractionRequest& operator=(const DocumentExtractionRequest &) = default ;
    DocumentExtractionRequest& operator=(DocumentExtractionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->agentKey_ != nullptr
        && this->urls_ != nullptr; };
    // agentKey Field Functions 
    bool hasAgentKey() const { return this->agentKey_ != nullptr;};
    void deleteAgentKey() { this->agentKey_ = nullptr;};
    inline string agentKey() const { DARABONBA_PTR_GET_DEFAULT(agentKey_, "") };
    inline DocumentExtractionRequest& setAgentKey(string agentKey) { DARABONBA_PTR_SET_VALUE(agentKey_, agentKey) };


    // urls Field Functions 
    bool hasUrls() const { return this->urls_ != nullptr;};
    void deleteUrls() { this->urls_ = nullptr;};
    inline const vector<string> & urls() const { DARABONBA_PTR_GET_CONST(urls_, vector<string>) };
    inline vector<string> urls() { DARABONBA_PTR_GET(urls_, vector<string>) };
    inline DocumentExtractionRequest& setUrls(const vector<string> & urls) { DARABONBA_PTR_SET_VALUE(urls_, urls) };
    inline DocumentExtractionRequest& setUrls(vector<string> && urls) { DARABONBA_PTR_SET_RVALUE(urls_, urls) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> agentKey_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<string>> urls_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
