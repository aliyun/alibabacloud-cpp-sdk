// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETREALPERSONVERIFICATIONRESULTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETREALPERSONVERIFICATIONRESULTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Facebody20191230
{
namespace Models
{
  class GetRealPersonVerificationResultRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRealPersonVerificationResultRequest& obj) { 
      DARABONBA_PTR_TO_JSON(VerificationToken, verificationToken_);
    };
    friend void from_json(const Darabonba::Json& j, GetRealPersonVerificationResultRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(VerificationToken, verificationToken_);
    };
    GetRealPersonVerificationResultRequest() = default ;
    GetRealPersonVerificationResultRequest(const GetRealPersonVerificationResultRequest &) = default ;
    GetRealPersonVerificationResultRequest(GetRealPersonVerificationResultRequest &&) = default ;
    GetRealPersonVerificationResultRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRealPersonVerificationResultRequest() = default ;
    GetRealPersonVerificationResultRequest& operator=(const GetRealPersonVerificationResultRequest &) = default ;
    GetRealPersonVerificationResultRequest& operator=(GetRealPersonVerificationResultRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->verificationToken_ == nullptr; };
    // verificationToken Field Functions 
    bool hasVerificationToken() const { return this->verificationToken_ != nullptr;};
    void deleteVerificationToken() { this->verificationToken_ = nullptr;};
    inline string verificationToken() const { DARABONBA_PTR_GET_DEFAULT(verificationToken_, "") };
    inline GetRealPersonVerificationResultRequest& setVerificationToken(string verificationToken) { DARABONBA_PTR_SET_VALUE(verificationToken_, verificationToken) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> verificationToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Facebody20191230
#endif
