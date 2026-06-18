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
    // The list of key-value pairs to set. The total size cannot exceed 2 MB (2 × 1,000 × 1,000).
    // 
    // This parameter is required.
    shared_ptr<string> kvListShrink_ {};
    // The name specified when you call [CreateKvNamespace](https://help.aliyun.com/document_detail/2850317.html).
    // 
    // This parameter is required.
    shared_ptr<string> namespace_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
