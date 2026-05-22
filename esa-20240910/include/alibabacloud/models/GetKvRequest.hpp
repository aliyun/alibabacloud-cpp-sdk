// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETKVREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETKVREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class GetKvRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetKvRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Base64, base64_);
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
    };
    friend void from_json(const Darabonba::Json& j, GetKvRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Base64, base64_);
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
    };
    GetKvRequest() = default ;
    GetKvRequest(const GetKvRequest &) = default ;
    GetKvRequest(GetKvRequest &&) = default ;
    GetKvRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetKvRequest() = default ;
    GetKvRequest& operator=(const GetKvRequest &) = default ;
    GetKvRequest& operator=(GetKvRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->base64_ == nullptr
        && this->key_ == nullptr && this->namespace_ == nullptr; };
    // base64 Field Functions 
    bool hasBase64() const { return this->base64_ != nullptr;};
    void deleteBase64() { this->base64_ = nullptr;};
    inline bool getBase64() const { DARABONBA_PTR_GET_DEFAULT(base64_, false) };
    inline GetKvRequest& setBase64(bool base64) { DARABONBA_PTR_SET_VALUE(base64_, base64) };


    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline GetKvRequest& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline GetKvRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


  protected:
    // Specifies whether to decode the value by using Base 64. If you call the [PutKv](https://help.aliyun.com/document_detail/2850482.html) operation and set the Base64 parameter to true, set this parameter to true to read the original content.
    shared_ptr<bool> base64_ {};
    // The key name for the query.
    // 
    // This parameter is required.
    shared_ptr<string> key_ {};
    // The name of the namespace that you specify when you call the [CreateKvNamespace](https://help.aliyun.com/document_detail/2850317.html) operation.
    // 
    // This parameter is required.
    shared_ptr<string> namespace_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
