// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYINDEXVERSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYINDEXVERSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ModifyIndexVersionRequestBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchengine20211025
{
namespace Models
{
  class ModifyIndexVersionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyIndexVersionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyIndexVersionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    ModifyIndexVersionRequest() = default ;
    ModifyIndexVersionRequest(const ModifyIndexVersionRequest &) = default ;
    ModifyIndexVersionRequest(ModifyIndexVersionRequest &&) = default ;
    ModifyIndexVersionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyIndexVersionRequest() = default ;
    ModifyIndexVersionRequest& operator=(const ModifyIndexVersionRequest &) = default ;
    ModifyIndexVersionRequest& operator=(ModifyIndexVersionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->body_ != nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const vector<ModifyIndexVersionRequestBody> & body() const { DARABONBA_PTR_GET_CONST(body_, vector<ModifyIndexVersionRequestBody>) };
    inline vector<ModifyIndexVersionRequestBody> body() { DARABONBA_PTR_GET(body_, vector<ModifyIndexVersionRequestBody>) };
    inline ModifyIndexVersionRequest& setBody(const vector<ModifyIndexVersionRequestBody> & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline ModifyIndexVersionRequest& setBody(vector<ModifyIndexVersionRequestBody> && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    // The request body.
    std::shared_ptr<vector<ModifyIndexVersionRequestBody>> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchengine20211025
#endif
