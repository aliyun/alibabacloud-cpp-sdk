// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMULTIPLETRACERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETMULTIPLETRACERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetMultipleTraceResponseBodyMultiCallChainInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class GetMultipleTraceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMultipleTraceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MultiCallChainInfos, multiCallChainInfos_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetMultipleTraceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MultiCallChainInfos, multiCallChainInfos_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetMultipleTraceResponseBody() = default ;
    GetMultipleTraceResponseBody(const GetMultipleTraceResponseBody &) = default ;
    GetMultipleTraceResponseBody(GetMultipleTraceResponseBody &&) = default ;
    GetMultipleTraceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMultipleTraceResponseBody() = default ;
    GetMultipleTraceResponseBody& operator=(const GetMultipleTraceResponseBody &) = default ;
    GetMultipleTraceResponseBody& operator=(GetMultipleTraceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->multiCallChainInfos_ != nullptr
        && this->requestId_ != nullptr; };
    // multiCallChainInfos Field Functions 
    bool hasMultiCallChainInfos() const { return this->multiCallChainInfos_ != nullptr;};
    void deleteMultiCallChainInfos() { this->multiCallChainInfos_ = nullptr;};
    inline const vector<GetMultipleTraceResponseBodyMultiCallChainInfos> & multiCallChainInfos() const { DARABONBA_PTR_GET_CONST(multiCallChainInfos_, vector<GetMultipleTraceResponseBodyMultiCallChainInfos>) };
    inline vector<GetMultipleTraceResponseBodyMultiCallChainInfos> multiCallChainInfos() { DARABONBA_PTR_GET(multiCallChainInfos_, vector<GetMultipleTraceResponseBodyMultiCallChainInfos>) };
    inline GetMultipleTraceResponseBody& setMultiCallChainInfos(const vector<GetMultipleTraceResponseBodyMultiCallChainInfos> & multiCallChainInfos) { DARABONBA_PTR_SET_VALUE(multiCallChainInfos_, multiCallChainInfos) };
    inline GetMultipleTraceResponseBody& setMultiCallChainInfos(vector<GetMultipleTraceResponseBodyMultiCallChainInfos> && multiCallChainInfos) { DARABONBA_PTR_SET_RVALUE(multiCallChainInfos_, multiCallChainInfos) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetMultipleTraceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of traces.
    std::shared_ptr<vector<GetMultipleTraceResponseBodyMultiCallChainInfos>> multiCallChainInfos_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
