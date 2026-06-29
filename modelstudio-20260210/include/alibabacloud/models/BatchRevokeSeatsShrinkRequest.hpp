// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHREVOKESEATSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHREVOKESEATSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ModelStudio20260210
{
namespace Models
{
  class BatchRevokeSeatsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchRevokeSeatsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Items, itemsShrink_);
      DARABONBA_PTR_TO_JSON(Locale, locale_);
    };
    friend void from_json(const Darabonba::Json& j, BatchRevokeSeatsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Items, itemsShrink_);
      DARABONBA_PTR_FROM_JSON(Locale, locale_);
    };
    BatchRevokeSeatsShrinkRequest() = default ;
    BatchRevokeSeatsShrinkRequest(const BatchRevokeSeatsShrinkRequest &) = default ;
    BatchRevokeSeatsShrinkRequest(BatchRevokeSeatsShrinkRequest &&) = default ;
    BatchRevokeSeatsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchRevokeSeatsShrinkRequest() = default ;
    BatchRevokeSeatsShrinkRequest& operator=(const BatchRevokeSeatsShrinkRequest &) = default ;
    BatchRevokeSeatsShrinkRequest& operator=(BatchRevokeSeatsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->itemsShrink_ == nullptr
        && this->locale_ == nullptr; };
    // itemsShrink Field Functions 
    bool hasItemsShrink() const { return this->itemsShrink_ != nullptr;};
    void deleteItemsShrink() { this->itemsShrink_ = nullptr;};
    inline string getItemsShrink() const { DARABONBA_PTR_GET_DEFAULT(itemsShrink_, "") };
    inline BatchRevokeSeatsShrinkRequest& setItemsShrink(string itemsShrink) { DARABONBA_PTR_SET_VALUE(itemsShrink_, itemsShrink) };


    // locale Field Functions 
    bool hasLocale() const { return this->locale_ != nullptr;};
    void deleteLocale() { this->locale_ = nullptr;};
    inline string getLocale() const { DARABONBA_PTR_GET_DEFAULT(locale_, "") };
    inline BatchRevokeSeatsShrinkRequest& setLocale(string locale) { DARABONBA_PTR_SET_VALUE(locale_, locale) };


  protected:
    // The list of revocation items. This parameter is required.
    shared_ptr<string> itemsShrink_ {};
    // The language. Valid values: zh-CN and en-US.
    shared_ptr<string> locale_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ModelStudio20260210
#endif
