// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCLUSTERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCLUSTERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/Cluster.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
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
    virtual bool empty() const override { this->cluster_ != nullptr
        && this->requestId_ != nullptr; };
    // cluster Field Functions 
    bool hasCluster() const { return this->cluster_ != nullptr;};
    void deleteCluster() { this->cluster_ = nullptr;};
    inline const Cluster & cluster() const { DARABONBA_PTR_GET_CONST(cluster_, Cluster) };
    inline Cluster cluster() { DARABONBA_PTR_GET(cluster_, Cluster) };
    inline GetClusterResponseBody& setCluster(const Cluster & cluster) { DARABONBA_PTR_SET_VALUE(cluster_, cluster) };
    inline GetClusterResponseBody& setCluster(Cluster && cluster) { DARABONBA_PTR_SET_RVALUE(cluster_, cluster) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetClusterResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of the cluster.
    std::shared_ptr<Cluster> cluster_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
