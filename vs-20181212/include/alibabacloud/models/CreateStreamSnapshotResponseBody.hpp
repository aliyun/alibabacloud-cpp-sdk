// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESTREAMSNAPSHOTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATESTREAMSNAPSHOTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class CreateStreamSnapshotResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateStreamSnapshotResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Format, format_);
      DARABONBA_PTR_TO_JSON(Height, height_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(OssBucket, ossBucket_);
      DARABONBA_PTR_TO_JSON(OssEndpoint, ossEndpoint_);
      DARABONBA_PTR_TO_JSON(OssObject, ossObject_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
      DARABONBA_PTR_TO_JSON(Url, url_);
      DARABONBA_PTR_TO_JSON(Width, width_);
    };
    friend void from_json(const Darabonba::Json& j, CreateStreamSnapshotResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Format, format_);
      DARABONBA_PTR_FROM_JSON(Height, height_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(OssBucket, ossBucket_);
      DARABONBA_PTR_FROM_JSON(OssEndpoint, ossEndpoint_);
      DARABONBA_PTR_FROM_JSON(OssObject, ossObject_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
      DARABONBA_PTR_FROM_JSON(Width, width_);
    };
    CreateStreamSnapshotResponseBody() = default ;
    CreateStreamSnapshotResponseBody(const CreateStreamSnapshotResponseBody &) = default ;
    CreateStreamSnapshotResponseBody(CreateStreamSnapshotResponseBody &&) = default ;
    CreateStreamSnapshotResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateStreamSnapshotResponseBody() = default ;
    CreateStreamSnapshotResponseBody& operator=(const CreateStreamSnapshotResponseBody &) = default ;
    CreateStreamSnapshotResponseBody& operator=(CreateStreamSnapshotResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->format_ == nullptr
        && this->height_ == nullptr && this->id_ == nullptr && this->ossBucket_ == nullptr && this->ossEndpoint_ == nullptr && this->ossObject_ == nullptr
        && this->requestId_ == nullptr && this->timestamp_ == nullptr && this->url_ == nullptr && this->width_ == nullptr; };
    // format Field Functions 
    bool hasFormat() const { return this->format_ != nullptr;};
    void deleteFormat() { this->format_ = nullptr;};
    inline string getFormat() const { DARABONBA_PTR_GET_DEFAULT(format_, "") };
    inline CreateStreamSnapshotResponseBody& setFormat(string format) { DARABONBA_PTR_SET_VALUE(format_, format) };


    // height Field Functions 
    bool hasHeight() const { return this->height_ != nullptr;};
    void deleteHeight() { this->height_ = nullptr;};
    inline int64_t getHeight() const { DARABONBA_PTR_GET_DEFAULT(height_, 0L) };
    inline CreateStreamSnapshotResponseBody& setHeight(int64_t height) { DARABONBA_PTR_SET_VALUE(height_, height) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline CreateStreamSnapshotResponseBody& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // ossBucket Field Functions 
    bool hasOssBucket() const { return this->ossBucket_ != nullptr;};
    void deleteOssBucket() { this->ossBucket_ = nullptr;};
    inline string getOssBucket() const { DARABONBA_PTR_GET_DEFAULT(ossBucket_, "") };
    inline CreateStreamSnapshotResponseBody& setOssBucket(string ossBucket) { DARABONBA_PTR_SET_VALUE(ossBucket_, ossBucket) };


    // ossEndpoint Field Functions 
    bool hasOssEndpoint() const { return this->ossEndpoint_ != nullptr;};
    void deleteOssEndpoint() { this->ossEndpoint_ = nullptr;};
    inline string getOssEndpoint() const { DARABONBA_PTR_GET_DEFAULT(ossEndpoint_, "") };
    inline CreateStreamSnapshotResponseBody& setOssEndpoint(string ossEndpoint) { DARABONBA_PTR_SET_VALUE(ossEndpoint_, ossEndpoint) };


    // ossObject Field Functions 
    bool hasOssObject() const { return this->ossObject_ != nullptr;};
    void deleteOssObject() { this->ossObject_ = nullptr;};
    inline string getOssObject() const { DARABONBA_PTR_GET_DEFAULT(ossObject_, "") };
    inline CreateStreamSnapshotResponseBody& setOssObject(string ossObject) { DARABONBA_PTR_SET_VALUE(ossObject_, ossObject) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateStreamSnapshotResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // timestamp Field Functions 
    bool hasTimestamp() const { return this->timestamp_ != nullptr;};
    void deleteTimestamp() { this->timestamp_ = nullptr;};
    inline int64_t getTimestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, 0L) };
    inline CreateStreamSnapshotResponseBody& setTimestamp(int64_t timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline CreateStreamSnapshotResponseBody& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


    // width Field Functions 
    bool hasWidth() const { return this->width_ != nullptr;};
    void deleteWidth() { this->width_ = nullptr;};
    inline int64_t getWidth() const { DARABONBA_PTR_GET_DEFAULT(width_, 0L) };
    inline CreateStreamSnapshotResponseBody& setWidth(int64_t width) { DARABONBA_PTR_SET_VALUE(width_, width) };


  protected:
    shared_ptr<string> format_ {};
    shared_ptr<int64_t> height_ {};
    shared_ptr<string> id_ {};
    shared_ptr<string> ossBucket_ {};
    shared_ptr<string> ossEndpoint_ {};
    shared_ptr<string> ossObject_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int64_t> timestamp_ {};
    shared_ptr<string> url_ {};
    shared_ptr<int64_t> width_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
