// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHDEPLOYAPISREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHDEPLOYAPISREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class BatchDeployApisRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchDeployApisRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Api, api_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_TO_JSON(StageName, stageName_);
    };
    friend void from_json(const Darabonba::Json& j, BatchDeployApisRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Api, api_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_FROM_JSON(StageName, stageName_);
    };
    BatchDeployApisRequest() = default ;
    BatchDeployApisRequest(const BatchDeployApisRequest &) = default ;
    BatchDeployApisRequest(BatchDeployApisRequest &&) = default ;
    BatchDeployApisRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchDeployApisRequest() = default ;
    BatchDeployApisRequest& operator=(const BatchDeployApisRequest &) = default ;
    BatchDeployApisRequest& operator=(BatchDeployApisRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Api : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Api& obj) { 
        DARABONBA_PTR_TO_JSON(ApiUid, apiUid_);
        DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      };
      friend void from_json(const Darabonba::Json& j, Api& obj) { 
        DARABONBA_PTR_FROM_JSON(ApiUid, apiUid_);
        DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      };
      Api() = default ;
      Api(const Api &) = default ;
      Api(Api &&) = default ;
      Api(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Api() = default ;
      Api& operator=(const Api &) = default ;
      Api& operator=(Api &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->apiUid_ == nullptr
        && this->groupId_ == nullptr; };
      // apiUid Field Functions 
      bool hasApiUid() const { return this->apiUid_ != nullptr;};
      void deleteApiUid() { this->apiUid_ = nullptr;};
      inline string getApiUid() const { DARABONBA_PTR_GET_DEFAULT(apiUid_, "") };
      inline Api& setApiUid(string apiUid) { DARABONBA_PTR_SET_VALUE(apiUid_, apiUid) };


      // groupId Field Functions 
      bool hasGroupId() const { return this->groupId_ != nullptr;};
      void deleteGroupId() { this->groupId_ = nullptr;};
      inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
      inline Api& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    protected:
      // The API ID.
      // 
      // This parameter is required.
      shared_ptr<string> apiUid_ {};
      // The API group ID.
      // 
      // This parameter is required.
      shared_ptr<string> groupId_ {};
    };

    virtual bool empty() const override { return this->api_ == nullptr
        && this->description_ == nullptr && this->securityToken_ == nullptr && this->stageName_ == nullptr; };
    // api Field Functions 
    bool hasApi() const { return this->api_ != nullptr;};
    void deleteApi() { this->api_ = nullptr;};
    inline const vector<BatchDeployApisRequest::Api> & getApi() const { DARABONBA_PTR_GET_CONST(api_, vector<BatchDeployApisRequest::Api>) };
    inline vector<BatchDeployApisRequest::Api> getApi() { DARABONBA_PTR_GET(api_, vector<BatchDeployApisRequest::Api>) };
    inline BatchDeployApisRequest& setApi(const vector<BatchDeployApisRequest::Api> & api) { DARABONBA_PTR_SET_VALUE(api_, api) };
    inline BatchDeployApisRequest& setApi(vector<BatchDeployApisRequest::Api> && api) { DARABONBA_PTR_SET_RVALUE(api_, api) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline BatchDeployApisRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string getSecurityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline BatchDeployApisRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


    // stageName Field Functions 
    bool hasStageName() const { return this->stageName_ != nullptr;};
    void deleteStageName() { this->stageName_ = nullptr;};
    inline string getStageName() const { DARABONBA_PTR_GET_DEFAULT(stageName_, "") };
    inline BatchDeployApisRequest& setStageName(string stageName) { DARABONBA_PTR_SET_VALUE(stageName_, stageName) };


  protected:
    // The APIs that you want to publish.
    shared_ptr<vector<BatchDeployApisRequest::Api>> api_ {};
    // The description.
    // 
    // This parameter is required.
    shared_ptr<string> description_ {};
    shared_ptr<string> securityToken_ {};
    // The name of the runtime environment. Valid values:
    // 
    // *   **RELEASE**
    // *   **TEST**
    // *   PRE: the pre-release environment
    // 
    // This parameter is required.
    shared_ptr<string> stageName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
