// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGROUPEDTAGSRESPONSEBODYGROUPEDFILEDS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGROUPEDTAGSRESPONSEBODYGROUPEDFILEDS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeGroupedTagsResponseBodyGroupedFileds : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGroupedTagsResponseBodyGroupedFileds& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(TagId, tagId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGroupedTagsResponseBodyGroupedFileds& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(TagId, tagId_);
    };
    DescribeGroupedTagsResponseBodyGroupedFileds() = default ;
    DescribeGroupedTagsResponseBodyGroupedFileds(const DescribeGroupedTagsResponseBodyGroupedFileds &) = default ;
    DescribeGroupedTagsResponseBodyGroupedFileds(DescribeGroupedTagsResponseBodyGroupedFileds &&) = default ;
    DescribeGroupedTagsResponseBodyGroupedFileds(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGroupedTagsResponseBodyGroupedFileds() = default ;
    DescribeGroupedTagsResponseBodyGroupedFileds& operator=(const DescribeGroupedTagsResponseBodyGroupedFileds &) = default ;
    DescribeGroupedTagsResponseBodyGroupedFileds& operator=(DescribeGroupedTagsResponseBodyGroupedFileds &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->count_ != nullptr
        && this->name_ != nullptr && this->tagId_ != nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline string count() const { DARABONBA_PTR_GET_DEFAULT(count_, "") };
    inline DescribeGroupedTagsResponseBodyGroupedFileds& setCount(string count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeGroupedTagsResponseBodyGroupedFileds& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // tagId Field Functions 
    bool hasTagId() const { return this->tagId_ != nullptr;};
    void deleteTagId() { this->tagId_ = nullptr;};
    inline int32_t tagId() const { DARABONBA_PTR_GET_DEFAULT(tagId_, 0) };
    inline DescribeGroupedTagsResponseBodyGroupedFileds& setTagId(int32_t tagId) { DARABONBA_PTR_SET_VALUE(tagId_, tagId) };


  protected:
    // The number of assets to which the tag is added.
    std::shared_ptr<string> count_ = nullptr;
    // The name of the tag.
    std::shared_ptr<string> name_ = nullptr;
    // The ID of the tag.
    std::shared_ptr<int32_t> tagId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
