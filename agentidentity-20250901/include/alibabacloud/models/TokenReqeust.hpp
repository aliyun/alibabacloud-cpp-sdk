// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TOKENREQEUST_HPP_
#define ALIBABACLOUD_MODELS_TOKENREQEUST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentIdentity20250901
{
namespace Models
{
  class TokenReqeust : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TokenReqeust& obj) { 
      DARABONBA_PTR_TO_JSON(Endpoint, endpoint_);
    };
    friend void from_json(const Darabonba::Json& j, TokenReqeust& obj) { 
      DARABONBA_PTR_FROM_JSON(Endpoint, endpoint_);
    };
    TokenReqeust() = default ;
    TokenReqeust(const TokenReqeust &) = default ;
    TokenReqeust(TokenReqeust &&) = default ;
    TokenReqeust(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TokenReqeust() = default ;
    TokenReqeust& operator=(const TokenReqeust &) = default ;
    TokenReqeust& operator=(TokenReqeust &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endpoint_ == nullptr; };
    // endpoint Field Functions 
    bool hasEndpoint() const { return this->endpoint_ != nullptr;};
    void deleteEndpoint() { this->endpoint_ = nullptr;};
    inline string endpoint() const { DARABONBA_PTR_GET_DEFAULT(endpoint_, "") };
    inline TokenReqeust& setEndpoint(string endpoint) { DARABONBA_PTR_SET_VALUE(endpoint_, endpoint) };


  protected:
    std::shared_ptr<string> endpoint_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentIdentity20250901
#endif
