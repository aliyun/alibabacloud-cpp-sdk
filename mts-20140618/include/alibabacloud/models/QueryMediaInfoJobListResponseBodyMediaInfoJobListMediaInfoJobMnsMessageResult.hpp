// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYMEDIAINFOJOBLISTRESPONSEBODYMEDIAINFOJOBLISTMEDIAINFOJOBMNSMESSAGERESULT_HPP_
#define ALIBABACLOUD_MODELS_QUERYMEDIAINFOJOBLISTRESPONSEBODYMEDIAINFOJOBLISTMEDIAINFOJOBMNSMESSAGERESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class QueryMediaInfoJobListResponseBodyMediaInfoJobListMediaInfoJobMNSMessageResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryMediaInfoJobListResponseBodyMediaInfoJobListMediaInfoJobMNSMessageResult& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(MessageId, messageId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryMediaInfoJobListResponseBodyMediaInfoJobListMediaInfoJobMNSMessageResult& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(MessageId, messageId_);
    };
    QueryMediaInfoJobListResponseBodyMediaInfoJobListMediaInfoJobMNSMessageResult() = default ;
    QueryMediaInfoJobListResponseBodyMediaInfoJobListMediaInfoJobMNSMessageResult(const QueryMediaInfoJobListResponseBodyMediaInfoJobListMediaInfoJobMNSMessageResult &) = default ;
    QueryMediaInfoJobListResponseBodyMediaInfoJobListMediaInfoJobMNSMessageResult(QueryMediaInfoJobListResponseBodyMediaInfoJobListMediaInfoJobMNSMessageResult &&) = default ;
    QueryMediaInfoJobListResponseBodyMediaInfoJobListMediaInfoJobMNSMessageResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryMediaInfoJobListResponseBodyMediaInfoJobListMediaInfoJobMNSMessageResult() = default ;
    QueryMediaInfoJobListResponseBodyMediaInfoJobListMediaInfoJobMNSMessageResult& operator=(const QueryMediaInfoJobListResponseBodyMediaInfoJobListMediaInfoJobMNSMessageResult &) = default ;
    QueryMediaInfoJobListResponseBodyMediaInfoJobListMediaInfoJobMNSMessageResult& operator=(QueryMediaInfoJobListResponseBodyMediaInfoJobListMediaInfoJobMNSMessageResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->errorCode_ == nullptr
        && return this->errorMessage_ == nullptr && return this->messageId_ == nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline QueryMediaInfoJobListResponseBodyMediaInfoJobListMediaInfoJobMNSMessageResult& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline QueryMediaInfoJobListResponseBodyMediaInfoJobListMediaInfoJobMNSMessageResult& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // messageId Field Functions 
    bool hasMessageId() const { return this->messageId_ != nullptr;};
    void deleteMessageId() { this->messageId_ = nullptr;};
    inline string messageId() const { DARABONBA_PTR_GET_DEFAULT(messageId_, "") };
    inline QueryMediaInfoJobListResponseBodyMediaInfoJobListMediaInfoJobMNSMessageResult& setMessageId(string messageId) { DARABONBA_PTR_SET_VALUE(messageId_, messageId) };


  protected:
    // The error code returned if the job failed. This parameter is not returned if the job is successful.
    std::shared_ptr<string> errorCode_ = nullptr;
    // The error message returned if the job failed. This parameter is not returned if the job is successful.
    std::shared_ptr<string> errorMessage_ = nullptr;
    // The ID of the message returned if the job was successful. This parameter is not returned if the job fails.
    std::shared_ptr<string> messageId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
