// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETURLUPLOADINFOSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETURLUPLOADINFOSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetURLUploadInfosResponseBodyURLUploadInfoList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetURLUploadInfosResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetURLUploadInfosResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NonExists, nonExists_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(URLUploadInfoList, URLUploadInfoList_);
    };
    friend void from_json(const Darabonba::Json& j, GetURLUploadInfosResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NonExists, nonExists_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(URLUploadInfoList, URLUploadInfoList_);
    };
    GetURLUploadInfosResponseBody() = default ;
    GetURLUploadInfosResponseBody(const GetURLUploadInfosResponseBody &) = default ;
    GetURLUploadInfosResponseBody(GetURLUploadInfosResponseBody &&) = default ;
    GetURLUploadInfosResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetURLUploadInfosResponseBody() = default ;
    GetURLUploadInfosResponseBody& operator=(const GetURLUploadInfosResponseBody &) = default ;
    GetURLUploadInfosResponseBody& operator=(GetURLUploadInfosResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->nonExists_ == nullptr
        && return this->requestId_ == nullptr && return this->URLUploadInfoList_ == nullptr; };
    // nonExists Field Functions 
    bool hasNonExists() const { return this->nonExists_ != nullptr;};
    void deleteNonExists() { this->nonExists_ = nullptr;};
    inline const vector<string> & nonExists() const { DARABONBA_PTR_GET_CONST(nonExists_, vector<string>) };
    inline vector<string> nonExists() { DARABONBA_PTR_GET(nonExists_, vector<string>) };
    inline GetURLUploadInfosResponseBody& setNonExists(const vector<string> & nonExists) { DARABONBA_PTR_SET_VALUE(nonExists_, nonExists) };
    inline GetURLUploadInfosResponseBody& setNonExists(vector<string> && nonExists) { DARABONBA_PTR_SET_RVALUE(nonExists_, nonExists) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetURLUploadInfosResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // URLUploadInfoList Field Functions 
    bool hasURLUploadInfoList() const { return this->URLUploadInfoList_ != nullptr;};
    void deleteURLUploadInfoList() { this->URLUploadInfoList_ = nullptr;};
    inline const vector<GetURLUploadInfosResponseBodyURLUploadInfoList> & URLUploadInfoList() const { DARABONBA_PTR_GET_CONST(URLUploadInfoList_, vector<GetURLUploadInfosResponseBodyURLUploadInfoList>) };
    inline vector<GetURLUploadInfosResponseBodyURLUploadInfoList> URLUploadInfoList() { DARABONBA_PTR_GET(URLUploadInfoList_, vector<GetURLUploadInfosResponseBodyURLUploadInfoList>) };
    inline GetURLUploadInfosResponseBody& setURLUploadInfoList(const vector<GetURLUploadInfosResponseBodyURLUploadInfoList> & URLUploadInfoList) { DARABONBA_PTR_SET_VALUE(URLUploadInfoList_, URLUploadInfoList) };
    inline GetURLUploadInfosResponseBody& setURLUploadInfoList(vector<GetURLUploadInfosResponseBodyURLUploadInfoList> && URLUploadInfoList) { DARABONBA_PTR_SET_RVALUE(URLUploadInfoList_, URLUploadInfoList) };


  protected:
    // The job IDs or upload URLs that do not exist.
    std::shared_ptr<vector<string>> nonExists_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The information about URL-based upload jobs. For more information, see the "URLUploadInfo: the information about a URL-based upload job" section of the [Basic structures](https://help.aliyun.com/document_detail/52839.html) topic.
    std::shared_ptr<vector<GetURLUploadInfosResponseBodyURLUploadInfoList>> URLUploadInfoList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
