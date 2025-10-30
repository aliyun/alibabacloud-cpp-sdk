// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNCLUSTERCHECKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RUNCLUSTERCHECKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class RunClusterCheckRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunClusterCheckRequest& obj) { 
      DARABONBA_PTR_TO_JSON(options, options_);
      DARABONBA_PTR_TO_JSON(target, target_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, RunClusterCheckRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(options, options_);
      DARABONBA_PTR_FROM_JSON(target, target_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    RunClusterCheckRequest() = default ;
    RunClusterCheckRequest(const RunClusterCheckRequest &) = default ;
    RunClusterCheckRequest(RunClusterCheckRequest &&) = default ;
    RunClusterCheckRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunClusterCheckRequest() = default ;
    RunClusterCheckRequest& operator=(const RunClusterCheckRequest &) = default ;
    RunClusterCheckRequest& operator=(RunClusterCheckRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->options_ == nullptr
        && return this->target_ == nullptr && return this->type_ == nullptr; };
    // options Field Functions 
    bool hasOptions() const { return this->options_ != nullptr;};
    void deleteOptions() { this->options_ = nullptr;};
    inline const map<string, string> & options() const { DARABONBA_PTR_GET_CONST(options_, map<string, string>) };
    inline map<string, string> options() { DARABONBA_PTR_GET(options_, map<string, string>) };
    inline RunClusterCheckRequest& setOptions(const map<string, string> & options) { DARABONBA_PTR_SET_VALUE(options_, options) };
    inline RunClusterCheckRequest& setOptions(map<string, string> && options) { DARABONBA_PTR_SET_RVALUE(options_, options) };


    // target Field Functions 
    bool hasTarget() const { return this->target_ != nullptr;};
    void deleteTarget() { this->target_ = nullptr;};
    inline string target() const { DARABONBA_PTR_GET_DEFAULT(target_, "") };
    inline RunClusterCheckRequest& setTarget(string target) { DARABONBA_PTR_SET_VALUE(target_, target) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline RunClusterCheckRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The cluster check parameters.
    std::shared_ptr<map<string, string>> options_ = nullptr;
    // The check target.
    // 
    // If you set `type=NodePoolUpgrade`, you must set this parameter to the node pool ID. Otherwise, this parameter is optional.
    std::shared_ptr<string> target_ = nullptr;
    // The check type.
    // 
    // Valid values:
    // 
    // *   ClusterMigrate: cluster migration.
    // *   MasterUpgrade: control plane upgrade.
    // *   NodePoolUpgrade: node pool upgrade.
    // *   ClusterUpgrade: cluster upgrade.
    // 
    // This parameter is required.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
