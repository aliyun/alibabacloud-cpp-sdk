// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCHECKSTRUCTURERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCHECKSTRUCTURERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetCheckStructureResponseBodyCheckStructureResponse.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetCheckStructureResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCheckStructureResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CheckStructureResponse, checkStructureResponse_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetCheckStructureResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckStructureResponse, checkStructureResponse_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetCheckStructureResponseBody() = default ;
    GetCheckStructureResponseBody(const GetCheckStructureResponseBody &) = default ;
    GetCheckStructureResponseBody(GetCheckStructureResponseBody &&) = default ;
    GetCheckStructureResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCheckStructureResponseBody() = default ;
    GetCheckStructureResponseBody& operator=(const GetCheckStructureResponseBody &) = default ;
    GetCheckStructureResponseBody& operator=(GetCheckStructureResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->checkStructureResponse_ == nullptr
        && return this->requestId_ == nullptr; };
    // checkStructureResponse Field Functions 
    bool hasCheckStructureResponse() const { return this->checkStructureResponse_ != nullptr;};
    void deleteCheckStructureResponse() { this->checkStructureResponse_ = nullptr;};
    inline const vector<GetCheckStructureResponseBodyCheckStructureResponse> & checkStructureResponse() const { DARABONBA_PTR_GET_CONST(checkStructureResponse_, vector<GetCheckStructureResponseBodyCheckStructureResponse>) };
    inline vector<GetCheckStructureResponseBodyCheckStructureResponse> checkStructureResponse() { DARABONBA_PTR_GET(checkStructureResponse_, vector<GetCheckStructureResponseBodyCheckStructureResponse>) };
    inline GetCheckStructureResponseBody& setCheckStructureResponse(const vector<GetCheckStructureResponseBodyCheckStructureResponse> & checkStructureResponse) { DARABONBA_PTR_SET_VALUE(checkStructureResponse_, checkStructureResponse) };
    inline GetCheckStructureResponseBody& setCheckStructureResponse(vector<GetCheckStructureResponseBodyCheckStructureResponse> && checkStructureResponse) { DARABONBA_PTR_SET_RVALUE(checkStructureResponse_, checkStructureResponse) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetCheckStructureResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The structure information about check items provided by the configuration assessment feature.
    std::shared_ptr<vector<GetCheckStructureResponseBodyCheckStructureResponse>> checkStructureResponse_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
