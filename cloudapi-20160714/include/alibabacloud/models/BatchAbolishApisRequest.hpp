// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHABOLISHAPISREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHABOLISHAPISREQUEST_HPP_
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
  class BatchAbolishApisRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchAbolishApisRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Api, api_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
    };
    friend void from_json(const Darabonba::Json& j, BatchAbolishApisRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Api, api_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
    };
    BatchAbolishApisRequest() = default ;
    BatchAbolishApisRequest(const BatchAbolishApisRequest &) = default ;
    BatchAbolishApisRequest(BatchAbolishApisRequest &&) = default ;
    BatchAbolishApisRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchAbolishApisRequest() = default ;
    BatchAbolishApisRequest& operator=(const BatchAbolishApisRequest &) = default ;
    BatchAbolishApisRequest& operator=(BatchAbolishApisRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Api : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Api& obj) { 
        DARABONBA_PTR_TO_JSON(ApiUid, apiUid_);
        DARABONBA_PTR_TO_JSON(GroupId, groupId_);
        DARABONBA_PTR_TO_JSON(StageId, stageId_);
        DARABONBA_PTR_TO_JSON(StageName, stageName_);
      };
      friend void from_json(const Darabonba::Json& j, Api& obj) { 
        DARABONBA_PTR_FROM_JSON(ApiUid, apiUid_);
        DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
        DARABONBA_PTR_FROM_JSON(StageId, stageId_);
        DARABONBA_PTR_FROM_JSON(StageName, stageName_);
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
        && this->groupId_ == nullptr && this->stageId_ == nullptr && this->stageName_ == nullptr; };
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


      // stageId Field Functions 
      bool hasStageId() const { return this->stageId_ != nullptr;};
      void deleteStageId() { this->stageId_ = nullptr;};
      inline string getStageId() const { DARABONBA_PTR_GET_DEFAULT(stageId_, "") };
      inline Api& setStageId(string stageId) { DARABONBA_PTR_SET_VALUE(stageId_, stageId) };


      // stageName Field Functions 
      bool hasStageName() const { return this->stageName_ != nullptr;};
      void deleteStageName() { this->stageName_ = nullptr;};
      inline string getStageName() const { DARABONBA_PTR_GET_DEFAULT(stageName_, "") };
      inline Api& setStageName(string stageName) { DARABONBA_PTR_SET_VALUE(stageName_, stageName) };


    protected:
      // The ID of the API.
      // 
      // This parameter is required.
      shared_ptr<string> apiUid_ {};
      // The ID of the API group.
      // 
      // This parameter is required.
      shared_ptr<string> groupId_ {};
      // The ID of the environment.
      shared_ptr<string> stageId_ {};
      // The name of the environment.
      shared_ptr<string> stageName_ {};
    };

    virtual bool empty() const override { return this->api_ == nullptr
        && this->securityToken_ == nullptr; };
    // api Field Functions 
    bool hasApi() const { return this->api_ != nullptr;};
    void deleteApi() { this->api_ = nullptr;};
    inline const vector<BatchAbolishApisRequest::Api> & getApi() const { DARABONBA_PTR_GET_CONST(api_, vector<BatchAbolishApisRequest::Api>) };
    inline vector<BatchAbolishApisRequest::Api> getApi() { DARABONBA_PTR_GET(api_, vector<BatchAbolishApisRequest::Api>) };
    inline BatchAbolishApisRequest& setApi(const vector<BatchAbolishApisRequest::Api> & api) { DARABONBA_PTR_SET_VALUE(api_, api) };
    inline BatchAbolishApisRequest& setApi(vector<BatchAbolishApisRequest::Api> && api) { DARABONBA_PTR_SET_RVALUE(api_, api) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string getSecurityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline BatchAbolishApisRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


  protected:
    // The APIs that you want to operate.
    // 
    // This parameter is required.
    shared_ptr<vector<BatchAbolishApisRequest::Api>> api_ {};
    shared_ptr<string> securityToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
