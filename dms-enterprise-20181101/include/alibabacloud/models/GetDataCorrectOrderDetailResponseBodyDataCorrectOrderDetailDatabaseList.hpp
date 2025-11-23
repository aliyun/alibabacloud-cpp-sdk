// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATACORRECTORDERDETAILRESPONSEBODYDATACORRECTORDERDETAILDATABASELIST_HPP_
#define ALIBABACLOUD_MODELS_GETDATACORRECTORDERDETAILRESPONSEBODYDATACORRECTORDERDETAILDATABASELIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailDatabaseListDatabase.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailDatabaseList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailDatabaseList& obj) { 
      DARABONBA_PTR_TO_JSON(Database, database_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailDatabaseList& obj) { 
      DARABONBA_PTR_FROM_JSON(Database, database_);
    };
    GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailDatabaseList() = default ;
    GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailDatabaseList(const GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailDatabaseList &) = default ;
    GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailDatabaseList(GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailDatabaseList &&) = default ;
    GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailDatabaseList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailDatabaseList() = default ;
    GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailDatabaseList& operator=(const GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailDatabaseList &) = default ;
    GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailDatabaseList& operator=(GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailDatabaseList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->database_ == nullptr; };
    // database Field Functions 
    bool hasDatabase() const { return this->database_ != nullptr;};
    void deleteDatabase() { this->database_ = nullptr;};
    inline const vector<Models::GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailDatabaseListDatabase> & database() const { DARABONBA_PTR_GET_CONST(database_, vector<Models::GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailDatabaseListDatabase>) };
    inline vector<Models::GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailDatabaseListDatabase> database() { DARABONBA_PTR_GET(database_, vector<Models::GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailDatabaseListDatabase>) };
    inline GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailDatabaseList& setDatabase(const vector<Models::GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailDatabaseListDatabase> & database) { DARABONBA_PTR_SET_VALUE(database_, database) };
    inline GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailDatabaseList& setDatabase(vector<Models::GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailDatabaseListDatabase> && database) { DARABONBA_PTR_SET_RVALUE(database_, database) };


  protected:
    std::shared_ptr<vector<Models::GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailDatabaseListDatabase>> database_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
