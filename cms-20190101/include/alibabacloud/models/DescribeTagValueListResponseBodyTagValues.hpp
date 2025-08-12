// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETAGVALUELISTRESPONSEBODYTAGVALUES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETAGVALUELISTRESPONSEBODYTAGVALUES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeTagValueListResponseBodyTagValues : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTagValueListResponseBodyTagValues& obj) { 
      DARABONBA_PTR_TO_JSON(TagValue, tagValue_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTagValueListResponseBodyTagValues& obj) { 
      DARABONBA_PTR_FROM_JSON(TagValue, tagValue_);
    };
    DescribeTagValueListResponseBodyTagValues() = default ;
    DescribeTagValueListResponseBodyTagValues(const DescribeTagValueListResponseBodyTagValues &) = default ;
    DescribeTagValueListResponseBodyTagValues(DescribeTagValueListResponseBodyTagValues &&) = default ;
    DescribeTagValueListResponseBodyTagValues(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTagValueListResponseBodyTagValues() = default ;
    DescribeTagValueListResponseBodyTagValues& operator=(const DescribeTagValueListResponseBodyTagValues &) = default ;
    DescribeTagValueListResponseBodyTagValues& operator=(DescribeTagValueListResponseBodyTagValues &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->tagValue_ != nullptr; };
    // tagValue Field Functions 
    bool hasTagValue() const { return this->tagValue_ != nullptr;};
    void deleteTagValue() { this->tagValue_ = nullptr;};
    inline const vector<string> & tagValue() const { DARABONBA_PTR_GET_CONST(tagValue_, vector<string>) };
    inline vector<string> tagValue() { DARABONBA_PTR_GET(tagValue_, vector<string>) };
    inline DescribeTagValueListResponseBodyTagValues& setTagValue(const vector<string> & tagValue) { DARABONBA_PTR_SET_VALUE(tagValue_, tagValue) };
    inline DescribeTagValueListResponseBodyTagValues& setTagValue(vector<string> && tagValue) { DARABONBA_PTR_SET_RVALUE(tagValue_, tagValue) };


  protected:
    std::shared_ptr<vector<string>> tagValue_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
