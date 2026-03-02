// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLOGINUSERINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETLOGINUSERINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/BucUser.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class GetLoginUserInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLoginUserInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(result, result_);
    };
    friend void from_json(const Darabonba::Json& j, GetLoginUserInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(result, result_);
    };
    GetLoginUserInfoResponseBody() = default ;
    GetLoginUserInfoResponseBody(const GetLoginUserInfoResponseBody &) = default ;
    GetLoginUserInfoResponseBody(GetLoginUserInfoResponseBody &&) = default ;
    GetLoginUserInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLoginUserInfoResponseBody() = default ;
    GetLoginUserInfoResponseBody& operator=(const GetLoginUserInfoResponseBody &) = default ;
    GetLoginUserInfoResponseBody& operator=(GetLoginUserInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->result_ == nullptr; };
    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const BucUser & getResult() const { DARABONBA_PTR_GET_CONST(result_, BucUser) };
    inline BucUser getResult() { DARABONBA_PTR_GET(result_, BucUser) };
    inline GetLoginUserInfoResponseBody& setResult(const BucUser & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline GetLoginUserInfoResponseBody& setResult(BucUser && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    shared_ptr<BucUser> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
