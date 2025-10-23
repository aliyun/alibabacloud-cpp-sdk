// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDEDICATEDIPWARMUPDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDEDICATEDIPWARMUPDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetDedicatedIpWarmUpDetailResponseBodyDetail.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dm20151123
{
namespace Models
{
  class GetDedicatedIpWarmUpDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDedicatedIpWarmUpDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Detail, detail_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetDedicatedIpWarmUpDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Detail, detail_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetDedicatedIpWarmUpDetailResponseBody() = default ;
    GetDedicatedIpWarmUpDetailResponseBody(const GetDedicatedIpWarmUpDetailResponseBody &) = default ;
    GetDedicatedIpWarmUpDetailResponseBody(GetDedicatedIpWarmUpDetailResponseBody &&) = default ;
    GetDedicatedIpWarmUpDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDedicatedIpWarmUpDetailResponseBody() = default ;
    GetDedicatedIpWarmUpDetailResponseBody& operator=(const GetDedicatedIpWarmUpDetailResponseBody &) = default ;
    GetDedicatedIpWarmUpDetailResponseBody& operator=(GetDedicatedIpWarmUpDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->detail_ == nullptr
        && return this->requestId_ == nullptr; };
    // detail Field Functions 
    bool hasDetail() const { return this->detail_ != nullptr;};
    void deleteDetail() { this->detail_ = nullptr;};
    inline const vector<GetDedicatedIpWarmUpDetailResponseBodyDetail> & detail() const { DARABONBA_PTR_GET_CONST(detail_, vector<GetDedicatedIpWarmUpDetailResponseBodyDetail>) };
    inline vector<GetDedicatedIpWarmUpDetailResponseBodyDetail> detail() { DARABONBA_PTR_GET(detail_, vector<GetDedicatedIpWarmUpDetailResponseBodyDetail>) };
    inline GetDedicatedIpWarmUpDetailResponseBody& setDetail(const vector<GetDedicatedIpWarmUpDetailResponseBodyDetail> & detail) { DARABONBA_PTR_SET_VALUE(detail_, detail) };
    inline GetDedicatedIpWarmUpDetailResponseBody& setDetail(vector<GetDedicatedIpWarmUpDetailResponseBodyDetail> && detail) { DARABONBA_PTR_SET_RVALUE(detail_, detail) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDedicatedIpWarmUpDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<GetDedicatedIpWarmUpDetailResponseBodyDetail>> detail_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dm20151123
#endif
