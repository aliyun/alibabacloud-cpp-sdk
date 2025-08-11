// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SMARTQAUTHORIZERESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_SMARTQAUTHORIZERESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class SmartqAuthorizeResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SmartqAuthorizeResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(DetailMessage, detailMessage_);
      DARABONBA_PTR_TO_JSON(LlmCube, llmCube_);
      DARABONBA_PTR_TO_JSON(LlmCubeTheme, llmCubeTheme_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, SmartqAuthorizeResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(DetailMessage, detailMessage_);
      DARABONBA_PTR_FROM_JSON(LlmCube, llmCube_);
      DARABONBA_PTR_FROM_JSON(LlmCubeTheme, llmCubeTheme_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    SmartqAuthorizeResponseBodyResult() = default ;
    SmartqAuthorizeResponseBodyResult(const SmartqAuthorizeResponseBodyResult &) = default ;
    SmartqAuthorizeResponseBodyResult(SmartqAuthorizeResponseBodyResult &&) = default ;
    SmartqAuthorizeResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SmartqAuthorizeResponseBodyResult() = default ;
    SmartqAuthorizeResponseBodyResult& operator=(const SmartqAuthorizeResponseBodyResult &) = default ;
    SmartqAuthorizeResponseBodyResult& operator=(SmartqAuthorizeResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->detailMessage_ != nullptr
        && this->llmCube_ != nullptr && this->llmCubeTheme_ != nullptr && this->userId_ != nullptr; };
    // detailMessage Field Functions 
    bool hasDetailMessage() const { return this->detailMessage_ != nullptr;};
    void deleteDetailMessage() { this->detailMessage_ = nullptr;};
    inline string detailMessage() const { DARABONBA_PTR_GET_DEFAULT(detailMessage_, "") };
    inline SmartqAuthorizeResponseBodyResult& setDetailMessage(string detailMessage) { DARABONBA_PTR_SET_VALUE(detailMessage_, detailMessage) };


    // llmCube Field Functions 
    bool hasLlmCube() const { return this->llmCube_ != nullptr;};
    void deleteLlmCube() { this->llmCube_ = nullptr;};
    inline string llmCube() const { DARABONBA_PTR_GET_DEFAULT(llmCube_, "") };
    inline SmartqAuthorizeResponseBodyResult& setLlmCube(string llmCube) { DARABONBA_PTR_SET_VALUE(llmCube_, llmCube) };


    // llmCubeTheme Field Functions 
    bool hasLlmCubeTheme() const { return this->llmCubeTheme_ != nullptr;};
    void deleteLlmCubeTheme() { this->llmCubeTheme_ = nullptr;};
    inline string llmCubeTheme() const { DARABONBA_PTR_GET_DEFAULT(llmCubeTheme_, "") };
    inline SmartqAuthorizeResponseBodyResult& setLlmCubeTheme(string llmCubeTheme) { DARABONBA_PTR_SET_VALUE(llmCubeTheme_, llmCubeTheme) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline SmartqAuthorizeResponseBodyResult& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // Reason for failure.
    std::shared_ptr<string> detailMessage_ = nullptr;
    // Q&A resource ID.
    std::shared_ptr<string> llmCube_ = nullptr;
    // Analysis theme ID.
    std::shared_ptr<string> llmCubeTheme_ = nullptr;
    // User ID.
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
