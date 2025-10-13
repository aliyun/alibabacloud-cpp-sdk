// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUSPENDJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUSPENDJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class SuspendJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SuspendJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(Suspend, suspend_);
    };
    friend void from_json(const Darabonba::Json& j, SuspendJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(Suspend, suspend_);
    };
    SuspendJobRequest() = default ;
    SuspendJobRequest(const SuspendJobRequest &) = default ;
    SuspendJobRequest(SuspendJobRequest &&) = default ;
    SuspendJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SuspendJobRequest() = default ;
    SuspendJobRequest& operator=(const SuspendJobRequest &) = default ;
    SuspendJobRequest& operator=(SuspendJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->suspend_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline SuspendJobRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // suspend Field Functions 
    bool hasSuspend() const { return this->suspend_ != nullptr;};
    void deleteSuspend() { this->suspend_ = nullptr;};
    inline bool suspend() const { DARABONBA_PTR_GET_DEFAULT(suspend_, false) };
    inline SuspendJobRequest& setSuspend(bool suspend) { DARABONBA_PTR_SET_VALUE(suspend_, suspend) };


  protected:
    // The ID of the job template.
    // 
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    // Start or suspend a job template.
    // 
    // *   true: Start a job template.
    // *   false: Suspend a job template.
    // 
    // This parameter is required.
    std::shared_ptr<bool> suspend_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
