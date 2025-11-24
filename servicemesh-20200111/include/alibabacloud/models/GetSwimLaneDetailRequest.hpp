// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSWIMLANEDETAILREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETSWIMLANEDETAILREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class GetSwimLaneDetailRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSwimLaneDetailRequest& obj) { 
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(ServiceMeshId, serviceMeshId_);
      DARABONBA_PTR_TO_JSON(SwimLaneName, swimLaneName_);
    };
    friend void from_json(const Darabonba::Json& j, GetSwimLaneDetailRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(ServiceMeshId, serviceMeshId_);
      DARABONBA_PTR_FROM_JSON(SwimLaneName, swimLaneName_);
    };
    GetSwimLaneDetailRequest() = default ;
    GetSwimLaneDetailRequest(const GetSwimLaneDetailRequest &) = default ;
    GetSwimLaneDetailRequest(GetSwimLaneDetailRequest &&) = default ;
    GetSwimLaneDetailRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSwimLaneDetailRequest() = default ;
    GetSwimLaneDetailRequest& operator=(const GetSwimLaneDetailRequest &) = default ;
    GetSwimLaneDetailRequest& operator=(GetSwimLaneDetailRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->groupName_ == nullptr
        && return this->serviceMeshId_ == nullptr && return this->swimLaneName_ == nullptr; };
    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline GetSwimLaneDetailRequest& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // serviceMeshId Field Functions 
    bool hasServiceMeshId() const { return this->serviceMeshId_ != nullptr;};
    void deleteServiceMeshId() { this->serviceMeshId_ = nullptr;};
    inline string serviceMeshId() const { DARABONBA_PTR_GET_DEFAULT(serviceMeshId_, "") };
    inline GetSwimLaneDetailRequest& setServiceMeshId(string serviceMeshId) { DARABONBA_PTR_SET_VALUE(serviceMeshId_, serviceMeshId) };


    // swimLaneName Field Functions 
    bool hasSwimLaneName() const { return this->swimLaneName_ != nullptr;};
    void deleteSwimLaneName() { this->swimLaneName_ = nullptr;};
    inline string swimLaneName() const { DARABONBA_PTR_GET_DEFAULT(swimLaneName_, "") };
    inline GetSwimLaneDetailRequest& setSwimLaneName(string swimLaneName) { DARABONBA_PTR_SET_VALUE(swimLaneName_, swimLaneName) };


  protected:
    // The name of the lane group.
    std::shared_ptr<string> groupName_ = nullptr;
    // The ID of the Service Mesh (ASM) instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> serviceMeshId_ = nullptr;
    // The name of the lane.
    std::shared_ptr<string> swimLaneName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
