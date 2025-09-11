// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_KILLPROCESSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_KILLPROCESSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20230522
{
namespace Models
{
  class KillProcessResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const KillProcessResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(DBInstanceID, DBInstanceID_);
      DARABONBA_PTR_TO_JSON(DBInstanceName, DBInstanceName_);
    };
    friend void from_json(const Darabonba::Json& j, KillProcessResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(DBInstanceID, DBInstanceID_);
      DARABONBA_PTR_FROM_JSON(DBInstanceName, DBInstanceName_);
    };
    KillProcessResponseBodyData() = default ;
    KillProcessResponseBodyData(const KillProcessResponseBodyData &) = default ;
    KillProcessResponseBodyData(KillProcessResponseBodyData &&) = default ;
    KillProcessResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~KillProcessResponseBodyData() = default ;
    KillProcessResponseBodyData& operator=(const KillProcessResponseBodyData &) = default ;
    KillProcessResponseBodyData& operator=(KillProcessResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->count_ != nullptr
        && this->DBInstanceID_ != nullptr && this->DBInstanceName_ != nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int64_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
    inline KillProcessResponseBodyData& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // DBInstanceID Field Functions 
    bool hasDBInstanceID() const { return this->DBInstanceID_ != nullptr;};
    void deleteDBInstanceID() { this->DBInstanceID_ = nullptr;};
    inline int32_t DBInstanceID() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceID_, 0) };
    inline KillProcessResponseBodyData& setDBInstanceID(int32_t DBInstanceID) { DARABONBA_PTR_SET_VALUE(DBInstanceID_, DBInstanceID) };


    // DBInstanceName Field Functions 
    bool hasDBInstanceName() const { return this->DBInstanceName_ != nullptr;};
    void deleteDBInstanceName() { this->DBInstanceName_ = nullptr;};
    inline string DBInstanceName() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceName_, "") };
    inline KillProcessResponseBodyData& setDBInstanceName(string DBInstanceName) { DARABONBA_PTR_SET_VALUE(DBInstanceName_, DBInstanceName) };


  protected:
    // The number of queries that are terminated.
    std::shared_ptr<int64_t> count_ = nullptr;
    // The cluster ID.
    std::shared_ptr<int32_t> DBInstanceID_ = nullptr;
    // The cluster name.
    std::shared_ptr<string> DBInstanceName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20230522
#endif
