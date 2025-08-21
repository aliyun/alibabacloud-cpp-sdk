// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_READMESSAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_READMESSAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ReadMessageRequestUserInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class ReadMessageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ReadMessageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MessageId, messageId_);
      DARABONBA_PTR_TO_JSON(UserInfo, userInfo_);
    };
    friend void from_json(const Darabonba::Json& j, ReadMessageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MessageId, messageId_);
      DARABONBA_PTR_FROM_JSON(UserInfo, userInfo_);
    };
    ReadMessageRequest() = default ;
    ReadMessageRequest(const ReadMessageRequest &) = default ;
    ReadMessageRequest(ReadMessageRequest &&) = default ;
    ReadMessageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ReadMessageRequest() = default ;
    ReadMessageRequest& operator=(const ReadMessageRequest &) = default ;
    ReadMessageRequest& operator=(ReadMessageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->messageId_ != nullptr
        && this->userInfo_ != nullptr; };
    // messageId Field Functions 
    bool hasMessageId() const { return this->messageId_ != nullptr;};
    void deleteMessageId() { this->messageId_ = nullptr;};
    inline int64_t messageId() const { DARABONBA_PTR_GET_DEFAULT(messageId_, 0L) };
    inline ReadMessageRequest& setMessageId(int64_t messageId) { DARABONBA_PTR_SET_VALUE(messageId_, messageId) };


    // userInfo Field Functions 
    bool hasUserInfo() const { return this->userInfo_ != nullptr;};
    void deleteUserInfo() { this->userInfo_ = nullptr;};
    inline const ReadMessageRequestUserInfo & userInfo() const { DARABONBA_PTR_GET_CONST(userInfo_, ReadMessageRequestUserInfo) };
    inline ReadMessageRequestUserInfo userInfo() { DARABONBA_PTR_GET(userInfo_, ReadMessageRequestUserInfo) };
    inline ReadMessageRequest& setUserInfo(const ReadMessageRequestUserInfo & userInfo) { DARABONBA_PTR_SET_VALUE(userInfo_, userInfo) };
    inline ReadMessageRequest& setUserInfo(ReadMessageRequestUserInfo && userInfo) { DARABONBA_PTR_SET_RVALUE(userInfo_, userInfo) };


  protected:
    std::shared_ptr<int64_t> messageId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<ReadMessageRequestUserInfo> userInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
