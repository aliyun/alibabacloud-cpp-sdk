// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEMEMBERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEMEMBERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/Member.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ververica20220718
{
namespace Models
{
  class UpdateMemberRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateMemberRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateMemberRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    UpdateMemberRequest() = default ;
    UpdateMemberRequest(const UpdateMemberRequest &) = default ;
    UpdateMemberRequest(UpdateMemberRequest &&) = default ;
    UpdateMemberRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateMemberRequest() = default ;
    UpdateMemberRequest& operator=(const UpdateMemberRequest &) = default ;
    UpdateMemberRequest& operator=(UpdateMemberRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const Member & body() const { DARABONBA_PTR_GET_CONST(body_, Member) };
    inline Member body() { DARABONBA_PTR_GET(body_, Member) };
    inline UpdateMemberRequest& setBody(const Member & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline UpdateMemberRequest& setBody(Member && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    // The permission information about the member.
    std::shared_ptr<Member> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ververica20220718
#endif
