// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCHATQUESTIONRESPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETCHATQUESTIONRESPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DianJin20240628
{
namespace Models
{
  class GetChatQuestionRespRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetChatQuestionRespRequest& obj) { 
      DARABONBA_PTR_TO_JSON(batchId, batchId_);
      DARABONBA_PTR_TO_JSON(sessionId, sessionId_);
    };
    friend void from_json(const Darabonba::Json& j, GetChatQuestionRespRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(batchId, batchId_);
      DARABONBA_PTR_FROM_JSON(sessionId, sessionId_);
    };
    GetChatQuestionRespRequest() = default ;
    GetChatQuestionRespRequest(const GetChatQuestionRespRequest &) = default ;
    GetChatQuestionRespRequest(GetChatQuestionRespRequest &&) = default ;
    GetChatQuestionRespRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetChatQuestionRespRequest() = default ;
    GetChatQuestionRespRequest& operator=(const GetChatQuestionRespRequest &) = default ;
    GetChatQuestionRespRequest& operator=(GetChatQuestionRespRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->batchId_ != nullptr
        && this->sessionId_ != nullptr; };
    // batchId Field Functions 
    bool hasBatchId() const { return this->batchId_ != nullptr;};
    void deleteBatchId() { this->batchId_ = nullptr;};
    inline string batchId() const { DARABONBA_PTR_GET_DEFAULT(batchId_, "") };
    inline GetChatQuestionRespRequest& setBatchId(string batchId) { DARABONBA_PTR_SET_VALUE(batchId_, batchId) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string sessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline GetChatQuestionRespRequest& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> batchId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> sessionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DianJin20240628
#endif
