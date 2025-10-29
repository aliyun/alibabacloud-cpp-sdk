// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEDATAASSETTAGSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEDATAASSETTAGSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class DeleteDataAssetTagShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteDataAssetTagShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Values, valuesShrink_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteDataAssetTagShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Values, valuesShrink_);
    };
    DeleteDataAssetTagShrinkRequest() = default ;
    DeleteDataAssetTagShrinkRequest(const DeleteDataAssetTagShrinkRequest &) = default ;
    DeleteDataAssetTagShrinkRequest(DeleteDataAssetTagShrinkRequest &&) = default ;
    DeleteDataAssetTagShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteDataAssetTagShrinkRequest() = default ;
    DeleteDataAssetTagShrinkRequest& operator=(const DeleteDataAssetTagShrinkRequest &) = default ;
    DeleteDataAssetTagShrinkRequest& operator=(DeleteDataAssetTagShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->key_ == nullptr
        && return this->valuesShrink_ == nullptr; };
    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline DeleteDataAssetTagShrinkRequest& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // valuesShrink Field Functions 
    bool hasValuesShrink() const { return this->valuesShrink_ != nullptr;};
    void deleteValuesShrink() { this->valuesShrink_ = nullptr;};
    inline string valuesShrink() const { DARABONBA_PTR_GET_DEFAULT(valuesShrink_, "") };
    inline DeleteDataAssetTagShrinkRequest& setValuesShrink(string valuesShrink) { DARABONBA_PTR_SET_VALUE(valuesShrink_, valuesShrink) };


  protected:
    // The tag key.
    // 
    // This parameter is required.
    std::shared_ptr<string> key_ = nullptr;
    // The tag values.
    std::shared_ptr<string> valuesShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
