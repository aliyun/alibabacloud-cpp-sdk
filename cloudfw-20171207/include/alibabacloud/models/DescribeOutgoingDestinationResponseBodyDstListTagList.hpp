// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEOUTGOINGDESTINATIONRESPONSEBODYDSTLISTTAGLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEOUTGOINGDESTINATIONRESPONSEBODYDSTLISTTAGLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeOutgoingDestinationResponseBodyDstListTagList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeOutgoingDestinationResponseBodyDstListTagList& obj) { 
      DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
      DARABONBA_PTR_TO_JSON(TagDescribe, tagDescribe_);
      DARABONBA_PTR_TO_JSON(TagId, tagId_);
      DARABONBA_PTR_TO_JSON(TagName, tagName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeOutgoingDestinationResponseBodyDstListTagList& obj) { 
      DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
      DARABONBA_PTR_FROM_JSON(TagDescribe, tagDescribe_);
      DARABONBA_PTR_FROM_JSON(TagId, tagId_);
      DARABONBA_PTR_FROM_JSON(TagName, tagName_);
    };
    DescribeOutgoingDestinationResponseBodyDstListTagList() = default ;
    DescribeOutgoingDestinationResponseBodyDstListTagList(const DescribeOutgoingDestinationResponseBodyDstListTagList &) = default ;
    DescribeOutgoingDestinationResponseBodyDstListTagList(DescribeOutgoingDestinationResponseBodyDstListTagList &&) = default ;
    DescribeOutgoingDestinationResponseBodyDstListTagList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeOutgoingDestinationResponseBodyDstListTagList() = default ;
    DescribeOutgoingDestinationResponseBodyDstListTagList& operator=(const DescribeOutgoingDestinationResponseBodyDstListTagList &) = default ;
    DescribeOutgoingDestinationResponseBodyDstListTagList& operator=(DescribeOutgoingDestinationResponseBodyDstListTagList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->riskLevel_ == nullptr
        && return this->tagDescribe_ == nullptr && return this->tagId_ == nullptr && return this->tagName_ == nullptr; };
    // riskLevel Field Functions 
    bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
    void deleteRiskLevel() { this->riskLevel_ = nullptr;};
    inline int32_t riskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, 0) };
    inline DescribeOutgoingDestinationResponseBodyDstListTagList& setRiskLevel(int32_t riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


    // tagDescribe Field Functions 
    bool hasTagDescribe() const { return this->tagDescribe_ != nullptr;};
    void deleteTagDescribe() { this->tagDescribe_ = nullptr;};
    inline string tagDescribe() const { DARABONBA_PTR_GET_DEFAULT(tagDescribe_, "") };
    inline DescribeOutgoingDestinationResponseBodyDstListTagList& setTagDescribe(string tagDescribe) { DARABONBA_PTR_SET_VALUE(tagDescribe_, tagDescribe) };


    // tagId Field Functions 
    bool hasTagId() const { return this->tagId_ != nullptr;};
    void deleteTagId() { this->tagId_ = nullptr;};
    inline string tagId() const { DARABONBA_PTR_GET_DEFAULT(tagId_, "") };
    inline DescribeOutgoingDestinationResponseBodyDstListTagList& setTagId(string tagId) { DARABONBA_PTR_SET_VALUE(tagId_, tagId) };


    // tagName Field Functions 
    bool hasTagName() const { return this->tagName_ != nullptr;};
    void deleteTagName() { this->tagName_ = nullptr;};
    inline string tagName() const { DARABONBA_PTR_GET_DEFAULT(tagName_, "") };
    inline DescribeOutgoingDestinationResponseBodyDstListTagList& setTagName(string tagName) { DARABONBA_PTR_SET_VALUE(tagName_, tagName) };


  protected:
    std::shared_ptr<int32_t> riskLevel_ = nullptr;
    std::shared_ptr<string> tagDescribe_ = nullptr;
    std::shared_ptr<string> tagId_ = nullptr;
    std::shared_ptr<string> tagName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
