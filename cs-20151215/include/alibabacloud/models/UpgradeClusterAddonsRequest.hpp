// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPGRADECLUSTERADDONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPGRADECLUSTERADDONSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpgradeClusterAddonsRequestBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class UpgradeClusterAddonsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpgradeClusterAddonsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, UpgradeClusterAddonsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    UpgradeClusterAddonsRequest() = default ;
    UpgradeClusterAddonsRequest(const UpgradeClusterAddonsRequest &) = default ;
    UpgradeClusterAddonsRequest(UpgradeClusterAddonsRequest &&) = default ;
    UpgradeClusterAddonsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpgradeClusterAddonsRequest() = default ;
    UpgradeClusterAddonsRequest& operator=(const UpgradeClusterAddonsRequest &) = default ;
    UpgradeClusterAddonsRequest& operator=(UpgradeClusterAddonsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const vector<UpgradeClusterAddonsRequestBody> & body() const { DARABONBA_PTR_GET_CONST(body_, vector<UpgradeClusterAddonsRequestBody>) };
    inline vector<UpgradeClusterAddonsRequestBody> body() { DARABONBA_PTR_GET(body_, vector<UpgradeClusterAddonsRequestBody>) };
    inline UpgradeClusterAddonsRequest& setBody(const vector<UpgradeClusterAddonsRequestBody> & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline UpgradeClusterAddonsRequest& setBody(vector<UpgradeClusterAddonsRequestBody> && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    // The request parameters.
    std::shared_ptr<vector<UpgradeClusterAddonsRequestBody>> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
