// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETAGSRESPONSEBODYITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETAGSRESPONSEBODYITEMS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeTagsResponseBodyItemsTagInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeTagsResponseBodyItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTagsResponseBodyItems& obj) { 
      DARABONBA_PTR_TO_JSON(TagInfos, tagInfos_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTagsResponseBodyItems& obj) { 
      DARABONBA_PTR_FROM_JSON(TagInfos, tagInfos_);
    };
    DescribeTagsResponseBodyItems() = default ;
    DescribeTagsResponseBodyItems(const DescribeTagsResponseBodyItems &) = default ;
    DescribeTagsResponseBodyItems(DescribeTagsResponseBodyItems &&) = default ;
    DescribeTagsResponseBodyItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTagsResponseBodyItems() = default ;
    DescribeTagsResponseBodyItems& operator=(const DescribeTagsResponseBodyItems &) = default ;
    DescribeTagsResponseBodyItems& operator=(DescribeTagsResponseBodyItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->tagInfos_ == nullptr; };
    // tagInfos Field Functions 
    bool hasTagInfos() const { return this->tagInfos_ != nullptr;};
    void deleteTagInfos() { this->tagInfos_ = nullptr;};
    inline const vector<Models::DescribeTagsResponseBodyItemsTagInfos> & tagInfos() const { DARABONBA_PTR_GET_CONST(tagInfos_, vector<Models::DescribeTagsResponseBodyItemsTagInfos>) };
    inline vector<Models::DescribeTagsResponseBodyItemsTagInfos> tagInfos() { DARABONBA_PTR_GET(tagInfos_, vector<Models::DescribeTagsResponseBodyItemsTagInfos>) };
    inline DescribeTagsResponseBodyItems& setTagInfos(const vector<Models::DescribeTagsResponseBodyItemsTagInfos> & tagInfos) { DARABONBA_PTR_SET_VALUE(tagInfos_, tagInfos) };
    inline DescribeTagsResponseBodyItems& setTagInfos(vector<Models::DescribeTagsResponseBodyItemsTagInfos> && tagInfos) { DARABONBA_PTR_SET_RVALUE(tagInfos_, tagInfos) };


  protected:
    std::shared_ptr<vector<Models::DescribeTagsResponseBodyItemsTagInfos>> tagInfos_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
