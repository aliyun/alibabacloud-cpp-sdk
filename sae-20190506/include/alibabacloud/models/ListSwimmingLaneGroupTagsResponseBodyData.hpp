// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSWIMMINGLANEGROUPTAGSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTSWIMMINGLANEGROUPTAGSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class ListSwimmingLaneGroupTagsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSwimmingLaneGroupTagsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Metadata, metadata_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, ListSwimmingLaneGroupTagsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Metadata, metadata_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    ListSwimmingLaneGroupTagsResponseBodyData() = default ;
    ListSwimmingLaneGroupTagsResponseBodyData(const ListSwimmingLaneGroupTagsResponseBodyData &) = default ;
    ListSwimmingLaneGroupTagsResponseBodyData(ListSwimmingLaneGroupTagsResponseBodyData &&) = default ;
    ListSwimmingLaneGroupTagsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSwimmingLaneGroupTagsResponseBodyData() = default ;
    ListSwimmingLaneGroupTagsResponseBodyData& operator=(const ListSwimmingLaneGroupTagsResponseBodyData &) = default ;
    ListSwimmingLaneGroupTagsResponseBodyData& operator=(ListSwimmingLaneGroupTagsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->metadata_ == nullptr
        && return this->tag_ == nullptr; };
    // metadata Field Functions 
    bool hasMetadata() const { return this->metadata_ != nullptr;};
    void deleteMetadata() { this->metadata_ = nullptr;};
    inline string metadata() const { DARABONBA_PTR_GET_DEFAULT(metadata_, "") };
    inline ListSwimmingLaneGroupTagsResponseBodyData& setMetadata(string metadata) { DARABONBA_PTR_SET_VALUE(metadata_, metadata) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline string tag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
    inline ListSwimmingLaneGroupTagsResponseBodyData& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


  protected:
    // The metadata.
    std::shared_ptr<string> metadata_ = nullptr;
    // The label of the lane.
    std::shared_ptr<string> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
