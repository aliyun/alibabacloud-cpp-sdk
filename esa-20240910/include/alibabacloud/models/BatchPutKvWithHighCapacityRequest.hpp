// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHPUTKVWITHHIGHCAPACITYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHPUTKVWITHHIGHCAPACITYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class BatchPutKvWithHighCapacityRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchPutKvWithHighCapacityRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(Url, url_);
    };
    friend void from_json(const Darabonba::Json& j, BatchPutKvWithHighCapacityRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
    };
    BatchPutKvWithHighCapacityRequest() = default ;
    BatchPutKvWithHighCapacityRequest(const BatchPutKvWithHighCapacityRequest &) = default ;
    BatchPutKvWithHighCapacityRequest(BatchPutKvWithHighCapacityRequest &&) = default ;
    BatchPutKvWithHighCapacityRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchPutKvWithHighCapacityRequest() = default ;
    BatchPutKvWithHighCapacityRequest& operator=(const BatchPutKvWithHighCapacityRequest &) = default ;
    BatchPutKvWithHighCapacityRequest& operator=(BatchPutKvWithHighCapacityRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->namespace_ == nullptr
        && this->url_ == nullptr; };
    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline BatchPutKvWithHighCapacityRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline BatchPutKvWithHighCapacityRequest& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    // The namespace name specified when you called [CreateKvNamespace](https://help.aliyun.com/document_detail/2850317.html).
    // 
    // This parameter is required.
    shared_ptr<string> namespace_ {};
    // A publicly accessible HTTP(S) URL that points to a JSON file containing the key-value pairs to be batch set. The server actively downloads the content from this URL.
    // 
    // - If you use an SDK, the SDK automatically uploads the file and generates the URL.
    // 
    // - In non-SDK scenarios, upload the JSON payload to any publicly accessible HTTP service and specify the URL.
    // 
    // The file content pointed to by the URL must be in the following JSON format: {"Namespace":"<namespace name>","KvList":[{"Key":"<key>","Value":"<value>"},...]}.If the URL content does not match this format, the API silently returns an empty SuccessKeys array.
    // 
    // This parameter is required.
    shared_ptr<string> url_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
