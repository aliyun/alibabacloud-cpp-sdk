// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_READPAGESCRAPEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_READPAGESCRAPEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ReadPageScrapeBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IQS20241111
{
namespace Models
{
  class ReadPageScrapeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ReadPageScrapeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, ReadPageScrapeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    ReadPageScrapeRequest() = default ;
    ReadPageScrapeRequest(const ReadPageScrapeRequest &) = default ;
    ReadPageScrapeRequest(ReadPageScrapeRequest &&) = default ;
    ReadPageScrapeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ReadPageScrapeRequest() = default ;
    ReadPageScrapeRequest& operator=(const ReadPageScrapeRequest &) = default ;
    ReadPageScrapeRequest& operator=(ReadPageScrapeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const ReadPageScrapeBody & getBody() const { DARABONBA_PTR_GET_CONST(body_, ReadPageScrapeBody) };
    inline ReadPageScrapeBody getBody() { DARABONBA_PTR_GET(body_, ReadPageScrapeBody) };
    inline ReadPageScrapeRequest& setBody(const ReadPageScrapeBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline ReadPageScrapeRequest& setBody(ReadPageScrapeBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    // post body
    shared_ptr<ReadPageScrapeBody> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IQS20241111
#endif
