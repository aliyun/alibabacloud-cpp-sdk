// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATERANGEREQUESTHYPERLINKS_HPP_
#define ALIBABACLOUD_MODELS_UPDATERANGEREQUESTHYPERLINKS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class UpdateRangeRequestHyperlinks : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateRangeRequestHyperlinks& obj) { 
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Link, link_);
      DARABONBA_PTR_TO_JSON(Text, text_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateRangeRequestHyperlinks& obj) { 
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Link, link_);
      DARABONBA_PTR_FROM_JSON(Text, text_);
    };
    UpdateRangeRequestHyperlinks() = default ;
    UpdateRangeRequestHyperlinks(const UpdateRangeRequestHyperlinks &) = default ;
    UpdateRangeRequestHyperlinks(UpdateRangeRequestHyperlinks &&) = default ;
    UpdateRangeRequestHyperlinks(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateRangeRequestHyperlinks() = default ;
    UpdateRangeRequestHyperlinks& operator=(const UpdateRangeRequestHyperlinks &) = default ;
    UpdateRangeRequestHyperlinks& operator=(UpdateRangeRequestHyperlinks &&) = default ;
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
    inline UpdateRangeRequestHyperlinks& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // link Field Functions 
    bool hasLink() const { return this->link_ != nullptr;};
    void deleteLink() { this->link_ = nullptr;};
    inline string link() const { DARABONBA_PTR_GET_DEFAULT(link_, "") };
    inline UpdateRangeRequestHyperlinks& setLink(string link) { DARABONBA_PTR_SET_VALUE(link_, link) };


    // text Field Functions 
    bool hasText() const { return this->text_ != nullptr;};
    void deleteText() { this->text_ = nullptr;};
    inline string text() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
    inline UpdateRangeRequestHyperlinks& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


  protected:
    std::shared_ptr<string> type_ = nullptr;
    std::shared_ptr<string> link_ = nullptr;
    std::shared_ptr<string> text_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
