// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHFORMDATASECONDGENERATIONRESPONSEBODYDATAMODIFYUSER_HPP_
#define ALIBABACLOUD_MODELS_SEARCHFORMDATASECONDGENERATIONRESPONSEBODYDATAMODIFYUSER_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SearchFormDataSecondGenerationResponseBodyDataModifyUserName.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class SearchFormDataSecondGenerationResponseBodyDataModifyUser : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchFormDataSecondGenerationResponseBodyDataModifyUser& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, SearchFormDataSecondGenerationResponseBodyDataModifyUser& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    SearchFormDataSecondGenerationResponseBodyDataModifyUser() = default ;
    SearchFormDataSecondGenerationResponseBodyDataModifyUser(const SearchFormDataSecondGenerationResponseBodyDataModifyUser &) = default ;
    SearchFormDataSecondGenerationResponseBodyDataModifyUser(SearchFormDataSecondGenerationResponseBodyDataModifyUser &&) = default ;
    SearchFormDataSecondGenerationResponseBodyDataModifyUser(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchFormDataSecondGenerationResponseBodyDataModifyUser() = default ;
    SearchFormDataSecondGenerationResponseBodyDataModifyUser& operator=(const SearchFormDataSecondGenerationResponseBodyDataModifyUser &) = default ;
    SearchFormDataSecondGenerationResponseBodyDataModifyUser& operator=(SearchFormDataSecondGenerationResponseBodyDataModifyUser &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->name_ != nullptr
        && this->userId_ != nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline const Models::SearchFormDataSecondGenerationResponseBodyDataModifyUserName & name() const { DARABONBA_PTR_GET_CONST(name_, Models::SearchFormDataSecondGenerationResponseBodyDataModifyUserName) };
    inline Models::SearchFormDataSecondGenerationResponseBodyDataModifyUserName name() { DARABONBA_PTR_GET(name_, Models::SearchFormDataSecondGenerationResponseBodyDataModifyUserName) };
    inline SearchFormDataSecondGenerationResponseBodyDataModifyUser& setName(const Models::SearchFormDataSecondGenerationResponseBodyDataModifyUserName & name) { DARABONBA_PTR_SET_VALUE(name_, name) };
    inline SearchFormDataSecondGenerationResponseBodyDataModifyUser& setName(Models::SearchFormDataSecondGenerationResponseBodyDataModifyUserName && name) { DARABONBA_PTR_SET_RVALUE(name_, name) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline SearchFormDataSecondGenerationResponseBodyDataModifyUser& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    std::shared_ptr<Models::SearchFormDataSecondGenerationResponseBodyDataModifyUserName> name_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
