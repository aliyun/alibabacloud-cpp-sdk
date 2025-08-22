// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESNAPSHOTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESNAPSHOTSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20201002
{
namespace Models
{
  class DescribeSnapshotsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSnapshotsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientId, clientId_);
      DARABONBA_PTR_TO_JSON(DesktopId, desktopId_);
      DARABONBA_PTR_TO_JSON(LoginToken, loginToken_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
      DARABONBA_PTR_TO_JSON(SnapshotId, snapshotId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSnapshotsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientId, clientId_);
      DARABONBA_PTR_FROM_JSON(DesktopId, desktopId_);
      DARABONBA_PTR_FROM_JSON(LoginToken, loginToken_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
      DARABONBA_PTR_FROM_JSON(SnapshotId, snapshotId_);
    };
    DescribeSnapshotsRequest() = default ;
    DescribeSnapshotsRequest(const DescribeSnapshotsRequest &) = default ;
    DescribeSnapshotsRequest(DescribeSnapshotsRequest &&) = default ;
    DescribeSnapshotsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSnapshotsRequest() = default ;
    DescribeSnapshotsRequest& operator=(const DescribeSnapshotsRequest &) = default ;
    DescribeSnapshotsRequest& operator=(DescribeSnapshotsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clientId_ != nullptr
        && this->desktopId_ != nullptr && this->loginToken_ != nullptr && this->maxResults_ != nullptr && this->nextToken_ != nullptr && this->regionId_ != nullptr
        && this->sessionId_ != nullptr && this->snapshotId_ != nullptr; };
    // clientId Field Functions 
    bool hasClientId() const { return this->clientId_ != nullptr;};
    void deleteClientId() { this->clientId_ = nullptr;};
    inline string clientId() const { DARABONBA_PTR_GET_DEFAULT(clientId_, "") };
    inline DescribeSnapshotsRequest& setClientId(string clientId) { DARABONBA_PTR_SET_VALUE(clientId_, clientId) };


    // desktopId Field Functions 
    bool hasDesktopId() const { return this->desktopId_ != nullptr;};
    void deleteDesktopId() { this->desktopId_ = nullptr;};
    inline string desktopId() const { DARABONBA_PTR_GET_DEFAULT(desktopId_, "") };
    inline DescribeSnapshotsRequest& setDesktopId(string desktopId) { DARABONBA_PTR_SET_VALUE(desktopId_, desktopId) };


    // loginToken Field Functions 
    bool hasLoginToken() const { return this->loginToken_ != nullptr;};
    void deleteLoginToken() { this->loginToken_ = nullptr;};
    inline string loginToken() const { DARABONBA_PTR_GET_DEFAULT(loginToken_, "") };
    inline DescribeSnapshotsRequest& setLoginToken(string loginToken) { DARABONBA_PTR_SET_VALUE(loginToken_, loginToken) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeSnapshotsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeSnapshotsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeSnapshotsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string sessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline DescribeSnapshotsRequest& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // snapshotId Field Functions 
    bool hasSnapshotId() const { return this->snapshotId_ != nullptr;};
    void deleteSnapshotId() { this->snapshotId_ = nullptr;};
    inline string snapshotId() const { DARABONBA_PTR_GET_DEFAULT(snapshotId_, "") };
    inline DescribeSnapshotsRequest& setSnapshotId(string snapshotId) { DARABONBA_PTR_SET_VALUE(snapshotId_, snapshotId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> clientId_ = nullptr;
    std::shared_ptr<string> desktopId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> loginToken_ = nullptr;
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    std::shared_ptr<string> nextToken_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> sessionId_ = nullptr;
    std::shared_ptr<string> snapshotId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20201002
#endif
