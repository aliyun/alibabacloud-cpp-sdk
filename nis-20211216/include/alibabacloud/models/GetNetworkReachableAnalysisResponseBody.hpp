// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETNETWORKREACHABLEANALYSISRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETNETWORKREACHABLEANALYSISRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Nis20211216
{
namespace Models
{
  class GetNetworkReachableAnalysisResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetNetworkReachableAnalysisResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AliUid, aliUid_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(NetworkPathId, networkPathId_);
      DARABONBA_PTR_TO_JSON(NetworkPathParameter, networkPathParameter_);
      DARABONBA_PTR_TO_JSON(NetworkReachableAnalysisId, networkReachableAnalysisId_);
      DARABONBA_PTR_TO_JSON(NetworkReachableAnalysisResult, networkReachableAnalysisResult_);
      DARABONBA_PTR_TO_JSON(NetworkReachableAnalysisStatus, networkReachableAnalysisStatus_);
      DARABONBA_PTR_TO_JSON(Reachable, reachable_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetNetworkReachableAnalysisResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AliUid, aliUid_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(NetworkPathId, networkPathId_);
      DARABONBA_PTR_FROM_JSON(NetworkPathParameter, networkPathParameter_);
      DARABONBA_PTR_FROM_JSON(NetworkReachableAnalysisId, networkReachableAnalysisId_);
      DARABONBA_PTR_FROM_JSON(NetworkReachableAnalysisResult, networkReachableAnalysisResult_);
      DARABONBA_PTR_FROM_JSON(NetworkReachableAnalysisStatus, networkReachableAnalysisStatus_);
      DARABONBA_PTR_FROM_JSON(Reachable, reachable_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetNetworkReachableAnalysisResponseBody() = default ;
    GetNetworkReachableAnalysisResponseBody(const GetNetworkReachableAnalysisResponseBody &) = default ;
    GetNetworkReachableAnalysisResponseBody(GetNetworkReachableAnalysisResponseBody &&) = default ;
    GetNetworkReachableAnalysisResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetNetworkReachableAnalysisResponseBody() = default ;
    GetNetworkReachableAnalysisResponseBody& operator=(const GetNetworkReachableAnalysisResponseBody &) = default ;
    GetNetworkReachableAnalysisResponseBody& operator=(GetNetworkReachableAnalysisResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aliUid_ == nullptr
        && return this->createTime_ == nullptr && return this->networkPathId_ == nullptr && return this->networkPathParameter_ == nullptr && return this->networkReachableAnalysisId_ == nullptr && return this->networkReachableAnalysisResult_ == nullptr
        && return this->networkReachableAnalysisStatus_ == nullptr && return this->reachable_ == nullptr && return this->requestId_ == nullptr; };
    // aliUid Field Functions 
    bool hasAliUid() const { return this->aliUid_ != nullptr;};
    void deleteAliUid() { this->aliUid_ = nullptr;};
    inline int64_t aliUid() const { DARABONBA_PTR_GET_DEFAULT(aliUid_, 0L) };
    inline GetNetworkReachableAnalysisResponseBody& setAliUid(int64_t aliUid) { DARABONBA_PTR_SET_VALUE(aliUid_, aliUid) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetNetworkReachableAnalysisResponseBody& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // networkPathId Field Functions 
    bool hasNetworkPathId() const { return this->networkPathId_ != nullptr;};
    void deleteNetworkPathId() { this->networkPathId_ = nullptr;};
    inline string networkPathId() const { DARABONBA_PTR_GET_DEFAULT(networkPathId_, "") };
    inline GetNetworkReachableAnalysisResponseBody& setNetworkPathId(string networkPathId) { DARABONBA_PTR_SET_VALUE(networkPathId_, networkPathId) };


    // networkPathParameter Field Functions 
    bool hasNetworkPathParameter() const { return this->networkPathParameter_ != nullptr;};
    void deleteNetworkPathParameter() { this->networkPathParameter_ = nullptr;};
    inline string networkPathParameter() const { DARABONBA_PTR_GET_DEFAULT(networkPathParameter_, "") };
    inline GetNetworkReachableAnalysisResponseBody& setNetworkPathParameter(string networkPathParameter) { DARABONBA_PTR_SET_VALUE(networkPathParameter_, networkPathParameter) };


    // networkReachableAnalysisId Field Functions 
    bool hasNetworkReachableAnalysisId() const { return this->networkReachableAnalysisId_ != nullptr;};
    void deleteNetworkReachableAnalysisId() { this->networkReachableAnalysisId_ = nullptr;};
    inline string networkReachableAnalysisId() const { DARABONBA_PTR_GET_DEFAULT(networkReachableAnalysisId_, "") };
    inline GetNetworkReachableAnalysisResponseBody& setNetworkReachableAnalysisId(string networkReachableAnalysisId) { DARABONBA_PTR_SET_VALUE(networkReachableAnalysisId_, networkReachableAnalysisId) };


    // networkReachableAnalysisResult Field Functions 
    bool hasNetworkReachableAnalysisResult() const { return this->networkReachableAnalysisResult_ != nullptr;};
    void deleteNetworkReachableAnalysisResult() { this->networkReachableAnalysisResult_ = nullptr;};
    inline string networkReachableAnalysisResult() const { DARABONBA_PTR_GET_DEFAULT(networkReachableAnalysisResult_, "") };
    inline GetNetworkReachableAnalysisResponseBody& setNetworkReachableAnalysisResult(string networkReachableAnalysisResult) { DARABONBA_PTR_SET_VALUE(networkReachableAnalysisResult_, networkReachableAnalysisResult) };


    // networkReachableAnalysisStatus Field Functions 
    bool hasNetworkReachableAnalysisStatus() const { return this->networkReachableAnalysisStatus_ != nullptr;};
    void deleteNetworkReachableAnalysisStatus() { this->networkReachableAnalysisStatus_ = nullptr;};
    inline string networkReachableAnalysisStatus() const { DARABONBA_PTR_GET_DEFAULT(networkReachableAnalysisStatus_, "") };
    inline GetNetworkReachableAnalysisResponseBody& setNetworkReachableAnalysisStatus(string networkReachableAnalysisStatus) { DARABONBA_PTR_SET_VALUE(networkReachableAnalysisStatus_, networkReachableAnalysisStatus) };


    // reachable Field Functions 
    bool hasReachable() const { return this->reachable_ != nullptr;};
    void deleteReachable() { this->reachable_ = nullptr;};
    inline bool reachable() const { DARABONBA_PTR_GET_DEFAULT(reachable_, false) };
    inline GetNetworkReachableAnalysisResponseBody& setReachable(bool reachable) { DARABONBA_PTR_SET_VALUE(reachable_, reachable) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetNetworkReachableAnalysisResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The unique ID (UID) of the Alibaba Cloud account.
    std::shared_ptr<int64_t> aliUid_ = nullptr;
    // The time when the network path was created. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
    std::shared_ptr<string> createTime_ = nullptr;
    // The network path ID.
    std::shared_ptr<string> networkPathId_ = nullptr;
    // The parameters of the network path.
    std::shared_ptr<string> networkPathParameter_ = nullptr;
    // The ID of the task for analyzing network reachability.
    std::shared_ptr<string> networkReachableAnalysisId_ = nullptr;
    // The result of network reachability analysis, which includes the network topology, error codes of network unreachability, and rules of network unreachability.
    std::shared_ptr<string> networkReachableAnalysisResult_ = nullptr;
    // The state of the task for analyzing network reachability. Valid values:
    // 
    // *   **init**: The task is in progress.
    // *   **finish**: The task is complete.
    // *   **error**: An analysis error occurred.
    // *   **timeout**: The task timed out.
    std::shared_ptr<string> networkReachableAnalysisStatus_ = nullptr;
    // Indicates whether the network path is reachable. Valid values:
    // 
    // *   **true**: The network path is reachable.
    // *   **false**: The network path is unreachable.
    std::shared_ptr<bool> reachable_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Nis20211216
#endif
