// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCLUSTERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCLUSTERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetClusterResponseBodyCluster.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hsm20231113
{
namespace Models
{
  class GetClusterResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetClusterResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Cluster, cluster_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetClusterResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Cluster, cluster_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetClusterResponseBody() = default ;
    GetClusterResponseBody(const GetClusterResponseBody &) = default ;
    GetClusterResponseBody(GetClusterResponseBody &&) = default ;
    GetClusterResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetClusterResponseBody() = default ;
    GetClusterResponseBody& operator=(const GetClusterResponseBody &) = default ;
    GetClusterResponseBody& operator=(GetClusterResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cluster_ == nullptr
        && return this->requestId_ == nullptr; };
    // cluster Field Functions 
    bool hasCluster() const { return this->cluster_ != nullptr;};
    void deleteCluster() { this->cluster_ = nullptr;};
    inline const GetClusterResponseBodyCluster & cluster() const { DARABONBA_PTR_GET_CONST(cluster_, GetClusterResponseBodyCluster) };
    inline GetClusterResponseBodyCluster cluster() { DARABONBA_PTR_GET(cluster_, GetClusterResponseBodyCluster) };
    inline GetClusterResponseBody& setCluster(const GetClusterResponseBodyCluster & cluster) { DARABONBA_PTR_SET_VALUE(cluster_, cluster) };
    inline GetClusterResponseBody& setCluster(GetClusterResponseBodyCluster && cluster) { DARABONBA_PTR_SET_RVALUE(cluster_, cluster) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetClusterResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The cluster details.
    std::shared_ptr<GetClusterResponseBodyCluster> cluster_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hsm20231113
#endif
