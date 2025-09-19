// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLIENTCONFSTRATEGYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLIENTCONFSTRATEGYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeClientConfStrategyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClientConfStrategyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(TagValue, tagValue_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClientConfStrategyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(TagValue, tagValue_);
    };
    DescribeClientConfStrategyRequest() = default ;
    DescribeClientConfStrategyRequest(const DescribeClientConfStrategyRequest &) = default ;
    DescribeClientConfStrategyRequest(DescribeClientConfStrategyRequest &&) = default ;
    DescribeClientConfStrategyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClientConfStrategyRequest() = default ;
    DescribeClientConfStrategyRequest& operator=(const DescribeClientConfStrategyRequest &) = default ;
    DescribeClientConfStrategyRequest& operator=(DescribeClientConfStrategyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->tag_ != nullptr
        && this->tagValue_ != nullptr; };
    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline string tag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
    inline DescribeClientConfStrategyRequest& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


    // tagValue Field Functions 
    bool hasTagValue() const { return this->tagValue_ != nullptr;};
    void deleteTagValue() { this->tagValue_ = nullptr;};
    inline string tagValue() const { DARABONBA_PTR_GET_DEFAULT(tagValue_, "") };
    inline DescribeClientConfStrategyRequest& setTagValue(string tagValue) { DARABONBA_PTR_SET_VALUE(tagValue_, tagValue) };


  protected:
    // The tag that is added to the server.
    // 
    // This parameter is required.
    std::shared_ptr<string> tag_ = nullptr;
    // The value of the tag. Valid values:
    // 
    // *   major
    // *   advanced
    // *   basic
    // 
    // This parameter is required.
    std::shared_ptr<string> tagValue_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
