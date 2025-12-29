// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPPLICATIONCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPPLICATIONCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class DescribeApplicationConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApplicationConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(VersionId, versionId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApplicationConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(VersionId, versionId_);
    };
    DescribeApplicationConfigRequest() = default ;
    DescribeApplicationConfigRequest(const DescribeApplicationConfigRequest &) = default ;
    DescribeApplicationConfigRequest(DescribeApplicationConfigRequest &&) = default ;
    DescribeApplicationConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApplicationConfigRequest() = default ;
    DescribeApplicationConfigRequest& operator=(const DescribeApplicationConfigRequest &) = default ;
    DescribeApplicationConfigRequest& operator=(DescribeApplicationConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && this->versionId_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline DescribeApplicationConfigRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // versionId Field Functions 
    bool hasVersionId() const { return this->versionId_ != nullptr;};
    void deleteVersionId() { this->versionId_ = nullptr;};
    inline string getVersionId() const { DARABONBA_PTR_GET_DEFAULT(versionId_, "") };
    inline DescribeApplicationConfigRequest& setVersionId(string versionId) { DARABONBA_PTR_SET_VALUE(versionId_, versionId) };


  protected:
    // The app id.
    // 
    // This parameter is required.
    shared_ptr<string> appId_ {};
    // The version id.
    shared_ptr<string> versionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
