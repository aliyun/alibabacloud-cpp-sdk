// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDRDSDBSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDRDSDBSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDrdsDBsResponseBodyDataDb.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Drds20190123
{
namespace Models
{
  class DescribeDrdsDBsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDrdsDBsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Db, db_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDrdsDBsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Db, db_);
    };
    DescribeDrdsDBsResponseBodyData() = default ;
    DescribeDrdsDBsResponseBodyData(const DescribeDrdsDBsResponseBodyData &) = default ;
    DescribeDrdsDBsResponseBodyData(DescribeDrdsDBsResponseBodyData &&) = default ;
    DescribeDrdsDBsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDrdsDBsResponseBodyData() = default ;
    DescribeDrdsDBsResponseBodyData& operator=(const DescribeDrdsDBsResponseBodyData &) = default ;
    DescribeDrdsDBsResponseBodyData& operator=(DescribeDrdsDBsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->db_ != nullptr; };
    // db Field Functions 
    bool hasDb() const { return this->db_ != nullptr;};
    void deleteDb() { this->db_ = nullptr;};
    inline const vector<Models::DescribeDrdsDBsResponseBodyDataDb> & db() const { DARABONBA_PTR_GET_CONST(db_, vector<Models::DescribeDrdsDBsResponseBodyDataDb>) };
    inline vector<Models::DescribeDrdsDBsResponseBodyDataDb> db() { DARABONBA_PTR_GET(db_, vector<Models::DescribeDrdsDBsResponseBodyDataDb>) };
    inline DescribeDrdsDBsResponseBodyData& setDb(const vector<Models::DescribeDrdsDBsResponseBodyDataDb> & db) { DARABONBA_PTR_SET_VALUE(db_, db) };
    inline DescribeDrdsDBsResponseBodyData& setDb(vector<Models::DescribeDrdsDBsResponseBodyDataDb> && db) { DARABONBA_PTR_SET_RVALUE(db_, db) };


  protected:
    std::shared_ptr<vector<Models::DescribeDrdsDBsResponseBodyDataDb>> db_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Drds20190123
#endif
