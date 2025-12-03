// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class CreateAppResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAppResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TagStatus, tagStatus_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAppResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TagStatus, tagStatus_);
    };
    CreateAppResponseBody() = default ;
    CreateAppResponseBody(const CreateAppResponseBody &) = default ;
    CreateAppResponseBody(CreateAppResponseBody &&) = default ;
    CreateAppResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAppResponseBody() = default ;
    CreateAppResponseBody& operator=(const CreateAppResponseBody &) = default ;
    CreateAppResponseBody& operator=(CreateAppResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->requestId_ == nullptr && return this->tagStatus_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline int64_t appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, 0L) };
    inline CreateAppResponseBody& setAppId(int64_t appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateAppResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // tagStatus Field Functions 
    bool hasTagStatus() const { return this->tagStatus_ != nullptr;};
    void deleteTagStatus() { this->tagStatus_ = nullptr;};
    inline bool tagStatus() const { DARABONBA_PTR_GET_DEFAULT(tagStatus_, false) };
    inline CreateAppResponseBody& setTagStatus(bool tagStatus) { DARABONBA_PTR_SET_VALUE(tagStatus_, tagStatus) };


  protected:
    // The unique ID of the application.
    std::shared_ptr<int64_t> appId_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the tag exists. If the value is **true**, the tag exists. If the value is **false**, the tag does not exist.
    std::shared_ptr<bool> tagStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
