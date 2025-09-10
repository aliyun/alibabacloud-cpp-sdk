// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETAGSRESPONSEBODYTAGINFOS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETAGSRESPONSEBODYTAGINFOS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class DescribeTagsResponseBodyTagInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTagsResponseBodyTagInfos& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceIds, DBInstanceIds_);
      DARABONBA_PTR_TO_JSON(TagKey, tagKey_);
      DARABONBA_PTR_TO_JSON(TagValue, tagValue_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTagsResponseBodyTagInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceIds, DBInstanceIds_);
      DARABONBA_PTR_FROM_JSON(TagKey, tagKey_);
      DARABONBA_PTR_FROM_JSON(TagValue, tagValue_);
    };
    DescribeTagsResponseBodyTagInfos() = default ;
    DescribeTagsResponseBodyTagInfos(const DescribeTagsResponseBodyTagInfos &) = default ;
    DescribeTagsResponseBodyTagInfos(DescribeTagsResponseBodyTagInfos &&) = default ;
    DescribeTagsResponseBodyTagInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTagsResponseBodyTagInfos() = default ;
    DescribeTagsResponseBodyTagInfos& operator=(const DescribeTagsResponseBodyTagInfos &) = default ;
    DescribeTagsResponseBodyTagInfos& operator=(DescribeTagsResponseBodyTagInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->DBInstanceIds_ != nullptr
        && this->tagKey_ != nullptr && this->tagValue_ != nullptr; };
    // DBInstanceIds Field Functions 
    bool hasDBInstanceIds() const { return this->DBInstanceIds_ != nullptr;};
    void deleteDBInstanceIds() { this->DBInstanceIds_ = nullptr;};
    inline const vector<string> & DBInstanceIds() const { DARABONBA_PTR_GET_CONST(DBInstanceIds_, vector<string>) };
    inline vector<string> DBInstanceIds() { DARABONBA_PTR_GET(DBInstanceIds_, vector<string>) };
    inline DescribeTagsResponseBodyTagInfos& setDBInstanceIds(const vector<string> & DBInstanceIds) { DARABONBA_PTR_SET_VALUE(DBInstanceIds_, DBInstanceIds) };
    inline DescribeTagsResponseBodyTagInfos& setDBInstanceIds(vector<string> && DBInstanceIds) { DARABONBA_PTR_SET_RVALUE(DBInstanceIds_, DBInstanceIds) };


    // tagKey Field Functions 
    bool hasTagKey() const { return this->tagKey_ != nullptr;};
    void deleteTagKey() { this->tagKey_ = nullptr;};
    inline string tagKey() const { DARABONBA_PTR_GET_DEFAULT(tagKey_, "") };
    inline DescribeTagsResponseBodyTagInfos& setTagKey(string tagKey) { DARABONBA_PTR_SET_VALUE(tagKey_, tagKey) };


    // tagValue Field Functions 
    bool hasTagValue() const { return this->tagValue_ != nullptr;};
    void deleteTagValue() { this->tagValue_ = nullptr;};
    inline string tagValue() const { DARABONBA_PTR_GET_DEFAULT(tagValue_, "") };
    inline DescribeTagsResponseBodyTagInfos& setTagValue(string tagValue) { DARABONBA_PTR_SET_VALUE(tagValue_, tagValue) };


  protected:
    std::shared_ptr<vector<string>> DBInstanceIds_ = nullptr;
    std::shared_ptr<string> tagKey_ = nullptr;
    std::shared_ptr<string> tagValue_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
