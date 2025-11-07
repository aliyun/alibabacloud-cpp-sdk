// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTRANSITROUTERFLOWTOPNRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETTRANSITROUTERFLOWTOPNRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetTransitRouterFlowTopNResponseBodyTransitRouterFlowTopN.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Nis20211216
{
namespace Models
{
  class GetTransitRouterFlowTopNResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTransitRouterFlowTopNResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TransitRouterFlowTopN, transitRouterFlowTopN_);
    };
    friend void from_json(const Darabonba::Json& j, GetTransitRouterFlowTopNResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TransitRouterFlowTopN, transitRouterFlowTopN_);
    };
    GetTransitRouterFlowTopNResponseBody() = default ;
    GetTransitRouterFlowTopNResponseBody(const GetTransitRouterFlowTopNResponseBody &) = default ;
    GetTransitRouterFlowTopNResponseBody(GetTransitRouterFlowTopNResponseBody &&) = default ;
    GetTransitRouterFlowTopNResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTransitRouterFlowTopNResponseBody() = default ;
    GetTransitRouterFlowTopNResponseBody& operator=(const GetTransitRouterFlowTopNResponseBody &) = default ;
    GetTransitRouterFlowTopNResponseBody& operator=(GetTransitRouterFlowTopNResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->transitRouterFlowTopN_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetTransitRouterFlowTopNResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // transitRouterFlowTopN Field Functions 
    bool hasTransitRouterFlowTopN() const { return this->transitRouterFlowTopN_ != nullptr;};
    void deleteTransitRouterFlowTopN() { this->transitRouterFlowTopN_ = nullptr;};
    inline const vector<GetTransitRouterFlowTopNResponseBodyTransitRouterFlowTopN> & transitRouterFlowTopN() const { DARABONBA_PTR_GET_CONST(transitRouterFlowTopN_, vector<GetTransitRouterFlowTopNResponseBodyTransitRouterFlowTopN>) };
    inline vector<GetTransitRouterFlowTopNResponseBodyTransitRouterFlowTopN> transitRouterFlowTopN() { DARABONBA_PTR_GET(transitRouterFlowTopN_, vector<GetTransitRouterFlowTopNResponseBodyTransitRouterFlowTopN>) };
    inline GetTransitRouterFlowTopNResponseBody& setTransitRouterFlowTopN(const vector<GetTransitRouterFlowTopNResponseBodyTransitRouterFlowTopN> & transitRouterFlowTopN) { DARABONBA_PTR_SET_VALUE(transitRouterFlowTopN_, transitRouterFlowTopN) };
    inline GetTransitRouterFlowTopNResponseBody& setTransitRouterFlowTopN(vector<GetTransitRouterFlowTopNResponseBodyTransitRouterFlowTopN> && transitRouterFlowTopN) { DARABONBA_PTR_SET_RVALUE(transitRouterFlowTopN_, transitRouterFlowTopN) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The ranking result of inter-region traffic data.
    std::shared_ptr<vector<GetTransitRouterFlowTopNResponseBodyTransitRouterFlowTopN>> transitRouterFlowTopN_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Nis20211216
#endif
