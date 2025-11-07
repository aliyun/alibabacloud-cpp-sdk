// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETNATTOPNRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETNATTOPNRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetNatTopNResponseBodyNatGatewayTopN.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Nis20211216
{
namespace Models
{
  class GetNatTopNResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetNatTopNResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(IsTopNOpen, isTopNOpen_);
      DARABONBA_PTR_TO_JSON(NatGatewayTopN, natGatewayTopN_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetNatTopNResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(IsTopNOpen, isTopNOpen_);
      DARABONBA_PTR_FROM_JSON(NatGatewayTopN, natGatewayTopN_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetNatTopNResponseBody() = default ;
    GetNatTopNResponseBody(const GetNatTopNResponseBody &) = default ;
    GetNatTopNResponseBody(GetNatTopNResponseBody &&) = default ;
    GetNatTopNResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetNatTopNResponseBody() = default ;
    GetNatTopNResponseBody& operator=(const GetNatTopNResponseBody &) = default ;
    GetNatTopNResponseBody& operator=(GetNatTopNResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->isTopNOpen_ == nullptr
        && return this->natGatewayTopN_ == nullptr && return this->requestId_ == nullptr; };
    // isTopNOpen Field Functions 
    bool hasIsTopNOpen() const { return this->isTopNOpen_ != nullptr;};
    void deleteIsTopNOpen() { this->isTopNOpen_ = nullptr;};
    inline bool isTopNOpen() const { DARABONBA_PTR_GET_DEFAULT(isTopNOpen_, false) };
    inline GetNatTopNResponseBody& setIsTopNOpen(bool isTopNOpen) { DARABONBA_PTR_SET_VALUE(isTopNOpen_, isTopNOpen) };


    // natGatewayTopN Field Functions 
    bool hasNatGatewayTopN() const { return this->natGatewayTopN_ != nullptr;};
    void deleteNatGatewayTopN() { this->natGatewayTopN_ = nullptr;};
    inline const vector<GetNatTopNResponseBodyNatGatewayTopN> & natGatewayTopN() const { DARABONBA_PTR_GET_CONST(natGatewayTopN_, vector<GetNatTopNResponseBodyNatGatewayTopN>) };
    inline vector<GetNatTopNResponseBodyNatGatewayTopN> natGatewayTopN() { DARABONBA_PTR_GET(natGatewayTopN_, vector<GetNatTopNResponseBodyNatGatewayTopN>) };
    inline GetNatTopNResponseBody& setNatGatewayTopN(const vector<GetNatTopNResponseBodyNatGatewayTopN> & natGatewayTopN) { DARABONBA_PTR_SET_VALUE(natGatewayTopN_, natGatewayTopN) };
    inline GetNatTopNResponseBody& setNatGatewayTopN(vector<GetNatTopNResponseBodyNatGatewayTopN> && natGatewayTopN) { DARABONBA_PTR_SET_RVALUE(natGatewayTopN_, natGatewayTopN) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetNatTopNResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Indicates whether Network Intelligence Service (NIS) is activated. The NatGatewayTopN parameter returns an empty array when NIS is not activated.
    // 
    // *   **true**: activated
    // *   **false**: not activated
    std::shared_ptr<bool> isTopNOpen_ = nullptr;
    // An array of statistics about real-time SNAT performance ranking.
    std::shared_ptr<vector<GetNatTopNResponseBodyNatGatewayTopN>> natGatewayTopN_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Nis20211216
#endif
