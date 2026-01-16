// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYELASTICTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYELASTICTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class ModifyElastictaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyElastictaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyElastictaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    ModifyElastictaskRequest() = default ;
    ModifyElastictaskRequest(const ModifyElastictaskRequest &) = default ;
    ModifyElastictaskRequest(ModifyElastictaskRequest &&) = default ;
    ModifyElastictaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyElastictaskRequest() = default ;
    ModifyElastictaskRequest& operator=(const ModifyElastictaskRequest &) = default ;
    ModifyElastictaskRequest& operator=(ModifyElastictaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline string getBody() const { DARABONBA_PTR_GET_DEFAULT(body_, "") };
    inline ModifyElastictaskRequest& setBody(string body) { DARABONBA_PTR_SET_VALUE(body_, body) };


  protected:
    shared_ptr<string> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
