// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDUSERTAGMETAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDUSERTAGMETAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class AddUserTagMetaRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddUserTagMetaRequest& obj) { 
      DARABONBA_PTR_TO_JSON(TagDescription, tagDescription_);
      DARABONBA_PTR_TO_JSON(TagName, tagName_);
    };
    friend void from_json(const Darabonba::Json& j, AddUserTagMetaRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(TagDescription, tagDescription_);
      DARABONBA_PTR_FROM_JSON(TagName, tagName_);
    };
    AddUserTagMetaRequest() = default ;
    AddUserTagMetaRequest(const AddUserTagMetaRequest &) = default ;
    AddUserTagMetaRequest(AddUserTagMetaRequest &&) = default ;
    AddUserTagMetaRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddUserTagMetaRequest() = default ;
    AddUserTagMetaRequest& operator=(const AddUserTagMetaRequest &) = default ;
    AddUserTagMetaRequest& operator=(AddUserTagMetaRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->tagDescription_ == nullptr
        && this->tagName_ == nullptr; };
    // tagDescription Field Functions 
    bool hasTagDescription() const { return this->tagDescription_ != nullptr;};
    void deleteTagDescription() { this->tagDescription_ = nullptr;};
    inline string getTagDescription() const { DARABONBA_PTR_GET_DEFAULT(tagDescription_, "") };
    inline AddUserTagMetaRequest& setTagDescription(string tagDescription) { DARABONBA_PTR_SET_VALUE(tagDescription_, tagDescription) };


    // tagName Field Functions 
    bool hasTagName() const { return this->tagName_ != nullptr;};
    void deleteTagName() { this->tagName_ = nullptr;};
    inline string getTagName() const { DARABONBA_PTR_GET_DEFAULT(tagName_, "") };
    inline AddUserTagMetaRequest& setTagName(string tagName) { DARABONBA_PTR_SET_VALUE(tagName_, tagName) };


  protected:
    // Tag description. Format check: maximum length of 255 characters.
    shared_ptr<string> tagDescription_ {};
    // Tag name. Format check:
    // - Maximum length of 50 characters.
    // - Only Chinese, English, numbers, and /\\|[]() symbols are allowed.
    // 
    // This parameter is required.
    shared_ptr<string> tagName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
