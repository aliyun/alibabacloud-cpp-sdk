// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSCIMSERVERCREDENTIALSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSCIMSERVERCREDENTIALSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudsso20210515
{
namespace Models
{
  class ListSCIMServerCredentialsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSCIMServerCredentialsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SCIMServerCredentials, SCIMServerCredentials_);
      DARABONBA_PTR_TO_JSON(TotalCounts, totalCounts_);
    };
    friend void from_json(const Darabonba::Json& j, ListSCIMServerCredentialsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SCIMServerCredentials, SCIMServerCredentials_);
      DARABONBA_PTR_FROM_JSON(TotalCounts, totalCounts_);
    };
    ListSCIMServerCredentialsResponseBody() = default ;
    ListSCIMServerCredentialsResponseBody(const ListSCIMServerCredentialsResponseBody &) = default ;
    ListSCIMServerCredentialsResponseBody(ListSCIMServerCredentialsResponseBody &&) = default ;
    ListSCIMServerCredentialsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSCIMServerCredentialsResponseBody() = default ;
    ListSCIMServerCredentialsResponseBody& operator=(const ListSCIMServerCredentialsResponseBody &) = default ;
    ListSCIMServerCredentialsResponseBody& operator=(ListSCIMServerCredentialsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SCIMServerCredentials : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SCIMServerCredentials& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(CredentialId, credentialId_);
        DARABONBA_PTR_TO_JSON(CredentialType, credentialType_);
        DARABONBA_PTR_TO_JSON(DirectoryId, directoryId_);
        DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, SCIMServerCredentials& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(CredentialId, credentialId_);
        DARABONBA_PTR_FROM_JSON(CredentialType, credentialType_);
        DARABONBA_PTR_FROM_JSON(DirectoryId, directoryId_);
        DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      SCIMServerCredentials() = default ;
      SCIMServerCredentials(const SCIMServerCredentials &) = default ;
      SCIMServerCredentials(SCIMServerCredentials &&) = default ;
      SCIMServerCredentials(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SCIMServerCredentials() = default ;
      SCIMServerCredentials& operator=(const SCIMServerCredentials &) = default ;
      SCIMServerCredentials& operator=(SCIMServerCredentials &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->credentialId_ == nullptr && this->credentialType_ == nullptr && this->directoryId_ == nullptr && this->expireTime_ == nullptr && this->status_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline SCIMServerCredentials& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // credentialId Field Functions 
      bool hasCredentialId() const { return this->credentialId_ != nullptr;};
      void deleteCredentialId() { this->credentialId_ = nullptr;};
      inline string getCredentialId() const { DARABONBA_PTR_GET_DEFAULT(credentialId_, "") };
      inline SCIMServerCredentials& setCredentialId(string credentialId) { DARABONBA_PTR_SET_VALUE(credentialId_, credentialId) };


      // credentialType Field Functions 
      bool hasCredentialType() const { return this->credentialType_ != nullptr;};
      void deleteCredentialType() { this->credentialType_ = nullptr;};
      inline string getCredentialType() const { DARABONBA_PTR_GET_DEFAULT(credentialType_, "") };
      inline SCIMServerCredentials& setCredentialType(string credentialType) { DARABONBA_PTR_SET_VALUE(credentialType_, credentialType) };


      // directoryId Field Functions 
      bool hasDirectoryId() const { return this->directoryId_ != nullptr;};
      void deleteDirectoryId() { this->directoryId_ = nullptr;};
      inline string getDirectoryId() const { DARABONBA_PTR_GET_DEFAULT(directoryId_, "") };
      inline SCIMServerCredentials& setDirectoryId(string directoryId) { DARABONBA_PTR_SET_VALUE(directoryId_, directoryId) };


      // expireTime Field Functions 
      bool hasExpireTime() const { return this->expireTime_ != nullptr;};
      void deleteExpireTime() { this->expireTime_ = nullptr;};
      inline string getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
      inline SCIMServerCredentials& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline SCIMServerCredentials& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The time when the SCIM credential was created.
      shared_ptr<string> createTime_ {};
      // The ID of the SCIM credential.
      shared_ptr<string> credentialId_ {};
      // The type of the SCIM credential.
      shared_ptr<string> credentialType_ {};
      // The ID of the directory.
      shared_ptr<string> directoryId_ {};
      // The time when the SCIM credential expires.
      shared_ptr<string> expireTime_ {};
      // The status of the SCIM credential. Valid values:
      // 
      // *   Enabled
      // *   Disabled
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->SCIMServerCredentials_ == nullptr && this->totalCounts_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListSCIMServerCredentialsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // SCIMServerCredentials Field Functions 
    bool hasSCIMServerCredentials() const { return this->SCIMServerCredentials_ != nullptr;};
    void deleteSCIMServerCredentials() { this->SCIMServerCredentials_ = nullptr;};
    inline const vector<ListSCIMServerCredentialsResponseBody::SCIMServerCredentials> & getSCIMServerCredentials() const { DARABONBA_PTR_GET_CONST(SCIMServerCredentials_, vector<ListSCIMServerCredentialsResponseBody::SCIMServerCredentials>) };
    inline vector<ListSCIMServerCredentialsResponseBody::SCIMServerCredentials> getSCIMServerCredentials() { DARABONBA_PTR_GET(SCIMServerCredentials_, vector<ListSCIMServerCredentialsResponseBody::SCIMServerCredentials>) };
    inline ListSCIMServerCredentialsResponseBody& setSCIMServerCredentials(const vector<ListSCIMServerCredentialsResponseBody::SCIMServerCredentials> & sCIMServerCredentials) { DARABONBA_PTR_SET_VALUE(SCIMServerCredentials_, sCIMServerCredentials) };
    inline ListSCIMServerCredentialsResponseBody& setSCIMServerCredentials(vector<ListSCIMServerCredentialsResponseBody::SCIMServerCredentials> && sCIMServerCredentials) { DARABONBA_PTR_SET_RVALUE(SCIMServerCredentials_, sCIMServerCredentials) };


    // totalCounts Field Functions 
    bool hasTotalCounts() const { return this->totalCounts_ != nullptr;};
    void deleteTotalCounts() { this->totalCounts_ = nullptr;};
    inline int32_t getTotalCounts() const { DARABONBA_PTR_GET_DEFAULT(totalCounts_, 0) };
    inline ListSCIMServerCredentialsResponseBody& setTotalCounts(int32_t totalCounts) { DARABONBA_PTR_SET_VALUE(totalCounts_, totalCounts) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The SCIM credentials.
    shared_ptr<vector<ListSCIMServerCredentialsResponseBody::SCIMServerCredentials>> SCIMServerCredentials_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCounts_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudsso20210515
#endif
