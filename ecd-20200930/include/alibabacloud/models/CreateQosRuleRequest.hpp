// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEQOSRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEQOSRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class CreateQosRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateQosRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AuthAndroidId, authAndroidId_);
      DARABONBA_PTR_TO_JSON(AuthDesktopId, authDesktopId_);
      DARABONBA_PTR_TO_JSON(Download, download_);
      DARABONBA_PTR_TO_JSON(NetworkPackageId, networkPackageId_);
      DARABONBA_PTR_TO_JSON(QosRuleName, qosRuleName_);
      DARABONBA_PTR_TO_JSON(Upload, upload_);
    };
    friend void from_json(const Darabonba::Json& j, CreateQosRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthAndroidId, authAndroidId_);
      DARABONBA_PTR_FROM_JSON(AuthDesktopId, authDesktopId_);
      DARABONBA_PTR_FROM_JSON(Download, download_);
      DARABONBA_PTR_FROM_JSON(NetworkPackageId, networkPackageId_);
      DARABONBA_PTR_FROM_JSON(QosRuleName, qosRuleName_);
      DARABONBA_PTR_FROM_JSON(Upload, upload_);
    };
    CreateQosRuleRequest() = default ;
    CreateQosRuleRequest(const CreateQosRuleRequest &) = default ;
    CreateQosRuleRequest(CreateQosRuleRequest &&) = default ;
    CreateQosRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateQosRuleRequest() = default ;
    CreateQosRuleRequest& operator=(const CreateQosRuleRequest &) = default ;
    CreateQosRuleRequest& operator=(CreateQosRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authAndroidId_ == nullptr
        && this->authDesktopId_ == nullptr && this->download_ == nullptr && this->networkPackageId_ == nullptr && this->qosRuleName_ == nullptr && this->upload_ == nullptr; };
    // authAndroidId Field Functions 
    bool hasAuthAndroidId() const { return this->authAndroidId_ != nullptr;};
    void deleteAuthAndroidId() { this->authAndroidId_ = nullptr;};
    inline const vector<string> & getAuthAndroidId() const { DARABONBA_PTR_GET_CONST(authAndroidId_, vector<string>) };
    inline vector<string> getAuthAndroidId() { DARABONBA_PTR_GET(authAndroidId_, vector<string>) };
    inline CreateQosRuleRequest& setAuthAndroidId(const vector<string> & authAndroidId) { DARABONBA_PTR_SET_VALUE(authAndroidId_, authAndroidId) };
    inline CreateQosRuleRequest& setAuthAndroidId(vector<string> && authAndroidId) { DARABONBA_PTR_SET_RVALUE(authAndroidId_, authAndroidId) };


    // authDesktopId Field Functions 
    bool hasAuthDesktopId() const { return this->authDesktopId_ != nullptr;};
    void deleteAuthDesktopId() { this->authDesktopId_ = nullptr;};
    inline const vector<string> & getAuthDesktopId() const { DARABONBA_PTR_GET_CONST(authDesktopId_, vector<string>) };
    inline vector<string> getAuthDesktopId() { DARABONBA_PTR_GET(authDesktopId_, vector<string>) };
    inline CreateQosRuleRequest& setAuthDesktopId(const vector<string> & authDesktopId) { DARABONBA_PTR_SET_VALUE(authDesktopId_, authDesktopId) };
    inline CreateQosRuleRequest& setAuthDesktopId(vector<string> && authDesktopId) { DARABONBA_PTR_SET_RVALUE(authDesktopId_, authDesktopId) };


    // download Field Functions 
    bool hasDownload() const { return this->download_ != nullptr;};
    void deleteDownload() { this->download_ = nullptr;};
    inline int32_t getDownload() const { DARABONBA_PTR_GET_DEFAULT(download_, 0) };
    inline CreateQosRuleRequest& setDownload(int32_t download) { DARABONBA_PTR_SET_VALUE(download_, download) };


    // networkPackageId Field Functions 
    bool hasNetworkPackageId() const { return this->networkPackageId_ != nullptr;};
    void deleteNetworkPackageId() { this->networkPackageId_ = nullptr;};
    inline string getNetworkPackageId() const { DARABONBA_PTR_GET_DEFAULT(networkPackageId_, "") };
    inline CreateQosRuleRequest& setNetworkPackageId(string networkPackageId) { DARABONBA_PTR_SET_VALUE(networkPackageId_, networkPackageId) };


    // qosRuleName Field Functions 
    bool hasQosRuleName() const { return this->qosRuleName_ != nullptr;};
    void deleteQosRuleName() { this->qosRuleName_ = nullptr;};
    inline string getQosRuleName() const { DARABONBA_PTR_GET_DEFAULT(qosRuleName_, "") };
    inline CreateQosRuleRequest& setQosRuleName(string qosRuleName) { DARABONBA_PTR_SET_VALUE(qosRuleName_, qosRuleName) };


    // upload Field Functions 
    bool hasUpload() const { return this->upload_ != nullptr;};
    void deleteUpload() { this->upload_ = nullptr;};
    inline int32_t getUpload() const { DARABONBA_PTR_GET_DEFAULT(upload_, 0) };
    inline CreateQosRuleRequest& setUpload(int32_t upload) { DARABONBA_PTR_SET_VALUE(upload_, upload) };


  protected:
    shared_ptr<vector<string>> authAndroidId_ {};
    shared_ptr<vector<string>> authDesktopId_ {};
    // This parameter is required.
    shared_ptr<int32_t> download_ {};
    // This parameter is required.
    shared_ptr<string> networkPackageId_ {};
    // This parameter is required.
    shared_ptr<string> qosRuleName_ {};
    // This parameter is required.
    shared_ptr<int32_t> upload_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
