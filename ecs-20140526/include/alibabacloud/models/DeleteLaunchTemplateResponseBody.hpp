// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETELAUNCHTEMPLATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DELETELAUNCHTEMPLATERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class LaunchTemplateVersionNumbers : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const LaunchTemplateVersionNumbers& obj) { 
        DARABONBA_PTR_TO_JSON(versionNumbers, versionNumbers_);
      };
      friend void from_json(const Darabonba::Json& j, LaunchTemplateVersionNumbers& obj) { 
        DARABONBA_PTR_FROM_JSON(versionNumbers, versionNumbers_);
      };
      LaunchTemplateVersionNumbers() = default ;
      LaunchTemplateVersionNumbers(const LaunchTemplateVersionNumbers &) = default ;
      LaunchTemplateVersionNumbers(LaunchTemplateVersionNumbers &&) = default ;
      LaunchTemplateVersionNumbers(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~LaunchTemplateVersionNumbers() = default ;
      LaunchTemplateVersionNumbers& operator=(const LaunchTemplateVersionNumbers &) = default ;
      LaunchTemplateVersionNumbers& operator=(LaunchTemplateVersionNumbers &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->versionNumbers_ == nullptr; };
      // versionNumbers Field Functions 
      bool hasVersionNumbers() const { return this->versionNumbers_ != nullptr;};
      void deleteVersionNumbers() { this->versionNumbers_ = nullptr;};
      inline const vector<int64_t> & getVersionNumbers() const { DARABONBA_PTR_GET_CONST(versionNumbers_, vector<int64_t>) };
      inline vector<int64_t> getVersionNumbers() { DARABONBA_PTR_GET(versionNumbers_, vector<int64_t>) };
      inline LaunchTemplateVersionNumbers& setVersionNumbers(const vector<int64_t> & versionNumbers) { DARABONBA_PTR_SET_VALUE(versionNumbers_, versionNumbers) };
      inline LaunchTemplateVersionNumbers& setVersionNumbers(vector<int64_t> && versionNumbers) { DARABONBA_PTR_SET_RVALUE(versionNumbers_, versionNumbers) };


    protected:
      shared_ptr<vector<int64_t>> versionNumbers_ {};
    };

    virtual bool empty() const override { return this->launchTemplateId_ == nullptr
        && this->launchTemplateVersionNumbers_ == nullptr && this->requestId_ == nullptr; };
    // launchTemplateId Field Functions 
    bool hasLaunchTemplateId() const { return this->launchTemplateId_ != nullptr;};
    void deleteLaunchTemplateId() { this->launchTemplateId_ = nullptr;};
    inline string getLaunchTemplateId() const { DARABONBA_PTR_GET_DEFAULT(launchTemplateId_, "") };
    inline DeleteLaunchTemplateResponseBody& setLaunchTemplateId(string launchTemplateId) { DARABONBA_PTR_SET_VALUE(launchTemplateId_, launchTemplateId) };


    // launchTemplateVersionNumbers Field Functions 
    bool hasLaunchTemplateVersionNumbers() const { return this->launchTemplateVersionNumbers_ != nullptr;};
    void deleteLaunchTemplateVersionNumbers() { this->launchTemplateVersionNumbers_ = nullptr;};
    inline const DeleteLaunchTemplateResponseBody::LaunchTemplateVersionNumbers & getLaunchTemplateVersionNumbers() const { DARABONBA_PTR_GET_CONST(launchTemplateVersionNumbers_, DeleteLaunchTemplateResponseBody::LaunchTemplateVersionNumbers) };
    inline DeleteLaunchTemplateResponseBody::LaunchTemplateVersionNumbers getLaunchTemplateVersionNumbers() { DARABONBA_PTR_GET(launchTemplateVersionNumbers_, DeleteLaunchTemplateResponseBody::LaunchTemplateVersionNumbers) };
    inline DeleteLaunchTemplateResponseBody& setLaunchTemplateVersionNumbers(const DeleteLaunchTemplateResponseBody::LaunchTemplateVersionNumbers & launchTemplateVersionNumbers) { DARABONBA_PTR_SET_VALUE(launchTemplateVersionNumbers_, launchTemplateVersionNumbers) };
    inline DeleteLaunchTemplateResponseBody& setLaunchTemplateVersionNumbers(DeleteLaunchTemplateResponseBody::LaunchTemplateVersionNumbers && launchTemplateVersionNumbers) { DARABONBA_PTR_SET_RVALUE(launchTemplateVersionNumbers_, launchTemplateVersionNumbers) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DeleteLaunchTemplateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the launch template. For more information, see [DescribeLaunchTemplates](https://help.aliyun.com/document_detail/73759.html).
    // 
    // You must specify `LaunchTemplateId` or `LaunchTemplateName` to specify a launch template.
    shared_ptr<string> launchTemplateId_ {};
    // The versions of the deleted launch template.
    shared_ptr<DeleteLaunchTemplateResponseBody::LaunchTemplateVersionNumbers> launchTemplateVersionNumbers_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
