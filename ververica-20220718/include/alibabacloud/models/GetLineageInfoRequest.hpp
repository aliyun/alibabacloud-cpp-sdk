// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLINEAGEINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETLINEAGEINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetLineageInfoParams.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ververica20220718
{
namespace Models
{
  class GetLineageInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLineageInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, GetLineageInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    GetLineageInfoRequest() = default ;
    GetLineageInfoRequest(const GetLineageInfoRequest &) = default ;
    GetLineageInfoRequest(GetLineageInfoRequest &&) = default ;
    GetLineageInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLineageInfoRequest() = default ;
    GetLineageInfoRequest& operator=(const GetLineageInfoRequest &) = default ;
    GetLineageInfoRequest& operator=(GetLineageInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const GetLineageInfoParams & body() const { DARABONBA_PTR_GET_CONST(body_, GetLineageInfoParams) };
    inline GetLineageInfoParams body() { DARABONBA_PTR_GET(body_, GetLineageInfoParams) };
    inline GetLineageInfoRequest& setBody(const GetLineageInfoParams & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline GetLineageInfoRequest& setBody(GetLineageInfoParams && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    // The parameters about the lineage information.
    std::shared_ptr<GetLineageInfoParams> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ververica20220718
#endif
