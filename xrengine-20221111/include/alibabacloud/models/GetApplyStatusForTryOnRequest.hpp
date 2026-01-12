// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPPLYSTATUSFORTRYONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETAPPLYSTATUSFORTRYONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace XrEngine20221111
{
namespace Models
{
  class GetApplyStatusForTryOnRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetApplyStatusForTryOnRequest& obj) { 
      DARABONBA_PTR_TO_JSON(JwtToken, jwtToken_);
    };
    friend void from_json(const Darabonba::Json& j, GetApplyStatusForTryOnRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(JwtToken, jwtToken_);
    };
    GetApplyStatusForTryOnRequest() = default ;
    GetApplyStatusForTryOnRequest(const GetApplyStatusForTryOnRequest &) = default ;
    GetApplyStatusForTryOnRequest(GetApplyStatusForTryOnRequest &&) = default ;
    GetApplyStatusForTryOnRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetApplyStatusForTryOnRequest() = default ;
    GetApplyStatusForTryOnRequest& operator=(const GetApplyStatusForTryOnRequest &) = default ;
    GetApplyStatusForTryOnRequest& operator=(GetApplyStatusForTryOnRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->jwtToken_ == nullptr; };
    // jwtToken Field Functions 
    bool hasJwtToken() const { return this->jwtToken_ != nullptr;};
    void deleteJwtToken() { this->jwtToken_ = nullptr;};
    inline string getJwtToken() const { DARABONBA_PTR_GET_DEFAULT(jwtToken_, "") };
    inline GetApplyStatusForTryOnRequest& setJwtToken(string jwtToken) { DARABONBA_PTR_SET_VALUE(jwtToken_, jwtToken) };


  protected:
    shared_ptr<string> jwtToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace XrEngine20221111
#endif
