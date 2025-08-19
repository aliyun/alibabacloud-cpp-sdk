// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INSTALLCLUSTERADDONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_INSTALLCLUSTERADDONSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/InstallClusterAddonsRequestBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class InstallClusterAddonsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InstallClusterAddonsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, InstallClusterAddonsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    InstallClusterAddonsRequest() = default ;
    InstallClusterAddonsRequest(const InstallClusterAddonsRequest &) = default ;
    InstallClusterAddonsRequest(InstallClusterAddonsRequest &&) = default ;
    InstallClusterAddonsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InstallClusterAddonsRequest() = default ;
    InstallClusterAddonsRequest& operator=(const InstallClusterAddonsRequest &) = default ;
    InstallClusterAddonsRequest& operator=(InstallClusterAddonsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->body_ != nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const vector<InstallClusterAddonsRequestBody> & body() const { DARABONBA_PTR_GET_CONST(body_, vector<InstallClusterAddonsRequestBody>) };
    inline vector<InstallClusterAddonsRequestBody> body() { DARABONBA_PTR_GET(body_, vector<InstallClusterAddonsRequestBody>) };
    inline InstallClusterAddonsRequest& setBody(const vector<InstallClusterAddonsRequestBody> & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline InstallClusterAddonsRequest& setBody(vector<InstallClusterAddonsRequestBody> && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    // 请求体参数。
    std::shared_ptr<vector<InstallClusterAddonsRequestBody>> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
