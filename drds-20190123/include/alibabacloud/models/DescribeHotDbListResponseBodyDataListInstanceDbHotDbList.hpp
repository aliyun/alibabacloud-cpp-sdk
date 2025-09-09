// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHOTDBLISTRESPONSEBODYDATALISTINSTANCEDBHOTDBLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHOTDBLISTRESPONSEBODYDATALISTINSTANCEDBHOTDBLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Drds20190123
{
namespace Models
{
  class DescribeHotDbListResponseBodyDataListInstanceDbHotDbList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHotDbListResponseBodyDataListInstanceDbHotDbList& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHotDbListResponseBodyDataListInstanceDbHotDbList& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
    };
    DescribeHotDbListResponseBodyDataListInstanceDbHotDbList() = default ;
    DescribeHotDbListResponseBodyDataListInstanceDbHotDbList(const DescribeHotDbListResponseBodyDataListInstanceDbHotDbList &) = default ;
    DescribeHotDbListResponseBodyDataListInstanceDbHotDbList(DescribeHotDbListResponseBodyDataListInstanceDbHotDbList &&) = default ;
    DescribeHotDbListResponseBodyDataListInstanceDbHotDbList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHotDbListResponseBodyDataListInstanceDbHotDbList() = default ;
    DescribeHotDbListResponseBodyDataListInstanceDbHotDbList& operator=(const DescribeHotDbListResponseBodyDataListInstanceDbHotDbList &) = default ;
    DescribeHotDbListResponseBodyDataListInstanceDbHotDbList& operator=(DescribeHotDbListResponseBodyDataListInstanceDbHotDbList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<string> & data() const { DARABONBA_PTR_GET_CONST(data_, vector<string>) };
    inline vector<string> data() { DARABONBA_PTR_GET(data_, vector<string>) };
    inline DescribeHotDbListResponseBodyDataListInstanceDbHotDbList& setData(const vector<string> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeHotDbListResponseBodyDataListInstanceDbHotDbList& setData(vector<string> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


  protected:
    std::shared_ptr<vector<string>> data_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Drds20190123
#endif
