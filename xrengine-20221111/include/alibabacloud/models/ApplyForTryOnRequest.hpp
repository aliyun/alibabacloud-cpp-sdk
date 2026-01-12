// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APPLYFORTRYONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_APPLYFORTRYONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace XrEngine20221111
{
namespace Models
{
  class ApplyForTryOnRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ApplyForTryOnRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(JwtToken, jwtToken_);
    };
    friend void from_json(const Darabonba::Json& j, ApplyForTryOnRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(JwtToken, jwtToken_);
    };
    ApplyForTryOnRequest() = default ;
    ApplyForTryOnRequest(const ApplyForTryOnRequest &) = default ;
    ApplyForTryOnRequest(ApplyForTryOnRequest &&) = default ;
    ApplyForTryOnRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ApplyForTryOnRequest() = default ;
    ApplyForTryOnRequest& operator=(const ApplyForTryOnRequest &) = default ;
    ApplyForTryOnRequest& operator=(ApplyForTryOnRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->content_ == nullptr
        && this->jwtToken_ == nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline ApplyForTryOnRequest& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // jwtToken Field Functions 
    bool hasJwtToken() const { return this->jwtToken_ != nullptr;};
    void deleteJwtToken() { this->jwtToken_ = nullptr;};
    inline string getJwtToken() const { DARABONBA_PTR_GET_DEFAULT(jwtToken_, "") };
    inline ApplyForTryOnRequest& setJwtToken(string jwtToken) { DARABONBA_PTR_SET_VALUE(jwtToken_, jwtToken) };


  protected:
    shared_ptr<string> content_ {};
    shared_ptr<string> jwtToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace XrEngine20221111
#endif
