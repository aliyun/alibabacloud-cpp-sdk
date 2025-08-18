// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHDELETEKVWITHHIGHCAPACITYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHDELETEKVWITHHIGHCAPACITYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class BatchDeleteKvWithHighCapacityRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchDeleteKvWithHighCapacityRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(Url, url_);
    };
    friend void from_json(const Darabonba::Json& j, BatchDeleteKvWithHighCapacityRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
    };
    BatchDeleteKvWithHighCapacityRequest() = default ;
    BatchDeleteKvWithHighCapacityRequest(const BatchDeleteKvWithHighCapacityRequest &) = default ;
    BatchDeleteKvWithHighCapacityRequest(BatchDeleteKvWithHighCapacityRequest &&) = default ;
    BatchDeleteKvWithHighCapacityRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchDeleteKvWithHighCapacityRequest() = default ;
    BatchDeleteKvWithHighCapacityRequest& operator=(const BatchDeleteKvWithHighCapacityRequest &) = default ;
    BatchDeleteKvWithHighCapacityRequest& operator=(BatchDeleteKvWithHighCapacityRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->namespace_ != nullptr
        && this->url_ != nullptr; };
    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline BatchDeleteKvWithHighCapacityRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline BatchDeleteKvWithHighCapacityRequest& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    // The name of the namespace that you specify when you call the [CreateKvNamespace](https://help.aliyun.com/document_detail/2850317.html) operation.
    // 
    // This parameter is required.
    std::shared_ptr<string> namespace_ = nullptr;
    // The download URL of the key-value pairs that you want to delete. This parameter is automatically filled in when you use the SDK to call the operation.
    // 
    // This parameter is required.
    std::shared_ptr<string> url_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
