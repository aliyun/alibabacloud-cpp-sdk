// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMAGEDETAILREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMAGEDETAILREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WuyingPersonalPc20251111
{
namespace Models
{
  class DescribeImageDetailRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeImageDetailRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApiKey, apiKey_);
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
      DARABONBA_PTR_TO_JSON(ShareCode, shareCode_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeImageDetailRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiKey, apiKey_);
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
      DARABONBA_PTR_FROM_JSON(ShareCode, shareCode_);
    };
    DescribeImageDetailRequest() = default ;
    DescribeImageDetailRequest(const DescribeImageDetailRequest &) = default ;
    DescribeImageDetailRequest(DescribeImageDetailRequest &&) = default ;
    DescribeImageDetailRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeImageDetailRequest() = default ;
    DescribeImageDetailRequest& operator=(const DescribeImageDetailRequest &) = default ;
    DescribeImageDetailRequest& operator=(DescribeImageDetailRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiKey_ == nullptr
        && return this->imageId_ == nullptr && return this->sessionId_ == nullptr && return this->shareCode_ == nullptr; };
    // apiKey Field Functions 
    bool hasApiKey() const { return this->apiKey_ != nullptr;};
    void deleteApiKey() { this->apiKey_ = nullptr;};
    inline string apiKey() const { DARABONBA_PTR_GET_DEFAULT(apiKey_, "") };
    inline DescribeImageDetailRequest& setApiKey(string apiKey) { DARABONBA_PTR_SET_VALUE(apiKey_, apiKey) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string imageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline DescribeImageDetailRequest& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string sessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline DescribeImageDetailRequest& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // shareCode Field Functions 
    bool hasShareCode() const { return this->shareCode_ != nullptr;};
    void deleteShareCode() { this->shareCode_ = nullptr;};
    inline string shareCode() const { DARABONBA_PTR_GET_DEFAULT(shareCode_, "") };
    inline DescribeImageDetailRequest& setShareCode(string shareCode) { DARABONBA_PTR_SET_VALUE(shareCode_, shareCode) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> apiKey_ = nullptr;
    std::shared_ptr<string> imageId_ = nullptr;
    std::shared_ptr<string> sessionId_ = nullptr;
    std::shared_ptr<string> shareCode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WuyingPersonalPc20251111
#endif
