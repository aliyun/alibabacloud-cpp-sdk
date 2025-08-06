// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRANGERESPONSEBODYHYPERLINKS_HPP_
#define ALIBABACLOUD_MODELS_GETRANGERESPONSEBODYHYPERLINKS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetRangeResponseBodyHyperlinks : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRangeResponseBodyHyperlinks& obj) { 
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(link, link_);
      DARABONBA_PTR_TO_JSON(text, text_);
    };
    friend void from_json(const Darabonba::Json& j, GetRangeResponseBodyHyperlinks& obj) { 
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(link, link_);
      DARABONBA_PTR_FROM_JSON(text, text_);
    };
    GetRangeResponseBodyHyperlinks() = default ;
    GetRangeResponseBodyHyperlinks(const GetRangeResponseBodyHyperlinks &) = default ;
    GetRangeResponseBodyHyperlinks(GetRangeResponseBodyHyperlinks &&) = default ;
    GetRangeResponseBodyHyperlinks(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRangeResponseBodyHyperlinks() = default ;
    GetRangeResponseBodyHyperlinks& operator=(const GetRangeResponseBodyHyperlinks &) = default ;
    GetRangeResponseBodyHyperlinks& operator=(GetRangeResponseBodyHyperlinks &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->type_ != nullptr
        && this->link_ != nullptr && this->text_ != nullptr; };
    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetRangeResponseBodyHyperlinks& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // link Field Functions 
    bool hasLink() const { return this->link_ != nullptr;};
    void deleteLink() { this->link_ = nullptr;};
    inline string link() const { DARABONBA_PTR_GET_DEFAULT(link_, "") };
    inline GetRangeResponseBodyHyperlinks& setLink(string link) { DARABONBA_PTR_SET_VALUE(link_, link) };


    // text Field Functions 
    bool hasText() const { return this->text_ != nullptr;};
    void deleteText() { this->text_ = nullptr;};
    inline string text() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
    inline GetRangeResponseBodyHyperlinks& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


  protected:
    std::shared_ptr<string> type_ = nullptr;
    std::shared_ptr<string> link_ = nullptr;
    std::shared_ptr<string> text_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
