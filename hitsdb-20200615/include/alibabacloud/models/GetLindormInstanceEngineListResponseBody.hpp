// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLINDORMINSTANCEENGINELISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETLINDORMINSTANCEENGINELISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetLindormInstanceEngineListResponseBodyEngineList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hitsdb20200615
{
namespace Models
{
  class GetLindormInstanceEngineListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLindormInstanceEngineListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(EngineList, engineList_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetLindormInstanceEngineListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(EngineList, engineList_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetLindormInstanceEngineListResponseBody() = default ;
    GetLindormInstanceEngineListResponseBody(const GetLindormInstanceEngineListResponseBody &) = default ;
    GetLindormInstanceEngineListResponseBody(GetLindormInstanceEngineListResponseBody &&) = default ;
    GetLindormInstanceEngineListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLindormInstanceEngineListResponseBody() = default ;
    GetLindormInstanceEngineListResponseBody& operator=(const GetLindormInstanceEngineListResponseBody &) = default ;
    GetLindormInstanceEngineListResponseBody& operator=(GetLindormInstanceEngineListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && return this->engineList_ == nullptr && return this->instanceId_ == nullptr && return this->requestId_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string accessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline GetLindormInstanceEngineListResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // engineList Field Functions 
    bool hasEngineList() const { return this->engineList_ != nullptr;};
    void deleteEngineList() { this->engineList_ = nullptr;};
    inline const vector<GetLindormInstanceEngineListResponseBodyEngineList> & engineList() const { DARABONBA_PTR_GET_CONST(engineList_, vector<GetLindormInstanceEngineListResponseBodyEngineList>) };
    inline vector<GetLindormInstanceEngineListResponseBodyEngineList> engineList() { DARABONBA_PTR_GET(engineList_, vector<GetLindormInstanceEngineListResponseBodyEngineList>) };
    inline GetLindormInstanceEngineListResponseBody& setEngineList(const vector<GetLindormInstanceEngineListResponseBodyEngineList> & engineList) { DARABONBA_PTR_SET_VALUE(engineList_, engineList) };
    inline GetLindormInstanceEngineListResponseBody& setEngineList(vector<GetLindormInstanceEngineListResponseBodyEngineList> && engineList) { DARABONBA_PTR_SET_RVALUE(engineList_, engineList) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetLindormInstanceEngineListResponseBody& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetLindormInstanceEngineListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details about the access denial.
    std::shared_ptr<string> accessDeniedDetail_ = nullptr;
    // The list of engines that can run on the specified instance.
    std::shared_ptr<vector<GetLindormInstanceEngineListResponseBodyEngineList>> engineList_ = nullptr;
    // Instance ID.
    std::shared_ptr<string> instanceId_ = nullptr;
    // Request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hitsdb20200615
#endif
