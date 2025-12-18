// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RISKCHECKRESULTSMETADATA_HPP_
#define ALIBABACLOUD_MODELS_RISKCHECKRESULTSMETADATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class RiskCheckResultsMetadata : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RiskCheckResultsMetadata& obj) { 
      DARABONBA_PTR_TO_JSON(clusterType, clusterType_);
      DARABONBA_PTR_TO_JSON(replica, replica_);
      DARABONBA_PTR_TO_JSON(spec, spec_);
      DARABONBA_PTR_TO_JSON(version, version_);
    };
    friend void from_json(const Darabonba::Json& j, RiskCheckResultsMetadata& obj) { 
      DARABONBA_PTR_FROM_JSON(clusterType, clusterType_);
      DARABONBA_PTR_FROM_JSON(replica, replica_);
      DARABONBA_PTR_FROM_JSON(spec, spec_);
      DARABONBA_PTR_FROM_JSON(version, version_);
    };
    RiskCheckResultsMetadata() = default ;
    RiskCheckResultsMetadata(const RiskCheckResultsMetadata &) = default ;
    RiskCheckResultsMetadata(RiskCheckResultsMetadata &&) = default ;
    RiskCheckResultsMetadata(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RiskCheckResultsMetadata() = default ;
    RiskCheckResultsMetadata& operator=(const RiskCheckResultsMetadata &) = default ;
    RiskCheckResultsMetadata& operator=(RiskCheckResultsMetadata &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterType_ == nullptr
        && return this->replica_ == nullptr && return this->spec_ == nullptr && return this->version_ == nullptr; };
    // clusterType Field Functions 
    bool hasClusterType() const { return this->clusterType_ != nullptr;};
    void deleteClusterType() { this->clusterType_ = nullptr;};
    inline string clusterType() const { DARABONBA_PTR_GET_DEFAULT(clusterType_, "") };
    inline RiskCheckResultsMetadata& setClusterType(string clusterType) { DARABONBA_PTR_SET_VALUE(clusterType_, clusterType) };


    // replica Field Functions 
    bool hasReplica() const { return this->replica_ != nullptr;};
    void deleteReplica() { this->replica_ = nullptr;};
    inline int32_t replica() const { DARABONBA_PTR_GET_DEFAULT(replica_, 0) };
    inline RiskCheckResultsMetadata& setReplica(int32_t replica) { DARABONBA_PTR_SET_VALUE(replica_, replica) };


    // spec Field Functions 
    bool hasSpec() const { return this->spec_ != nullptr;};
    void deleteSpec() { this->spec_ = nullptr;};
    inline string spec() const { DARABONBA_PTR_GET_DEFAULT(spec_, "") };
    inline RiskCheckResultsMetadata& setSpec(string spec) { DARABONBA_PTR_SET_VALUE(spec_, spec) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline RiskCheckResultsMetadata& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    std::shared_ptr<string> clusterType_ = nullptr;
    std::shared_ptr<int32_t> replica_ = nullptr;
    std::shared_ptr<string> spec_ = nullptr;
    std::shared_ptr<string> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
