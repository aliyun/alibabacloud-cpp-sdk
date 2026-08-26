// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTRUSTEDORIGINSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTTRUSTEDORIGINSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class ListTrustedOriginsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTrustedOriginsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(Origin, origin_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TrustOriginName, trustOriginName_);
      DARABONBA_PTR_TO_JSON(TrustedOriginScene, trustedOriginScene_);
    };
    friend void from_json(const Darabonba::Json& j, ListTrustedOriginsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(Origin, origin_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TrustOriginName, trustOriginName_);
      DARABONBA_PTR_FROM_JSON(TrustedOriginScene, trustedOriginScene_);
    };
    ListTrustedOriginsRequest() = default ;
    ListTrustedOriginsRequest(const ListTrustedOriginsRequest &) = default ;
    ListTrustedOriginsRequest(ListTrustedOriginsRequest &&) = default ;
    ListTrustedOriginsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTrustedOriginsRequest() = default ;
    ListTrustedOriginsRequest& operator=(const ListTrustedOriginsRequest &) = default ;
    ListTrustedOriginsRequest& operator=(ListTrustedOriginsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->origin_ == nullptr && this->status_ == nullptr && this->trustOriginName_ == nullptr
        && this->trustedOriginScene_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListTrustedOriginsRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListTrustedOriginsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListTrustedOriginsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // origin Field Functions 
    bool hasOrigin() const { return this->origin_ != nullptr;};
    void deleteOrigin() { this->origin_ = nullptr;};
    inline string getOrigin() const { DARABONBA_PTR_GET_DEFAULT(origin_, "") };
    inline ListTrustedOriginsRequest& setOrigin(string origin) { DARABONBA_PTR_SET_VALUE(origin_, origin) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListTrustedOriginsRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // trustOriginName Field Functions 
    bool hasTrustOriginName() const { return this->trustOriginName_ != nullptr;};
    void deleteTrustOriginName() { this->trustOriginName_ = nullptr;};
    inline string getTrustOriginName() const { DARABONBA_PTR_GET_DEFAULT(trustOriginName_, "") };
    inline ListTrustedOriginsRequest& setTrustOriginName(string trustOriginName) { DARABONBA_PTR_SET_VALUE(trustOriginName_, trustOriginName) };


    // trustedOriginScene Field Functions 
    bool hasTrustedOriginScene() const { return this->trustedOriginScene_ != nullptr;};
    void deleteTrustedOriginScene() { this->trustedOriginScene_ = nullptr;};
    inline const vector<string> & getTrustedOriginScene() const { DARABONBA_PTR_GET_CONST(trustedOriginScene_, vector<string>) };
    inline vector<string> getTrustedOriginScene() { DARABONBA_PTR_GET(trustedOriginScene_, vector<string>) };
    inline ListTrustedOriginsRequest& setTrustedOriginScene(const vector<string> & trustedOriginScene) { DARABONBA_PTR_SET_VALUE(trustedOriginScene_, trustedOriginScene) };
    inline ListTrustedOriginsRequest& setTrustedOriginScene(vector<string> && trustedOriginScene) { DARABONBA_PTR_SET_RVALUE(trustedOriginScene_, trustedOriginScene) };


  protected:
    // The ID of the IDaaS EIAM instance.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The number of entries per page. Default value: 20. Maximum value: 100. If you set this parameter to 0, the default value is used.
    shared_ptr<int32_t> maxResults_ {};
    // The NextToken returned by the previous call.
    shared_ptr<string> nextToken_ {};
    // Filters by the exact normalized origin.
    shared_ptr<string> origin_ {};
    // Filters by exact status. Valid values: Enabled or Disabled.
    shared_ptr<string> status_ {};
    // Filters by exact name.
    shared_ptr<string> trustOriginName_ {};
    // Filters by exact trusted origin scene. You can specify at most one value.
    shared_ptr<vector<string>> trustedOriginScene_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
