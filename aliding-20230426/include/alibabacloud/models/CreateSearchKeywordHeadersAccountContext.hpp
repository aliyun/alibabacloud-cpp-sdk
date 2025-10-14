// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESEARCHKEYWORDHEADERSACCOUNTCONTEXT_HPP_
#define ALIBABACLOUD_MODELS_CREATESEARCHKEYWORDHEADERSACCOUNTCONTEXT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class CreateSearchKeywordHeadersAccountContext : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSearchKeywordHeadersAccountContext& obj) { 
      DARABONBA_PTR_TO_JSON(userToken, userToken_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSearchKeywordHeadersAccountContext& obj) { 
      DARABONBA_PTR_FROM_JSON(userToken, userToken_);
    };
    CreateSearchKeywordHeadersAccountContext() = default ;
    CreateSearchKeywordHeadersAccountContext(const CreateSearchKeywordHeadersAccountContext &) = default ;
    CreateSearchKeywordHeadersAccountContext(CreateSearchKeywordHeadersAccountContext &&) = default ;
    CreateSearchKeywordHeadersAccountContext(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSearchKeywordHeadersAccountContext() = default ;
    CreateSearchKeywordHeadersAccountContext& operator=(const CreateSearchKeywordHeadersAccountContext &) = default ;
    CreateSearchKeywordHeadersAccountContext& operator=(CreateSearchKeywordHeadersAccountContext &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->userToken_ == nullptr; };
    // userToken Field Functions 
    bool hasUserToken() const { return this->userToken_ != nullptr;};
    void deleteUserToken() { this->userToken_ = nullptr;};
    inline string userToken() const { DARABONBA_PTR_GET_DEFAULT(userToken_, "") };
    inline CreateSearchKeywordHeadersAccountContext& setUserToken(string userToken) { DARABONBA_PTR_SET_VALUE(userToken_, userToken) };


  protected:
    std::shared_ptr<string> userToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
