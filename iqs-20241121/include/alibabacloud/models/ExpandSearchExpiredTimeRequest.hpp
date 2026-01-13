// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXPANDSEARCHEXPIREDTIMEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_EXPANDSEARCHEXPIREDTIMEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ExpendExpiredTimeRequest.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IQS20241121
{
namespace Models
{
  class ExpandSearchExpiredTimeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExpandSearchExpiredTimeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, ExpandSearchExpiredTimeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    ExpandSearchExpiredTimeRequest() = default ;
    ExpandSearchExpiredTimeRequest(const ExpandSearchExpiredTimeRequest &) = default ;
    ExpandSearchExpiredTimeRequest(ExpandSearchExpiredTimeRequest &&) = default ;
    ExpandSearchExpiredTimeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExpandSearchExpiredTimeRequest() = default ;
    ExpandSearchExpiredTimeRequest& operator=(const ExpandSearchExpiredTimeRequest &) = default ;
    ExpandSearchExpiredTimeRequest& operator=(ExpandSearchExpiredTimeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const ExpendExpiredTimeRequest & getBody() const { DARABONBA_PTR_GET_CONST(body_, ExpendExpiredTimeRequest) };
    inline ExpendExpiredTimeRequest getBody() { DARABONBA_PTR_GET(body_, ExpendExpiredTimeRequest) };
    inline ExpandSearchExpiredTimeRequest& setBody(const ExpendExpiredTimeRequest & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline ExpandSearchExpiredTimeRequest& setBody(ExpendExpiredTimeRequest && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<ExpendExpiredTimeRequest> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IQS20241121
#endif
