// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMODELSRESPONSEBODYMODELDETAILSMODELDETAILTAGS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMODELSRESPONSEBODYMODELDETAILSMODELDETAILTAGS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeModelsResponseBodyModelDetailsModelDetailTagsTagInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeModelsResponseBodyModelDetailsModelDetailTags : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeModelsResponseBodyModelDetailsModelDetailTags& obj) { 
      DARABONBA_PTR_TO_JSON(TagInfo, tagInfo_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeModelsResponseBodyModelDetailsModelDetailTags& obj) { 
      DARABONBA_PTR_FROM_JSON(TagInfo, tagInfo_);
    };
    DescribeModelsResponseBodyModelDetailsModelDetailTags() = default ;
    DescribeModelsResponseBodyModelDetailsModelDetailTags(const DescribeModelsResponseBodyModelDetailsModelDetailTags &) = default ;
    DescribeModelsResponseBodyModelDetailsModelDetailTags(DescribeModelsResponseBodyModelDetailsModelDetailTags &&) = default ;
    DescribeModelsResponseBodyModelDetailsModelDetailTags(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeModelsResponseBodyModelDetailsModelDetailTags() = default ;
    DescribeModelsResponseBodyModelDetailsModelDetailTags& operator=(const DescribeModelsResponseBodyModelDetailsModelDetailTags &) = default ;
    DescribeModelsResponseBodyModelDetailsModelDetailTags& operator=(DescribeModelsResponseBodyModelDetailsModelDetailTags &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->tagInfo_ == nullptr; };
    // tagInfo Field Functions 
    bool hasTagInfo() const { return this->tagInfo_ != nullptr;};
    void deleteTagInfo() { this->tagInfo_ = nullptr;};
    inline const vector<Models::DescribeModelsResponseBodyModelDetailsModelDetailTagsTagInfo> & tagInfo() const { DARABONBA_PTR_GET_CONST(tagInfo_, vector<Models::DescribeModelsResponseBodyModelDetailsModelDetailTagsTagInfo>) };
    inline vector<Models::DescribeModelsResponseBodyModelDetailsModelDetailTagsTagInfo> tagInfo() { DARABONBA_PTR_GET(tagInfo_, vector<Models::DescribeModelsResponseBodyModelDetailsModelDetailTagsTagInfo>) };
    inline DescribeModelsResponseBodyModelDetailsModelDetailTags& setTagInfo(const vector<Models::DescribeModelsResponseBodyModelDetailsModelDetailTagsTagInfo> & tagInfo) { DARABONBA_PTR_SET_VALUE(tagInfo_, tagInfo) };
    inline DescribeModelsResponseBodyModelDetailsModelDetailTags& setTagInfo(vector<Models::DescribeModelsResponseBodyModelDetailsModelDetailTagsTagInfo> && tagInfo) { DARABONBA_PTR_SET_RVALUE(tagInfo_, tagInfo) };


  protected:
    std::shared_ptr<vector<Models::DescribeModelsResponseBodyModelDetailsModelDetailTagsTagInfo>> tagInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
