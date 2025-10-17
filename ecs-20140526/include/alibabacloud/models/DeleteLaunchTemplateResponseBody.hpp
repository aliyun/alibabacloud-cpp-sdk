// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETELAUNCHTEMPLATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DELETELAUNCHTEMPLATERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DeleteLaunchTemplateResponseBodyLaunchTemplateVersionNumbers.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DeleteLaunchTemplateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteLaunchTemplateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(LaunchTemplateId, launchTemplateId_);
      DARABONBA_PTR_TO_JSON(LaunchTemplateVersionNumbers, launchTemplateVersionNumbers_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteLaunchTemplateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(LaunchTemplateId, launchTemplateId_);
      DARABONBA_PTR_FROM_JSON(LaunchTemplateVersionNumbers, launchTemplateVersionNumbers_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DeleteLaunchTemplateResponseBody() = default ;
    DeleteLaunchTemplateResponseBody(const DeleteLaunchTemplateResponseBody &) = default ;
    DeleteLaunchTemplateResponseBody(DeleteLaunchTemplateResponseBody &&) = default ;
    DeleteLaunchTemplateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteLaunchTemplateResponseBody() = default ;
    DeleteLaunchTemplateResponseBody& operator=(const DeleteLaunchTemplateResponseBody &) = default ;
    DeleteLaunchTemplateResponseBody& operator=(DeleteLaunchTemplateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->launchTemplateId_ == nullptr
        && return this->launchTemplateVersionNumbers_ == nullptr && return this->requestId_ == nullptr; };
    // launchTemplateId Field Functions 
    bool hasLaunchTemplateId() const { return this->launchTemplateId_ != nullptr;};
    void deleteLaunchTemplateId() { this->launchTemplateId_ = nullptr;};
    inline string launchTemplateId() const { DARABONBA_PTR_GET_DEFAULT(launchTemplateId_, "") };
    inline DeleteLaunchTemplateResponseBody& setLaunchTemplateId(string launchTemplateId) { DARABONBA_PTR_SET_VALUE(launchTemplateId_, launchTemplateId) };


    // launchTemplateVersionNumbers Field Functions 
    bool hasLaunchTemplateVersionNumbers() const { return this->launchTemplateVersionNumbers_ != nullptr;};
    void deleteLaunchTemplateVersionNumbers() { this->launchTemplateVersionNumbers_ = nullptr;};
    inline const DeleteLaunchTemplateResponseBodyLaunchTemplateVersionNumbers & launchTemplateVersionNumbers() const { DARABONBA_PTR_GET_CONST(launchTemplateVersionNumbers_, DeleteLaunchTemplateResponseBodyLaunchTemplateVersionNumbers) };
    inline DeleteLaunchTemplateResponseBodyLaunchTemplateVersionNumbers launchTemplateVersionNumbers() { DARABONBA_PTR_GET(launchTemplateVersionNumbers_, DeleteLaunchTemplateResponseBodyLaunchTemplateVersionNumbers) };
    inline DeleteLaunchTemplateResponseBody& setLaunchTemplateVersionNumbers(const DeleteLaunchTemplateResponseBodyLaunchTemplateVersionNumbers & launchTemplateVersionNumbers) { DARABONBA_PTR_SET_VALUE(launchTemplateVersionNumbers_, launchTemplateVersionNumbers) };
    inline DeleteLaunchTemplateResponseBody& setLaunchTemplateVersionNumbers(DeleteLaunchTemplateResponseBodyLaunchTemplateVersionNumbers && launchTemplateVersionNumbers) { DARABONBA_PTR_SET_RVALUE(launchTemplateVersionNumbers_, launchTemplateVersionNumbers) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DeleteLaunchTemplateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the launch template. For more information, see [DescribeLaunchTemplates](https://help.aliyun.com/document_detail/73759.html).
    // 
    // You must specify `LaunchTemplateId` or `LaunchTemplateName` to specify a launch template.
    std::shared_ptr<string> launchTemplateId_ = nullptr;
    // The versions of the deleted launch template.
    std::shared_ptr<DeleteLaunchTemplateResponseBodyLaunchTemplateVersionNumbers> launchTemplateVersionNumbers_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
