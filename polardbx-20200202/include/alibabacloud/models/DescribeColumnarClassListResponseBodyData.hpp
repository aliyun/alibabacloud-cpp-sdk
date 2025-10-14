// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECOLUMNARCLASSLISTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECOLUMNARCLASSLISTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeColumnarClassListResponseBodyDataClassCodeList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class DescribeColumnarClassListResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeColumnarClassListResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ClassCodeList, classCodeList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeColumnarClassListResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ClassCodeList, classCodeList_);
    };
    DescribeColumnarClassListResponseBodyData() = default ;
    DescribeColumnarClassListResponseBodyData(const DescribeColumnarClassListResponseBodyData &) = default ;
    DescribeColumnarClassListResponseBodyData(DescribeColumnarClassListResponseBodyData &&) = default ;
    DescribeColumnarClassListResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeColumnarClassListResponseBodyData() = default ;
    DescribeColumnarClassListResponseBodyData& operator=(const DescribeColumnarClassListResponseBodyData &) = default ;
    DescribeColumnarClassListResponseBodyData& operator=(DescribeColumnarClassListResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->classCodeList_ == nullptr; };
    // classCodeList Field Functions 
    bool hasClassCodeList() const { return this->classCodeList_ != nullptr;};
    void deleteClassCodeList() { this->classCodeList_ = nullptr;};
    inline const vector<Models::DescribeColumnarClassListResponseBodyDataClassCodeList> & classCodeList() const { DARABONBA_PTR_GET_CONST(classCodeList_, vector<Models::DescribeColumnarClassListResponseBodyDataClassCodeList>) };
    inline vector<Models::DescribeColumnarClassListResponseBodyDataClassCodeList> classCodeList() { DARABONBA_PTR_GET(classCodeList_, vector<Models::DescribeColumnarClassListResponseBodyDataClassCodeList>) };
    inline DescribeColumnarClassListResponseBodyData& setClassCodeList(const vector<Models::DescribeColumnarClassListResponseBodyDataClassCodeList> & classCodeList) { DARABONBA_PTR_SET_VALUE(classCodeList_, classCodeList) };
    inline DescribeColumnarClassListResponseBodyData& setClassCodeList(vector<Models::DescribeColumnarClassListResponseBodyDataClassCodeList> && classCodeList) { DARABONBA_PTR_SET_RVALUE(classCodeList_, classCodeList) };


  protected:
    // object
    std::shared_ptr<vector<Models::DescribeColumnarClassListResponseBodyDataClassCodeList>> classCodeList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
