// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYAPPLICATIONSTATUSRESPONSEBODYAPPINFODEPLOYRECORDLIST_HPP_
#define ALIBABACLOUD_MODELS_QUERYAPPLICATIONSTATUSRESPONSEBODYAPPINFODEPLOYRECORDLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryApplicationStatusResponseBodyAppInfoDeployRecordListDeployRecord.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class QueryApplicationStatusResponseBodyAppInfoDeployRecordList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryApplicationStatusResponseBodyAppInfoDeployRecordList& obj) { 
      DARABONBA_PTR_TO_JSON(DeployRecord, deployRecord_);
    };
    friend void from_json(const Darabonba::Json& j, QueryApplicationStatusResponseBodyAppInfoDeployRecordList& obj) { 
      DARABONBA_PTR_FROM_JSON(DeployRecord, deployRecord_);
    };
    QueryApplicationStatusResponseBodyAppInfoDeployRecordList() = default ;
    QueryApplicationStatusResponseBodyAppInfoDeployRecordList(const QueryApplicationStatusResponseBodyAppInfoDeployRecordList &) = default ;
    QueryApplicationStatusResponseBodyAppInfoDeployRecordList(QueryApplicationStatusResponseBodyAppInfoDeployRecordList &&) = default ;
    QueryApplicationStatusResponseBodyAppInfoDeployRecordList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryApplicationStatusResponseBodyAppInfoDeployRecordList() = default ;
    QueryApplicationStatusResponseBodyAppInfoDeployRecordList& operator=(const QueryApplicationStatusResponseBodyAppInfoDeployRecordList &) = default ;
    QueryApplicationStatusResponseBodyAppInfoDeployRecordList& operator=(QueryApplicationStatusResponseBodyAppInfoDeployRecordList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deployRecord_ == nullptr; };
    // deployRecord Field Functions 
    bool hasDeployRecord() const { return this->deployRecord_ != nullptr;};
    void deleteDeployRecord() { this->deployRecord_ = nullptr;};
    inline const vector<Models::QueryApplicationStatusResponseBodyAppInfoDeployRecordListDeployRecord> & deployRecord() const { DARABONBA_PTR_GET_CONST(deployRecord_, vector<Models::QueryApplicationStatusResponseBodyAppInfoDeployRecordListDeployRecord>) };
    inline vector<Models::QueryApplicationStatusResponseBodyAppInfoDeployRecordListDeployRecord> deployRecord() { DARABONBA_PTR_GET(deployRecord_, vector<Models::QueryApplicationStatusResponseBodyAppInfoDeployRecordListDeployRecord>) };
    inline QueryApplicationStatusResponseBodyAppInfoDeployRecordList& setDeployRecord(const vector<Models::QueryApplicationStatusResponseBodyAppInfoDeployRecordListDeployRecord> & deployRecord) { DARABONBA_PTR_SET_VALUE(deployRecord_, deployRecord) };
    inline QueryApplicationStatusResponseBodyAppInfoDeployRecordList& setDeployRecord(vector<Models::QueryApplicationStatusResponseBodyAppInfoDeployRecordListDeployRecord> && deployRecord) { DARABONBA_PTR_SET_RVALUE(deployRecord_, deployRecord) };


  protected:
    std::shared_ptr<vector<Models::QueryApplicationStatusResponseBodyAppInfoDeployRecordListDeployRecord>> deployRecord_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
