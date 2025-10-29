// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AKSKIDENTITYCONFIG_HPP_
#define ALIBABACLOUD_MODELS_AKSKIDENTITYCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class AkSkIdentityConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AkSkIdentityConfig& obj) { 
      DARABONBA_PTR_TO_JSON(ak, ak_);
      DARABONBA_PTR_TO_JSON(generateMode, generateMode_);
      DARABONBA_PTR_TO_JSON(sk, sk_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, AkSkIdentityConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(ak, ak_);
      DARABONBA_PTR_FROM_JSON(generateMode, generateMode_);
      DARABONBA_PTR_FROM_JSON(sk, sk_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    AkSkIdentityConfig() = default ;
    AkSkIdentityConfig(const AkSkIdentityConfig &) = default ;
    AkSkIdentityConfig(AkSkIdentityConfig &&) = default ;
    AkSkIdentityConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AkSkIdentityConfig() = default ;
    AkSkIdentityConfig& operator=(const AkSkIdentityConfig &) = default ;
    AkSkIdentityConfig& operator=(AkSkIdentityConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ak_ == nullptr
        && return this->generateMode_ == nullptr && return this->sk_ == nullptr && return this->type_ == nullptr; };
    // ak Field Functions 
    bool hasAk() const { return this->ak_ != nullptr;};
    void deleteAk() { this->ak_ = nullptr;};
    inline string ak() const { DARABONBA_PTR_GET_DEFAULT(ak_, "") };
    inline AkSkIdentityConfig& setAk(string ak) { DARABONBA_PTR_SET_VALUE(ak_, ak) };


    // generateMode Field Functions 
    bool hasGenerateMode() const { return this->generateMode_ != nullptr;};
    void deleteGenerateMode() { this->generateMode_ = nullptr;};
    inline string generateMode() const { DARABONBA_PTR_GET_DEFAULT(generateMode_, "") };
    inline AkSkIdentityConfig& setGenerateMode(string generateMode) { DARABONBA_PTR_SET_VALUE(generateMode_, generateMode) };


    // sk Field Functions 
    bool hasSk() const { return this->sk_ != nullptr;};
    void deleteSk() { this->sk_ = nullptr;};
    inline string sk() const { DARABONBA_PTR_GET_DEFAULT(sk_, "") };
    inline AkSkIdentityConfig& setSk(string sk) { DARABONBA_PTR_SET_VALUE(sk_, sk) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline AkSkIdentityConfig& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<string> ak_ = nullptr;
    std::shared_ptr<string> generateMode_ = nullptr;
    std::shared_ptr<string> sk_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
