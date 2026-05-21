// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETAGSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETAGSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hologram20220601
{
namespace Models
{
  class DescribeTagsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTagsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(tagsOnly, tagsOnly_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTagsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(tagsOnly, tagsOnly_);
    };
    DescribeTagsRequest() = default ;
    DescribeTagsRequest(const DescribeTagsRequest &) = default ;
    DescribeTagsRequest(DescribeTagsRequest &&) = default ;
    DescribeTagsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTagsRequest() = default ;
    DescribeTagsRequest& operator=(const DescribeTagsRequest &) = default ;
    DescribeTagsRequest& operator=(DescribeTagsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->regionId_ == nullptr
        && this->tagsOnly_ == nullptr; };
    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeTagsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // tagsOnly Field Functions 
    bool hasTagsOnly() const { return this->tagsOnly_ != nullptr;};
    void deleteTagsOnly() { this->tagsOnly_ = nullptr;};
    inline bool getTagsOnly() const { DARABONBA_PTR_GET_DEFAULT(tagsOnly_, false) };
    inline DescribeTagsRequest& setTagsOnly(bool tagsOnly) { DARABONBA_PTR_SET_VALUE(tagsOnly_, tagsOnly) };


  protected:
    shared_ptr<string> regionId_ {};
    shared_ptr<bool> tagsOnly_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hologram20220601
#endif
