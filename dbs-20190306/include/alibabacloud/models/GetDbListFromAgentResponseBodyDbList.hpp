// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDBLISTFROMAGENTRESPONSEBODYDBLIST_HPP_
#define ALIBABACLOUD_MODELS_GETDBLISTFROMAGENTRESPONSEBODYDBLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dbs20190306
{
namespace Models
{
  class GetDBListFromAgentResponseBodyDbList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDBListFromAgentResponseBodyDbList& obj) { 
      DARABONBA_PTR_TO_JSON(dbName, dbName_);
    };
    friend void from_json(const Darabonba::Json& j, GetDBListFromAgentResponseBodyDbList& obj) { 
      DARABONBA_PTR_FROM_JSON(dbName, dbName_);
    };
    GetDBListFromAgentResponseBodyDbList() = default ;
    GetDBListFromAgentResponseBodyDbList(const GetDBListFromAgentResponseBodyDbList &) = default ;
    GetDBListFromAgentResponseBodyDbList(GetDBListFromAgentResponseBodyDbList &&) = default ;
    GetDBListFromAgentResponseBodyDbList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDBListFromAgentResponseBodyDbList() = default ;
    GetDBListFromAgentResponseBodyDbList& operator=(const GetDBListFromAgentResponseBodyDbList &) = default ;
    GetDBListFromAgentResponseBodyDbList& operator=(GetDBListFromAgentResponseBodyDbList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dbName_ == nullptr; };
    // dbName Field Functions 
    bool hasDbName() const { return this->dbName_ != nullptr;};
    void deleteDbName() { this->dbName_ = nullptr;};
    inline const vector<string> & dbName() const { DARABONBA_PTR_GET_CONST(dbName_, vector<string>) };
    inline vector<string> dbName() { DARABONBA_PTR_GET(dbName_, vector<string>) };
    inline GetDBListFromAgentResponseBodyDbList& setDbName(const vector<string> & dbName) { DARABONBA_PTR_SET_VALUE(dbName_, dbName) };
    inline GetDBListFromAgentResponseBodyDbList& setDbName(vector<string> && dbName) { DARABONBA_PTR_SET_RVALUE(dbName_, dbName) };


  protected:
    std::shared_ptr<vector<string>> dbName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dbs20190306
#endif
