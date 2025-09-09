// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEXPANDLOGICTABLEINFOLISTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEXPANDLOGICTABLEINFOLISTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeExpandLogicTableInfoListResponseBodyDataData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Drds20190123
{
namespace Models
{
  class DescribeExpandLogicTableInfoListResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeExpandLogicTableInfoListResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeExpandLogicTableInfoListResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
    };
    DescribeExpandLogicTableInfoListResponseBodyData() = default ;
    DescribeExpandLogicTableInfoListResponseBodyData(const DescribeExpandLogicTableInfoListResponseBodyData &) = default ;
    DescribeExpandLogicTableInfoListResponseBodyData(DescribeExpandLogicTableInfoListResponseBodyData &&) = default ;
    DescribeExpandLogicTableInfoListResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeExpandLogicTableInfoListResponseBodyData() = default ;
    DescribeExpandLogicTableInfoListResponseBodyData& operator=(const DescribeExpandLogicTableInfoListResponseBodyData &) = default ;
    DescribeExpandLogicTableInfoListResponseBodyData& operator=(DescribeExpandLogicTableInfoListResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<Models::DescribeExpandLogicTableInfoListResponseBodyDataData> & data() const { DARABONBA_PTR_GET_CONST(data_, vector<Models::DescribeExpandLogicTableInfoListResponseBodyDataData>) };
    inline vector<Models::DescribeExpandLogicTableInfoListResponseBodyDataData> data() { DARABONBA_PTR_GET(data_, vector<Models::DescribeExpandLogicTableInfoListResponseBodyDataData>) };
    inline DescribeExpandLogicTableInfoListResponseBodyData& setData(const vector<Models::DescribeExpandLogicTableInfoListResponseBodyDataData> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeExpandLogicTableInfoListResponseBodyData& setData(vector<Models::DescribeExpandLogicTableInfoListResponseBodyDataData> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


  protected:
    std::shared_ptr<vector<Models::DescribeExpandLogicTableInfoListResponseBodyDataData>> data_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Drds20190123
#endif
