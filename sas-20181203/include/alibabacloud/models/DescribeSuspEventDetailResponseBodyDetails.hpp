// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESUSPEVENTDETAILRESPONSEBODYDETAILS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESUSPEVENTDETAILRESPONSEBODYDETAILS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeSuspEventDetailResponseBodyDetails : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSuspEventDetailResponseBodyDetails& obj) { 
      DARABONBA_PTR_TO_JSON(NameDisplay, nameDisplay_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSuspEventDetailResponseBodyDetails& obj) { 
      DARABONBA_PTR_FROM_JSON(NameDisplay, nameDisplay_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    DescribeSuspEventDetailResponseBodyDetails() = default ;
    DescribeSuspEventDetailResponseBodyDetails(const DescribeSuspEventDetailResponseBodyDetails &) = default ;
    DescribeSuspEventDetailResponseBodyDetails(DescribeSuspEventDetailResponseBodyDetails &&) = default ;
    DescribeSuspEventDetailResponseBodyDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSuspEventDetailResponseBodyDetails() = default ;
    DescribeSuspEventDetailResponseBodyDetails& operator=(const DescribeSuspEventDetailResponseBodyDetails &) = default ;
    DescribeSuspEventDetailResponseBodyDetails& operator=(DescribeSuspEventDetailResponseBodyDetails &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->nameDisplay_ != nullptr
        && this->type_ != nullptr && this->value_ != nullptr; };
    // nameDisplay Field Functions 
    bool hasNameDisplay() const { return this->nameDisplay_ != nullptr;};
    void deleteNameDisplay() { this->nameDisplay_ = nullptr;};
    inline string nameDisplay() const { DARABONBA_PTR_GET_DEFAULT(nameDisplay_, "") };
    inline DescribeSuspEventDetailResponseBodyDetails& setNameDisplay(string nameDisplay) { DARABONBA_PTR_SET_VALUE(nameDisplay_, nameDisplay) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeSuspEventDetailResponseBodyDetails& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline DescribeSuspEventDetailResponseBodyDetails& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The display name of the alert event.
    std::shared_ptr<string> nameDisplay_ = nullptr;
    // The format in which the details of the exception are displayed.
    // 
    // Valid values:
    // 
    // *   **text**
    // *   **html**
    std::shared_ptr<string> type_ = nullptr;
    // The attribute information about the exception. For example, if the exception is associated with an alert that is triggered by an unusual logon, the information can include the time when the logon is initiated and the location from which the logon is initiated. If the exception is associated with an alert that is triggered by a webshell file, the information can include the path of the trojan file and the type of the trojan.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
