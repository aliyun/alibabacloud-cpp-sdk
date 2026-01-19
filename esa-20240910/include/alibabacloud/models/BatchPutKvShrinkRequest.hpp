// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHPUTKVSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHPUTKVSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class BatchPutKvShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchPutKvShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(KvList, kvListShrink_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
    };
    friend void from_json(const Darabonba::Json& j, BatchPutKvShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(KvList, kvListShrink_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
    };
    BatchPutKvShrinkRequest() = default ;
    BatchPutKvShrinkRequest(const BatchPutKvShrinkRequest &) = default ;
    BatchPutKvShrinkRequest(BatchPutKvShrinkRequest &&) = default ;
    BatchPutKvShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchPutKvShrinkRequest() = default ;
    BatchPutKvShrinkRequest& operator=(const BatchPutKvShrinkRequest &) = default ;
    BatchPutKvShrinkRequest& operator=(BatchPutKvShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->kvListShrink_ == nullptr
        && this->namespace_ == nullptr; };
    // kvListShrink Field Functions 
    bool hasKvListShrink() const { return this->kvListShrink_ != nullptr;};
    void deleteKvListShrink() { this->kvListShrink_ = nullptr;};
    inline string getKvListShrink() const { DARABONBA_PTR_GET_DEFAULT(kvListShrink_, "") };
    inline BatchPutKvShrinkRequest& setKvListShrink(string kvListShrink) { DARABONBA_PTR_SET_VALUE(kvListShrink_, kvListShrink) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline BatchPutKvShrinkRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


  protected:
    // The key-value pairs that you want to configure at a time. The total size can be up to 2 MB (2 × 1000 × 1000).
    // 
    // This parameter is required.
    shared_ptr<string> kvListShrink_ {};
    // The name of the namespace that you specify when you call the [CreateKvNamespace](https://help.aliyun.com/document_detail/2850317.html) operation.
    // 
    // This parameter is required.
    shared_ptr<string> namespace_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
