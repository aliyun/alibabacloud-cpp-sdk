// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENREALPERSONVERIFICATIONTOKENRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GENREALPERSONVERIFICATIONTOKENRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Facebody20191230
{
namespace Models
{
  class GenRealPersonVerificationTokenResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenRealPersonVerificationTokenResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(VerificationToken, verificationToken_);
    };
    friend void from_json(const Darabonba::Json& j, GenRealPersonVerificationTokenResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(VerificationToken, verificationToken_);
    };
    GenRealPersonVerificationTokenResponseBodyData() = default ;
    GenRealPersonVerificationTokenResponseBodyData(const GenRealPersonVerificationTokenResponseBodyData &) = default ;
    GenRealPersonVerificationTokenResponseBodyData(GenRealPersonVerificationTokenResponseBodyData &&) = default ;
    GenRealPersonVerificationTokenResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenRealPersonVerificationTokenResponseBodyData() = default ;
    GenRealPersonVerificationTokenResponseBodyData& operator=(const GenRealPersonVerificationTokenResponseBodyData &) = default ;
    GenRealPersonVerificationTokenResponseBodyData& operator=(GenRealPersonVerificationTokenResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->verificationToken_ == nullptr; };
    // verificationToken Field Functions 
    bool hasVerificationToken() const { return this->verificationToken_ != nullptr;};
    void deleteVerificationToken() { this->verificationToken_ = nullptr;};
    inline string verificationToken() const { DARABONBA_PTR_GET_DEFAULT(verificationToken_, "") };
    inline GenRealPersonVerificationTokenResponseBodyData& setVerificationToken(string verificationToken) { DARABONBA_PTR_SET_VALUE(verificationToken_, verificationToken) };


  protected:
    std::shared_ptr<string> verificationToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Facebody20191230
#endif
