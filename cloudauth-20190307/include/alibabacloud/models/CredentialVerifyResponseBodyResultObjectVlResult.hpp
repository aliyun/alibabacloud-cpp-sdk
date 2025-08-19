// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREDENTIALVERIFYRESPONSEBODYRESULTOBJECTVLRESULT_HPP_
#define ALIBABACLOUD_MODELS_CREDENTIALVERIFYRESPONSEBODYRESULTOBJECTVLRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class CredentialVerifyResponseBodyResultObjectVlResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CredentialVerifyResponseBodyResultObjectVlResult& obj) { 
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(VlContent, vlContent_);
    };
    friend void from_json(const Darabonba::Json& j, CredentialVerifyResponseBodyResultObjectVlResult& obj) { 
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(VlContent, vlContent_);
    };
    CredentialVerifyResponseBodyResultObjectVlResult() = default ;
    CredentialVerifyResponseBodyResultObjectVlResult(const CredentialVerifyResponseBodyResultObjectVlResult &) = default ;
    CredentialVerifyResponseBodyResultObjectVlResult(CredentialVerifyResponseBodyResultObjectVlResult &&) = default ;
    CredentialVerifyResponseBodyResultObjectVlResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CredentialVerifyResponseBodyResultObjectVlResult() = default ;
    CredentialVerifyResponseBodyResultObjectVlResult& operator=(const CredentialVerifyResponseBodyResultObjectVlResult &) = default ;
    CredentialVerifyResponseBodyResultObjectVlResult& operator=(CredentialVerifyResponseBodyResultObjectVlResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->success_ != nullptr
        && this->vlContent_ != nullptr; };
    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline CredentialVerifyResponseBodyResultObjectVlResult& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // vlContent Field Functions 
    bool hasVlContent() const { return this->vlContent_ != nullptr;};
    void deleteVlContent() { this->vlContent_ = nullptr;};
    inline string vlContent() const { DARABONBA_PTR_GET_DEFAULT(vlContent_, "") };
    inline CredentialVerifyResponseBodyResultObjectVlResult& setVlContent(string vlContent) { DARABONBA_PTR_SET_VALUE(vlContent_, vlContent) };


  protected:
    std::shared_ptr<bool> success_ = nullptr;
    std::shared_ptr<string> vlContent_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
