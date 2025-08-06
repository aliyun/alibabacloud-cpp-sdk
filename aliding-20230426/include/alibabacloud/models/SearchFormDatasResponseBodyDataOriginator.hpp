// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHFORMDATASRESPONSEBODYDATAORIGINATOR_HPP_
#define ALIBABACLOUD_MODELS_SEARCHFORMDATASRESPONSEBODYDATAORIGINATOR_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SearchFormDatasResponseBodyDataOriginatorUserName.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class SearchFormDatasResponseBodyDataOriginator : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchFormDatasResponseBodyDataOriginator& obj) { 
      DARABONBA_PTR_TO_JSON(UserId, userId_);
      DARABONBA_PTR_TO_JSON(UserName, userName_);
    };
    friend void from_json(const Darabonba::Json& j, SearchFormDatasResponseBodyDataOriginator& obj) { 
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
      DARABONBA_PTR_FROM_JSON(UserName, userName_);
    };
    SearchFormDatasResponseBodyDataOriginator() = default ;
    SearchFormDatasResponseBodyDataOriginator(const SearchFormDatasResponseBodyDataOriginator &) = default ;
    SearchFormDatasResponseBodyDataOriginator(SearchFormDatasResponseBodyDataOriginator &&) = default ;
    SearchFormDatasResponseBodyDataOriginator(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchFormDatasResponseBodyDataOriginator() = default ;
    SearchFormDatasResponseBodyDataOriginator& operator=(const SearchFormDatasResponseBodyDataOriginator &) = default ;
    SearchFormDatasResponseBodyDataOriginator& operator=(SearchFormDatasResponseBodyDataOriginator &&) = default ;
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
    inline SearchFormDatasResponseBodyDataOriginator& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline const Models::SearchFormDatasResponseBodyDataOriginatorUserName & userName() const { DARABONBA_PTR_GET_CONST(userName_, Models::SearchFormDatasResponseBodyDataOriginatorUserName) };
    inline Models::SearchFormDatasResponseBodyDataOriginatorUserName userName() { DARABONBA_PTR_GET(userName_, Models::SearchFormDatasResponseBodyDataOriginatorUserName) };
    inline SearchFormDatasResponseBodyDataOriginator& setUserName(const Models::SearchFormDatasResponseBodyDataOriginatorUserName & userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };
    inline SearchFormDatasResponseBodyDataOriginator& setUserName(Models::SearchFormDatasResponseBodyDataOriginatorUserName && userName) { DARABONBA_PTR_SET_RVALUE(userName_, userName) };


  protected:
    std::shared_ptr<string> userId_ = nullptr;
    std::shared_ptr<Models::SearchFormDatasResponseBodyDataOriginatorUserName> userName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
