// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTALLPUBLICMEDIATAGSRESPONSEBODYMEDIATAGLISTOPTIONS_HPP_
#define ALIBABACLOUD_MODELS_LISTALLPUBLICMEDIATAGSRESPONSEBODYMEDIATAGLISTOPTIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListAllPublicMediaTagsResponseBodyMediaTagListOptions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAllPublicMediaTagsResponseBodyMediaTagListOptions& obj) { 
      DARABONBA_PTR_TO_JSON(OptionChineseName, optionChineseName_);
      DARABONBA_PTR_TO_JSON(OptionEnglishName, optionEnglishName_);
      DARABONBA_PTR_TO_JSON(OptionId, optionId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAllPublicMediaTagsResponseBodyMediaTagListOptions& obj) { 
      DARABONBA_PTR_FROM_JSON(OptionChineseName, optionChineseName_);
      DARABONBA_PTR_FROM_JSON(OptionEnglishName, optionEnglishName_);
      DARABONBA_PTR_FROM_JSON(OptionId, optionId_);
    };
    ListAllPublicMediaTagsResponseBodyMediaTagListOptions() = default ;
    ListAllPublicMediaTagsResponseBodyMediaTagListOptions(const ListAllPublicMediaTagsResponseBodyMediaTagListOptions &) = default ;
    ListAllPublicMediaTagsResponseBodyMediaTagListOptions(ListAllPublicMediaTagsResponseBodyMediaTagListOptions &&) = default ;
    ListAllPublicMediaTagsResponseBodyMediaTagListOptions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAllPublicMediaTagsResponseBodyMediaTagListOptions() = default ;
    ListAllPublicMediaTagsResponseBodyMediaTagListOptions& operator=(const ListAllPublicMediaTagsResponseBodyMediaTagListOptions &) = default ;
    ListAllPublicMediaTagsResponseBodyMediaTagListOptions& operator=(ListAllPublicMediaTagsResponseBodyMediaTagListOptions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->optionChineseName_ != nullptr
        && this->optionEnglishName_ != nullptr && this->optionId_ != nullptr; };
    // optionChineseName Field Functions 
    bool hasOptionChineseName() const { return this->optionChineseName_ != nullptr;};
    void deleteOptionChineseName() { this->optionChineseName_ = nullptr;};
    inline string optionChineseName() const { DARABONBA_PTR_GET_DEFAULT(optionChineseName_, "") };
    inline ListAllPublicMediaTagsResponseBodyMediaTagListOptions& setOptionChineseName(string optionChineseName) { DARABONBA_PTR_SET_VALUE(optionChineseName_, optionChineseName) };


    // optionEnglishName Field Functions 
    bool hasOptionEnglishName() const { return this->optionEnglishName_ != nullptr;};
    void deleteOptionEnglishName() { this->optionEnglishName_ = nullptr;};
    inline string optionEnglishName() const { DARABONBA_PTR_GET_DEFAULT(optionEnglishName_, "") };
    inline ListAllPublicMediaTagsResponseBodyMediaTagListOptions& setOptionEnglishName(string optionEnglishName) { DARABONBA_PTR_SET_VALUE(optionEnglishName_, optionEnglishName) };


    // optionId Field Functions 
    bool hasOptionId() const { return this->optionId_ != nullptr;};
    void deleteOptionId() { this->optionId_ = nullptr;};
    inline string optionId() const { DARABONBA_PTR_GET_DEFAULT(optionId_, "") };
    inline ListAllPublicMediaTagsResponseBodyMediaTagListOptions& setOptionId(string optionId) { DARABONBA_PTR_SET_VALUE(optionId_, optionId) };


  protected:
    // The option name in Chinese.
    std::shared_ptr<string> optionChineseName_ = nullptr;
    // The option name in English.
    std::shared_ptr<string> optionEnglishName_ = nullptr;
    // The option ID.
    std::shared_ptr<string> optionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
