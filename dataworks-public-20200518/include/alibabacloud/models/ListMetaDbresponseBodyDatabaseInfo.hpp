// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMETADBRESPONSEBODYDATABASEINFO_HPP_
#define ALIBABACLOUD_MODELS_LISTMETADBRESPONSEBODYDATABASEINFO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListMetaDBResponseBodyDatabaseInfoDbList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class ListMetaDBResponseBodyDatabaseInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMetaDBResponseBodyDatabaseInfo& obj) { 
      DARABONBA_PTR_TO_JSON(DbList, dbList_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListMetaDBResponseBodyDatabaseInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(DbList, dbList_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListMetaDBResponseBodyDatabaseInfo() = default ;
    ListMetaDBResponseBodyDatabaseInfo(const ListMetaDBResponseBodyDatabaseInfo &) = default ;
    ListMetaDBResponseBodyDatabaseInfo(ListMetaDBResponseBodyDatabaseInfo &&) = default ;
    ListMetaDBResponseBodyDatabaseInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMetaDBResponseBodyDatabaseInfo() = default ;
    ListMetaDBResponseBodyDatabaseInfo& operator=(const ListMetaDBResponseBodyDatabaseInfo &) = default ;
    ListMetaDBResponseBodyDatabaseInfo& operator=(ListMetaDBResponseBodyDatabaseInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dbList_ != nullptr
        && this->totalCount_ != nullptr; };
    // dbList Field Functions 
    bool hasDbList() const { return this->dbList_ != nullptr;};
    void deleteDbList() { this->dbList_ = nullptr;};
    inline const vector<Models::ListMetaDBResponseBodyDatabaseInfoDbList> & dbList() const { DARABONBA_PTR_GET_CONST(dbList_, vector<Models::ListMetaDBResponseBodyDatabaseInfoDbList>) };
    inline vector<Models::ListMetaDBResponseBodyDatabaseInfoDbList> dbList() { DARABONBA_PTR_GET(dbList_, vector<Models::ListMetaDBResponseBodyDatabaseInfoDbList>) };
    inline ListMetaDBResponseBodyDatabaseInfo& setDbList(const vector<Models::ListMetaDBResponseBodyDatabaseInfoDbList> & dbList) { DARABONBA_PTR_SET_VALUE(dbList_, dbList) };
    inline ListMetaDBResponseBodyDatabaseInfo& setDbList(vector<Models::ListMetaDBResponseBodyDatabaseInfoDbList> && dbList) { DARABONBA_PTR_SET_RVALUE(dbList_, dbList) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListMetaDBResponseBodyDatabaseInfo& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The metadatabases.
    std::shared_ptr<vector<Models::ListMetaDBResponseBodyDatabaseInfoDbList>> dbList_ = nullptr;
    // The total number of the metadatabases returned.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
