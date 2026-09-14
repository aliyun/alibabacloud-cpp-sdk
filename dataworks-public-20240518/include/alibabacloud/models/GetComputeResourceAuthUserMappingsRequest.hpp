// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCOMPUTERESOURCEAUTHUSERMAPPINGSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETCOMPUTERESOURCEAUTHUSERMAPPINGSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetComputeResourceAuthUserMappingsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetComputeResourceAuthUserMappingsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ComputeResourceId, computeResourceId_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
    };
    friend void from_json(const Darabonba::Json& j, GetComputeResourceAuthUserMappingsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ComputeResourceId, computeResourceId_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
    };
    GetComputeResourceAuthUserMappingsRequest() = default ;
    GetComputeResourceAuthUserMappingsRequest(const GetComputeResourceAuthUserMappingsRequest &) = default ;
    GetComputeResourceAuthUserMappingsRequest(GetComputeResourceAuthUserMappingsRequest &&) = default ;
    GetComputeResourceAuthUserMappingsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetComputeResourceAuthUserMappingsRequest() = default ;
    GetComputeResourceAuthUserMappingsRequest& operator=(const GetComputeResourceAuthUserMappingsRequest &) = default ;
    GetComputeResourceAuthUserMappingsRequest& operator=(GetComputeResourceAuthUserMappingsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->computeResourceId_ == nullptr
        && this->projectId_ == nullptr; };
    // computeResourceId Field Functions 
    bool hasComputeResourceId() const { return this->computeResourceId_ != nullptr;};
    void deleteComputeResourceId() { this->computeResourceId_ = nullptr;};
    inline int64_t getComputeResourceId() const { DARABONBA_PTR_GET_DEFAULT(computeResourceId_, 0L) };
    inline GetComputeResourceAuthUserMappingsRequest& setComputeResourceId(int64_t computeResourceId) { DARABONBA_PTR_SET_VALUE(computeResourceId_, computeResourceId) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline GetComputeResourceAuthUserMappingsRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


  protected:
    // The ID of the compute resource.
    // 
    // This parameter is required.
    shared_ptr<int64_t> computeResourceId_ {};
    // The DataWorks workspace to which the data source belongs.
    // 
    // This parameter is required.
    shared_ptr<int64_t> projectId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
