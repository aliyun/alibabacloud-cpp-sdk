// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEBATCHUPLOADURLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEBATCHUPLOADURLRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateBatchUploadUrlResponseBodyUploadUrlList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class CreateBatchUploadUrlResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateBatchUploadUrlResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(UploadUrlList, uploadUrlList_);
    };
    friend void from_json(const Darabonba::Json& j, CreateBatchUploadUrlResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(UploadUrlList, uploadUrlList_);
    };
    CreateBatchUploadUrlResponseBody() = default ;
    CreateBatchUploadUrlResponseBody(const CreateBatchUploadUrlResponseBody &) = default ;
    CreateBatchUploadUrlResponseBody(CreateBatchUploadUrlResponseBody &&) = default ;
    CreateBatchUploadUrlResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateBatchUploadUrlResponseBody() = default ;
    CreateBatchUploadUrlResponseBody& operator=(const CreateBatchUploadUrlResponseBody &) = default ;
    CreateBatchUploadUrlResponseBody& operator=(CreateBatchUploadUrlResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->uploadUrlList_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateBatchUploadUrlResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // uploadUrlList Field Functions 
    bool hasUploadUrlList() const { return this->uploadUrlList_ != nullptr;};
    void deleteUploadUrlList() { this->uploadUrlList_ = nullptr;};
    inline const vector<CreateBatchUploadUrlResponseBodyUploadUrlList> & uploadUrlList() const { DARABONBA_PTR_GET_CONST(uploadUrlList_, vector<CreateBatchUploadUrlResponseBodyUploadUrlList>) };
    inline vector<CreateBatchUploadUrlResponseBodyUploadUrlList> uploadUrlList() { DARABONBA_PTR_GET(uploadUrlList_, vector<CreateBatchUploadUrlResponseBodyUploadUrlList>) };
    inline CreateBatchUploadUrlResponseBody& setUploadUrlList(const vector<CreateBatchUploadUrlResponseBodyUploadUrlList> & uploadUrlList) { DARABONBA_PTR_SET_VALUE(uploadUrlList_, uploadUrlList) };
    inline CreateBatchUploadUrlResponseBody& setUploadUrlList(vector<CreateBatchUploadUrlResponseBodyUploadUrlList> && uploadUrlList) { DARABONBA_PTR_SET_RVALUE(uploadUrlList_, uploadUrlList) };


  protected:
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
    // An array consisting of the parameters that are required to upload a file.
    std::shared_ptr<vector<CreateBatchUploadUrlResponseBodyUploadUrlList>> uploadUrlList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
