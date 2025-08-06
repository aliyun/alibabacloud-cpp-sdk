// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AUTHORIZESKILLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_AUTHORIZESKILLRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class AuthorizeSkillResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AuthorizeSkillResponseBody& obj) { 
      DARABONBA_ANY_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, AuthorizeSkillResponseBody& obj) { 
      DARABONBA_ANY_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    AuthorizeSkillResponseBody() = default ;
    AuthorizeSkillResponseBody(const AuthorizeSkillResponseBody &) = default ;
    AuthorizeSkillResponseBody(AuthorizeSkillResponseBody &&) = default ;
    AuthorizeSkillResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AuthorizeSkillResponseBody() = default ;
    AuthorizeSkillResponseBody& operator=(const AuthorizeSkillResponseBody &) = default ;
    AuthorizeSkillResponseBody& operator=(AuthorizeSkillResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr
        && this->requestId_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline     const Darabonba::Json & data() const { DARABONBA_GET(data_) };
    Darabonba::Json & data() { DARABONBA_GET(data_) };
    inline AuthorizeSkillResponseBody& setData(const Darabonba::Json & data) { DARABONBA_SET_VALUE(data_, data) };
    inline AuthorizeSkillResponseBody& setData(Darabonba::Json & data) { DARABONBA_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AuthorizeSkillResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    Darabonba::Json data_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
