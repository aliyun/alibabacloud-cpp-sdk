// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLINDORMENGINECONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETLINDORMENGINECONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetLindormEngineConfigResponseBodyEngineConfigs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hitsdb20200615
{
namespace Models
{
  class GetLindormEngineConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLindormEngineConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(EngineConfigs, engineConfigs_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetLindormEngineConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(EngineConfigs, engineConfigs_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetLindormEngineConfigResponseBody() = default ;
    GetLindormEngineConfigResponseBody(const GetLindormEngineConfigResponseBody &) = default ;
    GetLindormEngineConfigResponseBody(GetLindormEngineConfigResponseBody &&) = default ;
    GetLindormEngineConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLindormEngineConfigResponseBody() = default ;
    GetLindormEngineConfigResponseBody& operator=(const GetLindormEngineConfigResponseBody &) = default ;
    GetLindormEngineConfigResponseBody& operator=(GetLindormEngineConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && return this->engineConfigs_ == nullptr && return this->requestId_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string accessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline GetLindormEngineConfigResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // engineConfigs Field Functions 
    bool hasEngineConfigs() const { return this->engineConfigs_ != nullptr;};
    void deleteEngineConfigs() { this->engineConfigs_ = nullptr;};
    inline const vector<GetLindormEngineConfigResponseBodyEngineConfigs> & engineConfigs() const { DARABONBA_PTR_GET_CONST(engineConfigs_, vector<GetLindormEngineConfigResponseBodyEngineConfigs>) };
    inline vector<GetLindormEngineConfigResponseBodyEngineConfigs> engineConfigs() { DARABONBA_PTR_GET(engineConfigs_, vector<GetLindormEngineConfigResponseBodyEngineConfigs>) };
    inline GetLindormEngineConfigResponseBody& setEngineConfigs(const vector<GetLindormEngineConfigResponseBodyEngineConfigs> & engineConfigs) { DARABONBA_PTR_SET_VALUE(engineConfigs_, engineConfigs) };
    inline GetLindormEngineConfigResponseBody& setEngineConfigs(vector<GetLindormEngineConfigResponseBodyEngineConfigs> && engineConfigs) { DARABONBA_PTR_SET_RVALUE(engineConfigs_, engineConfigs) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetLindormEngineConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<string> accessDeniedDetail_ = nullptr;
    std::shared_ptr<vector<GetLindormEngineConfigResponseBodyEngineConfigs>> engineConfigs_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hitsdb20200615
#endif
