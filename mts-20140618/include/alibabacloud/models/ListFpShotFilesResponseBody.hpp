// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTFPSHOTFILESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTFPSHOTFILESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListFpShotFilesResponseBodyFpShotFileList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class ListFpShotFilesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListFpShotFilesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FpShotFileList, fpShotFileList_);
      DARABONBA_PTR_TO_JSON(NextPageToken, nextPageToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListFpShotFilesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FpShotFileList, fpShotFileList_);
      DARABONBA_PTR_FROM_JSON(NextPageToken, nextPageToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListFpShotFilesResponseBody() = default ;
    ListFpShotFilesResponseBody(const ListFpShotFilesResponseBody &) = default ;
    ListFpShotFilesResponseBody(ListFpShotFilesResponseBody &&) = default ;
    ListFpShotFilesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListFpShotFilesResponseBody() = default ;
    ListFpShotFilesResponseBody& operator=(const ListFpShotFilesResponseBody &) = default ;
    ListFpShotFilesResponseBody& operator=(ListFpShotFilesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fpShotFileList_ == nullptr
        && return this->nextPageToken_ == nullptr && return this->requestId_ == nullptr; };
    // fpShotFileList Field Functions 
    bool hasFpShotFileList() const { return this->fpShotFileList_ != nullptr;};
    void deleteFpShotFileList() { this->fpShotFileList_ = nullptr;};
    inline const ListFpShotFilesResponseBodyFpShotFileList & fpShotFileList() const { DARABONBA_PTR_GET_CONST(fpShotFileList_, ListFpShotFilesResponseBodyFpShotFileList) };
    inline ListFpShotFilesResponseBodyFpShotFileList fpShotFileList() { DARABONBA_PTR_GET(fpShotFileList_, ListFpShotFilesResponseBodyFpShotFileList) };
    inline ListFpShotFilesResponseBody& setFpShotFileList(const ListFpShotFilesResponseBodyFpShotFileList & fpShotFileList) { DARABONBA_PTR_SET_VALUE(fpShotFileList_, fpShotFileList) };
    inline ListFpShotFilesResponseBody& setFpShotFileList(ListFpShotFilesResponseBodyFpShotFileList && fpShotFileList) { DARABONBA_PTR_SET_RVALUE(fpShotFileList_, fpShotFileList) };


    // nextPageToken Field Functions 
    bool hasNextPageToken() const { return this->nextPageToken_ != nullptr;};
    void deleteNextPageToken() { this->nextPageToken_ = nullptr;};
    inline string nextPageToken() const { DARABONBA_PTR_GET_DEFAULT(nextPageToken_, "") };
    inline ListFpShotFilesResponseBody& setNextPageToken(string nextPageToken) { DARABONBA_PTR_SET_VALUE(nextPageToken_, nextPageToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListFpShotFilesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The media fingerprint files. For more information, see the "FpShotFile" section of the [Data types](https://help.aliyun.com/document_detail/29251.html) topic.
    std::shared_ptr<ListFpShotFilesResponseBodyFpShotFileList> fpShotFileList_ = nullptr;
    // The returned value of NextPageToken is a pagination token, which can be used in the next request to retrieve a new page of results.
    std::shared_ptr<string> nextPageToken_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
