// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSWIMLANEGROUPLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETSWIMLANEGROUPLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class GetSwimLaneGroupListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSwimLaneGroupListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ServiceMeshId, serviceMeshId_);
    };
    friend void from_json(const Darabonba::Json& j, GetSwimLaneGroupListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ServiceMeshId, serviceMeshId_);
    };
    GetSwimLaneGroupListRequest() = default ;
    GetSwimLaneGroupListRequest(const GetSwimLaneGroupListRequest &) = default ;
    GetSwimLaneGroupListRequest(GetSwimLaneGroupListRequest &&) = default ;
    GetSwimLaneGroupListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSwimLaneGroupListRequest() = default ;
    GetSwimLaneGroupListRequest& operator=(const GetSwimLaneGroupListRequest &) = default ;
    GetSwimLaneGroupListRequest& operator=(GetSwimLaneGroupListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->serviceMeshId_ == nullptr; };
    // serviceMeshId Field Functions 
    bool hasServiceMeshId() const { return this->serviceMeshId_ != nullptr;};
    void deleteServiceMeshId() { this->serviceMeshId_ = nullptr;};
    inline string serviceMeshId() const { DARABONBA_PTR_GET_DEFAULT(serviceMeshId_, "") };
    inline GetSwimLaneGroupListRequest& setServiceMeshId(string serviceMeshId) { DARABONBA_PTR_SET_VALUE(serviceMeshId_, serviceMeshId) };


  protected:
    // The ASM instance ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> serviceMeshId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
