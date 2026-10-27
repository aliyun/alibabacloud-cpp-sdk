// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAGENTCODEPACKAGEUPLOADURLSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETAGENTCODEPACKAGEUPLOADURLSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentCore20260804
{
namespace Models
{
  class GetAgentCodePackageUploadUrlShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAgentCodePackageUploadUrlShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, bodyShrink_);
    };
    friend void from_json(const Darabonba::Json& j, GetAgentCodePackageUploadUrlShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, bodyShrink_);
    };
    GetAgentCodePackageUploadUrlShrinkRequest() = default ;
    GetAgentCodePackageUploadUrlShrinkRequest(const GetAgentCodePackageUploadUrlShrinkRequest &) = default ;
    GetAgentCodePackageUploadUrlShrinkRequest(GetAgentCodePackageUploadUrlShrinkRequest &&) = default ;
    GetAgentCodePackageUploadUrlShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAgentCodePackageUploadUrlShrinkRequest() = default ;
    GetAgentCodePackageUploadUrlShrinkRequest& operator=(const GetAgentCodePackageUploadUrlShrinkRequest &) = default ;
    GetAgentCodePackageUploadUrlShrinkRequest& operator=(GetAgentCodePackageUploadUrlShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bodyShrink_ == nullptr; };
    // bodyShrink Field Functions 
    bool hasBodyShrink() const { return this->bodyShrink_ != nullptr;};
    void deleteBodyShrink() { this->bodyShrink_ = nullptr;};
    inline string getBodyShrink() const { DARABONBA_PTR_GET_DEFAULT(bodyShrink_, "") };
    inline GetAgentCodePackageUploadUrlShrinkRequest& setBodyShrink(string bodyShrink) { DARABONBA_PTR_SET_VALUE(bodyShrink_, bodyShrink) };


  protected:
    // The request body.
    // 
    // This parameter is required.
    shared_ptr<string> bodyShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentCore20260804
#endif
