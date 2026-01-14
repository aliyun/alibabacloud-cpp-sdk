// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETOSSUPLOADTOKENRESULT_HPP_
#define ALIBABACLOUD_MODELS_GETOSSUPLOADTOKENRESULT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UploadInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class GetOssUploadTokenResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOssUploadTokenResult& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(uploadInfo, uploadInfo_);
    };
    friend void from_json(const Darabonba::Json& j, GetOssUploadTokenResult& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(uploadInfo, uploadInfo_);
    };
    GetOssUploadTokenResult() = default ;
    GetOssUploadTokenResult(const GetOssUploadTokenResult &) = default ;
    GetOssUploadTokenResult(GetOssUploadTokenResult &&) = default ;
    GetOssUploadTokenResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOssUploadTokenResult() = default ;
    GetOssUploadTokenResult& operator=(const GetOssUploadTokenResult &) = default ;
    GetOssUploadTokenResult& operator=(GetOssUploadTokenResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->uploadInfo_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetOssUploadTokenResult& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // uploadInfo Field Functions 
    bool hasUploadInfo() const { return this->uploadInfo_ != nullptr;};
    void deleteUploadInfo() { this->uploadInfo_ = nullptr;};
    inline const UploadInfo & getUploadInfo() const { DARABONBA_PTR_GET_CONST(uploadInfo_, UploadInfo) };
    inline UploadInfo getUploadInfo() { DARABONBA_PTR_GET(uploadInfo_, UploadInfo) };
    inline GetOssUploadTokenResult& setUploadInfo(const UploadInfo & uploadInfo) { DARABONBA_PTR_SET_VALUE(uploadInfo_, uploadInfo) };
    inline GetOssUploadTokenResult& setUploadInfo(UploadInfo && uploadInfo) { DARABONBA_PTR_SET_RVALUE(uploadInfo_, uploadInfo) };


  protected:
    shared_ptr<string> requestId_ {};
    // This parameter is required.
    shared_ptr<UploadInfo> uploadInfo_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif
