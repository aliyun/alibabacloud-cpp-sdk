// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEALLIMAGEBASELINERESPONSEBODYIMAGEBASELINES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEALLIMAGEBASELINERESPONSEBODYIMAGEBASELINES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeAllImageBaselineResponseBodyImageBaselinesBaselineClassList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeAllImageBaselineResponseBodyImageBaselines : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAllImageBaselineResponseBodyImageBaselines& obj) { 
      DARABONBA_PTR_TO_JSON(BaselineClassList, baselineClassList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAllImageBaselineResponseBodyImageBaselines& obj) { 
      DARABONBA_PTR_FROM_JSON(BaselineClassList, baselineClassList_);
    };
    DescribeAllImageBaselineResponseBodyImageBaselines() = default ;
    DescribeAllImageBaselineResponseBodyImageBaselines(const DescribeAllImageBaselineResponseBodyImageBaselines &) = default ;
    DescribeAllImageBaselineResponseBodyImageBaselines(DescribeAllImageBaselineResponseBodyImageBaselines &&) = default ;
    DescribeAllImageBaselineResponseBodyImageBaselines(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAllImageBaselineResponseBodyImageBaselines() = default ;
    DescribeAllImageBaselineResponseBodyImageBaselines& operator=(const DescribeAllImageBaselineResponseBodyImageBaselines &) = default ;
    DescribeAllImageBaselineResponseBodyImageBaselines& operator=(DescribeAllImageBaselineResponseBodyImageBaselines &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->baselineClassList_ == nullptr; };
    // baselineClassList Field Functions 
    bool hasBaselineClassList() const { return this->baselineClassList_ != nullptr;};
    void deleteBaselineClassList() { this->baselineClassList_ = nullptr;};
    inline const vector<Models::DescribeAllImageBaselineResponseBodyImageBaselinesBaselineClassList> & baselineClassList() const { DARABONBA_PTR_GET_CONST(baselineClassList_, vector<Models::DescribeAllImageBaselineResponseBodyImageBaselinesBaselineClassList>) };
    inline vector<Models::DescribeAllImageBaselineResponseBodyImageBaselinesBaselineClassList> baselineClassList() { DARABONBA_PTR_GET(baselineClassList_, vector<Models::DescribeAllImageBaselineResponseBodyImageBaselinesBaselineClassList>) };
    inline DescribeAllImageBaselineResponseBodyImageBaselines& setBaselineClassList(const vector<Models::DescribeAllImageBaselineResponseBodyImageBaselinesBaselineClassList> & baselineClassList) { DARABONBA_PTR_SET_VALUE(baselineClassList_, baselineClassList) };
    inline DescribeAllImageBaselineResponseBodyImageBaselines& setBaselineClassList(vector<Models::DescribeAllImageBaselineResponseBodyImageBaselinesBaselineClassList> && baselineClassList) { DARABONBA_PTR_SET_RVALUE(baselineClassList_, baselineClassList) };


  protected:
    // An array that consists of baseline types.
    std::shared_ptr<vector<Models::DescribeAllImageBaselineResponseBodyImageBaselinesBaselineClassList>> baselineClassList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
