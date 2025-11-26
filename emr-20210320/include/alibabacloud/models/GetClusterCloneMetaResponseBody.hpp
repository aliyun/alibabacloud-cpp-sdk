// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCLUSTERCLONEMETARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCLUSTERCLONEMETARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetClusterCloneMetaResponseBodyClusterCloneMeta.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class GetClusterCloneMetaResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetClusterCloneMetaResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterCloneMeta, clusterCloneMeta_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetClusterCloneMetaResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterCloneMeta, clusterCloneMeta_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetClusterCloneMetaResponseBody() = default ;
    GetClusterCloneMetaResponseBody(const GetClusterCloneMetaResponseBody &) = default ;
    GetClusterCloneMetaResponseBody(GetClusterCloneMetaResponseBody &&) = default ;
    GetClusterCloneMetaResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetClusterCloneMetaResponseBody() = default ;
    GetClusterCloneMetaResponseBody& operator=(const GetClusterCloneMetaResponseBody &) = default ;
    GetClusterCloneMetaResponseBody& operator=(GetClusterCloneMetaResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterCloneMeta_ == nullptr
        && return this->requestId_ == nullptr; };
    // clusterCloneMeta Field Functions 
    bool hasClusterCloneMeta() const { return this->clusterCloneMeta_ != nullptr;};
    void deleteClusterCloneMeta() { this->clusterCloneMeta_ = nullptr;};
    inline const GetClusterCloneMetaResponseBodyClusterCloneMeta & clusterCloneMeta() const { DARABONBA_PTR_GET_CONST(clusterCloneMeta_, GetClusterCloneMetaResponseBodyClusterCloneMeta) };
    inline GetClusterCloneMetaResponseBodyClusterCloneMeta clusterCloneMeta() { DARABONBA_PTR_GET(clusterCloneMeta_, GetClusterCloneMetaResponseBodyClusterCloneMeta) };
    inline GetClusterCloneMetaResponseBody& setClusterCloneMeta(const GetClusterCloneMetaResponseBodyClusterCloneMeta & clusterCloneMeta) { DARABONBA_PTR_SET_VALUE(clusterCloneMeta_, clusterCloneMeta) };
    inline GetClusterCloneMetaResponseBody& setClusterCloneMeta(GetClusterCloneMetaResponseBodyClusterCloneMeta && clusterCloneMeta) { DARABONBA_PTR_SET_RVALUE(clusterCloneMeta_, clusterCloneMeta) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetClusterCloneMetaResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Cluster clone metadata.
    std::shared_ptr<GetClusterCloneMetaResponseBodyClusterCloneMeta> clusterCloneMeta_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
