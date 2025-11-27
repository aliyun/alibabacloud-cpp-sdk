// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCEBYTAGSRESPONSEBODYITEMSDBINSTANCETAG_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCEBYTAGSRESPONSEBODYITEMSDBINSTANCETAG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDBInstanceByTagsResponseBodyItemsDBInstanceTagTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeDBInstanceByTagsResponseBodyItemsDBInstanceTag : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBInstanceByTagsResponseBodyItemsDBInstanceTag& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBInstanceByTagsResponseBodyItemsDBInstanceTag& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    DescribeDBInstanceByTagsResponseBodyItemsDBInstanceTag() = default ;
    DescribeDBInstanceByTagsResponseBodyItemsDBInstanceTag(const DescribeDBInstanceByTagsResponseBodyItemsDBInstanceTag &) = default ;
    DescribeDBInstanceByTagsResponseBodyItemsDBInstanceTag(DescribeDBInstanceByTagsResponseBodyItemsDBInstanceTag &&) = default ;
    DescribeDBInstanceByTagsResponseBodyItemsDBInstanceTag(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBInstanceByTagsResponseBodyItemsDBInstanceTag() = default ;
    DescribeDBInstanceByTagsResponseBodyItemsDBInstanceTag& operator=(const DescribeDBInstanceByTagsResponseBodyItemsDBInstanceTag &) = default ;
    DescribeDBInstanceByTagsResponseBodyItemsDBInstanceTag& operator=(DescribeDBInstanceByTagsResponseBodyItemsDBInstanceTag &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceId_ == nullptr
        && return this->tags_ == nullptr; };
    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string DBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline DescribeDBInstanceByTagsResponseBodyItemsDBInstanceTag& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const Models::DescribeDBInstanceByTagsResponseBodyItemsDBInstanceTagTags & tags() const { DARABONBA_PTR_GET_CONST(tags_, Models::DescribeDBInstanceByTagsResponseBodyItemsDBInstanceTagTags) };
    inline Models::DescribeDBInstanceByTagsResponseBodyItemsDBInstanceTagTags tags() { DARABONBA_PTR_GET(tags_, Models::DescribeDBInstanceByTagsResponseBodyItemsDBInstanceTagTags) };
    inline DescribeDBInstanceByTagsResponseBodyItemsDBInstanceTag& setTags(const Models::DescribeDBInstanceByTagsResponseBodyItemsDBInstanceTagTags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline DescribeDBInstanceByTagsResponseBodyItemsDBInstanceTag& setTags(Models::DescribeDBInstanceByTagsResponseBodyItemsDBInstanceTagTags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    // The instance ID.
    std::shared_ptr<string> DBInstanceId_ = nullptr;
    // The details about the tag.
    std::shared_ptr<Models::DescribeDBInstanceByTagsResponseBodyItemsDBInstanceTagTags> tags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
