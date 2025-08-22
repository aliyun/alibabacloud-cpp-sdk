// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSTACKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSTACKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetStackResponseBodyStackInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class GetStackResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetStackResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StackInfo, stackInfo_);
    };
    friend void from_json(const Darabonba::Json& j, GetStackResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StackInfo, stackInfo_);
    };
    GetStackResponseBody() = default ;
    GetStackResponseBody(const GetStackResponseBody &) = default ;
    GetStackResponseBody(GetStackResponseBody &&) = default ;
    GetStackResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetStackResponseBody() = default ;
    GetStackResponseBody& operator=(const GetStackResponseBody &) = default ;
    GetStackResponseBody& operator=(GetStackResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->stackInfo_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetStackResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // stackInfo Field Functions 
    bool hasStackInfo() const { return this->stackInfo_ != nullptr;};
    void deleteStackInfo() { this->stackInfo_ = nullptr;};
    inline const vector<GetStackResponseBodyStackInfo> & stackInfo() const { DARABONBA_PTR_GET_CONST(stackInfo_, vector<GetStackResponseBodyStackInfo>) };
    inline vector<GetStackResponseBodyStackInfo> stackInfo() { DARABONBA_PTR_GET(stackInfo_, vector<GetStackResponseBodyStackInfo>) };
    inline GetStackResponseBody& setStackInfo(const vector<GetStackResponseBodyStackInfo> & stackInfo) { DARABONBA_PTR_SET_VALUE(stackInfo_, stackInfo) };
    inline GetStackResponseBody& setStackInfo(vector<GetStackResponseBodyStackInfo> && stackInfo) { DARABONBA_PTR_SET_RVALUE(stackInfo_, stackInfo) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The method stack details.
    std::shared_ptr<vector<GetStackResponseBodyStackInfo>> stackInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
