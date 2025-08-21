// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COMPLETECONTINUOUSLYPUSHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_COMPLETECONTINUOUSLYPUSHREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Push20160801
{
namespace Models
{
  class CompleteContinuouslyPushRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CompleteContinuouslyPushRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppKey, appKey_);
      DARABONBA_PTR_TO_JSON(MessageId, messageId_);
    };
    friend void from_json(const Darabonba::Json& j, CompleteContinuouslyPushRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppKey, appKey_);
      DARABONBA_PTR_FROM_JSON(MessageId, messageId_);
    };
    CompleteContinuouslyPushRequest() = default ;
    CompleteContinuouslyPushRequest(const CompleteContinuouslyPushRequest &) = default ;
    CompleteContinuouslyPushRequest(CompleteContinuouslyPushRequest &&) = default ;
    CompleteContinuouslyPushRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CompleteContinuouslyPushRequest() = default ;
    CompleteContinuouslyPushRequest& operator=(const CompleteContinuouslyPushRequest &) = default ;
    CompleteContinuouslyPushRequest& operator=(CompleteContinuouslyPushRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appKey_ != nullptr
        && this->messageId_ != nullptr; };
    // appKey Field Functions 
    bool hasAppKey() const { return this->appKey_ != nullptr;};
    void deleteAppKey() { this->appKey_ = nullptr;};
    inline int64_t appKey() const { DARABONBA_PTR_GET_DEFAULT(appKey_, 0L) };
    inline CompleteContinuouslyPushRequest& setAppKey(int64_t appKey) { DARABONBA_PTR_SET_VALUE(appKey_, appKey) };


    // messageId Field Functions 
    bool hasMessageId() const { return this->messageId_ != nullptr;};
    void deleteMessageId() { this->messageId_ = nullptr;};
    inline string messageId() const { DARABONBA_PTR_GET_DEFAULT(messageId_, "") };
    inline CompleteContinuouslyPushRequest& setMessageId(string messageId) { DARABONBA_PTR_SET_VALUE(messageId_, messageId) };


  protected:
    // This parameter is required.
    std::shared_ptr<int64_t> appKey_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> messageId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Push20160801
#endif
