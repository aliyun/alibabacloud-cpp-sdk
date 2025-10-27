// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLINDORMV2STREAMENGINEINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETLINDORMV2STREAMENGINEINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetLindormV2StreamEngineInfoResponseBodyResourceGroupList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hitsdb20200615
{
namespace Models
{
  class GetLindormV2StreamEngineInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLindormV2StreamEngineInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupList, resourceGroupList_);
    };
    friend void from_json(const Darabonba::Json& j, GetLindormV2StreamEngineInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupList, resourceGroupList_);
    };
    GetLindormV2StreamEngineInfoResponseBody() = default ;
    GetLindormV2StreamEngineInfoResponseBody(const GetLindormV2StreamEngineInfoResponseBody &) = default ;
    GetLindormV2StreamEngineInfoResponseBody(GetLindormV2StreamEngineInfoResponseBody &&) = default ;
    GetLindormV2StreamEngineInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLindormV2StreamEngineInfoResponseBody() = default ;
    GetLindormV2StreamEngineInfoResponseBody& operator=(const GetLindormV2StreamEngineInfoResponseBody &) = default ;
    GetLindormV2StreamEngineInfoResponseBody& operator=(GetLindormV2StreamEngineInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && return this->requestId_ == nullptr && return this->resourceGroupList_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetLindormV2StreamEngineInfoResponseBody& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetLindormV2StreamEngineInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceGroupList Field Functions 
    bool hasResourceGroupList() const { return this->resourceGroupList_ != nullptr;};
    void deleteResourceGroupList() { this->resourceGroupList_ = nullptr;};
    inline const vector<GetLindormV2StreamEngineInfoResponseBodyResourceGroupList> & resourceGroupList() const { DARABONBA_PTR_GET_CONST(resourceGroupList_, vector<GetLindormV2StreamEngineInfoResponseBodyResourceGroupList>) };
    inline vector<GetLindormV2StreamEngineInfoResponseBodyResourceGroupList> resourceGroupList() { DARABONBA_PTR_GET(resourceGroupList_, vector<GetLindormV2StreamEngineInfoResponseBodyResourceGroupList>) };
    inline GetLindormV2StreamEngineInfoResponseBody& setResourceGroupList(const vector<GetLindormV2StreamEngineInfoResponseBodyResourceGroupList> & resourceGroupList) { DARABONBA_PTR_SET_VALUE(resourceGroupList_, resourceGroupList) };
    inline GetLindormV2StreamEngineInfoResponseBody& setResourceGroupList(vector<GetLindormV2StreamEngineInfoResponseBodyResourceGroupList> && resourceGroupList) { DARABONBA_PTR_SET_RVALUE(resourceGroupList_, resourceGroupList) };


  protected:
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<vector<GetLindormV2StreamEngineInfoResponseBodyResourceGroupList>> resourceGroupList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hitsdb20200615
#endif
