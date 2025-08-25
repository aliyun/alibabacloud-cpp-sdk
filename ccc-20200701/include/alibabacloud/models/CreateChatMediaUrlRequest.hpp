// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECHATMEDIAURLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECHATMEDIAURLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class CreateChatMediaUrlRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateChatMediaUrlRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(MimeType, mimeType_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateChatMediaUrlRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(MimeType, mimeType_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateChatMediaUrlRequest() = default ;
    CreateChatMediaUrlRequest(const CreateChatMediaUrlRequest &) = default ;
    CreateChatMediaUrlRequest(CreateChatMediaUrlRequest &&) = default ;
    CreateChatMediaUrlRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateChatMediaUrlRequest() = default ;
    CreateChatMediaUrlRequest& operator=(const CreateChatMediaUrlRequest &) = default ;
    CreateChatMediaUrlRequest& operator=(CreateChatMediaUrlRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceId_ != nullptr
        && this->mimeType_ != nullptr && this->requestId_ != nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateChatMediaUrlRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // mimeType Field Functions 
    bool hasMimeType() const { return this->mimeType_ != nullptr;};
    void deleteMimeType() { this->mimeType_ = nullptr;};
    inline string mimeType() const { DARABONBA_PTR_GET_DEFAULT(mimeType_, "") };
    inline CreateChatMediaUrlRequest& setMimeType(string mimeType) { DARABONBA_PTR_SET_VALUE(mimeType_, mimeType) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateChatMediaUrlRequest& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // media id
    // 
    // This parameter is required.
    std::shared_ptr<string> mimeType_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
