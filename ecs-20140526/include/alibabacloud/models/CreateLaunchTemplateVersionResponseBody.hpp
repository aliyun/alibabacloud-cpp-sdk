// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATELAUNCHTEMPLATEVERSIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATELAUNCHTEMPLATEVERSIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class CreateLaunchTemplateVersionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateLaunchTemplateVersionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(LaunchTemplateId, launchTemplateId_);
      DARABONBA_PTR_TO_JSON(LaunchTemplateVersionNumber, launchTemplateVersionNumber_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateLaunchTemplateVersionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(LaunchTemplateId, launchTemplateId_);
      DARABONBA_PTR_FROM_JSON(LaunchTemplateVersionNumber, launchTemplateVersionNumber_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateLaunchTemplateVersionResponseBody() = default ;
    CreateLaunchTemplateVersionResponseBody(const CreateLaunchTemplateVersionResponseBody &) = default ;
    CreateLaunchTemplateVersionResponseBody(CreateLaunchTemplateVersionResponseBody &&) = default ;
    CreateLaunchTemplateVersionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateLaunchTemplateVersionResponseBody() = default ;
    CreateLaunchTemplateVersionResponseBody& operator=(const CreateLaunchTemplateVersionResponseBody &) = default ;
    CreateLaunchTemplateVersionResponseBody& operator=(CreateLaunchTemplateVersionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->launchTemplateId_ == nullptr
        && return this->launchTemplateVersionNumber_ == nullptr && return this->requestId_ == nullptr; };
    // launchTemplateId Field Functions 
    bool hasLaunchTemplateId() const { return this->launchTemplateId_ != nullptr;};
    void deleteLaunchTemplateId() { this->launchTemplateId_ = nullptr;};
    inline string launchTemplateId() const { DARABONBA_PTR_GET_DEFAULT(launchTemplateId_, "") };
    inline CreateLaunchTemplateVersionResponseBody& setLaunchTemplateId(string launchTemplateId) { DARABONBA_PTR_SET_VALUE(launchTemplateId_, launchTemplateId) };


    // launchTemplateVersionNumber Field Functions 
    bool hasLaunchTemplateVersionNumber() const { return this->launchTemplateVersionNumber_ != nullptr;};
    void deleteLaunchTemplateVersionNumber() { this->launchTemplateVersionNumber_ = nullptr;};
    inline int64_t launchTemplateVersionNumber() const { DARABONBA_PTR_GET_DEFAULT(launchTemplateVersionNumber_, 0L) };
    inline CreateLaunchTemplateVersionResponseBody& setLaunchTemplateVersionNumber(int64_t launchTemplateVersionNumber) { DARABONBA_PTR_SET_VALUE(launchTemplateVersionNumber_, launchTemplateVersionNumber) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateLaunchTemplateVersionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the launch template. For more information, see [DescribeLaunchTemplates](https://help.aliyun.com/document_detail/73759.html).
    // 
    // You must specify `LaunchTemplateId` or `LaunchTemplateName` to specify a launch template.
    std::shared_ptr<string> launchTemplateId_ = nullptr;
    // The number of the created version of the launch template.
    std::shared_ptr<int64_t> launchTemplateVersionNumber_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
