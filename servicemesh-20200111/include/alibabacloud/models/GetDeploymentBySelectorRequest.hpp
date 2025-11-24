// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDEPLOYMENTBYSELECTORREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETDEPLOYMENTBYSELECTORREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class GetDeploymentBySelectorRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDeploymentBySelectorRequest& obj) { 
      DARABONBA_PTR_TO_JSON(GuestCluster, guestCluster_);
      DARABONBA_PTR_TO_JSON(LabelSelector, labelSelector_);
      DARABONBA_PTR_TO_JSON(Limit, limit_);
      DARABONBA_PTR_TO_JSON(Mark, mark_);
      DARABONBA_PTR_TO_JSON(NameSpace, nameSpace_);
      DARABONBA_PTR_TO_JSON(ServiceMeshId, serviceMeshId_);
    };
    friend void from_json(const Darabonba::Json& j, GetDeploymentBySelectorRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(GuestCluster, guestCluster_);
      DARABONBA_PTR_FROM_JSON(LabelSelector, labelSelector_);
      DARABONBA_PTR_FROM_JSON(Limit, limit_);
      DARABONBA_PTR_FROM_JSON(Mark, mark_);
      DARABONBA_PTR_FROM_JSON(NameSpace, nameSpace_);
      DARABONBA_PTR_FROM_JSON(ServiceMeshId, serviceMeshId_);
    };
    GetDeploymentBySelectorRequest() = default ;
    GetDeploymentBySelectorRequest(const GetDeploymentBySelectorRequest &) = default ;
    GetDeploymentBySelectorRequest(GetDeploymentBySelectorRequest &&) = default ;
    GetDeploymentBySelectorRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDeploymentBySelectorRequest() = default ;
    GetDeploymentBySelectorRequest& operator=(const GetDeploymentBySelectorRequest &) = default ;
    GetDeploymentBySelectorRequest& operator=(GetDeploymentBySelectorRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->guestCluster_ == nullptr
        && return this->labelSelector_ == nullptr && return this->limit_ == nullptr && return this->mark_ == nullptr && return this->nameSpace_ == nullptr && return this->serviceMeshId_ == nullptr; };
    // guestCluster Field Functions 
    bool hasGuestCluster() const { return this->guestCluster_ != nullptr;};
    void deleteGuestCluster() { this->guestCluster_ = nullptr;};
    inline string guestCluster() const { DARABONBA_PTR_GET_DEFAULT(guestCluster_, "") };
    inline GetDeploymentBySelectorRequest& setGuestCluster(string guestCluster) { DARABONBA_PTR_SET_VALUE(guestCluster_, guestCluster) };


    // labelSelector Field Functions 
    bool hasLabelSelector() const { return this->labelSelector_ != nullptr;};
    void deleteLabelSelector() { this->labelSelector_ = nullptr;};
    inline const map<string, string> & labelSelector() const { DARABONBA_PTR_GET_CONST(labelSelector_, map<string, string>) };
    inline map<string, string> labelSelector() { DARABONBA_PTR_GET(labelSelector_, map<string, string>) };
    inline GetDeploymentBySelectorRequest& setLabelSelector(const map<string, string> & labelSelector) { DARABONBA_PTR_SET_VALUE(labelSelector_, labelSelector) };
    inline GetDeploymentBySelectorRequest& setLabelSelector(map<string, string> && labelSelector) { DARABONBA_PTR_SET_RVALUE(labelSelector_, labelSelector) };


    // limit Field Functions 
    bool hasLimit() const { return this->limit_ != nullptr;};
    void deleteLimit() { this->limit_ = nullptr;};
    inline int64_t limit() const { DARABONBA_PTR_GET_DEFAULT(limit_, 0L) };
    inline GetDeploymentBySelectorRequest& setLimit(int64_t limit) { DARABONBA_PTR_SET_VALUE(limit_, limit) };


    // mark Field Functions 
    bool hasMark() const { return this->mark_ != nullptr;};
    void deleteMark() { this->mark_ = nullptr;};
    inline string mark() const { DARABONBA_PTR_GET_DEFAULT(mark_, "") };
    inline GetDeploymentBySelectorRequest& setMark(string mark) { DARABONBA_PTR_SET_VALUE(mark_, mark) };


    // nameSpace Field Functions 
    bool hasNameSpace() const { return this->nameSpace_ != nullptr;};
    void deleteNameSpace() { this->nameSpace_ = nullptr;};
    inline string nameSpace() const { DARABONBA_PTR_GET_DEFAULT(nameSpace_, "") };
    inline GetDeploymentBySelectorRequest& setNameSpace(string nameSpace) { DARABONBA_PTR_SET_VALUE(nameSpace_, nameSpace) };


    // serviceMeshId Field Functions 
    bool hasServiceMeshId() const { return this->serviceMeshId_ != nullptr;};
    void deleteServiceMeshId() { this->serviceMeshId_ = nullptr;};
    inline string serviceMeshId() const { DARABONBA_PTR_GET_DEFAULT(serviceMeshId_, "") };
    inline GetDeploymentBySelectorRequest& setServiceMeshId(string serviceMeshId) { DARABONBA_PTR_SET_VALUE(serviceMeshId_, serviceMeshId) };


  protected:
    // The name of the cluster.
    std::shared_ptr<string> guestCluster_ = nullptr;
    // The label selector information.
    std::shared_ptr<map<string, string>> labelSelector_ = nullptr;
    // The maximum number of returned data entries.
    std::shared_ptr<int64_t> limit_ = nullptr;
    // The marker of data queried last time.
    std::shared_ptr<string> mark_ = nullptr;
    // The namespace.
    std::shared_ptr<string> nameSpace_ = nullptr;
    // The ID of the Alibaba Cloud Service Mesh (ASM) instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> serviceMeshId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
