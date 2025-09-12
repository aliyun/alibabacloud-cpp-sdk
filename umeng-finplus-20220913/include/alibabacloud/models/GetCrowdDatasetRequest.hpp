// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCROWDDATASETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETCROWDDATASETREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetCrowdDatasetRequestBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace UmengFinplus20220913
{
namespace Models
{
  class GetCrowdDatasetRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCrowdDatasetRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, GetCrowdDatasetRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    GetCrowdDatasetRequest() = default ;
    GetCrowdDatasetRequest(const GetCrowdDatasetRequest &) = default ;
    GetCrowdDatasetRequest(GetCrowdDatasetRequest &&) = default ;
    GetCrowdDatasetRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCrowdDatasetRequest() = default ;
    GetCrowdDatasetRequest& operator=(const GetCrowdDatasetRequest &) = default ;
    GetCrowdDatasetRequest& operator=(GetCrowdDatasetRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->body_ != nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const GetCrowdDatasetRequestBody & body() const { DARABONBA_PTR_GET_CONST(body_, GetCrowdDatasetRequestBody) };
    inline GetCrowdDatasetRequestBody body() { DARABONBA_PTR_GET(body_, GetCrowdDatasetRequestBody) };
    inline GetCrowdDatasetRequest& setBody(const GetCrowdDatasetRequestBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline GetCrowdDatasetRequest& setBody(GetCrowdDatasetRequestBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<GetCrowdDatasetRequestBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace UmengFinplus20220913
#endif
