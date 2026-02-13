// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AISEARCHSTREAMREQUEST_HPP_
#define ALIBABACLOUD_MODELS_AISEARCHSTREAMREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AISearchMessageItem.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EnergyExpertExternal20220923
{
namespace Models
{
  class AISearchStreamRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AISearchStreamRequest& obj) { 
      DARABONBA_PTR_TO_JSON(folderId, folderId_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(question, question_);
      DARABONBA_PTR_TO_JSON(resourceTypeNeeded, resourceTypeNeeded_);
    };
    friend void from_json(const Darabonba::Json& j, AISearchStreamRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(folderId, folderId_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(question, question_);
      DARABONBA_PTR_FROM_JSON(resourceTypeNeeded, resourceTypeNeeded_);
    };
    AISearchStreamRequest() = default ;
    AISearchStreamRequest(const AISearchStreamRequest &) = default ;
    AISearchStreamRequest(AISearchStreamRequest &&) = default ;
    AISearchStreamRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AISearchStreamRequest() = default ;
    AISearchStreamRequest& operator=(const AISearchStreamRequest &) = default ;
    AISearchStreamRequest& operator=(AISearchStreamRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->folderId_ == nullptr
        && this->message_ == nullptr && this->question_ == nullptr && this->resourceTypeNeeded_ == nullptr; };
    // folderId Field Functions 
    bool hasFolderId() const { return this->folderId_ != nullptr;};
    void deleteFolderId() { this->folderId_ = nullptr;};
    inline string getFolderId() const { DARABONBA_PTR_GET_DEFAULT(folderId_, "") };
    inline AISearchStreamRequest& setFolderId(string folderId) { DARABONBA_PTR_SET_VALUE(folderId_, folderId) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline const vector<AISearchMessageItem> & getMessage() const { DARABONBA_PTR_GET_CONST(message_, vector<AISearchMessageItem>) };
    inline vector<AISearchMessageItem> getMessage() { DARABONBA_PTR_GET(message_, vector<AISearchMessageItem>) };
    inline AISearchStreamRequest& setMessage(const vector<AISearchMessageItem> & message) { DARABONBA_PTR_SET_VALUE(message_, message) };
    inline AISearchStreamRequest& setMessage(vector<AISearchMessageItem> && message) { DARABONBA_PTR_SET_RVALUE(message_, message) };


    // question Field Functions 
    bool hasQuestion() const { return this->question_ != nullptr;};
    void deleteQuestion() { this->question_ = nullptr;};
    inline string getQuestion() const { DARABONBA_PTR_GET_DEFAULT(question_, "") };
    inline AISearchStreamRequest& setQuestion(string question) { DARABONBA_PTR_SET_VALUE(question_, question) };


    // resourceTypeNeeded Field Functions 
    bool hasResourceTypeNeeded() const { return this->resourceTypeNeeded_ != nullptr;};
    void deleteResourceTypeNeeded() { this->resourceTypeNeeded_ = nullptr;};
    inline const vector<string> & getResourceTypeNeeded() const { DARABONBA_PTR_GET_CONST(resourceTypeNeeded_, vector<string>) };
    inline vector<string> getResourceTypeNeeded() { DARABONBA_PTR_GET(resourceTypeNeeded_, vector<string>) };
    inline AISearchStreamRequest& setResourceTypeNeeded(const vector<string> & resourceTypeNeeded) { DARABONBA_PTR_SET_VALUE(resourceTypeNeeded_, resourceTypeNeeded) };
    inline AISearchStreamRequest& setResourceTypeNeeded(vector<string> && resourceTypeNeeded) { DARABONBA_PTR_SET_RVALUE(resourceTypeNeeded_, resourceTypeNeeded) };


  protected:
    // This parameter is required.
    shared_ptr<string> folderId_ {};
    shared_ptr<vector<AISearchMessageItem>> message_ {};
    // This parameter is required.
    shared_ptr<string> question_ {};
    shared_ptr<vector<string>> resourceTypeNeeded_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EnergyExpertExternal20220923
#endif
