// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYMIGRATEREGIONLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYMIGRATEREGIONLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class QueryMigrateRegionListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryMigrateRegionListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(LogicalRegionId, logicalRegionId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryMigrateRegionListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(LogicalRegionId, logicalRegionId_);
    };
    QueryMigrateRegionListRequest() = default ;
    QueryMigrateRegionListRequest(const QueryMigrateRegionListRequest &) = default ;
    QueryMigrateRegionListRequest(QueryMigrateRegionListRequest &&) = default ;
    QueryMigrateRegionListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryMigrateRegionListRequest() = default ;
    QueryMigrateRegionListRequest& operator=(const QueryMigrateRegionListRequest &) = default ;
    QueryMigrateRegionListRequest& operator=(QueryMigrateRegionListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->logicalRegionId_ == nullptr; };
    // logicalRegionId Field Functions 
    bool hasLogicalRegionId() const { return this->logicalRegionId_ != nullptr;};
    void deleteLogicalRegionId() { this->logicalRegionId_ = nullptr;};
    inline string logicalRegionId() const { DARABONBA_PTR_GET_DEFAULT(logicalRegionId_, "") };
    inline QueryMigrateRegionListRequest& setLogicalRegionId(string logicalRegionId) { DARABONBA_PTR_SET_VALUE(logicalRegionId_, logicalRegionId) };


  protected:
    // The ID of the namespace.
    std::shared_ptr<string> logicalRegionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
