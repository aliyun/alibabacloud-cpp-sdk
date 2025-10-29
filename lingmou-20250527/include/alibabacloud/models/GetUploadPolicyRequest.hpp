// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUPLOADPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETUPLOADPOLICYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace LingMou20250527
{
namespace Models
{
  class GetUploadPolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUploadPolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(jwtToken, jwtToken_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, GetUploadPolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(jwtToken, jwtToken_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    GetUploadPolicyRequest() = default ;
    GetUploadPolicyRequest(const GetUploadPolicyRequest &) = default ;
    GetUploadPolicyRequest(GetUploadPolicyRequest &&) = default ;
    GetUploadPolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUploadPolicyRequest() = default ;
    GetUploadPolicyRequest& operator=(const GetUploadPolicyRequest &) = default ;
    GetUploadPolicyRequest& operator=(GetUploadPolicyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->jwtToken_ == nullptr
        && return this->type_ == nullptr; };
    // jwtToken Field Functions 
    bool hasJwtToken() const { return this->jwtToken_ != nullptr;};
    void deleteJwtToken() { this->jwtToken_ = nullptr;};
    inline string jwtToken() const { DARABONBA_PTR_GET_DEFAULT(jwtToken_, "") };
    inline GetUploadPolicyRequest& setJwtToken(string jwtToken) { DARABONBA_PTR_SET_VALUE(jwtToken_, jwtToken) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetUploadPolicyRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<string> jwtToken_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace LingMou20250527
#endif
