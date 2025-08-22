// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETFINGERPRINTTEMPLATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SETFINGERPRINTTEMPLATERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20201002
{
namespace Models
{
  class SetFingerPrintTemplateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetFingerPrintTemplateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(EncryptedPassword, encryptedPassword_);
      DARABONBA_PTR_TO_JSON(Index, index_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, SetFingerPrintTemplateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(EncryptedPassword, encryptedPassword_);
      DARABONBA_PTR_FROM_JSON(Index, index_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    SetFingerPrintTemplateResponseBody() = default ;
    SetFingerPrintTemplateResponseBody(const SetFingerPrintTemplateResponseBody &) = default ;
    SetFingerPrintTemplateResponseBody(SetFingerPrintTemplateResponseBody &&) = default ;
    SetFingerPrintTemplateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetFingerPrintTemplateResponseBody() = default ;
    SetFingerPrintTemplateResponseBody& operator=(const SetFingerPrintTemplateResponseBody &) = default ;
    SetFingerPrintTemplateResponseBody& operator=(SetFingerPrintTemplateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->encryptedPassword_ != nullptr
        && this->index_ != nullptr && this->requestId_ != nullptr; };
    // encryptedPassword Field Functions 
    bool hasEncryptedPassword() const { return this->encryptedPassword_ != nullptr;};
    void deleteEncryptedPassword() { this->encryptedPassword_ = nullptr;};
    inline string encryptedPassword() const { DARABONBA_PTR_GET_DEFAULT(encryptedPassword_, "") };
    inline SetFingerPrintTemplateResponseBody& setEncryptedPassword(string encryptedPassword) { DARABONBA_PTR_SET_VALUE(encryptedPassword_, encryptedPassword) };


    // index Field Functions 
    bool hasIndex() const { return this->index_ != nullptr;};
    void deleteIndex() { this->index_ = nullptr;};
    inline int32_t index() const { DARABONBA_PTR_GET_DEFAULT(index_, 0) };
    inline SetFingerPrintTemplateResponseBody& setIndex(int32_t index) { DARABONBA_PTR_SET_VALUE(index_, index) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SetFingerPrintTemplateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<string> encryptedPassword_ = nullptr;
    std::shared_ptr<int32_t> index_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20201002
#endif
