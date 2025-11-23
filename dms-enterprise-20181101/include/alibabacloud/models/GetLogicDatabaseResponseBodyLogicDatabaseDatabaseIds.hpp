// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLOGICDATABASERESPONSEBODYLOGICDATABASEDATABASEIDS_HPP_
#define ALIBABACLOUD_MODELS_GETLOGICDATABASERESPONSEBODYLOGICDATABASEDATABASEIDS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetLogicDatabaseResponseBodyLogicDatabaseDatabaseIds : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLogicDatabaseResponseBodyLogicDatabaseDatabaseIds& obj) { 
      DARABONBA_PTR_TO_JSON(DatabaseIds, databaseIds_);
    };
    friend void from_json(const Darabonba::Json& j, GetLogicDatabaseResponseBodyLogicDatabaseDatabaseIds& obj) { 
      DARABONBA_PTR_FROM_JSON(DatabaseIds, databaseIds_);
    };
    GetLogicDatabaseResponseBodyLogicDatabaseDatabaseIds() = default ;
    GetLogicDatabaseResponseBodyLogicDatabaseDatabaseIds(const GetLogicDatabaseResponseBodyLogicDatabaseDatabaseIds &) = default ;
    GetLogicDatabaseResponseBodyLogicDatabaseDatabaseIds(GetLogicDatabaseResponseBodyLogicDatabaseDatabaseIds &&) = default ;
    GetLogicDatabaseResponseBodyLogicDatabaseDatabaseIds(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLogicDatabaseResponseBodyLogicDatabaseDatabaseIds() = default ;
    GetLogicDatabaseResponseBodyLogicDatabaseDatabaseIds& operator=(const GetLogicDatabaseResponseBodyLogicDatabaseDatabaseIds &) = default ;
    GetLogicDatabaseResponseBodyLogicDatabaseDatabaseIds& operator=(GetLogicDatabaseResponseBodyLogicDatabaseDatabaseIds &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->databaseIds_ == nullptr; };
    // databaseIds Field Functions 
    bool hasDatabaseIds() const { return this->databaseIds_ != nullptr;};
    void deleteDatabaseIds() { this->databaseIds_ = nullptr;};
    inline const vector<int64_t> & databaseIds() const { DARABONBA_PTR_GET_CONST(databaseIds_, vector<int64_t>) };
    inline vector<int64_t> databaseIds() { DARABONBA_PTR_GET(databaseIds_, vector<int64_t>) };
    inline GetLogicDatabaseResponseBodyLogicDatabaseDatabaseIds& setDatabaseIds(const vector<int64_t> & databaseIds) { DARABONBA_PTR_SET_VALUE(databaseIds_, databaseIds) };
    inline GetLogicDatabaseResponseBodyLogicDatabaseDatabaseIds& setDatabaseIds(vector<int64_t> && databaseIds) { DARABONBA_PTR_SET_RVALUE(databaseIds_, databaseIds) };


  protected:
    std::shared_ptr<vector<int64_t>> databaseIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
