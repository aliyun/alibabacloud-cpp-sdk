// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETVBRFLOWTOPNRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETVBRFLOWTOPNRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetVbrFlowTopNResponseBodyVirtualBorderRouterFlowlogTopN.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Nis20211216
{
namespace Models
{
  class GetVbrFlowTopNResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetVbrFlowTopNResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(VirtualBorderRouterFlowlogTopN, virtualBorderRouterFlowlogTopN_);
    };
    friend void from_json(const Darabonba::Json& j, GetVbrFlowTopNResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(VirtualBorderRouterFlowlogTopN, virtualBorderRouterFlowlogTopN_);
    };
    GetVbrFlowTopNResponseBody() = default ;
    GetVbrFlowTopNResponseBody(const GetVbrFlowTopNResponseBody &) = default ;
    GetVbrFlowTopNResponseBody(GetVbrFlowTopNResponseBody &&) = default ;
    GetVbrFlowTopNResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetVbrFlowTopNResponseBody() = default ;
    GetVbrFlowTopNResponseBody& operator=(const GetVbrFlowTopNResponseBody &) = default ;
    GetVbrFlowTopNResponseBody& operator=(GetVbrFlowTopNResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->virtualBorderRouterFlowlogTopN_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetVbrFlowTopNResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // virtualBorderRouterFlowlogTopN Field Functions 
    bool hasVirtualBorderRouterFlowlogTopN() const { return this->virtualBorderRouterFlowlogTopN_ != nullptr;};
    void deleteVirtualBorderRouterFlowlogTopN() { this->virtualBorderRouterFlowlogTopN_ = nullptr;};
    inline const vector<GetVbrFlowTopNResponseBodyVirtualBorderRouterFlowlogTopN> & virtualBorderRouterFlowlogTopN() const { DARABONBA_PTR_GET_CONST(virtualBorderRouterFlowlogTopN_, vector<GetVbrFlowTopNResponseBodyVirtualBorderRouterFlowlogTopN>) };
    inline vector<GetVbrFlowTopNResponseBodyVirtualBorderRouterFlowlogTopN> virtualBorderRouterFlowlogTopN() { DARABONBA_PTR_GET(virtualBorderRouterFlowlogTopN_, vector<GetVbrFlowTopNResponseBodyVirtualBorderRouterFlowlogTopN>) };
    inline GetVbrFlowTopNResponseBody& setVirtualBorderRouterFlowlogTopN(const vector<GetVbrFlowTopNResponseBodyVirtualBorderRouterFlowlogTopN> & virtualBorderRouterFlowlogTopN) { DARABONBA_PTR_SET_VALUE(virtualBorderRouterFlowlogTopN_, virtualBorderRouterFlowlogTopN) };
    inline GetVbrFlowTopNResponseBody& setVirtualBorderRouterFlowlogTopN(vector<GetVbrFlowTopNResponseBodyVirtualBorderRouterFlowlogTopN> && virtualBorderRouterFlowlogTopN) { DARABONBA_PTR_SET_RVALUE(virtualBorderRouterFlowlogTopN_, virtualBorderRouterFlowlogTopN) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The ranking result of hybrid cloud traffic data.
    std::shared_ptr<vector<GetVbrFlowTopNResponseBodyVirtualBorderRouterFlowlogTopN>> virtualBorderRouterFlowlogTopN_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Nis20211216
#endif
