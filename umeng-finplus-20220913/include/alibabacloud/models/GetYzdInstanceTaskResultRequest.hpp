// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETYZDINSTANCETASKRESULTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETYZDINSTANCETASKRESULTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetYzdInstanceTaskResultRequestBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace UmengFinplus20220913
{
namespace Models
{
  class GetYzdInstanceTaskResultRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetYzdInstanceTaskResultRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, GetYzdInstanceTaskResultRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    GetYzdInstanceTaskResultRequest() = default ;
    GetYzdInstanceTaskResultRequest(const GetYzdInstanceTaskResultRequest &) = default ;
    GetYzdInstanceTaskResultRequest(GetYzdInstanceTaskResultRequest &&) = default ;
    GetYzdInstanceTaskResultRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetYzdInstanceTaskResultRequest() = default ;
    GetYzdInstanceTaskResultRequest& operator=(const GetYzdInstanceTaskResultRequest &) = default ;
    GetYzdInstanceTaskResultRequest& operator=(GetYzdInstanceTaskResultRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->body_ != nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const GetYzdInstanceTaskResultRequestBody & body() const { DARABONBA_PTR_GET_CONST(body_, GetYzdInstanceTaskResultRequestBody) };
    inline GetYzdInstanceTaskResultRequestBody body() { DARABONBA_PTR_GET(body_, GetYzdInstanceTaskResultRequestBody) };
    inline GetYzdInstanceTaskResultRequest& setBody(const GetYzdInstanceTaskResultRequestBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline GetYzdInstanceTaskResultRequest& setBody(GetYzdInstanceTaskResultRequestBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<GetYzdInstanceTaskResultRequestBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace UmengFinplus20220913
#endif
