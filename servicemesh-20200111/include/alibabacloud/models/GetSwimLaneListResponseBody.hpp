// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSWIMLANELISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSWIMLANELISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetSwimLaneListResponseBodySwimLaneList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class GetSwimLaneListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSwimLaneListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SwimLaneList, swimLaneList_);
    };
    friend void from_json(const Darabonba::Json& j, GetSwimLaneListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SwimLaneList, swimLaneList_);
    };
    GetSwimLaneListResponseBody() = default ;
    GetSwimLaneListResponseBody(const GetSwimLaneListResponseBody &) = default ;
    GetSwimLaneListResponseBody(GetSwimLaneListResponseBody &&) = default ;
    GetSwimLaneListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSwimLaneListResponseBody() = default ;
    GetSwimLaneListResponseBody& operator=(const GetSwimLaneListResponseBody &) = default ;
    GetSwimLaneListResponseBody& operator=(GetSwimLaneListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->swimLaneList_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSwimLaneListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // swimLaneList Field Functions 
    bool hasSwimLaneList() const { return this->swimLaneList_ != nullptr;};
    void deleteSwimLaneList() { this->swimLaneList_ = nullptr;};
    inline const vector<GetSwimLaneListResponseBodySwimLaneList> & swimLaneList() const { DARABONBA_PTR_GET_CONST(swimLaneList_, vector<GetSwimLaneListResponseBodySwimLaneList>) };
    inline vector<GetSwimLaneListResponseBodySwimLaneList> swimLaneList() { DARABONBA_PTR_GET(swimLaneList_, vector<GetSwimLaneListResponseBodySwimLaneList>) };
    inline GetSwimLaneListResponseBody& setSwimLaneList(const vector<GetSwimLaneListResponseBodySwimLaneList> & swimLaneList) { DARABONBA_PTR_SET_VALUE(swimLaneList_, swimLaneList) };
    inline GetSwimLaneListResponseBody& setSwimLaneList(vector<GetSwimLaneListResponseBodySwimLaneList> && swimLaneList) { DARABONBA_PTR_SET_RVALUE(swimLaneList_, swimLaneList) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The swimlanes.
    std::shared_ptr<vector<GetSwimLaneListResponseBodySwimLaneList>> swimLaneList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
