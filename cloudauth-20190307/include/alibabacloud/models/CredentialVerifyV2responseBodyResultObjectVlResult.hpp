// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREDENTIALVERIFYV2RESPONSEBODYRESULTOBJECTVLRESULT_HPP_
#define ALIBABACLOUD_MODELS_CREDENTIALVERIFYV2RESPONSEBODYRESULTOBJECTVLRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class CredentialVerifyV2ResponseBodyResultObjectVlResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CredentialVerifyV2ResponseBodyResultObjectVlResult& obj) { 
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(VlContent, vlContent_);
    };
    friend void from_json(const Darabonba::Json& j, CredentialVerifyV2ResponseBodyResultObjectVlResult& obj) { 
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(VlContent, vlContent_);
    };
    CredentialVerifyV2ResponseBodyResultObjectVlResult() = default ;
    CredentialVerifyV2ResponseBodyResultObjectVlResult(const CredentialVerifyV2ResponseBodyResultObjectVlResult &) = default ;
    CredentialVerifyV2ResponseBodyResultObjectVlResult(CredentialVerifyV2ResponseBodyResultObjectVlResult &&) = default ;
    CredentialVerifyV2ResponseBodyResultObjectVlResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CredentialVerifyV2ResponseBodyResultObjectVlResult() = default ;
    CredentialVerifyV2ResponseBodyResultObjectVlResult& operator=(const CredentialVerifyV2ResponseBodyResultObjectVlResult &) = default ;
    CredentialVerifyV2ResponseBodyResultObjectVlResult& operator=(CredentialVerifyV2ResponseBodyResultObjectVlResult &&) = default ;
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
    inline CredentialVerifyV2ResponseBodyResultObjectVlResult& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // vlContent Field Functions 
    bool hasVlContent() const { return this->vlContent_ != nullptr;};
    void deleteVlContent() { this->vlContent_ = nullptr;};
    inline string vlContent() const { DARABONBA_PTR_GET_DEFAULT(vlContent_, "") };
    inline CredentialVerifyV2ResponseBodyResultObjectVlResult& setVlContent(string vlContent) { DARABONBA_PTR_SET_VALUE(vlContent_, vlContent) };


  protected:
    // Qwen interpretation success indicator
    // 
    // true: Success
    // 
    // false: Failure
    std::shared_ptr<bool> success_ = nullptr;
    // Image understanding result:
    // 
    // - When PromptModel is DEFAULT, the output format refers to the example on the right.
    // 
    // - When PromptModel is CUSTOM, the output format follows the agreed format of the Prompt.
    std::shared_ptr<string> vlContent_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
