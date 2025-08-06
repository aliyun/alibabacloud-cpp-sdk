// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEACLRESOURCENAMERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEACLRESOURCENAMERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alikafka20190916
{
namespace Models
{
  class DescribeAclResourceNameResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAclResourceNameResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAclResourceNameResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
    };
    DescribeAclResourceNameResponseBodyData() = default ;
    DescribeAclResourceNameResponseBodyData(const DescribeAclResourceNameResponseBodyData &) = default ;
    DescribeAclResourceNameResponseBodyData(DescribeAclResourceNameResponseBodyData &&) = default ;
    DescribeAclResourceNameResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAclResourceNameResponseBodyData() = default ;
    DescribeAclResourceNameResponseBodyData& operator=(const DescribeAclResourceNameResponseBodyData &) = default ;
    DescribeAclResourceNameResponseBodyData& operator=(DescribeAclResourceNameResponseBodyData &&) = default ;
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
    inline DescribeAclResourceNameResponseBodyData& setData(const vector<string> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeAclResourceNameResponseBodyData& setData(vector<string> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


  protected:
    std::shared_ptr<vector<string>> data_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alikafka20190916
#endif
