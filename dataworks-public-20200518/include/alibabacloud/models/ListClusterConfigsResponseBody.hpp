// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLUSTERCONFIGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCLUSTERCONFIGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ClusterConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class ListClusterConfigsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListClusterConfigsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterConfigs, clusterConfigs_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListClusterConfigsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterConfigs, clusterConfigs_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListClusterConfigsResponseBody() = default ;
    ListClusterConfigsResponseBody(const ListClusterConfigsResponseBody &) = default ;
    ListClusterConfigsResponseBody(ListClusterConfigsResponseBody &&) = default ;
    ListClusterConfigsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListClusterConfigsResponseBody() = default ;
    ListClusterConfigsResponseBody& operator=(const ListClusterConfigsResponseBody &) = default ;
    ListClusterConfigsResponseBody& operator=(ListClusterConfigsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clusterConfigs_ != nullptr
        && this->errorCode_ != nullptr && this->errorMessage_ != nullptr && this->httpStatusCode_ != nullptr && this->requestId_ != nullptr && this->success_ != nullptr; };
    // clusterConfigs Field Functions 
    bool hasClusterConfigs() const { return this->clusterConfigs_ != nullptr;};
    void deleteClusterConfigs() { this->clusterConfigs_ = nullptr;};
    inline const vector<ClusterConfig> & clusterConfigs() const { DARABONBA_PTR_GET_CONST(clusterConfigs_, vector<ClusterConfig>) };
    inline vector<ClusterConfig> clusterConfigs() { DARABONBA_PTR_GET(clusterConfigs_, vector<ClusterConfig>) };
    inline ListClusterConfigsResponseBody& setClusterConfigs(const vector<ClusterConfig> & clusterConfigs) { DARABONBA_PTR_SET_VALUE(clusterConfigs_, clusterConfigs) };
    inline ListClusterConfigsResponseBody& setClusterConfigs(vector<ClusterConfig> && clusterConfigs) { DARABONBA_PTR_SET_RVALUE(clusterConfigs_, clusterConfigs) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ListClusterConfigsResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline ListClusterConfigsResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t httpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListClusterConfigsResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListClusterConfigsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListClusterConfigsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // A list of configurations of cluster modules.
    std::shared_ptr<vector<ClusterConfig>> clusterConfigs_ = nullptr;
    // The error code.
    std::shared_ptr<string> errorCode_ = nullptr;
    // The error message.
    std::shared_ptr<string> errorMessage_ = nullptr;
    // The HTTP status code.
    std::shared_ptr<int32_t> httpStatusCode_ = nullptr;
    // The request ID. You can locate logs and troubleshoot issues based on the ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request was successful. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
