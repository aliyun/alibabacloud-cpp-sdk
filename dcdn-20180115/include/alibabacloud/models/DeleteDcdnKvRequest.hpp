// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEDCDNKVREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEDCDNKVREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DeleteDcdnKvRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteDcdnKvRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteDcdnKvRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
    };
    DeleteDcdnKvRequest() = default ;
    DeleteDcdnKvRequest(const DeleteDcdnKvRequest &) = default ;
    DeleteDcdnKvRequest(DeleteDcdnKvRequest &&) = default ;
    DeleteDcdnKvRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteDcdnKvRequest() = default ;
    DeleteDcdnKvRequest& operator=(const DeleteDcdnKvRequest &) = default ;
    DeleteDcdnKvRequest& operator=(DeleteDcdnKvRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->key_ != nullptr
        && this->namespace_ != nullptr; };
    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline DeleteDcdnKvRequest& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline DeleteDcdnKvRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


  protected:
    // The name of the key that you want to delete.
    // 
    // This parameter is required.
    std::shared_ptr<string> key_ = nullptr;
    // The namespace that you specify when you call the PutDcdnKvNamespace operation.
    // 
    // This parameter is required.
    std::shared_ptr<string> namespace_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
