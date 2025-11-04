// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETURLUPLOADINFOSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETURLUPLOADINFOSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetUrlUploadInfosResponseBodyURLUploadInfoList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetUrlUploadInfosResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUrlUploadInfosResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NonExists, nonExists_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(URLUploadInfoList, URLUploadInfoList_);
    };
    friend void from_json(const Darabonba::Json& j, GetUrlUploadInfosResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NonExists, nonExists_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(URLUploadInfoList, URLUploadInfoList_);
    };
    GetUrlUploadInfosResponseBody() = default ;
    GetUrlUploadInfosResponseBody(const GetUrlUploadInfosResponseBody &) = default ;
    GetUrlUploadInfosResponseBody(GetUrlUploadInfosResponseBody &&) = default ;
    GetUrlUploadInfosResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUrlUploadInfosResponseBody() = default ;
    GetUrlUploadInfosResponseBody& operator=(const GetUrlUploadInfosResponseBody &) = default ;
    GetUrlUploadInfosResponseBody& operator=(GetUrlUploadInfosResponseBody &&) = default ;
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
    inline GetUrlUploadInfosResponseBody& setNonExists(const vector<string> & nonExists) { DARABONBA_PTR_SET_VALUE(nonExists_, nonExists) };
    inline GetUrlUploadInfosResponseBody& setNonExists(vector<string> && nonExists) { DARABONBA_PTR_SET_RVALUE(nonExists_, nonExists) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetUrlUploadInfosResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // URLUploadInfoList Field Functions 
    bool hasURLUploadInfoList() const { return this->URLUploadInfoList_ != nullptr;};
    void deleteURLUploadInfoList() { this->URLUploadInfoList_ = nullptr;};
    inline const vector<GetUrlUploadInfosResponseBodyURLUploadInfoList> & URLUploadInfoList() const { DARABONBA_PTR_GET_CONST(URLUploadInfoList_, vector<GetUrlUploadInfosResponseBodyURLUploadInfoList>) };
    inline vector<GetUrlUploadInfosResponseBodyURLUploadInfoList> URLUploadInfoList() { DARABONBA_PTR_GET(URLUploadInfoList_, vector<GetUrlUploadInfosResponseBodyURLUploadInfoList>) };
    inline GetUrlUploadInfosResponseBody& setURLUploadInfoList(const vector<GetUrlUploadInfosResponseBodyURLUploadInfoList> & URLUploadInfoList) { DARABONBA_PTR_SET_VALUE(URLUploadInfoList_, URLUploadInfoList) };
    inline GetUrlUploadInfosResponseBody& setURLUploadInfoList(vector<GetUrlUploadInfosResponseBodyURLUploadInfoList> && URLUploadInfoList) { DARABONBA_PTR_SET_RVALUE(URLUploadInfoList_, URLUploadInfoList) };


  protected:
    // The job IDs or upload URLs that do not exist.
    std::shared_ptr<vector<string>> nonExists_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The details about URL-based upload jobs.
    std::shared_ptr<vector<GetUrlUploadInfosResponseBodyURLUploadInfoList>> URLUploadInfoList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
