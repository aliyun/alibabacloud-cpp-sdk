// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INITAUTHVERIFYRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_INITAUTHVERIFYRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class InitAuthVerifyResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InitAuthVerifyResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(CertifyId, certifyId_);
    };
    friend void from_json(const Darabonba::Json& j, InitAuthVerifyResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(CertifyId, certifyId_);
    };
    InitAuthVerifyResponseBodyResult() = default ;
    InitAuthVerifyResponseBodyResult(const InitAuthVerifyResponseBodyResult &) = default ;
    InitAuthVerifyResponseBodyResult(InitAuthVerifyResponseBodyResult &&) = default ;
    InitAuthVerifyResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InitAuthVerifyResponseBodyResult() = default ;
    InitAuthVerifyResponseBodyResult& operator=(const InitAuthVerifyResponseBodyResult &) = default ;
    InitAuthVerifyResponseBodyResult& operator=(InitAuthVerifyResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->certifyId_ == nullptr; };
    // certifyId Field Functions 
    bool hasCertifyId() const { return this->certifyId_ != nullptr;};
    void deleteCertifyId() { this->certifyId_ = nullptr;};
    inline string certifyId() const { DARABONBA_PTR_GET_DEFAULT(certifyId_, "") };
    inline InitAuthVerifyResponseBodyResult& setCertifyId(string certifyId) { DARABONBA_PTR_SET_VALUE(certifyId_, certifyId) };


  protected:
    std::shared_ptr<string> certifyId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
