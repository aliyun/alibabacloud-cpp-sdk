// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTRUSTEDORIGINRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETTRUSTEDORIGINRESPONSEBODY_HPP_
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
  class GetTrustedOriginResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTrustedOriginResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TrustedOrigin, trustedOrigin_);
    };
    friend void from_json(const Darabonba::Json& j, GetTrustedOriginResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TrustedOrigin, trustedOrigin_);
    };
    GetTrustedOriginResponseBody() = default ;
    GetTrustedOriginResponseBody(const GetTrustedOriginResponseBody &) = default ;
    GetTrustedOriginResponseBody(GetTrustedOriginResponseBody &&) = default ;
    GetTrustedOriginResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTrustedOriginResponseBody() = default ;
    GetTrustedOriginResponseBody& operator=(const GetTrustedOriginResponseBody &) = default ;
    GetTrustedOriginResponseBody& operator=(GetTrustedOriginResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TrustedOrigin : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TrustedOrigin& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(Origin, origin_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(TrustOriginName, trustOriginName_);
        DARABONBA_PTR_TO_JSON(TrustedOriginId, trustedOriginId_);
        DARABONBA_PTR_TO_JSON(TrustedOriginScene, trustedOriginScene_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      };
      friend void from_json(const Darabonba::Json& j, TrustedOrigin& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(Origin, origin_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(TrustOriginName, trustOriginName_);
        DARABONBA_PTR_FROM_JSON(TrustedOriginId, trustedOriginId_);
        DARABONBA_PTR_FROM_JSON(TrustedOriginScene, trustedOriginScene_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      };
      TrustedOrigin() = default ;
      TrustedOrigin(const TrustedOrigin &) = default ;
      TrustedOrigin(TrustedOrigin &&) = default ;
      TrustedOrigin(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TrustedOrigin() = default ;
      TrustedOrigin& operator=(const TrustedOrigin &) = default ;
      TrustedOrigin& operator=(TrustedOrigin &&) = default ;
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
      inline TrustedOrigin& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline TrustedOrigin& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // origin Field Functions 
      bool hasOrigin() const { return this->origin_ != nullptr;};
      void deleteOrigin() { this->origin_ = nullptr;};
      inline string getOrigin() const { DARABONBA_PTR_GET_DEFAULT(origin_, "") };
      inline TrustedOrigin& setOrigin(string origin) { DARABONBA_PTR_SET_VALUE(origin_, origin) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline TrustedOrigin& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // trustOriginName Field Functions 
      bool hasTrustOriginName() const { return this->trustOriginName_ != nullptr;};
      void deleteTrustOriginName() { this->trustOriginName_ = nullptr;};
      inline string getTrustOriginName() const { DARABONBA_PTR_GET_DEFAULT(trustOriginName_, "") };
      inline TrustedOrigin& setTrustOriginName(string trustOriginName) { DARABONBA_PTR_SET_VALUE(trustOriginName_, trustOriginName) };


      // trustedOriginId Field Functions 
      bool hasTrustedOriginId() const { return this->trustedOriginId_ != nullptr;};
      void deleteTrustedOriginId() { this->trustedOriginId_ = nullptr;};
      inline string getTrustedOriginId() const { DARABONBA_PTR_GET_DEFAULT(trustedOriginId_, "") };
      inline TrustedOrigin& setTrustedOriginId(string trustedOriginId) { DARABONBA_PTR_SET_VALUE(trustedOriginId_, trustedOriginId) };


      // trustedOriginScene Field Functions 
      bool hasTrustedOriginScene() const { return this->trustedOriginScene_ != nullptr;};
      void deleteTrustedOriginScene() { this->trustedOriginScene_ = nullptr;};
      inline const vector<string> & getTrustedOriginScene() const { DARABONBA_PTR_GET_CONST(trustedOriginScene_, vector<string>) };
      inline vector<string> getTrustedOriginScene() { DARABONBA_PTR_GET(trustedOriginScene_, vector<string>) };
      inline TrustedOrigin& setTrustedOriginScene(const vector<string> & trustedOriginScene) { DARABONBA_PTR_SET_VALUE(trustedOriginScene_, trustedOriginScene) };
      inline TrustedOrigin& setTrustedOriginScene(vector<string> && trustedOriginScene) { DARABONBA_PTR_SET_RVALUE(trustedOriginScene_, trustedOriginScene) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
      inline TrustedOrigin& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


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
      // The name of the trusted origin.
      shared_ptr<string> trustOriginName_ {};
      // The ID of the trusted origin.
      shared_ptr<string> trustedOriginId_ {};
      // The trusted origin scene.
      shared_ptr<vector<string>> trustedOriginScene_ {};
      // The update time.
      // 
      // Use the UTC time format: yyyy-MM-ddTHH:mmZ
      shared_ptr<string> updateTime_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->trustedOrigin_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetTrustedOriginResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // trustedOrigin Field Functions 
    bool hasTrustedOrigin() const { return this->trustedOrigin_ != nullptr;};
    void deleteTrustedOrigin() { this->trustedOrigin_ = nullptr;};
    inline const GetTrustedOriginResponseBody::TrustedOrigin & getTrustedOrigin() const { DARABONBA_PTR_GET_CONST(trustedOrigin_, GetTrustedOriginResponseBody::TrustedOrigin) };
    inline GetTrustedOriginResponseBody::TrustedOrigin getTrustedOrigin() { DARABONBA_PTR_GET(trustedOrigin_, GetTrustedOriginResponseBody::TrustedOrigin) };
    inline GetTrustedOriginResponseBody& setTrustedOrigin(const GetTrustedOriginResponseBody::TrustedOrigin & trustedOrigin) { DARABONBA_PTR_SET_VALUE(trustedOrigin_, trustedOrigin) };
    inline GetTrustedOriginResponseBody& setTrustedOrigin(GetTrustedOriginResponseBody::TrustedOrigin && trustedOrigin) { DARABONBA_PTR_SET_RVALUE(trustedOrigin_, trustedOrigin) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The trusted origin.
    shared_ptr<GetTrustedOriginResponseBody::TrustedOrigin> trustedOrigin_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
