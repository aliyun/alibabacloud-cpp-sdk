// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEKVREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEKVREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class DeleteKvRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteKvRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteKvRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
    };
    DeleteKvRequest() = default ;
    DeleteKvRequest(const DeleteKvRequest &) = default ;
    DeleteKvRequest(DeleteKvRequest &&) = default ;
    DeleteKvRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteKvRequest() = default ;
    DeleteKvRequest& operator=(const DeleteKvRequest &) = default ;
    DeleteKvRequest& operator=(DeleteKvRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->key_ == nullptr
        && return this->namespace_ == nullptr; };
    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline DeleteKvRequest& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline DeleteKvRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


  protected:
    // The name of the key that you want to delete.
    // 
    // This parameter is required.
    std::shared_ptr<string> key_ = nullptr;
    // The name of the namespace that you specify when you call the [CreateKvNamespace](https://help.aliyun.com/document_detail/2850317.html) operation.
    // 
    // This parameter is required.
    std::shared_ptr<string> namespace_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
