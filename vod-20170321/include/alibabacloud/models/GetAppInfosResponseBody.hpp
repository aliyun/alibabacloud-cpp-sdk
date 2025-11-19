// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPPINFOSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAPPINFOSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetAppInfosResponseBodyAppInfoList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetAppInfosResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAppInfosResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AppInfoList, appInfoList_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(NonExistAppIds, nonExistAppIds_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAppInfosResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AppInfoList, appInfoList_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(NonExistAppIds, nonExistAppIds_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetAppInfosResponseBody() = default ;
    GetAppInfosResponseBody(const GetAppInfosResponseBody &) = default ;
    GetAppInfosResponseBody(GetAppInfosResponseBody &&) = default ;
    GetAppInfosResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAppInfosResponseBody() = default ;
    GetAppInfosResponseBody& operator=(const GetAppInfosResponseBody &) = default ;
    GetAppInfosResponseBody& operator=(GetAppInfosResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appInfoList_ == nullptr
        && return this->code_ == nullptr && return this->nonExistAppIds_ == nullptr && return this->requestId_ == nullptr; };
    // appInfoList Field Functions 
    bool hasAppInfoList() const { return this->appInfoList_ != nullptr;};
    void deleteAppInfoList() { this->appInfoList_ = nullptr;};
    inline const vector<GetAppInfosResponseBodyAppInfoList> & appInfoList() const { DARABONBA_PTR_GET_CONST(appInfoList_, vector<GetAppInfosResponseBodyAppInfoList>) };
    inline vector<GetAppInfosResponseBodyAppInfoList> appInfoList() { DARABONBA_PTR_GET(appInfoList_, vector<GetAppInfosResponseBodyAppInfoList>) };
    inline GetAppInfosResponseBody& setAppInfoList(const vector<GetAppInfosResponseBodyAppInfoList> & appInfoList) { DARABONBA_PTR_SET_VALUE(appInfoList_, appInfoList) };
    inline GetAppInfosResponseBody& setAppInfoList(vector<GetAppInfosResponseBodyAppInfoList> && appInfoList) { DARABONBA_PTR_SET_RVALUE(appInfoList_, appInfoList) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetAppInfosResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // nonExistAppIds Field Functions 
    bool hasNonExistAppIds() const { return this->nonExistAppIds_ != nullptr;};
    void deleteNonExistAppIds() { this->nonExistAppIds_ = nullptr;};
    inline const vector<string> & nonExistAppIds() const { DARABONBA_PTR_GET_CONST(nonExistAppIds_, vector<string>) };
    inline vector<string> nonExistAppIds() { DARABONBA_PTR_GET(nonExistAppIds_, vector<string>) };
    inline GetAppInfosResponseBody& setNonExistAppIds(const vector<string> & nonExistAppIds) { DARABONBA_PTR_SET_VALUE(nonExistAppIds_, nonExistAppIds) };
    inline GetAppInfosResponseBody& setNonExistAppIds(vector<string> && nonExistAppIds) { DARABONBA_PTR_SET_RVALUE(nonExistAppIds_, nonExistAppIds) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAppInfosResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of applications.
    std::shared_ptr<vector<GetAppInfosResponseBodyAppInfoList>> appInfoList_ = nullptr;
    // The HTTP status code that is returned.
    std::shared_ptr<string> code_ = nullptr;
    // The IDs of applications that do not exist.
    std::shared_ptr<vector<string>> nonExistAppIds_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
