// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSWIMLANEGROUPLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSWIMLANEGROUPLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetSwimLaneGroupListResponseBodySwimLaneGroupList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class GetSwimLaneGroupListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSwimLaneGroupListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SwimLaneGroupList, swimLaneGroupList_);
    };
    friend void from_json(const Darabonba::Json& j, GetSwimLaneGroupListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SwimLaneGroupList, swimLaneGroupList_);
    };
    GetSwimLaneGroupListResponseBody() = default ;
    GetSwimLaneGroupListResponseBody(const GetSwimLaneGroupListResponseBody &) = default ;
    GetSwimLaneGroupListResponseBody(GetSwimLaneGroupListResponseBody &&) = default ;
    GetSwimLaneGroupListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSwimLaneGroupListResponseBody() = default ;
    GetSwimLaneGroupListResponseBody& operator=(const GetSwimLaneGroupListResponseBody &) = default ;
    GetSwimLaneGroupListResponseBody& operator=(GetSwimLaneGroupListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->swimLaneGroupList_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSwimLaneGroupListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // swimLaneGroupList Field Functions 
    bool hasSwimLaneGroupList() const { return this->swimLaneGroupList_ != nullptr;};
    void deleteSwimLaneGroupList() { this->swimLaneGroupList_ = nullptr;};
    inline const vector<GetSwimLaneGroupListResponseBodySwimLaneGroupList> & swimLaneGroupList() const { DARABONBA_PTR_GET_CONST(swimLaneGroupList_, vector<GetSwimLaneGroupListResponseBodySwimLaneGroupList>) };
    inline vector<GetSwimLaneGroupListResponseBodySwimLaneGroupList> swimLaneGroupList() { DARABONBA_PTR_GET(swimLaneGroupList_, vector<GetSwimLaneGroupListResponseBodySwimLaneGroupList>) };
    inline GetSwimLaneGroupListResponseBody& setSwimLaneGroupList(const vector<GetSwimLaneGroupListResponseBodySwimLaneGroupList> & swimLaneGroupList) { DARABONBA_PTR_SET_VALUE(swimLaneGroupList_, swimLaneGroupList) };
    inline GetSwimLaneGroupListResponseBody& setSwimLaneGroupList(vector<GetSwimLaneGroupListResponseBodySwimLaneGroupList> && swimLaneGroupList) { DARABONBA_PTR_SET_RVALUE(swimLaneGroupList_, swimLaneGroupList) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The information about the lane group.
    std::shared_ptr<vector<GetSwimLaneGroupListResponseBodySwimLaneGroupList>> swimLaneGroupList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
