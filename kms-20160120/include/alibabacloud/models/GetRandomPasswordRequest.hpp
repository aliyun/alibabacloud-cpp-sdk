// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRANDOMPASSWORDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETRANDOMPASSWORDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Kms20160120
{
namespace Models
{
  class GetRandomPasswordRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRandomPasswordRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ExcludeCharacters, excludeCharacters_);
      DARABONBA_PTR_TO_JSON(ExcludeLowercase, excludeLowercase_);
      DARABONBA_PTR_TO_JSON(ExcludeNumbers, excludeNumbers_);
      DARABONBA_PTR_TO_JSON(ExcludePunctuation, excludePunctuation_);
      DARABONBA_PTR_TO_JSON(ExcludeUppercase, excludeUppercase_);
      DARABONBA_PTR_TO_JSON(PasswordLength, passwordLength_);
      DARABONBA_PTR_TO_JSON(RequireEachIncludedType, requireEachIncludedType_);
    };
    friend void from_json(const Darabonba::Json& j, GetRandomPasswordRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ExcludeCharacters, excludeCharacters_);
      DARABONBA_PTR_FROM_JSON(ExcludeLowercase, excludeLowercase_);
      DARABONBA_PTR_FROM_JSON(ExcludeNumbers, excludeNumbers_);
      DARABONBA_PTR_FROM_JSON(ExcludePunctuation, excludePunctuation_);
      DARABONBA_PTR_FROM_JSON(ExcludeUppercase, excludeUppercase_);
      DARABONBA_PTR_FROM_JSON(PasswordLength, passwordLength_);
      DARABONBA_PTR_FROM_JSON(RequireEachIncludedType, requireEachIncludedType_);
    };
    GetRandomPasswordRequest() = default ;
    GetRandomPasswordRequest(const GetRandomPasswordRequest &) = default ;
    GetRandomPasswordRequest(GetRandomPasswordRequest &&) = default ;
    GetRandomPasswordRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRandomPasswordRequest() = default ;
    GetRandomPasswordRequest& operator=(const GetRandomPasswordRequest &) = default ;
    GetRandomPasswordRequest& operator=(GetRandomPasswordRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->excludeCharacters_ == nullptr
        && this->excludeLowercase_ == nullptr && this->excludeNumbers_ == nullptr && this->excludePunctuation_ == nullptr && this->excludeUppercase_ == nullptr && this->passwordLength_ == nullptr
        && this->requireEachIncludedType_ == nullptr; };
    // excludeCharacters Field Functions 
    bool hasExcludeCharacters() const { return this->excludeCharacters_ != nullptr;};
    void deleteExcludeCharacters() { this->excludeCharacters_ = nullptr;};
    inline string getExcludeCharacters() const { DARABONBA_PTR_GET_DEFAULT(excludeCharacters_, "") };
    inline GetRandomPasswordRequest& setExcludeCharacters(string excludeCharacters) { DARABONBA_PTR_SET_VALUE(excludeCharacters_, excludeCharacters) };


    // excludeLowercase Field Functions 
    bool hasExcludeLowercase() const { return this->excludeLowercase_ != nullptr;};
    void deleteExcludeLowercase() { this->excludeLowercase_ = nullptr;};
    inline string getExcludeLowercase() const { DARABONBA_PTR_GET_DEFAULT(excludeLowercase_, "") };
    inline GetRandomPasswordRequest& setExcludeLowercase(string excludeLowercase) { DARABONBA_PTR_SET_VALUE(excludeLowercase_, excludeLowercase) };


    // excludeNumbers Field Functions 
    bool hasExcludeNumbers() const { return this->excludeNumbers_ != nullptr;};
    void deleteExcludeNumbers() { this->excludeNumbers_ = nullptr;};
    inline string getExcludeNumbers() const { DARABONBA_PTR_GET_DEFAULT(excludeNumbers_, "") };
    inline GetRandomPasswordRequest& setExcludeNumbers(string excludeNumbers) { DARABONBA_PTR_SET_VALUE(excludeNumbers_, excludeNumbers) };


    // excludePunctuation Field Functions 
    bool hasExcludePunctuation() const { return this->excludePunctuation_ != nullptr;};
    void deleteExcludePunctuation() { this->excludePunctuation_ = nullptr;};
    inline string getExcludePunctuation() const { DARABONBA_PTR_GET_DEFAULT(excludePunctuation_, "") };
    inline GetRandomPasswordRequest& setExcludePunctuation(string excludePunctuation) { DARABONBA_PTR_SET_VALUE(excludePunctuation_, excludePunctuation) };


    // excludeUppercase Field Functions 
    bool hasExcludeUppercase() const { return this->excludeUppercase_ != nullptr;};
    void deleteExcludeUppercase() { this->excludeUppercase_ = nullptr;};
    inline string getExcludeUppercase() const { DARABONBA_PTR_GET_DEFAULT(excludeUppercase_, "") };
    inline GetRandomPasswordRequest& setExcludeUppercase(string excludeUppercase) { DARABONBA_PTR_SET_VALUE(excludeUppercase_, excludeUppercase) };


    // passwordLength Field Functions 
    bool hasPasswordLength() const { return this->passwordLength_ != nullptr;};
    void deletePasswordLength() { this->passwordLength_ = nullptr;};
    inline string getPasswordLength() const { DARABONBA_PTR_GET_DEFAULT(passwordLength_, "") };
    inline GetRandomPasswordRequest& setPasswordLength(string passwordLength) { DARABONBA_PTR_SET_VALUE(passwordLength_, passwordLength) };


    // requireEachIncludedType Field Functions 
    bool hasRequireEachIncludedType() const { return this->requireEachIncludedType_ != nullptr;};
    void deleteRequireEachIncludedType() { this->requireEachIncludedType_ = nullptr;};
    inline string getRequireEachIncludedType() const { DARABONBA_PTR_GET_DEFAULT(requireEachIncludedType_, "") };
    inline GetRandomPasswordRequest& setRequireEachIncludedType(string requireEachIncludedType) { DARABONBA_PTR_SET_VALUE(requireEachIncludedType_, requireEachIncludedType) };


  protected:
    // The characters that are not included in the password to be generated.
    // 
    // Valid values:
    // 
    // `Valid characters: 0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ! \\"#$%&\\"()*+,-. /:;<=>? @[\\] your_project_id} ~ `.
    // 
    // This parameter is empty by default.
    shared_ptr<string> excludeCharacters_ {};
    // Specifies whether to exclude lowercase letters.
    // 
    // Valid values:
    // 
    // - true
    // 
    // - false
    shared_ptr<string> excludeLowercase_ {};
    // Specifies whether to exclude digits.
    // 
    // Valid values:
    // 
    // - true
    // 
    // - false
    shared_ptr<string> excludeNumbers_ {};
    // Specifies whether to exclude special characters.
    // 
    // Valid values:
    // 
    // - true
    // 
    // - false
    shared_ptr<string> excludePunctuation_ {};
    // Specifies whether to exclude uppercase letters.
    // 
    // Valid values:
    // 
    // - true
    // 
    // - false
    shared_ptr<string> excludeUppercase_ {};
    // The number of bytes that the password to be generated contains.
    // 
    // Valid values: 8 to 128.
    // 
    // Default value: 32
    shared_ptr<string> passwordLength_ {};
    // Specifies whether to include all the preceding character types.
    // 
    // Valid values:
    // 
    // - true
    // 
    // - false
    shared_ptr<string> requireEachIncludedType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kms20160120
#endif
