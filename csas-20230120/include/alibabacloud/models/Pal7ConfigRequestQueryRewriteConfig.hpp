// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PAL7CONFIGREQUESTQUERYREWRITECONFIG_HPP_
#define ALIBABACLOUD_MODELS_PAL7CONFIGREQUESTQUERYREWRITECONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/PAL7ConfigRewriteOp.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class PAL7ConfigRequestQueryRewriteConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PAL7ConfigRequestQueryRewriteConfig& obj) { 
      DARABONBA_PTR_TO_JSON(Ops, ops_);
    };
    friend void from_json(const Darabonba::Json& j, PAL7ConfigRequestQueryRewriteConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(Ops, ops_);
    };
    PAL7ConfigRequestQueryRewriteConfig() = default ;
    PAL7ConfigRequestQueryRewriteConfig(const PAL7ConfigRequestQueryRewriteConfig &) = default ;
    PAL7ConfigRequestQueryRewriteConfig(PAL7ConfigRequestQueryRewriteConfig &&) = default ;
    PAL7ConfigRequestQueryRewriteConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PAL7ConfigRequestQueryRewriteConfig() = default ;
    PAL7ConfigRequestQueryRewriteConfig& operator=(const PAL7ConfigRequestQueryRewriteConfig &) = default ;
    PAL7ConfigRequestQueryRewriteConfig& operator=(PAL7ConfigRequestQueryRewriteConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ops_ == nullptr; };
    // ops Field Functions 
    bool hasOps() const { return this->ops_ != nullptr;};
    void deleteOps() { this->ops_ = nullptr;};
    inline const vector<Models::PAL7ConfigRewriteOp> & ops() const { DARABONBA_PTR_GET_CONST(ops_, vector<Models::PAL7ConfigRewriteOp>) };
    inline vector<Models::PAL7ConfigRewriteOp> ops() { DARABONBA_PTR_GET(ops_, vector<Models::PAL7ConfigRewriteOp>) };
    inline PAL7ConfigRequestQueryRewriteConfig& setOps(const vector<Models::PAL7ConfigRewriteOp> & ops) { DARABONBA_PTR_SET_VALUE(ops_, ops) };
    inline PAL7ConfigRequestQueryRewriteConfig& setOps(vector<Models::PAL7ConfigRewriteOp> && ops) { DARABONBA_PTR_SET_RVALUE(ops_, ops) };


  protected:
    std::shared_ptr<vector<Models::PAL7ConfigRewriteOp>> ops_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
