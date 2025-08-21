// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MIGRATETOOTHERZONEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MIGRATETOOTHERZONEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class MigrateToOtherZoneRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MigrateToOtherZoneRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
      DARABONBA_PTR_TO_JSON(dryRun, dryRun_);
    };
    friend void from_json(const Darabonba::Json& j, MigrateToOtherZoneRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
      DARABONBA_PTR_FROM_JSON(dryRun, dryRun_);
    };
    MigrateToOtherZoneRequest() = default ;
    MigrateToOtherZoneRequest(const MigrateToOtherZoneRequest &) = default ;
    MigrateToOtherZoneRequest(MigrateToOtherZoneRequest &&) = default ;
    MigrateToOtherZoneRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MigrateToOtherZoneRequest() = default ;
    MigrateToOtherZoneRequest& operator=(const MigrateToOtherZoneRequest &) = default ;
    MigrateToOtherZoneRequest& operator=(MigrateToOtherZoneRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->body_ != nullptr
        && this->dryRun_ != nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline string body() const { DARABONBA_PTR_GET_DEFAULT(body_, "") };
    inline MigrateToOtherZoneRequest& setBody(string body) { DARABONBA_PTR_SET_VALUE(body_, body) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool dryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline MigrateToOtherZoneRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


  protected:
    std::shared_ptr<string> body_ = nullptr;
    // Verify whether the zone node can be migrated. true indicates that the data is only verified and the migration task is not executed. false indicates that the migration task is executed after the verification is successful.
    // 
    // This parameter is required.
    std::shared_ptr<bool> dryRun_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
