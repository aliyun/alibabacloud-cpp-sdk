// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UNIFIEDSEARCHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UNIFIEDSEARCHREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UnifiedSearchInput.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IQS20241111
{
namespace Models
{
  class UnifiedSearchRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UnifiedSearchRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, UnifiedSearchRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    UnifiedSearchRequest() = default ;
    UnifiedSearchRequest(const UnifiedSearchRequest &) = default ;
    UnifiedSearchRequest(UnifiedSearchRequest &&) = default ;
    UnifiedSearchRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UnifiedSearchRequest() = default ;
    UnifiedSearchRequest& operator=(const UnifiedSearchRequest &) = default ;
    UnifiedSearchRequest& operator=(UnifiedSearchRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->body_ != nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const UnifiedSearchInput & body() const { DARABONBA_PTR_GET_CONST(body_, UnifiedSearchInput) };
    inline UnifiedSearchInput body() { DARABONBA_PTR_GET(body_, UnifiedSearchInput) };
    inline UnifiedSearchRequest& setBody(const UnifiedSearchInput & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline UnifiedSearchRequest& setBody(UnifiedSearchInput && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<UnifiedSearchInput> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IQS20241111
#endif
