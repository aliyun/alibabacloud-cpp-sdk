// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKFILEDEPLOYMENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHECKFILEDEPLOYMENTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class CheckFileDeploymentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckFileDeploymentRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CheckDetailUrl, checkDetailUrl_);
      DARABONBA_PTR_TO_JSON(CheckerInstanceId, checkerInstanceId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, CheckFileDeploymentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckDetailUrl, checkDetailUrl_);
      DARABONBA_PTR_FROM_JSON(CheckerInstanceId, checkerInstanceId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    CheckFileDeploymentRequest() = default ;
    CheckFileDeploymentRequest(const CheckFileDeploymentRequest &) = default ;
    CheckFileDeploymentRequest(CheckFileDeploymentRequest &&) = default ;
    CheckFileDeploymentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckFileDeploymentRequest() = default ;
    CheckFileDeploymentRequest& operator=(const CheckFileDeploymentRequest &) = default ;
    CheckFileDeploymentRequest& operator=(CheckFileDeploymentRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->checkDetailUrl_ != nullptr
        && this->checkerInstanceId_ != nullptr && this->status_ != nullptr; };
    // checkDetailUrl Field Functions 
    bool hasCheckDetailUrl() const { return this->checkDetailUrl_ != nullptr;};
    void deleteCheckDetailUrl() { this->checkDetailUrl_ = nullptr;};
    inline string checkDetailUrl() const { DARABONBA_PTR_GET_DEFAULT(checkDetailUrl_, "") };
    inline CheckFileDeploymentRequest& setCheckDetailUrl(string checkDetailUrl) { DARABONBA_PTR_SET_VALUE(checkDetailUrl_, checkDetailUrl) };


    // checkerInstanceId Field Functions 
    bool hasCheckerInstanceId() const { return this->checkerInstanceId_ != nullptr;};
    void deleteCheckerInstanceId() { this->checkerInstanceId_ = nullptr;};
    inline string checkerInstanceId() const { DARABONBA_PTR_GET_DEFAULT(checkerInstanceId_, "") };
    inline CheckFileDeploymentRequest& setCheckerInstanceId(string checkerInstanceId) { DARABONBA_PTR_SET_VALUE(checkerInstanceId_, checkerInstanceId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline CheckFileDeploymentRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // This parameter is deprecated.
    std::shared_ptr<string> checkDetailUrl_ = nullptr;
    // The ID of the instance to which the file checker belongs. You can obtain the ID from the CheckerInstanceId parameter in the check event logs returned by DataWorks.
    // 
    // This parameter is required.
    std::shared_ptr<string> checkerInstanceId_ = nullptr;
    // The check status of the file that you want to deploy. Valid values:
    // 
    // *   OK: The file passes the check.
    // *   WARN: The file passes the check, but an alert is reported.
    // *   FAIL: The file fails the check.
    // 
    // This parameter is required.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
