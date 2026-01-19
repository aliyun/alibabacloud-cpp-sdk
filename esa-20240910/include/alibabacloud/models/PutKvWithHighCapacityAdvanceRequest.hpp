// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUTKVWITHHIGHCAPACITYADVANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PUTKVWITHHIGHCAPACITYADVANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class PutKvWithHighCapacityAdvanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PutKvWithHighCapacityAdvanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      // urlObject_ is stream
    };
    friend void from_json(const Darabonba::Json& j, PutKvWithHighCapacityAdvanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      // urlObject_ is stream
    };
    PutKvWithHighCapacityAdvanceRequest() = default ;
    PutKvWithHighCapacityAdvanceRequest(const PutKvWithHighCapacityAdvanceRequest &) = default ;
    PutKvWithHighCapacityAdvanceRequest(PutKvWithHighCapacityAdvanceRequest &&) = default ;
    PutKvWithHighCapacityAdvanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PutKvWithHighCapacityAdvanceRequest() = default ;
    PutKvWithHighCapacityAdvanceRequest& operator=(const PutKvWithHighCapacityAdvanceRequest &) = default ;
    PutKvWithHighCapacityAdvanceRequest& operator=(PutKvWithHighCapacityAdvanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->key_ == nullptr
        && this->namespace_ == nullptr && this->urlObject_ == nullptr; };
    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline PutKvWithHighCapacityAdvanceRequest& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline PutKvWithHighCapacityAdvanceRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // urlObject Field Functions 
    bool hasUrlObject() const { return this->urlObject_ != nullptr;};
    void deleteUrlObject() { this->urlObject_ = nullptr;};
    inline shared_ptr<Darabonba::IStream> getUrlObject() const { DARABONBA_GET(urlObject_) };
    inline PutKvWithHighCapacityAdvanceRequest& setUrlObject(shared_ptr<Darabonba::IStream> urlObject) { DARABONBA_SET_VALUE(urlObject_, urlObject) };


  protected:
    // The key name. The name can be up to 512 characters in length and cannot contain spaces or backslashes (\\\\).
    // 
    // This parameter is required.
    shared_ptr<string> key_ {};
    // The name of the namespace that you specify when you call the [CreateKvNamespace](https://help.aliyun.com/document_detail/2850317.html) operation.
    // 
    // This parameter is required.
    shared_ptr<string> namespace_ {};
    // The download URL of the key-value pair that you want to upload. This parameter is automatically filled in when you use the SDK to call the operation.
    // 
    // This parameter is required.
    shared_ptr<Darabonba::IStream> urlObject_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
