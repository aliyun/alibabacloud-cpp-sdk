// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEQUARAFILEDOWNLOADINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEQUARAFILEDOWNLOADINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeQuaraFileDownloadInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeQuaraFileDownloadInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DownloadUrl, downloadUrl_);
      DARABONBA_PTR_TO_JSON(Md5, md5_);
      DARABONBA_PTR_TO_JSON(Path, path_);
      DARABONBA_PTR_TO_JSON(QuaraFileId, quaraFileId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeQuaraFileDownloadInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DownloadUrl, downloadUrl_);
      DARABONBA_PTR_FROM_JSON(Md5, md5_);
      DARABONBA_PTR_FROM_JSON(Path, path_);
      DARABONBA_PTR_FROM_JSON(QuaraFileId, quaraFileId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
    };
    DescribeQuaraFileDownloadInfoResponseBody() = default ;
    DescribeQuaraFileDownloadInfoResponseBody(const DescribeQuaraFileDownloadInfoResponseBody &) = default ;
    DescribeQuaraFileDownloadInfoResponseBody(DescribeQuaraFileDownloadInfoResponseBody &&) = default ;
    DescribeQuaraFileDownloadInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeQuaraFileDownloadInfoResponseBody() = default ;
    DescribeQuaraFileDownloadInfoResponseBody& operator=(const DescribeQuaraFileDownloadInfoResponseBody &) = default ;
    DescribeQuaraFileDownloadInfoResponseBody& operator=(DescribeQuaraFileDownloadInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->downloadUrl_ == nullptr
        && this->md5_ == nullptr && this->path_ == nullptr && this->quaraFileId_ == nullptr && this->requestId_ == nullptr && this->tag_ == nullptr
        && this->uuid_ == nullptr; };
    // downloadUrl Field Functions 
    bool hasDownloadUrl() const { return this->downloadUrl_ != nullptr;};
    void deleteDownloadUrl() { this->downloadUrl_ = nullptr;};
    inline string getDownloadUrl() const { DARABONBA_PTR_GET_DEFAULT(downloadUrl_, "") };
    inline DescribeQuaraFileDownloadInfoResponseBody& setDownloadUrl(string downloadUrl) { DARABONBA_PTR_SET_VALUE(downloadUrl_, downloadUrl) };


    // md5 Field Functions 
    bool hasMd5() const { return this->md5_ != nullptr;};
    void deleteMd5() { this->md5_ = nullptr;};
    inline string getMd5() const { DARABONBA_PTR_GET_DEFAULT(md5_, "") };
    inline DescribeQuaraFileDownloadInfoResponseBody& setMd5(string md5) { DARABONBA_PTR_SET_VALUE(md5_, md5) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string getPath() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline DescribeQuaraFileDownloadInfoResponseBody& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


    // quaraFileId Field Functions 
    bool hasQuaraFileId() const { return this->quaraFileId_ != nullptr;};
    void deleteQuaraFileId() { this->quaraFileId_ = nullptr;};
    inline int32_t getQuaraFileId() const { DARABONBA_PTR_GET_DEFAULT(quaraFileId_, 0) };
    inline DescribeQuaraFileDownloadInfoResponseBody& setQuaraFileId(int32_t quaraFileId) { DARABONBA_PTR_SET_VALUE(quaraFileId_, quaraFileId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeQuaraFileDownloadInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline string getTag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
    inline DescribeQuaraFileDownloadInfoResponseBody& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline DescribeQuaraFileDownloadInfoResponseBody& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    // The URL that is used to download the file. The URL is valid for five minutes.
    shared_ptr<string> downloadUrl_ {};
    // The MD5 hash value of the quarantined file.
    shared_ptr<string> md5_ {};
    // The file path.
    shared_ptr<string> path_ {};
    // The ID of the quarantined file.
    shared_ptr<int32_t> quaraFileId_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The tag that is added to the related alert.
    shared_ptr<string> tag_ {};
    // The UUID of the server.
    shared_ptr<string> uuid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
