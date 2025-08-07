// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GLOBALPAGEITEM_HPP_
#define ALIBABACLOUD_MODELS_GLOBALPAGEITEM_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IQS20241111
{
namespace Models
{
  class GlobalPageItem : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GlobalPageItem& obj) { 
      DARABONBA_PTR_TO_JSON(link, link_);
      DARABONBA_PTR_TO_JSON(snippet, snippet_);
      DARABONBA_PTR_TO_JSON(title, title_);
    };
    friend void from_json(const Darabonba::Json& j, GlobalPageItem& obj) { 
      DARABONBA_PTR_FROM_JSON(link, link_);
      DARABONBA_PTR_FROM_JSON(snippet, snippet_);
      DARABONBA_PTR_FROM_JSON(title, title_);
    };
    GlobalPageItem() = default ;
    GlobalPageItem(const GlobalPageItem &) = default ;
    GlobalPageItem(GlobalPageItem &&) = default ;
    GlobalPageItem(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GlobalPageItem() = default ;
    GlobalPageItem& operator=(const GlobalPageItem &) = default ;
    GlobalPageItem& operator=(GlobalPageItem &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->link_ != nullptr
        && this->snippet_ != nullptr && this->title_ != nullptr; };
    // link Field Functions 
    bool hasLink() const { return this->link_ != nullptr;};
    void deleteLink() { this->link_ = nullptr;};
    inline string link() const { DARABONBA_PTR_GET_DEFAULT(link_, "") };
    inline GlobalPageItem& setLink(string link) { DARABONBA_PTR_SET_VALUE(link_, link) };


    // snippet Field Functions 
    bool hasSnippet() const { return this->snippet_ != nullptr;};
    void deleteSnippet() { this->snippet_ = nullptr;};
    inline string snippet() const { DARABONBA_PTR_GET_DEFAULT(snippet_, "") };
    inline GlobalPageItem& setSnippet(string snippet) { DARABONBA_PTR_SET_VALUE(snippet_, snippet) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline GlobalPageItem& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> link_ = nullptr;
    std::shared_ptr<string> snippet_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> title_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IQS20241111
#endif
