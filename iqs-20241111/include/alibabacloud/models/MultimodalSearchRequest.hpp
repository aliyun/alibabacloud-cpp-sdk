// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MULTIMODALSEARCHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MULTIMODALSEARCHREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/MultimodalSearchBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IQS20241111
{
namespace Models
{
  class MultimodalSearchRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MultimodalSearchRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, MultimodalSearchRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    MultimodalSearchRequest() = default ;
    MultimodalSearchRequest(const MultimodalSearchRequest &) = default ;
    MultimodalSearchRequest(MultimodalSearchRequest &&) = default ;
    MultimodalSearchRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MultimodalSearchRequest() = default ;
    MultimodalSearchRequest& operator=(const MultimodalSearchRequest &) = default ;
    MultimodalSearchRequest& operator=(MultimodalSearchRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const MultimodalSearchBody & getBody() const { DARABONBA_PTR_GET_CONST(body_, MultimodalSearchBody) };
    inline MultimodalSearchBody getBody() { DARABONBA_PTR_GET(body_, MultimodalSearchBody) };
    inline MultimodalSearchRequest& setBody(const MultimodalSearchBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline MultimodalSearchRequest& setBody(MultimodalSearchBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<MultimodalSearchBody> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IQS20241111
#endif
