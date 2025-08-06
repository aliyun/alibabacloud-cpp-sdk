// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAISERVICERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAISERVICERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetAIServiceResponseBodyAIList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetAIServiceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAIServiceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AIList, AIList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAIServiceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AIList, AIList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetAIServiceResponseBody() = default ;
    GetAIServiceResponseBody(const GetAIServiceResponseBody &) = default ;
    GetAIServiceResponseBody(GetAIServiceResponseBody &&) = default ;
    GetAIServiceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAIServiceResponseBody() = default ;
    GetAIServiceResponseBody& operator=(const GetAIServiceResponseBody &) = default ;
    GetAIServiceResponseBody& operator=(GetAIServiceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->AIList_ != nullptr
        && this->requestId_ != nullptr; };
    // AIList Field Functions 
    bool hasAIList() const { return this->AIList_ != nullptr;};
    void deleteAIList() { this->AIList_ = nullptr;};
    inline const vector<GetAIServiceResponseBodyAIList> & AIList() const { DARABONBA_PTR_GET_CONST(AIList_, vector<GetAIServiceResponseBodyAIList>) };
    inline vector<GetAIServiceResponseBodyAIList> AIList() { DARABONBA_PTR_GET(AIList_, vector<GetAIServiceResponseBodyAIList>) };
    inline GetAIServiceResponseBody& setAIList(const vector<GetAIServiceResponseBodyAIList> & AIList) { DARABONBA_PTR_SET_VALUE(AIList_, AIList) };
    inline GetAIServiceResponseBody& setAIList(vector<GetAIServiceResponseBodyAIList> && AIList) { DARABONBA_PTR_SET_RVALUE(AIList_, AIList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAIServiceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<GetAIServiceResponseBodyAIList>> AIList_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
