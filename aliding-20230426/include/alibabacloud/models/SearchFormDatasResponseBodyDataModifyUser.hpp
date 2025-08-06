// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHFORMDATASRESPONSEBODYDATAMODIFYUSER_HPP_
#define ALIBABACLOUD_MODELS_SEARCHFORMDATASRESPONSEBODYDATAMODIFYUSER_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SearchFormDatasResponseBodyDataModifyUserUserName.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class SearchFormDatasResponseBodyDataModifyUser : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchFormDatasResponseBodyDataModifyUser& obj) { 
      DARABONBA_PTR_TO_JSON(UserId, userId_);
      DARABONBA_PTR_TO_JSON(UserName, userName_);
    };
    friend void from_json(const Darabonba::Json& j, SearchFormDatasResponseBodyDataModifyUser& obj) { 
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
      DARABONBA_PTR_FROM_JSON(UserName, userName_);
    };
    SearchFormDatasResponseBodyDataModifyUser() = default ;
    SearchFormDatasResponseBodyDataModifyUser(const SearchFormDatasResponseBodyDataModifyUser &) = default ;
    SearchFormDatasResponseBodyDataModifyUser(SearchFormDatasResponseBodyDataModifyUser &&) = default ;
    SearchFormDatasResponseBodyDataModifyUser(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchFormDatasResponseBodyDataModifyUser() = default ;
    SearchFormDatasResponseBodyDataModifyUser& operator=(const SearchFormDatasResponseBodyDataModifyUser &) = default ;
    SearchFormDatasResponseBodyDataModifyUser& operator=(SearchFormDatasResponseBodyDataModifyUser &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->userId_ != nullptr
        && this->userName_ != nullptr; };
    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline SearchFormDatasResponseBodyDataModifyUser& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline const Models::SearchFormDatasResponseBodyDataModifyUserUserName & userName() const { DARABONBA_PTR_GET_CONST(userName_, Models::SearchFormDatasResponseBodyDataModifyUserUserName) };
    inline Models::SearchFormDatasResponseBodyDataModifyUserUserName userName() { DARABONBA_PTR_GET(userName_, Models::SearchFormDatasResponseBodyDataModifyUserUserName) };
    inline SearchFormDatasResponseBodyDataModifyUser& setUserName(const Models::SearchFormDatasResponseBodyDataModifyUserUserName & userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };
    inline SearchFormDatasResponseBodyDataModifyUser& setUserName(Models::SearchFormDatasResponseBodyDataModifyUserUserName && userName) { DARABONBA_PTR_SET_RVALUE(userName_, userName) };


  protected:
    std::shared_ptr<string> userId_ = nullptr;
    std::shared_ptr<Models::SearchFormDatasResponseBodyDataModifyUserUserName> userName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
