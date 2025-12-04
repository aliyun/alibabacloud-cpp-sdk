// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESYNDBSRESPONSEBODYSYNDBS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESYNDBSRESPONSEBODYSYNDBS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20191111
{
namespace Models
{
  class DescribeSynDbsResponseBodySynDbs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSynDbsResponseBodySynDbs& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorMsg, errorMsg_);
      DARABONBA_PTR_TO_JSON(RdsId, rdsId_);
      DARABONBA_PTR_TO_JSON(RdsUserName, rdsUserName_);
      DARABONBA_PTR_TO_JSON(RdsVpcUrl, rdsVpcUrl_);
      DARABONBA_PTR_TO_JSON(SynDb, synDb_);
      DARABONBA_PTR_TO_JSON(SynStatus, synStatus_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSynDbsResponseBodySynDbs& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorMsg, errorMsg_);
      DARABONBA_PTR_FROM_JSON(RdsId, rdsId_);
      DARABONBA_PTR_FROM_JSON(RdsUserName, rdsUserName_);
      DARABONBA_PTR_FROM_JSON(RdsVpcUrl, rdsVpcUrl_);
      DARABONBA_PTR_FROM_JSON(SynDb, synDb_);
      DARABONBA_PTR_FROM_JSON(SynStatus, synStatus_);
    };
    DescribeSynDbsResponseBodySynDbs() = default ;
    DescribeSynDbsResponseBodySynDbs(const DescribeSynDbsResponseBodySynDbs &) = default ;
    DescribeSynDbsResponseBodySynDbs(DescribeSynDbsResponseBodySynDbs &&) = default ;
    DescribeSynDbsResponseBodySynDbs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSynDbsResponseBodySynDbs() = default ;
    DescribeSynDbsResponseBodySynDbs& operator=(const DescribeSynDbsResponseBodySynDbs &) = default ;
    DescribeSynDbsResponseBodySynDbs& operator=(DescribeSynDbsResponseBodySynDbs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->errorMsg_ == nullptr
        && return this->rdsId_ == nullptr && return this->rdsUserName_ == nullptr && return this->rdsVpcUrl_ == nullptr && return this->synDb_ == nullptr && return this->synStatus_ == nullptr; };
    // errorMsg Field Functions 
    bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
    void deleteErrorMsg() { this->errorMsg_ = nullptr;};
    inline string errorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
    inline DescribeSynDbsResponseBodySynDbs& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


    // rdsId Field Functions 
    bool hasRdsId() const { return this->rdsId_ != nullptr;};
    void deleteRdsId() { this->rdsId_ = nullptr;};
    inline string rdsId() const { DARABONBA_PTR_GET_DEFAULT(rdsId_, "") };
    inline DescribeSynDbsResponseBodySynDbs& setRdsId(string rdsId) { DARABONBA_PTR_SET_VALUE(rdsId_, rdsId) };


    // rdsUserName Field Functions 
    bool hasRdsUserName() const { return this->rdsUserName_ != nullptr;};
    void deleteRdsUserName() { this->rdsUserName_ = nullptr;};
    inline string rdsUserName() const { DARABONBA_PTR_GET_DEFAULT(rdsUserName_, "") };
    inline DescribeSynDbsResponseBodySynDbs& setRdsUserName(string rdsUserName) { DARABONBA_PTR_SET_VALUE(rdsUserName_, rdsUserName) };


    // rdsVpcUrl Field Functions 
    bool hasRdsVpcUrl() const { return this->rdsVpcUrl_ != nullptr;};
    void deleteRdsVpcUrl() { this->rdsVpcUrl_ = nullptr;};
    inline string rdsVpcUrl() const { DARABONBA_PTR_GET_DEFAULT(rdsVpcUrl_, "") };
    inline DescribeSynDbsResponseBodySynDbs& setRdsVpcUrl(string rdsVpcUrl) { DARABONBA_PTR_SET_VALUE(rdsVpcUrl_, rdsVpcUrl) };


    // synDb Field Functions 
    bool hasSynDb() const { return this->synDb_ != nullptr;};
    void deleteSynDb() { this->synDb_ = nullptr;};
    inline string synDb() const { DARABONBA_PTR_GET_DEFAULT(synDb_, "") };
    inline DescribeSynDbsResponseBodySynDbs& setSynDb(string synDb) { DARABONBA_PTR_SET_VALUE(synDb_, synDb) };


    // synStatus Field Functions 
    bool hasSynStatus() const { return this->synStatus_ != nullptr;};
    void deleteSynStatus() { this->synStatus_ = nullptr;};
    inline bool synStatus() const { DARABONBA_PTR_GET_DEFAULT(synStatus_, false) };
    inline DescribeSynDbsResponseBodySynDbs& setSynStatus(bool synStatus) { DARABONBA_PTR_SET_VALUE(synStatus_, synStatus) };


  protected:
    // *   When the value **true** is returned for the **SynStatus** parameter, the system does not return the ErrorMsg parameter.
    // *   When the value **false** is returned for the **SynStatus** parameter, the system returns for the ErrorMsg parameter the cause why the data synchronization failed.
    std::shared_ptr<string> errorMsg_ = nullptr;
    // The ID of the ApsaraDB RDS for MySQL instance.
    std::shared_ptr<string> rdsId_ = nullptr;
    // The database account that is used to log on to the ApsaraDB RDS for MySQL instance.
    std::shared_ptr<string> rdsUserName_ = nullptr;
    // The internal endpoint of the ApsaraDB RDS for MySQL instance.
    std::shared_ptr<string> rdsVpcUrl_ = nullptr;
    // The name of the database in the ApsaraDB RDS for MySQL instance.
    std::shared_ptr<string> synDb_ = nullptr;
    // Indicates whether the data synchronization succeeded. Valid values:
    // 
    // *   **true**: The data synchronization succeeded.
    // *   **false**: The data synchronization failed.
    std::shared_ptr<bool> synStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20191111
#endif
