// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETABLERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETABLERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeTableResponseBodyDataList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Drds20190123
{
namespace Models
{
  class DescribeTableResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTableResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(List, list_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTableResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(List, list_);
    };
    DescribeTableResponseBodyData() = default ;
    DescribeTableResponseBodyData(const DescribeTableResponseBodyData &) = default ;
    DescribeTableResponseBodyData(DescribeTableResponseBodyData &&) = default ;
    DescribeTableResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTableResponseBodyData() = default ;
    DescribeTableResponseBodyData& operator=(const DescribeTableResponseBodyData &) = default ;
    DescribeTableResponseBodyData& operator=(DescribeTableResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->list_ != nullptr; };
    // list Field Functions 
    bool hasList() const { return this->list_ != nullptr;};
    void deleteList() { this->list_ = nullptr;};
    inline const vector<Models::DescribeTableResponseBodyDataList> & list() const { DARABONBA_PTR_GET_CONST(list_, vector<Models::DescribeTableResponseBodyDataList>) };
    inline vector<Models::DescribeTableResponseBodyDataList> list() { DARABONBA_PTR_GET(list_, vector<Models::DescribeTableResponseBodyDataList>) };
    inline DescribeTableResponseBodyData& setList(const vector<Models::DescribeTableResponseBodyDataList> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
    inline DescribeTableResponseBodyData& setList(vector<Models::DescribeTableResponseBodyDataList> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


  protected:
    // Indicates the details about the table schema.
    std::shared_ptr<vector<Models::DescribeTableResponseBodyDataList>> list_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Drds20190123
#endif
