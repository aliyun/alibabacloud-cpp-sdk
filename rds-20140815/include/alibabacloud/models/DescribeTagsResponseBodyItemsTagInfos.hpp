// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETAGSRESPONSEBODYITEMSTAGINFOS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETAGSRESPONSEBODYITEMSTAGINFOS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeTagsResponseBodyItemsTagInfosDBInstanceIds.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeTagsResponseBodyItemsTagInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTagsResponseBodyItemsTagInfos& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceIds, DBInstanceIds_);
      DARABONBA_PTR_TO_JSON(TagKey, tagKey_);
      DARABONBA_PTR_TO_JSON(TagValue, tagValue_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTagsResponseBodyItemsTagInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceIds, DBInstanceIds_);
      DARABONBA_PTR_FROM_JSON(TagKey, tagKey_);
      DARABONBA_PTR_FROM_JSON(TagValue, tagValue_);
    };
    DescribeTagsResponseBodyItemsTagInfos() = default ;
    DescribeTagsResponseBodyItemsTagInfos(const DescribeTagsResponseBodyItemsTagInfos &) = default ;
    DescribeTagsResponseBodyItemsTagInfos(DescribeTagsResponseBodyItemsTagInfos &&) = default ;
    DescribeTagsResponseBodyItemsTagInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTagsResponseBodyItemsTagInfos() = default ;
    DescribeTagsResponseBodyItemsTagInfos& operator=(const DescribeTagsResponseBodyItemsTagInfos &) = default ;
    DescribeTagsResponseBodyItemsTagInfos& operator=(DescribeTagsResponseBodyItemsTagInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceIds_ == nullptr
        && return this->tagKey_ == nullptr && return this->tagValue_ == nullptr; };
    // DBInstanceIds Field Functions 
    bool hasDBInstanceIds() const { return this->DBInstanceIds_ != nullptr;};
    void deleteDBInstanceIds() { this->DBInstanceIds_ = nullptr;};
    inline const Models::DescribeTagsResponseBodyItemsTagInfosDBInstanceIds & DBInstanceIds() const { DARABONBA_PTR_GET_CONST(DBInstanceIds_, Models::DescribeTagsResponseBodyItemsTagInfosDBInstanceIds) };
    inline Models::DescribeTagsResponseBodyItemsTagInfosDBInstanceIds DBInstanceIds() { DARABONBA_PTR_GET(DBInstanceIds_, Models::DescribeTagsResponseBodyItemsTagInfosDBInstanceIds) };
    inline DescribeTagsResponseBodyItemsTagInfos& setDBInstanceIds(const Models::DescribeTagsResponseBodyItemsTagInfosDBInstanceIds & DBInstanceIds) { DARABONBA_PTR_SET_VALUE(DBInstanceIds_, DBInstanceIds) };
    inline DescribeTagsResponseBodyItemsTagInfos& setDBInstanceIds(Models::DescribeTagsResponseBodyItemsTagInfosDBInstanceIds && DBInstanceIds) { DARABONBA_PTR_SET_RVALUE(DBInstanceIds_, DBInstanceIds) };


    // tagKey Field Functions 
    bool hasTagKey() const { return this->tagKey_ != nullptr;};
    void deleteTagKey() { this->tagKey_ = nullptr;};
    inline string tagKey() const { DARABONBA_PTR_GET_DEFAULT(tagKey_, "") };
    inline DescribeTagsResponseBodyItemsTagInfos& setTagKey(string tagKey) { DARABONBA_PTR_SET_VALUE(tagKey_, tagKey) };


    // tagValue Field Functions 
    bool hasTagValue() const { return this->tagValue_ != nullptr;};
    void deleteTagValue() { this->tagValue_ = nullptr;};
    inline string tagValue() const { DARABONBA_PTR_GET_DEFAULT(tagValue_, "") };
    inline DescribeTagsResponseBodyItemsTagInfos& setTagValue(string tagValue) { DARABONBA_PTR_SET_VALUE(tagValue_, tagValue) };


  protected:
    // The IDs of the instances to which the tag is added.
    std::shared_ptr<Models::DescribeTagsResponseBodyItemsTagInfosDBInstanceIds> DBInstanceIds_ = nullptr;
    // The tag key.
    std::shared_ptr<string> tagKey_ = nullptr;
    // The tag value.
    std::shared_ptr<string> tagValue_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
