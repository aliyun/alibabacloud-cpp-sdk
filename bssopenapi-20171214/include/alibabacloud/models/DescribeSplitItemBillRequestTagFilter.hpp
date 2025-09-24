// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESPLITITEMBILLREQUESTTAGFILTER_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESPLITITEMBILLREQUESTTAGFILTER_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class DescribeSplitItemBillRequestTagFilter : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSplitItemBillRequestTagFilter& obj) { 
      DARABONBA_PTR_TO_JSON(TagKey, tagKey_);
      DARABONBA_PTR_TO_JSON(TagValues, tagValues_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSplitItemBillRequestTagFilter& obj) { 
      DARABONBA_PTR_FROM_JSON(TagKey, tagKey_);
      DARABONBA_PTR_FROM_JSON(TagValues, tagValues_);
    };
    DescribeSplitItemBillRequestTagFilter() = default ;
    DescribeSplitItemBillRequestTagFilter(const DescribeSplitItemBillRequestTagFilter &) = default ;
    DescribeSplitItemBillRequestTagFilter(DescribeSplitItemBillRequestTagFilter &&) = default ;
    DescribeSplitItemBillRequestTagFilter(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSplitItemBillRequestTagFilter() = default ;
    DescribeSplitItemBillRequestTagFilter& operator=(const DescribeSplitItemBillRequestTagFilter &) = default ;
    DescribeSplitItemBillRequestTagFilter& operator=(DescribeSplitItemBillRequestTagFilter &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->tagKey_ != nullptr
        && this->tagValues_ != nullptr; };
    // tagKey Field Functions 
    bool hasTagKey() const { return this->tagKey_ != nullptr;};
    void deleteTagKey() { this->tagKey_ = nullptr;};
    inline string tagKey() const { DARABONBA_PTR_GET_DEFAULT(tagKey_, "") };
    inline DescribeSplitItemBillRequestTagFilter& setTagKey(string tagKey) { DARABONBA_PTR_SET_VALUE(tagKey_, tagKey) };


    // tagValues Field Functions 
    bool hasTagValues() const { return this->tagValues_ != nullptr;};
    void deleteTagValues() { this->tagValues_ = nullptr;};
    inline const vector<string> & tagValues() const { DARABONBA_PTR_GET_CONST(tagValues_, vector<string>) };
    inline vector<string> tagValues() { DARABONBA_PTR_GET(tagValues_, vector<string>) };
    inline DescribeSplitItemBillRequestTagFilter& setTagValues(const vector<string> & tagValues) { DARABONBA_PTR_SET_VALUE(tagValues_, tagValues) };
    inline DescribeSplitItemBillRequestTagFilter& setTagValues(vector<string> && tagValues) { DARABONBA_PTR_SET_RVALUE(tagValues_, tagValues) };


  protected:
    // The TagFilter.N parameter is used to query bills that match a specified tag. The value of the TagFilter.N parameter must be a key-value pair. The tag key must be 1 to 128 characters in length. Valid values of N: 1 to 20.
    // 
    // *   If only the TagFilter.N.TagKey parameter is specified, all bills associated with the tag key are queried.
    // *   If you specify multiple tag key-value pairs at the same time, bills that meet any one of the tag key-value pairs are queried.
    // *   If the tags added to resources change, you can query only the bills that are generated within the period in which the tags and resources are associated.
    std::shared_ptr<string> tagKey_ = nullptr;
    // You can specify the TagValues.N parameter to query bills that match the specified tag value. The value of the TagValues.N parameter must be a string. The tag value must be 1 to 128 characters in length. Valid values of N: 1 to 20.
    // 
    // *   If you specify the TagValues.N parameter, the TagFilter.N.TagKey parameter is required. Otherwise, the error message InvalidParameter.TagValues is returned.
    // *   If you specify multiple tag values, split bills that match one of the tag values are queried.
    std::shared_ptr<vector<string>> tagValues_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
