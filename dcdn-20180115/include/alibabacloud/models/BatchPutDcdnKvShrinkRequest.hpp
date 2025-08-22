// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHPUTDCDNKVSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHPUTDCDNKVSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class BatchPutDcdnKvShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchPutDcdnKvShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(KvList, kvListShrink_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
    };
    friend void from_json(const Darabonba::Json& j, BatchPutDcdnKvShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(KvList, kvListShrink_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
    };
    BatchPutDcdnKvShrinkRequest() = default ;
    BatchPutDcdnKvShrinkRequest(const BatchPutDcdnKvShrinkRequest &) = default ;
    BatchPutDcdnKvShrinkRequest(BatchPutDcdnKvShrinkRequest &&) = default ;
    BatchPutDcdnKvShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchPutDcdnKvShrinkRequest() = default ;
    BatchPutDcdnKvShrinkRequest& operator=(const BatchPutDcdnKvShrinkRequest &) = default ;
    BatchPutDcdnKvShrinkRequest& operator=(BatchPutDcdnKvShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->kvListShrink_ != nullptr
        && this->namespace_ != nullptr; };
    // kvListShrink Field Functions 
    bool hasKvListShrink() const { return this->kvListShrink_ != nullptr;};
    void deleteKvListShrink() { this->kvListShrink_ = nullptr;};
    inline string kvListShrink() const { DARABONBA_PTR_GET_DEFAULT(kvListShrink_, "") };
    inline BatchPutDcdnKvShrinkRequest& setKvListShrink(string kvListShrink) { DARABONBA_PTR_SET_VALUE(kvListShrink_, kvListShrink) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline BatchPutDcdnKvShrinkRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> kvListShrink_ = nullptr;
    // The name of the namespace.
    // 
    // This parameter is required.
    std::shared_ptr<string> namespace_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
