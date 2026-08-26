// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTRUSTEDORIGINSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTTRUSTEDORIGINSRESPONSEBODY_HPP_
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
  class ListTrustedOriginsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTrustedOriginsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(TrustedOrigins, trustedOrigins_);
    };
    friend void from_json(const Darabonba::Json& j, ListTrustedOriginsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(TrustedOrigins, trustedOrigins_);
    };
    ListTrustedOriginsResponseBody() = default ;
    ListTrustedOriginsResponseBody(const ListTrustedOriginsResponseBody &) = default ;
    ListTrustedOriginsResponseBody(ListTrustedOriginsResponseBody &&) = default ;
    ListTrustedOriginsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTrustedOriginsResponseBody() = default ;
    ListTrustedOriginsResponseBody& operator=(const ListTrustedOriginsResponseBody &) = default ;
    ListTrustedOriginsResponseBody& operator=(ListTrustedOriginsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TrustedOrigins : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TrustedOrigins& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(Origin, origin_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(TrustOriginName, trustOriginName_);
        DARABONBA_PTR_TO_JSON(TrustedOriginId, trustedOriginId_);
        DARABONBA_PTR_TO_JSON(TrustedOriginScene, trustedOriginScene_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      };
      friend void from_json(const Darabonba::Json& j, TrustedOrigins& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(Origin, origin_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(TrustOriginName, trustOriginName_);
        DARABONBA_PTR_FROM_JSON(TrustedOriginId, trustedOriginId_);
        DARABONBA_PTR_FROM_JSON(TrustedOriginScene, trustedOriginScene_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      };
      TrustedOrigins() = default ;
      TrustedOrigins(const TrustedOrigins &) = default ;
      TrustedOrigins(TrustedOrigins &&) = default ;
      TrustedOrigins(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TrustedOrigins() = default ;
      TrustedOrigins& operator=(const TrustedOrigins &) = default ;
      TrustedOrigins& operator=(TrustedOrigins &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->instanceId_ == nullptr && this->origin_ == nullptr && this->status_ == nullptr && this->trustOriginName_ == nullptr && this->trustedOriginId_ == nullptr
        && this->trustedOriginScene_ == nullptr && this->updateTime_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline TrustedOrigins& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline TrustedOrigins& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // origin Field Functions 
      bool hasOrigin() const { return this->origin_ != nullptr;};
      void deleteOrigin() { this->origin_ = nullptr;};
      inline string getOrigin() const { DARABONBA_PTR_GET_DEFAULT(origin_, "") };
      inline TrustedOrigins& setOrigin(string origin) { DARABONBA_PTR_SET_VALUE(origin_, origin) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline TrustedOrigins& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // trustOriginName Field Functions 
      bool hasTrustOriginName() const { return this->trustOriginName_ != nullptr;};
      void deleteTrustOriginName() { this->trustOriginName_ = nullptr;};
      inline string getTrustOriginName() const { DARABONBA_PTR_GET_DEFAULT(trustOriginName_, "") };
      inline TrustedOrigins& setTrustOriginName(string trustOriginName) { DARABONBA_PTR_SET_VALUE(trustOriginName_, trustOriginName) };


      // trustedOriginId Field Functions 
      bool hasTrustedOriginId() const { return this->trustedOriginId_ != nullptr;};
      void deleteTrustedOriginId() { this->trustedOriginId_ = nullptr;};
      inline string getTrustedOriginId() const { DARABONBA_PTR_GET_DEFAULT(trustedOriginId_, "") };
      inline TrustedOrigins& setTrustedOriginId(string trustedOriginId) { DARABONBA_PTR_SET_VALUE(trustedOriginId_, trustedOriginId) };


      // trustedOriginScene Field Functions 
      bool hasTrustedOriginScene() const { return this->trustedOriginScene_ != nullptr;};
      void deleteTrustedOriginScene() { this->trustedOriginScene_ = nullptr;};
      inline const vector<string> & getTrustedOriginScene() const { DARABONBA_PTR_GET_CONST(trustedOriginScene_, vector<string>) };
      inline vector<string> getTrustedOriginScene() { DARABONBA_PTR_GET(trustedOriginScene_, vector<string>) };
      inline TrustedOrigins& setTrustedOriginScene(const vector<string> & trustedOriginScene) { DARABONBA_PTR_SET_VALUE(trustedOriginScene_, trustedOriginScene) };
      inline TrustedOrigins& setTrustedOriginScene(vector<string> && trustedOriginScene) { DARABONBA_PTR_SET_RVALUE(trustedOriginScene_, trustedOriginScene) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
      inline TrustedOrigins& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    protected:
      // The creation time.
      // 
      // Use the UTC time format: yyyy-MM-ddTHH:mmZ
      shared_ptr<string> createTime_ {};
      // The instance ID.
      shared_ptr<string> instanceId_ {};
      // The browser origin.
      shared_ptr<string> origin_ {};
      // The status.
      shared_ptr<string> status_ {};
      // The trusted origin name.
      shared_ptr<string> trustOriginName_ {};
      // The trusted origin ID.
      shared_ptr<string> trustedOriginId_ {};
      // The trusted origin scene.
      shared_ptr<vector<string>> trustedOriginScene_ {};
      // The update time.
      // 
      // Use the UTC time format: yyyy-MM-ddTHH:mmZ
      shared_ptr<string> updateTime_ {};
    };

    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr && this->trustedOrigins_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListTrustedOriginsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListTrustedOriginsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListTrustedOriginsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListTrustedOriginsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // trustedOrigins Field Functions 
    bool hasTrustedOrigins() const { return this->trustedOrigins_ != nullptr;};
    void deleteTrustedOrigins() { this->trustedOrigins_ = nullptr;};
    inline const vector<ListTrustedOriginsResponseBody::TrustedOrigins> & getTrustedOrigins() const { DARABONBA_PTR_GET_CONST(trustedOrigins_, vector<ListTrustedOriginsResponseBody::TrustedOrigins>) };
    inline vector<ListTrustedOriginsResponseBody::TrustedOrigins> getTrustedOrigins() { DARABONBA_PTR_GET(trustedOrigins_, vector<ListTrustedOriginsResponseBody::TrustedOrigins>) };
    inline ListTrustedOriginsResponseBody& setTrustedOrigins(const vector<ListTrustedOriginsResponseBody::TrustedOrigins> & trustedOrigins) { DARABONBA_PTR_SET_VALUE(trustedOrigins_, trustedOrigins) };
    inline ListTrustedOriginsResponseBody& setTrustedOrigins(vector<ListTrustedOriginsResponseBody::TrustedOrigins> && trustedOrigins) { DARABONBA_PTR_SET_RVALUE(trustedOrigins_, trustedOrigins) };


  protected:
    // The number of entries per page that takes effect for this request.
    shared_ptr<int32_t> maxResults_ {};
    // The token for the next page query.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries.
    shared_ptr<int32_t> totalCount_ {};
    // The list of trusted origins.
    shared_ptr<vector<ListTrustedOriginsResponseBody::TrustedOrigins>> trustedOrigins_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
