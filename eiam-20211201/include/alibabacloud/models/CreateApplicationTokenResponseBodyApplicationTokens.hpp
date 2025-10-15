// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPPLICATIONTOKENRESPONSEBODYAPPLICATIONTOKENS_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPPLICATIONTOKENRESPONSEBODYAPPLICATIONTOKENS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class CreateApplicationTokenResponseBodyApplicationTokens : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateApplicationTokenResponseBodyApplicationTokens& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationToken, applicationToken_);
      DARABONBA_PTR_TO_JSON(ApplicationTokenId, applicationTokenId_);
      DARABONBA_PTR_TO_JSON(ApplicationTokenType, applicationTokenType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateApplicationTokenResponseBodyApplicationTokens& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationToken, applicationToken_);
      DARABONBA_PTR_FROM_JSON(ApplicationTokenId, applicationTokenId_);
      DARABONBA_PTR_FROM_JSON(ApplicationTokenType, applicationTokenType_);
    };
    CreateApplicationTokenResponseBodyApplicationTokens() = default ;
    CreateApplicationTokenResponseBodyApplicationTokens(const CreateApplicationTokenResponseBodyApplicationTokens &) = default ;
    CreateApplicationTokenResponseBodyApplicationTokens(CreateApplicationTokenResponseBodyApplicationTokens &&) = default ;
    CreateApplicationTokenResponseBodyApplicationTokens(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateApplicationTokenResponseBodyApplicationTokens() = default ;
    CreateApplicationTokenResponseBodyApplicationTokens& operator=(const CreateApplicationTokenResponseBodyApplicationTokens &) = default ;
    CreateApplicationTokenResponseBodyApplicationTokens& operator=(CreateApplicationTokenResponseBodyApplicationTokens &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationToken_ == nullptr
        && return this->applicationTokenId_ == nullptr && return this->applicationTokenType_ == nullptr; };
    // applicationToken Field Functions 
    bool hasApplicationToken() const { return this->applicationToken_ != nullptr;};
    void deleteApplicationToken() { this->applicationToken_ = nullptr;};
    inline string applicationToken() const { DARABONBA_PTR_GET_DEFAULT(applicationToken_, "") };
    inline CreateApplicationTokenResponseBodyApplicationTokens& setApplicationToken(string applicationToken) { DARABONBA_PTR_SET_VALUE(applicationToken_, applicationToken) };


    // applicationTokenId Field Functions 
    bool hasApplicationTokenId() const { return this->applicationTokenId_ != nullptr;};
    void deleteApplicationTokenId() { this->applicationTokenId_ = nullptr;};
    inline string applicationTokenId() const { DARABONBA_PTR_GET_DEFAULT(applicationTokenId_, "") };
    inline CreateApplicationTokenResponseBodyApplicationTokens& setApplicationTokenId(string applicationTokenId) { DARABONBA_PTR_SET_VALUE(applicationTokenId_, applicationTokenId) };


    // applicationTokenType Field Functions 
    bool hasApplicationTokenType() const { return this->applicationTokenType_ != nullptr;};
    void deleteApplicationTokenType() { this->applicationTokenType_ = nullptr;};
    inline string applicationTokenType() const { DARABONBA_PTR_GET_DEFAULT(applicationTokenType_, "") };
    inline CreateApplicationTokenResponseBodyApplicationTokens& setApplicationTokenType(string applicationTokenType) { DARABONBA_PTR_SET_VALUE(applicationTokenType_, applicationTokenType) };


  protected:
    // 应用token
    std::shared_ptr<string> applicationToken_ = nullptr;
    // 应用token ID
    std::shared_ptr<string> applicationTokenId_ = nullptr;
    // 应用token类型
    std::shared_ptr<string> applicationTokenType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
