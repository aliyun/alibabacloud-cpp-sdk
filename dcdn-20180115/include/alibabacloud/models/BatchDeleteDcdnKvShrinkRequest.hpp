// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHDELETEDCDNKVSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHDELETEDCDNKVSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class BatchDeleteDcdnKvShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchDeleteDcdnKvShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Keys, keysShrink_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
    };
    friend void from_json(const Darabonba::Json& j, BatchDeleteDcdnKvShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Keys, keysShrink_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
    };
    BatchDeleteDcdnKvShrinkRequest() = default ;
    BatchDeleteDcdnKvShrinkRequest(const BatchDeleteDcdnKvShrinkRequest &) = default ;
    BatchDeleteDcdnKvShrinkRequest(BatchDeleteDcdnKvShrinkRequest &&) = default ;
    BatchDeleteDcdnKvShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchDeleteDcdnKvShrinkRequest() = default ;
    BatchDeleteDcdnKvShrinkRequest& operator=(const BatchDeleteDcdnKvShrinkRequest &) = default ;
    BatchDeleteDcdnKvShrinkRequest& operator=(BatchDeleteDcdnKvShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->keysShrink_ != nullptr
        && this->namespace_ != nullptr; };
    // keysShrink Field Functions 
    bool hasKeysShrink() const { return this->keysShrink_ != nullptr;};
    void deleteKeysShrink() { this->keysShrink_ = nullptr;};
    inline string keysShrink() const { DARABONBA_PTR_GET_DEFAULT(keysShrink_, "") };
    inline BatchDeleteDcdnKvShrinkRequest& setKeysShrink(string keysShrink) { DARABONBA_PTR_SET_VALUE(keysShrink_, keysShrink) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline BatchDeleteDcdnKvShrinkRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> keysShrink_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> namespace_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
