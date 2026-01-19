// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHDELETEKVSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHDELETEKVSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class BatchDeleteKvShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchDeleteKvShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Keys, keysShrink_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
    };
    friend void from_json(const Darabonba::Json& j, BatchDeleteKvShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Keys, keysShrink_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
    };
    BatchDeleteKvShrinkRequest() = default ;
    BatchDeleteKvShrinkRequest(const BatchDeleteKvShrinkRequest &) = default ;
    BatchDeleteKvShrinkRequest(BatchDeleteKvShrinkRequest &&) = default ;
    BatchDeleteKvShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchDeleteKvShrinkRequest() = default ;
    BatchDeleteKvShrinkRequest& operator=(const BatchDeleteKvShrinkRequest &) = default ;
    BatchDeleteKvShrinkRequest& operator=(BatchDeleteKvShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->keysShrink_ == nullptr
        && this->namespace_ == nullptr; };
    // keysShrink Field Functions 
    bool hasKeysShrink() const { return this->keysShrink_ != nullptr;};
    void deleteKeysShrink() { this->keysShrink_ = nullptr;};
    inline string getKeysShrink() const { DARABONBA_PTR_GET_DEFAULT(keysShrink_, "") };
    inline BatchDeleteKvShrinkRequest& setKeysShrink(string keysShrink) { DARABONBA_PTR_SET_VALUE(keysShrink_, keysShrink) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline BatchDeleteKvShrinkRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


  protected:
    // The keys that you want to delete. You can delete a maximum of 10,000 key-value pairs at a time.
    // 
    // This parameter is required.
    shared_ptr<string> keysShrink_ {};
    // The name of the namespace that you specify when you call the [CreateKvNamespace](https://help.aliyun.com/document_detail/2850317.html) operation.
    // 
    // This parameter is required.
    shared_ptr<string> namespace_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
