// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYPUBLICURLIPLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYPUBLICURLIPLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchengine20211025
{
namespace Models
{
  class ModifyPublicUrlIpListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyPublicUrlIpListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyPublicUrlIpListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    ModifyPublicUrlIpListRequest() = default ;
    ModifyPublicUrlIpListRequest(const ModifyPublicUrlIpListRequest &) = default ;
    ModifyPublicUrlIpListRequest(ModifyPublicUrlIpListRequest &&) = default ;
    ModifyPublicUrlIpListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyPublicUrlIpListRequest() = default ;
    ModifyPublicUrlIpListRequest& operator=(const ModifyPublicUrlIpListRequest &) = default ;
    ModifyPublicUrlIpListRequest& operator=(ModifyPublicUrlIpListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->body_ != nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const map<string, string> & body() const { DARABONBA_PTR_GET_CONST(body_, map<string, string>) };
    inline map<string, string> body() { DARABONBA_PTR_GET(body_, map<string, string>) };
    inline ModifyPublicUrlIpListRequest& setBody(const map<string, string> & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline ModifyPublicUrlIpListRequest& setBody(map<string, string> && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    // The request body.
    std::shared_ptr<map<string, string>> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchengine20211025
#endif
