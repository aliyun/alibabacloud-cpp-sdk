// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BINDAXGRESPONSEBODYSECRETBINDDTO_HPP_
#define ALIBABACLOUD_MODELS_BINDAXGRESPONSEBODYSECRETBINDDTO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyplsapi20170525
{
namespace Models
{
  class BindAxgResponseBodySecretBindDTO : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BindAxgResponseBodySecretBindDTO& obj) { 
      DARABONBA_PTR_TO_JSON(Extension, extension_);
      DARABONBA_PTR_TO_JSON(SecretNo, secretNo_);
      DARABONBA_PTR_TO_JSON(SubsId, subsId_);
    };
    friend void from_json(const Darabonba::Json& j, BindAxgResponseBodySecretBindDTO& obj) { 
      DARABONBA_PTR_FROM_JSON(Extension, extension_);
      DARABONBA_PTR_FROM_JSON(SecretNo, secretNo_);
      DARABONBA_PTR_FROM_JSON(SubsId, subsId_);
    };
    BindAxgResponseBodySecretBindDTO() = default ;
    BindAxgResponseBodySecretBindDTO(const BindAxgResponseBodySecretBindDTO &) = default ;
    BindAxgResponseBodySecretBindDTO(BindAxgResponseBodySecretBindDTO &&) = default ;
    BindAxgResponseBodySecretBindDTO(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BindAxgResponseBodySecretBindDTO() = default ;
    BindAxgResponseBodySecretBindDTO& operator=(const BindAxgResponseBodySecretBindDTO &) = default ;
    BindAxgResponseBodySecretBindDTO& operator=(BindAxgResponseBodySecretBindDTO &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->extension_ == nullptr
        && return this->secretNo_ == nullptr && return this->subsId_ == nullptr; };
    // extension Field Functions 
    bool hasExtension() const { return this->extension_ != nullptr;};
    void deleteExtension() { this->extension_ = nullptr;};
    inline string extension() const { DARABONBA_PTR_GET_DEFAULT(extension_, "") };
    inline BindAxgResponseBodySecretBindDTO& setExtension(string extension) { DARABONBA_PTR_SET_VALUE(extension_, extension) };


    // secretNo Field Functions 
    bool hasSecretNo() const { return this->secretNo_ != nullptr;};
    void deleteSecretNo() { this->secretNo_ = nullptr;};
    inline string secretNo() const { DARABONBA_PTR_GET_DEFAULT(secretNo_, "") };
    inline BindAxgResponseBodySecretBindDTO& setSecretNo(string secretNo) { DARABONBA_PTR_SET_VALUE(secretNo_, secretNo) };


    // subsId Field Functions 
    bool hasSubsId() const { return this->subsId_ != nullptr;};
    void deleteSubsId() { this->subsId_ = nullptr;};
    inline string subsId() const { DARABONBA_PTR_GET_DEFAULT(subsId_, "") };
    inline BindAxgResponseBodySecretBindDTO& setSubsId(string subsId) { DARABONBA_PTR_SET_VALUE(subsId_, subsId) };


  protected:
    // The extension of the phone number.
    // 
    // >  The BindAxg operation does not involve an extension. Ignore this parameter.
    std::shared_ptr<string> extension_ = nullptr;
    // The private number, that is, phone number X.
    std::shared_ptr<string> secretNo_ = nullptr;
    // The binding ID.
    std::shared_ptr<string> subsId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyplsapi20170525
#endif
