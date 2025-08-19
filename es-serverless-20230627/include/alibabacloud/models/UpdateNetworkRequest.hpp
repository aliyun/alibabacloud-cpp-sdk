// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATENETWORKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATENETWORKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateNetworkRequestBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EsServerless20230627
{
namespace Models
{
  class UpdateNetworkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateNetworkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateNetworkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    UpdateNetworkRequest() = default ;
    UpdateNetworkRequest(const UpdateNetworkRequest &) = default ;
    UpdateNetworkRequest(UpdateNetworkRequest &&) = default ;
    UpdateNetworkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateNetworkRequest() = default ;
    UpdateNetworkRequest& operator=(const UpdateNetworkRequest &) = default ;
    UpdateNetworkRequest& operator=(UpdateNetworkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->body_ != nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const vector<UpdateNetworkRequestBody> & body() const { DARABONBA_PTR_GET_CONST(body_, vector<UpdateNetworkRequestBody>) };
    inline vector<UpdateNetworkRequestBody> body() { DARABONBA_PTR_GET(body_, vector<UpdateNetworkRequestBody>) };
    inline UpdateNetworkRequest& setBody(const vector<UpdateNetworkRequestBody> & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline UpdateNetworkRequest& setBody(vector<UpdateNetworkRequestBody> && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<vector<UpdateNetworkRequestBody>> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EsServerless20230627
#endif
