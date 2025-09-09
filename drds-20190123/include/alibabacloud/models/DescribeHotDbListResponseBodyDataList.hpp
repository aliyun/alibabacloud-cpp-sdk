// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHOTDBLISTRESPONSEBODYDATALIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHOTDBLISTRESPONSEBODYDATALIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeHotDbListResponseBodyDataListInstanceDb.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Drds20190123
{
namespace Models
{
  class DescribeHotDbListResponseBodyDataList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHotDbListResponseBodyDataList& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceDb, instanceDb_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHotDbListResponseBodyDataList& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceDb, instanceDb_);
    };
    DescribeHotDbListResponseBodyDataList() = default ;
    DescribeHotDbListResponseBodyDataList(const DescribeHotDbListResponseBodyDataList &) = default ;
    DescribeHotDbListResponseBodyDataList(DescribeHotDbListResponseBodyDataList &&) = default ;
    DescribeHotDbListResponseBodyDataList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHotDbListResponseBodyDataList() = default ;
    DescribeHotDbListResponseBodyDataList& operator=(const DescribeHotDbListResponseBodyDataList &) = default ;
    DescribeHotDbListResponseBodyDataList& operator=(DescribeHotDbListResponseBodyDataList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceDb_ != nullptr; };
    // instanceDb Field Functions 
    bool hasInstanceDb() const { return this->instanceDb_ != nullptr;};
    void deleteInstanceDb() { this->instanceDb_ = nullptr;};
    inline const vector<Models::DescribeHotDbListResponseBodyDataListInstanceDb> & instanceDb() const { DARABONBA_PTR_GET_CONST(instanceDb_, vector<Models::DescribeHotDbListResponseBodyDataListInstanceDb>) };
    inline vector<Models::DescribeHotDbListResponseBodyDataListInstanceDb> instanceDb() { DARABONBA_PTR_GET(instanceDb_, vector<Models::DescribeHotDbListResponseBodyDataListInstanceDb>) };
    inline DescribeHotDbListResponseBodyDataList& setInstanceDb(const vector<Models::DescribeHotDbListResponseBodyDataListInstanceDb> & instanceDb) { DARABONBA_PTR_SET_VALUE(instanceDb_, instanceDb) };
    inline DescribeHotDbListResponseBodyDataList& setInstanceDb(vector<Models::DescribeHotDbListResponseBodyDataListInstanceDb> && instanceDb) { DARABONBA_PTR_SET_RVALUE(instanceDb_, instanceDb) };


  protected:
    std::shared_ptr<vector<Models::DescribeHotDbListResponseBodyDataListInstanceDb>> instanceDb_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Drds20190123
#endif
