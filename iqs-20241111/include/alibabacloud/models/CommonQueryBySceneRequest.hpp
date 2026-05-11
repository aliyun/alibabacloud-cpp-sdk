// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COMMONQUERYBYSCENEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_COMMONQUERYBYSCENEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CommonAgentQuery.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IQS20241111
{
namespace Models
{
  class CommonQueryBySceneRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CommonQueryBySceneRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, CommonQueryBySceneRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    CommonQueryBySceneRequest() = default ;
    CommonQueryBySceneRequest(const CommonQueryBySceneRequest &) = default ;
    CommonQueryBySceneRequest(CommonQueryBySceneRequest &&) = default ;
    CommonQueryBySceneRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CommonQueryBySceneRequest() = default ;
    CommonQueryBySceneRequest& operator=(const CommonQueryBySceneRequest &) = default ;
    CommonQueryBySceneRequest& operator=(CommonQueryBySceneRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const CommonAgentQuery & getBody() const { DARABONBA_PTR_GET_CONST(body_, CommonAgentQuery) };
    inline CommonAgentQuery getBody() { DARABONBA_PTR_GET(body_, CommonAgentQuery) };
    inline CommonQueryBySceneRequest& setBody(const CommonAgentQuery & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline CommonQueryBySceneRequest& setBody(CommonAgentQuery && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<CommonAgentQuery> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IQS20241111
#endif
