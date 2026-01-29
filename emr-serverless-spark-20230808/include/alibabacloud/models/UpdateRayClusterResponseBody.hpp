// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATERAYCLUSTERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATERAYCLUSTERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrServerlessSpark20230808
{
namespace Models
{
  class UpdateRayClusterResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateRayClusterResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(clusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateRayClusterResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(clusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    UpdateRayClusterResponseBody() = default ;
    UpdateRayClusterResponseBody(const UpdateRayClusterResponseBody &) = default ;
    UpdateRayClusterResponseBody(UpdateRayClusterResponseBody &&) = default ;
    UpdateRayClusterResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateRayClusterResponseBody() = default ;
    UpdateRayClusterResponseBody& operator=(const UpdateRayClusterResponseBody &) = default ;
    UpdateRayClusterResponseBody& operator=(UpdateRayClusterResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && this->requestId_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline UpdateRayClusterResponseBody& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateRayClusterResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> clusterId_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif
