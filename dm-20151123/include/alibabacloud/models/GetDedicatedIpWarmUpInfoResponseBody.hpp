// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDEDICATEDIPWARMUPINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDEDICATEDIPWARMUPINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetDedicatedIpWarmUpInfoResponseBodyInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dm20151123
{
namespace Models
{
  class GetDedicatedIpWarmUpInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDedicatedIpWarmUpInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Info, info_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetDedicatedIpWarmUpInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Info, info_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetDedicatedIpWarmUpInfoResponseBody() = default ;
    GetDedicatedIpWarmUpInfoResponseBody(const GetDedicatedIpWarmUpInfoResponseBody &) = default ;
    GetDedicatedIpWarmUpInfoResponseBody(GetDedicatedIpWarmUpInfoResponseBody &&) = default ;
    GetDedicatedIpWarmUpInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDedicatedIpWarmUpInfoResponseBody() = default ;
    GetDedicatedIpWarmUpInfoResponseBody& operator=(const GetDedicatedIpWarmUpInfoResponseBody &) = default ;
    GetDedicatedIpWarmUpInfoResponseBody& operator=(GetDedicatedIpWarmUpInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->info_ == nullptr
        && return this->requestId_ == nullptr; };
    // info Field Functions 
    bool hasInfo() const { return this->info_ != nullptr;};
    void deleteInfo() { this->info_ = nullptr;};
    inline const vector<GetDedicatedIpWarmUpInfoResponseBodyInfo> & info() const { DARABONBA_PTR_GET_CONST(info_, vector<GetDedicatedIpWarmUpInfoResponseBodyInfo>) };
    inline vector<GetDedicatedIpWarmUpInfoResponseBodyInfo> info() { DARABONBA_PTR_GET(info_, vector<GetDedicatedIpWarmUpInfoResponseBodyInfo>) };
    inline GetDedicatedIpWarmUpInfoResponseBody& setInfo(const vector<GetDedicatedIpWarmUpInfoResponseBodyInfo> & info) { DARABONBA_PTR_SET_VALUE(info_, info) };
    inline GetDedicatedIpWarmUpInfoResponseBody& setInfo(vector<GetDedicatedIpWarmUpInfoResponseBodyInfo> && info) { DARABONBA_PTR_SET_RVALUE(info_, info) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDedicatedIpWarmUpInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<GetDedicatedIpWarmUpInfoResponseBodyInfo>> info_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dm20151123
#endif
