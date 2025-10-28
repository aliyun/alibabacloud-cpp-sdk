// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYMIGRATEECULISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYMIGRATEECULISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class QueryMigrateEcuListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryMigrateEcuListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(LogicalRegionId, logicalRegionId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryMigrateEcuListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(LogicalRegionId, logicalRegionId_);
    };
    QueryMigrateEcuListRequest() = default ;
    QueryMigrateEcuListRequest(const QueryMigrateEcuListRequest &) = default ;
    QueryMigrateEcuListRequest(QueryMigrateEcuListRequest &&) = default ;
    QueryMigrateEcuListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryMigrateEcuListRequest() = default ;
    QueryMigrateEcuListRequest& operator=(const QueryMigrateEcuListRequest &) = default ;
    QueryMigrateEcuListRequest& operator=(QueryMigrateEcuListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->logicalRegionId_ == nullptr; };
    // logicalRegionId Field Functions 
    bool hasLogicalRegionId() const { return this->logicalRegionId_ != nullptr;};
    void deleteLogicalRegionId() { this->logicalRegionId_ = nullptr;};
    inline string logicalRegionId() const { DARABONBA_PTR_GET_DEFAULT(logicalRegionId_, "") };
    inline QueryMigrateEcuListRequest& setLogicalRegionId(string logicalRegionId) { DARABONBA_PTR_SET_VALUE(logicalRegionId_, logicalRegionId) };


  protected:
    // The ID of the namespace.
    // 
    // *   The ID of a custom namespace is in the `region ID:namespace identifier` format. Example: `cn-beijing:test`.
    // *   The ID of the default namespace is in the `region ID` format. Example: `cn-beijing`.
    std::shared_ptr<string> logicalRegionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
