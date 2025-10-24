// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHTEMPLATERESPONSEBODYTEMPLATELISTTEMPLATECONTAINER_HPP_
#define ALIBABACLOUD_MODELS_SEARCHTEMPLATERESPONSEBODYTEMPLATELISTTEMPLATECONTAINER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class SearchTemplateResponseBodyTemplateListTemplateContainer : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchTemplateResponseBodyTemplateListTemplateContainer& obj) { 
      DARABONBA_PTR_TO_JSON(Format, format_);
    };
    friend void from_json(const Darabonba::Json& j, SearchTemplateResponseBodyTemplateListTemplateContainer& obj) { 
      DARABONBA_PTR_FROM_JSON(Format, format_);
    };
    SearchTemplateResponseBodyTemplateListTemplateContainer() = default ;
    SearchTemplateResponseBodyTemplateListTemplateContainer(const SearchTemplateResponseBodyTemplateListTemplateContainer &) = default ;
    SearchTemplateResponseBodyTemplateListTemplateContainer(SearchTemplateResponseBodyTemplateListTemplateContainer &&) = default ;
    SearchTemplateResponseBodyTemplateListTemplateContainer(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchTemplateResponseBodyTemplateListTemplateContainer() = default ;
    SearchTemplateResponseBodyTemplateListTemplateContainer& operator=(const SearchTemplateResponseBodyTemplateListTemplateContainer &) = default ;
    SearchTemplateResponseBodyTemplateListTemplateContainer& operator=(SearchTemplateResponseBodyTemplateListTemplateContainer &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->format_ == nullptr; };
    // format Field Functions 
    bool hasFormat() const { return this->format_ != nullptr;};
    void deleteFormat() { this->format_ = nullptr;};
    inline string format() const { DARABONBA_PTR_GET_DEFAULT(format_, "") };
    inline SearchTemplateResponseBodyTemplateListTemplateContainer& setFormat(string format) { DARABONBA_PTR_SET_VALUE(format_, format) };


  protected:
    // The format of the container. Valid values:
    // 
    // *   **flv**
    // *   **mp4**
    // *   **ts**
    // *   **m3u8**
    // *   **gif**
    // *   **mp3**
    // *   **ogg**
    // *   **flac**
    std::shared_ptr<string> format_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
