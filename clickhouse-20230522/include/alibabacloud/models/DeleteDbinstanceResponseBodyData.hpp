// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEDBINSTANCERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DELETEDBINSTANCERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20230522
{
namespace Models
{
  class DeleteDBInstanceResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteDBInstanceResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteDBInstanceResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
    };
    DeleteDBInstanceResponseBodyData() = default ;
    DeleteDBInstanceResponseBodyData(const DeleteDBInstanceResponseBodyData &) = default ;
    DeleteDBInstanceResponseBodyData(DeleteDBInstanceResponseBodyData &&) = default ;
    DeleteDBInstanceResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteDBInstanceResponseBodyData() = default ;
    DeleteDBInstanceResponseBodyData& operator=(const DeleteDBInstanceResponseBodyData &) = default ;
    DeleteDBInstanceResponseBodyData& operator=(DeleteDBInstanceResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->DBInstanceId_ != nullptr; };
    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string DBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline DeleteDBInstanceResponseBodyData& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


  protected:
    // The cluster ID.
    std::shared_ptr<string> DBInstanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20230522
#endif
