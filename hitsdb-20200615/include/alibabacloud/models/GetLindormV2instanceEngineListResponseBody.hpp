// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLINDORMV2INSTANCEENGINELISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETLINDORMV2INSTANCEENGINELISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetLindormV2InstanceEngineListResponseBodyEngineList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hitsdb20200615
{
namespace Models
{
  class GetLindormV2InstanceEngineListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLindormV2InstanceEngineListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(EngineList, engineList_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetLindormV2InstanceEngineListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(EngineList, engineList_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetLindormV2InstanceEngineListResponseBody() = default ;
    GetLindormV2InstanceEngineListResponseBody(const GetLindormV2InstanceEngineListResponseBody &) = default ;
    GetLindormV2InstanceEngineListResponseBody(GetLindormV2InstanceEngineListResponseBody &&) = default ;
    GetLindormV2InstanceEngineListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLindormV2InstanceEngineListResponseBody() = default ;
    GetLindormV2InstanceEngineListResponseBody& operator=(const GetLindormV2InstanceEngineListResponseBody &) = default ;
    GetLindormV2InstanceEngineListResponseBody& operator=(GetLindormV2InstanceEngineListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accessDeniedDetail_ != nullptr
        && this->engineList_ != nullptr && this->instanceId_ != nullptr && this->requestId_ != nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string accessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline GetLindormV2InstanceEngineListResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // engineList Field Functions 
    bool hasEngineList() const { return this->engineList_ != nullptr;};
    void deleteEngineList() { this->engineList_ = nullptr;};
    inline const vector<GetLindormV2InstanceEngineListResponseBodyEngineList> & engineList() const { DARABONBA_PTR_GET_CONST(engineList_, vector<GetLindormV2InstanceEngineListResponseBodyEngineList>) };
    inline vector<GetLindormV2InstanceEngineListResponseBodyEngineList> engineList() { DARABONBA_PTR_GET(engineList_, vector<GetLindormV2InstanceEngineListResponseBodyEngineList>) };
    inline GetLindormV2InstanceEngineListResponseBody& setEngineList(const vector<GetLindormV2InstanceEngineListResponseBodyEngineList> & engineList) { DARABONBA_PTR_SET_VALUE(engineList_, engineList) };
    inline GetLindormV2InstanceEngineListResponseBody& setEngineList(vector<GetLindormV2InstanceEngineListResponseBodyEngineList> && engineList) { DARABONBA_PTR_SET_RVALUE(engineList_, engineList) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetLindormV2InstanceEngineListResponseBody& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetLindormV2InstanceEngineListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<string> accessDeniedDetail_ = nullptr;
    std::shared_ptr<vector<GetLindormV2InstanceEngineListResponseBodyEngineList>> engineList_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hitsdb20200615
#endif
