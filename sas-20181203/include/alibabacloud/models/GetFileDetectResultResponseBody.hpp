// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFILEDETECTRESULTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETFILEDETECTRESULTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetFileDetectResultResponseBodyResultList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetFileDetectResultResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFileDetectResultResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultList, resultList_);
    };
    friend void from_json(const Darabonba::Json& j, GetFileDetectResultResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultList, resultList_);
    };
    GetFileDetectResultResponseBody() = default ;
    GetFileDetectResultResponseBody(const GetFileDetectResultResponseBody &) = default ;
    GetFileDetectResultResponseBody(GetFileDetectResultResponseBody &&) = default ;
    GetFileDetectResultResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFileDetectResultResponseBody() = default ;
    GetFileDetectResultResponseBody& operator=(const GetFileDetectResultResponseBody &) = default ;
    GetFileDetectResultResponseBody& operator=(GetFileDetectResultResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->resultList_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetFileDetectResultResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultList Field Functions 
    bool hasResultList() const { return this->resultList_ != nullptr;};
    void deleteResultList() { this->resultList_ = nullptr;};
    inline const vector<GetFileDetectResultResponseBodyResultList> & resultList() const { DARABONBA_PTR_GET_CONST(resultList_, vector<GetFileDetectResultResponseBodyResultList>) };
    inline vector<GetFileDetectResultResponseBodyResultList> resultList() { DARABONBA_PTR_GET(resultList_, vector<GetFileDetectResultResponseBodyResultList>) };
    inline GetFileDetectResultResponseBody& setResultList(const vector<GetFileDetectResultResponseBodyResultList> & resultList) { DARABONBA_PTR_SET_VALUE(resultList_, resultList) };
    inline GetFileDetectResultResponseBody& setResultList(vector<GetFileDetectResultResponseBodyResultList> && resultList) { DARABONBA_PTR_SET_RVALUE(resultList_, resultList) };


  protected:
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
    // An array that consists of file detection results.
    std::shared_ptr<vector<GetFileDetectResultResponseBodyResultList>> resultList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
