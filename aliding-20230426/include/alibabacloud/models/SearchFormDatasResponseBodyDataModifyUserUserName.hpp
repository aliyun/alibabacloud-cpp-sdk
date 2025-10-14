// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHFORMDATASRESPONSEBODYDATAMODIFYUSERUSERNAME_HPP_
#define ALIBABACLOUD_MODELS_SEARCHFORMDATASRESPONSEBODYDATAMODIFYUSERUSERNAME_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class SearchFormDatasResponseBodyDataModifyUserUserName : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchFormDatasResponseBodyDataModifyUserUserName& obj) { 
      DARABONBA_PTR_TO_JSON(NameInChinese, nameInChinese_);
      DARABONBA_PTR_TO_JSON(NameInEnglish, nameInEnglish_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, SearchFormDatasResponseBodyDataModifyUserUserName& obj) { 
      DARABONBA_PTR_FROM_JSON(NameInChinese, nameInChinese_);
      DARABONBA_PTR_FROM_JSON(NameInEnglish, nameInEnglish_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    SearchFormDatasResponseBodyDataModifyUserUserName() = default ;
    SearchFormDatasResponseBodyDataModifyUserUserName(const SearchFormDatasResponseBodyDataModifyUserUserName &) = default ;
    SearchFormDatasResponseBodyDataModifyUserUserName(SearchFormDatasResponseBodyDataModifyUserUserName &&) = default ;
    SearchFormDatasResponseBodyDataModifyUserUserName(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchFormDatasResponseBodyDataModifyUserUserName() = default ;
    SearchFormDatasResponseBodyDataModifyUserUserName& operator=(const SearchFormDatasResponseBodyDataModifyUserUserName &) = default ;
    SearchFormDatasResponseBodyDataModifyUserUserName& operator=(SearchFormDatasResponseBodyDataModifyUserUserName &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->nameInChinese_ == nullptr
        && return this->nameInEnglish_ == nullptr && return this->type_ == nullptr; };
    // nameInChinese Field Functions 
    bool hasNameInChinese() const { return this->nameInChinese_ != nullptr;};
    void deleteNameInChinese() { this->nameInChinese_ = nullptr;};
    inline string nameInChinese() const { DARABONBA_PTR_GET_DEFAULT(nameInChinese_, "") };
    inline SearchFormDatasResponseBodyDataModifyUserUserName& setNameInChinese(string nameInChinese) { DARABONBA_PTR_SET_VALUE(nameInChinese_, nameInChinese) };


    // nameInEnglish Field Functions 
    bool hasNameInEnglish() const { return this->nameInEnglish_ != nullptr;};
    void deleteNameInEnglish() { this->nameInEnglish_ = nullptr;};
    inline string nameInEnglish() const { DARABONBA_PTR_GET_DEFAULT(nameInEnglish_, "") };
    inline SearchFormDatasResponseBodyDataModifyUserUserName& setNameInEnglish(string nameInEnglish) { DARABONBA_PTR_SET_VALUE(nameInEnglish_, nameInEnglish) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline SearchFormDatasResponseBodyDataModifyUserUserName& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<string> nameInChinese_ = nullptr;
    std::shared_ptr<string> nameInEnglish_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
