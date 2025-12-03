// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFILEDETECTRESULTINNERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETFILEDETECTRESULTINNERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetFileDetectResultInnerResponseBodyResultList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20210114
{
namespace Models
{
  class GetFileDetectResultInnerResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFileDetectResultInnerResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultList, resultList_);
    };
    friend void from_json(const Darabonba::Json& j, GetFileDetectResultInnerResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultList, resultList_);
    };
    GetFileDetectResultInnerResponseBody() = default ;
    GetFileDetectResultInnerResponseBody(const GetFileDetectResultInnerResponseBody &) = default ;
    GetFileDetectResultInnerResponseBody(GetFileDetectResultInnerResponseBody &&) = default ;
    GetFileDetectResultInnerResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFileDetectResultInnerResponseBody() = default ;
    GetFileDetectResultInnerResponseBody& operator=(const GetFileDetectResultInnerResponseBody &) = default ;
    GetFileDetectResultInnerResponseBody& operator=(GetFileDetectResultInnerResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->resultList_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetFileDetectResultInnerResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultList Field Functions 
    bool hasResultList() const { return this->resultList_ != nullptr;};
    void deleteResultList() { this->resultList_ = nullptr;};
    inline const vector<GetFileDetectResultInnerResponseBodyResultList> & resultList() const { DARABONBA_PTR_GET_CONST(resultList_, vector<GetFileDetectResultInnerResponseBodyResultList>) };
    inline vector<GetFileDetectResultInnerResponseBodyResultList> resultList() { DARABONBA_PTR_GET(resultList_, vector<GetFileDetectResultInnerResponseBodyResultList>) };
    inline GetFileDetectResultInnerResponseBody& setResultList(const vector<GetFileDetectResultInnerResponseBodyResultList> & resultList) { DARABONBA_PTR_SET_VALUE(resultList_, resultList) };
    inline GetFileDetectResultInnerResponseBody& setResultList(vector<GetFileDetectResultInnerResponseBodyResultList> && resultList) { DARABONBA_PTR_SET_RVALUE(resultList_, resultList) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<vector<GetFileDetectResultInnerResponseBodyResultList>> resultList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20210114
#endif
