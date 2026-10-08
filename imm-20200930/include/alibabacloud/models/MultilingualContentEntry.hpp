// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MULTILINGUALCONTENTENTRY_HPP_
#define ALIBABACLOUD_MODELS_MULTILINGUALCONTENTENTRY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class MultilingualContentEntry : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MultilingualContentEntry& obj) { 
      DARABONBA_PTR_TO_JSON(Caption, caption_);
      DARABONBA_PTR_TO_JSON(Description, description_);
    };
    friend void from_json(const Darabonba::Json& j, MultilingualContentEntry& obj) { 
      DARABONBA_PTR_FROM_JSON(Caption, caption_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
    };
    MultilingualContentEntry() = default ;
    MultilingualContentEntry(const MultilingualContentEntry &) = default ;
    MultilingualContentEntry(MultilingualContentEntry &&) = default ;
    MultilingualContentEntry(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MultilingualContentEntry() = default ;
    MultilingualContentEntry& operator=(const MultilingualContentEntry &) = default ;
    MultilingualContentEntry& operator=(MultilingualContentEntry &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->caption_ == nullptr
        && this->description_ == nullptr; };
    // caption Field Functions 
    bool hasCaption() const { return this->caption_ != nullptr;};
    void deleteCaption() { this->caption_ = nullptr;};
    inline string getCaption() const { DARABONBA_PTR_GET_DEFAULT(caption_, "") };
    inline MultilingualContentEntry& setCaption(string caption) { DARABONBA_PTR_SET_VALUE(caption_, caption) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline MultilingualContentEntry& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


  protected:
    // The multilingual brief description.
    shared_ptr<string> caption_ {};
    // The multilingual detailed description.
    shared_ptr<string> description_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
