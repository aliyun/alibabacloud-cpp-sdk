// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUTKVWITHHIGHCAPACITYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PUTKVWITHHIGHCAPACITYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class PutKvWithHighCapacityRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PutKvWithHighCapacityRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(Url, url_);
    };
    friend void from_json(const Darabonba::Json& j, PutKvWithHighCapacityRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
    };
    PutKvWithHighCapacityRequest() = default ;
    PutKvWithHighCapacityRequest(const PutKvWithHighCapacityRequest &) = default ;
    PutKvWithHighCapacityRequest(PutKvWithHighCapacityRequest &&) = default ;
    PutKvWithHighCapacityRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PutKvWithHighCapacityRequest() = default ;
    PutKvWithHighCapacityRequest& operator=(const PutKvWithHighCapacityRequest &) = default ;
    PutKvWithHighCapacityRequest& operator=(PutKvWithHighCapacityRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->key_ != nullptr
        && this->namespace_ != nullptr && this->url_ != nullptr; };
    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline PutKvWithHighCapacityRequest& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline PutKvWithHighCapacityRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline PutKvWithHighCapacityRequest& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    // The key name. The name can be up to 512 characters in length and cannot contain spaces or backslashes (\\\\).
    // 
    // This parameter is required.
    std::shared_ptr<string> key_ = nullptr;
    // The name of the namespace that you specify when you call the [CreateKvNamespace](https://help.aliyun.com/document_detail/2850317.html) operation.
    // 
    // This parameter is required.
    std::shared_ptr<string> namespace_ = nullptr;
    // The download URL of the key-value pair that you want to upload. This parameter is automatically filled in when you use the SDK to call the operation.
    // 
    // This parameter is required.
    std::shared_ptr<string> url_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
