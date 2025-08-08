// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTABLETOPOLOGYRESPONSEBODYTABLETOPOLOGY_HPP_
#define ALIBABACLOUD_MODELS_GETTABLETOPOLOGYRESPONSEBODYTABLETOPOLOGY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetTableTopologyResponseBodyTableTopologyTableTopologyInfoList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetTableTopologyResponseBodyTableTopology : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTableTopologyResponseBodyTableTopology& obj) { 
      DARABONBA_PTR_TO_JSON(Logic, logic_);
      DARABONBA_PTR_TO_JSON(TableGuid, tableGuid_);
      DARABONBA_PTR_TO_JSON(TableName, tableName_);
      DARABONBA_PTR_TO_JSON(TableTopologyInfoList, tableTopologyInfoList_);
    };
    friend void from_json(const Darabonba::Json& j, GetTableTopologyResponseBodyTableTopology& obj) { 
      DARABONBA_PTR_FROM_JSON(Logic, logic_);
      DARABONBA_PTR_FROM_JSON(TableGuid, tableGuid_);
      DARABONBA_PTR_FROM_JSON(TableName, tableName_);
      DARABONBA_PTR_FROM_JSON(TableTopologyInfoList, tableTopologyInfoList_);
    };
    GetTableTopologyResponseBodyTableTopology() = default ;
    GetTableTopologyResponseBodyTableTopology(const GetTableTopologyResponseBodyTableTopology &) = default ;
    GetTableTopologyResponseBodyTableTopology(GetTableTopologyResponseBodyTableTopology &&) = default ;
    GetTableTopologyResponseBodyTableTopology(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTableTopologyResponseBodyTableTopology() = default ;
    GetTableTopologyResponseBodyTableTopology& operator=(const GetTableTopologyResponseBodyTableTopology &) = default ;
    GetTableTopologyResponseBodyTableTopology& operator=(GetTableTopologyResponseBodyTableTopology &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->logic_ != nullptr
        && this->tableGuid_ != nullptr && this->tableName_ != nullptr && this->tableTopologyInfoList_ != nullptr; };
    // logic Field Functions 
    bool hasLogic() const { return this->logic_ != nullptr;};
    void deleteLogic() { this->logic_ = nullptr;};
    inline bool logic() const { DARABONBA_PTR_GET_DEFAULT(logic_, false) };
    inline GetTableTopologyResponseBodyTableTopology& setLogic(bool logic) { DARABONBA_PTR_SET_VALUE(logic_, logic) };


    // tableGuid Field Functions 
    bool hasTableGuid() const { return this->tableGuid_ != nullptr;};
    void deleteTableGuid() { this->tableGuid_ = nullptr;};
    inline string tableGuid() const { DARABONBA_PTR_GET_DEFAULT(tableGuid_, "") };
    inline GetTableTopologyResponseBodyTableTopology& setTableGuid(string tableGuid) { DARABONBA_PTR_SET_VALUE(tableGuid_, tableGuid) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string tableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline GetTableTopologyResponseBodyTableTopology& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


    // tableTopologyInfoList Field Functions 
    bool hasTableTopologyInfoList() const { return this->tableTopologyInfoList_ != nullptr;};
    void deleteTableTopologyInfoList() { this->tableTopologyInfoList_ = nullptr;};
    inline const vector<Models::GetTableTopologyResponseBodyTableTopologyTableTopologyInfoList> & tableTopologyInfoList() const { DARABONBA_PTR_GET_CONST(tableTopologyInfoList_, vector<Models::GetTableTopologyResponseBodyTableTopologyTableTopologyInfoList>) };
    inline vector<Models::GetTableTopologyResponseBodyTableTopologyTableTopologyInfoList> tableTopologyInfoList() { DARABONBA_PTR_GET(tableTopologyInfoList_, vector<Models::GetTableTopologyResponseBodyTableTopologyTableTopologyInfoList>) };
    inline GetTableTopologyResponseBodyTableTopology& setTableTopologyInfoList(const vector<Models::GetTableTopologyResponseBodyTableTopologyTableTopologyInfoList> & tableTopologyInfoList) { DARABONBA_PTR_SET_VALUE(tableTopologyInfoList_, tableTopologyInfoList) };
    inline GetTableTopologyResponseBodyTableTopology& setTableTopologyInfoList(vector<Models::GetTableTopologyResponseBodyTableTopologyTableTopologyInfoList> && tableTopologyInfoList) { DARABONBA_PTR_SET_RVALUE(tableTopologyInfoList_, tableTopologyInfoList) };


  protected:
    // Indicates whether the table is a logical table. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> logic_ = nullptr;
    // The GUID of the table in DMS.
    std::shared_ptr<string> tableGuid_ = nullptr;
    // The name of the table.
    std::shared_ptr<string> tableName_ = nullptr;
    // Information of the topology of the table.
    std::shared_ptr<vector<Models::GetTableTopologyResponseBodyTableTopologyTableTopologyInfoList>> tableTopologyInfoList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
