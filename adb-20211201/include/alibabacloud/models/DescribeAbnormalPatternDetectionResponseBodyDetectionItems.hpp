// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEABNORMALPATTERNDETECTIONRESPONSEBODYDETECTIONITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEABNORMALPATTERNDETECTIONRESPONSEBODYDETECTIONITEMS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeAbnormalPatternDetectionResponseBodyDetectionItemsResults.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeAbnormalPatternDetectionResponseBodyDetectionItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAbnormalPatternDetectionResponseBodyDetectionItems& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Results, results_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAbnormalPatternDetectionResponseBodyDetectionItems& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Results, results_);
    };
    DescribeAbnormalPatternDetectionResponseBodyDetectionItems() = default ;
    DescribeAbnormalPatternDetectionResponseBodyDetectionItems(const DescribeAbnormalPatternDetectionResponseBodyDetectionItems &) = default ;
    DescribeAbnormalPatternDetectionResponseBodyDetectionItems(DescribeAbnormalPatternDetectionResponseBodyDetectionItems &&) = default ;
    DescribeAbnormalPatternDetectionResponseBodyDetectionItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAbnormalPatternDetectionResponseBodyDetectionItems() = default ;
    DescribeAbnormalPatternDetectionResponseBodyDetectionItems& operator=(const DescribeAbnormalPatternDetectionResponseBodyDetectionItems &) = default ;
    DescribeAbnormalPatternDetectionResponseBodyDetectionItems& operator=(DescribeAbnormalPatternDetectionResponseBodyDetectionItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->name_ != nullptr
        && this->results_ != nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeAbnormalPatternDetectionResponseBodyDetectionItems& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // results Field Functions 
    bool hasResults() const { return this->results_ != nullptr;};
    void deleteResults() { this->results_ = nullptr;};
    inline const vector<Models::DescribeAbnormalPatternDetectionResponseBodyDetectionItemsResults> & results() const { DARABONBA_PTR_GET_CONST(results_, vector<Models::DescribeAbnormalPatternDetectionResponseBodyDetectionItemsResults>) };
    inline vector<Models::DescribeAbnormalPatternDetectionResponseBodyDetectionItemsResults> results() { DARABONBA_PTR_GET(results_, vector<Models::DescribeAbnormalPatternDetectionResponseBodyDetectionItemsResults>) };
    inline DescribeAbnormalPatternDetectionResponseBodyDetectionItems& setResults(const vector<Models::DescribeAbnormalPatternDetectionResponseBodyDetectionItemsResults> & results) { DARABONBA_PTR_SET_VALUE(results_, results) };
    inline DescribeAbnormalPatternDetectionResponseBodyDetectionItems& setResults(vector<Models::DescribeAbnormalPatternDetectionResponseBodyDetectionItemsResults> && results) { DARABONBA_PTR_SET_RVALUE(results_, results) };


  protected:
    // The name of the detection item.
    std::shared_ptr<string> name_ = nullptr;
    // The detection result items.
    std::shared_ptr<vector<Models::DescribeAbnormalPatternDetectionResponseBodyDetectionItemsResults>> results_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
