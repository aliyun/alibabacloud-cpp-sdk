// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUBLISHINDEXVERSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PUBLISHINDEXVERSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchengine20211025
{
namespace Models
{
  class PublishIndexVersionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PublishIndexVersionRequest& obj) { 
      DARABONBA_ANY_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, PublishIndexVersionRequest& obj) { 
      DARABONBA_ANY_FROM_JSON(body, body_);
    };
    PublishIndexVersionRequest() = default ;
    PublishIndexVersionRequest(const PublishIndexVersionRequest &) = default ;
    PublishIndexVersionRequest(PublishIndexVersionRequest &&) = default ;
    PublishIndexVersionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PublishIndexVersionRequest() = default ;
    PublishIndexVersionRequest& operator=(const PublishIndexVersionRequest &) = default ;
    PublishIndexVersionRequest& operator=(PublishIndexVersionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->body_ != nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline     const Darabonba::Json & body() const { DARABONBA_GET(body_) };
    Darabonba::Json & body() { DARABONBA_GET(body_) };
    inline PublishIndexVersionRequest& setBody(const Darabonba::Json & body) { DARABONBA_SET_VALUE(body_, body) };
    inline PublishIndexVersionRequest& setBody(Darabonba::Json & body) { DARABONBA_SET_RVALUE(body_, body) };


  protected:
    // The request body.
    Darabonba::Json body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchengine20211025
#endif
