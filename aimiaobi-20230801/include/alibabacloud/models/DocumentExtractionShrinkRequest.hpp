// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DOCUMENTEXTRACTIONSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DOCUMENTEXTRACTIONSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class DocumentExtractionShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DocumentExtractionShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_TO_JSON(Urls, urlsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, DocumentExtractionShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_FROM_JSON(Urls, urlsShrink_);
    };
    DocumentExtractionShrinkRequest() = default ;
    DocumentExtractionShrinkRequest(const DocumentExtractionShrinkRequest &) = default ;
    DocumentExtractionShrinkRequest(DocumentExtractionShrinkRequest &&) = default ;
    DocumentExtractionShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DocumentExtractionShrinkRequest() = default ;
    DocumentExtractionShrinkRequest& operator=(const DocumentExtractionShrinkRequest &) = default ;
    DocumentExtractionShrinkRequest& operator=(DocumentExtractionShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentKey_ == nullptr
        && this->urlsShrink_ == nullptr; };
    // agentKey Field Functions 
    bool hasAgentKey() const { return this->agentKey_ != nullptr;};
    void deleteAgentKey() { this->agentKey_ = nullptr;};
    inline string getAgentKey() const { DARABONBA_PTR_GET_DEFAULT(agentKey_, "") };
    inline DocumentExtractionShrinkRequest& setAgentKey(string agentKey) { DARABONBA_PTR_SET_VALUE(agentKey_, agentKey) };


    // urlsShrink Field Functions 
    bool hasUrlsShrink() const { return this->urlsShrink_ != nullptr;};
    void deleteUrlsShrink() { this->urlsShrink_ = nullptr;};
    inline string getUrlsShrink() const { DARABONBA_PTR_GET_DEFAULT(urlsShrink_, "") };
    inline DocumentExtractionShrinkRequest& setUrlsShrink(string urlsShrink) { DARABONBA_PTR_SET_VALUE(urlsShrink_, urlsShrink) };


  protected:
    // This parameter is required.
    shared_ptr<string> agentKey_ {};
    // This parameter is required.
    shared_ptr<string> urlsShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
