// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CANCELPUSHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CANCELPUSHREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Push20160801
{
namespace Models
{
  class CancelPushRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CancelPushRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppKey, appKey_);
      DARABONBA_PTR_TO_JSON(MessageId, messageId_);
    };
    friend void from_json(const Darabonba::Json& j, CancelPushRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppKey, appKey_);
      DARABONBA_PTR_FROM_JSON(MessageId, messageId_);
    };
    CancelPushRequest() = default ;
    CancelPushRequest(const CancelPushRequest &) = default ;
    CancelPushRequest(CancelPushRequest &&) = default ;
    CancelPushRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CancelPushRequest() = default ;
    CancelPushRequest& operator=(const CancelPushRequest &) = default ;
    CancelPushRequest& operator=(CancelPushRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appKey_ == nullptr
        && return this->messageId_ == nullptr; };
    // appKey Field Functions 
    bool hasAppKey() const { return this->appKey_ != nullptr;};
    void deleteAppKey() { this->appKey_ = nullptr;};
    inline int64_t appKey() const { DARABONBA_PTR_GET_DEFAULT(appKey_, 0L) };
    inline CancelPushRequest& setAppKey(int64_t appKey) { DARABONBA_PTR_SET_VALUE(appKey_, appKey) };


    // messageId Field Functions 
    bool hasMessageId() const { return this->messageId_ != nullptr;};
    void deleteMessageId() { this->messageId_ = nullptr;};
    inline int64_t messageId() const { DARABONBA_PTR_GET_DEFAULT(messageId_, 0L) };
    inline CancelPushRequest& setMessageId(int64_t messageId) { DARABONBA_PTR_SET_VALUE(messageId_, messageId) };


  protected:
    // This parameter is required.
    std::shared_ptr<int64_t> appKey_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> messageId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Push20160801
#endif
