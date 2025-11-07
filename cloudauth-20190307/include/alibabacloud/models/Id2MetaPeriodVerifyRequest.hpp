// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ID2METAPERIODVERIFYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ID2METAPERIODVERIFYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class Id2MetaPeriodVerifyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Id2MetaPeriodVerifyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(IdentifyNum, identifyNum_);
      DARABONBA_PTR_TO_JSON(ParamType, paramType_);
      DARABONBA_PTR_TO_JSON(UserName, userName_);
      DARABONBA_PTR_TO_JSON(ValidityEndDate, validityEndDate_);
      DARABONBA_PTR_TO_JSON(ValidityStartDate, validityStartDate_);
    };
    friend void from_json(const Darabonba::Json& j, Id2MetaPeriodVerifyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(IdentifyNum, identifyNum_);
      DARABONBA_PTR_FROM_JSON(ParamType, paramType_);
      DARABONBA_PTR_FROM_JSON(UserName, userName_);
      DARABONBA_PTR_FROM_JSON(ValidityEndDate, validityEndDate_);
      DARABONBA_PTR_FROM_JSON(ValidityStartDate, validityStartDate_);
    };
    Id2MetaPeriodVerifyRequest() = default ;
    Id2MetaPeriodVerifyRequest(const Id2MetaPeriodVerifyRequest &) = default ;
    Id2MetaPeriodVerifyRequest(Id2MetaPeriodVerifyRequest &&) = default ;
    Id2MetaPeriodVerifyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Id2MetaPeriodVerifyRequest() = default ;
    Id2MetaPeriodVerifyRequest& operator=(const Id2MetaPeriodVerifyRequest &) = default ;
    Id2MetaPeriodVerifyRequest& operator=(Id2MetaPeriodVerifyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->identifyNum_ == nullptr
        && return this->paramType_ == nullptr && return this->userName_ == nullptr && return this->validityEndDate_ == nullptr && return this->validityStartDate_ == nullptr; };
    // identifyNum Field Functions 
    bool hasIdentifyNum() const { return this->identifyNum_ != nullptr;};
    void deleteIdentifyNum() { this->identifyNum_ = nullptr;};
    inline string identifyNum() const { DARABONBA_PTR_GET_DEFAULT(identifyNum_, "") };
    inline Id2MetaPeriodVerifyRequest& setIdentifyNum(string identifyNum) { DARABONBA_PTR_SET_VALUE(identifyNum_, identifyNum) };


    // paramType Field Functions 
    bool hasParamType() const { return this->paramType_ != nullptr;};
    void deleteParamType() { this->paramType_ = nullptr;};
    inline string paramType() const { DARABONBA_PTR_GET_DEFAULT(paramType_, "") };
    inline Id2MetaPeriodVerifyRequest& setParamType(string paramType) { DARABONBA_PTR_SET_VALUE(paramType_, paramType) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string userName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline Id2MetaPeriodVerifyRequest& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


    // validityEndDate Field Functions 
    bool hasValidityEndDate() const { return this->validityEndDate_ != nullptr;};
    void deleteValidityEndDate() { this->validityEndDate_ = nullptr;};
    inline string validityEndDate() const { DARABONBA_PTR_GET_DEFAULT(validityEndDate_, "") };
    inline Id2MetaPeriodVerifyRequest& setValidityEndDate(string validityEndDate) { DARABONBA_PTR_SET_VALUE(validityEndDate_, validityEndDate) };


    // validityStartDate Field Functions 
    bool hasValidityStartDate() const { return this->validityStartDate_ != nullptr;};
    void deleteValidityStartDate() { this->validityStartDate_ = nullptr;};
    inline string validityStartDate() const { DARABONBA_PTR_GET_DEFAULT(validityStartDate_, "") };
    inline Id2MetaPeriodVerifyRequest& setValidityStartDate(string validityStartDate) { DARABONBA_PTR_SET_VALUE(validityStartDate_, validityStartDate) };


  protected:
    // ID number:
    // 
    // - When `paramType` is `normal`: Enter the plain text of the ID number.
    // - When `paramType` is `md5`:
    // The first 6 digits (plain text) + date of birth (encrypted) + last 4 digits (plain text).
    std::shared_ptr<string> identifyNum_ = nullptr;
    // Parameter type:
    // 
    // - normal: Unencrypted.
    // - md5: MD5 encrypted.
    std::shared_ptr<string> paramType_ = nullptr;
    // Name.
    // 
    // - When `paramType` = `normal`: Enter the plain text of the name.
    // - When `paramType` = `md5`: The first character of the name MD5 encrypted (32 lowercase MD5) + the rest of the name in plain text.
    std::shared_ptr<string> userName_ = nullptr;
    // End date of ID validity, format: YYYYMMDD
    std::shared_ptr<string> validityEndDate_ = nullptr;
    // Start date of ID validity, format: YYYYMMDD
    std::shared_ptr<string> validityStartDate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
