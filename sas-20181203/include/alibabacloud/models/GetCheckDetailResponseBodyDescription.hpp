// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCHECKDETAILRESPONSEBODYDESCRIPTION_HPP_
#define ALIBABACLOUD_MODELS_GETCHECKDETAILRESPONSEBODYDESCRIPTION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetCheckDetailResponseBodyDescription : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCheckDetailResponseBodyDescription& obj) { 
      DARABONBA_PTR_TO_JSON(Link, link_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, GetCheckDetailResponseBodyDescription& obj) { 
      DARABONBA_PTR_FROM_JSON(Link, link_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    GetCheckDetailResponseBodyDescription() = default ;
    GetCheckDetailResponseBodyDescription(const GetCheckDetailResponseBodyDescription &) = default ;
    GetCheckDetailResponseBodyDescription(GetCheckDetailResponseBodyDescription &&) = default ;
    GetCheckDetailResponseBodyDescription(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCheckDetailResponseBodyDescription() = default ;
    GetCheckDetailResponseBodyDescription& operator=(const GetCheckDetailResponseBodyDescription &) = default ;
    GetCheckDetailResponseBodyDescription& operator=(GetCheckDetailResponseBodyDescription &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->link_ != nullptr
        && this->type_ != nullptr && this->value_ != nullptr; };
    // link Field Functions 
    bool hasLink() const { return this->link_ != nullptr;};
    void deleteLink() { this->link_ = nullptr;};
    inline string link() const { DARABONBA_PTR_GET_DEFAULT(link_, "") };
    inline GetCheckDetailResponseBodyDescription& setLink(string link) { DARABONBA_PTR_SET_VALUE(link_, link) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetCheckDetailResponseBodyDescription& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline GetCheckDetailResponseBodyDescription& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The link to the description of the check item.
    std::shared_ptr<string> link_ = nullptr;
    // The description type of the check item. The value is fixed as text.
    std::shared_ptr<string> type_ = nullptr;
    // The content in the description of the check item.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
