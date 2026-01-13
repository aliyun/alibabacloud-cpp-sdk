// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_READPAGEBASICREQUEST_HPP_
#define ALIBABACLOUD_MODELS_READPAGEBASICREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ReadPageBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IQS20241111
{
namespace Models
{
  class ReadPageBasicRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ReadPageBasicRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, ReadPageBasicRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    ReadPageBasicRequest() = default ;
    ReadPageBasicRequest(const ReadPageBasicRequest &) = default ;
    ReadPageBasicRequest(ReadPageBasicRequest &&) = default ;
    ReadPageBasicRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ReadPageBasicRequest() = default ;
    ReadPageBasicRequest& operator=(const ReadPageBasicRequest &) = default ;
    ReadPageBasicRequest& operator=(ReadPageBasicRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const ReadPageBody & getBody() const { DARABONBA_PTR_GET_CONST(body_, ReadPageBody) };
    inline ReadPageBody getBody() { DARABONBA_PTR_GET(body_, ReadPageBody) };
    inline ReadPageBasicRequest& setBody(const ReadPageBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline ReadPageBasicRequest& setBody(ReadPageBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    // post body
    shared_ptr<ReadPageBody> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IQS20241111
#endif
