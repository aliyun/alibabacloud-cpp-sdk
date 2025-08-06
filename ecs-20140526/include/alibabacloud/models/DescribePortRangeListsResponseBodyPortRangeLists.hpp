// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPORTRANGELISTSRESPONSEBODYPORTRANGELISTS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPORTRANGELISTSRESPONSEBODYPORTRANGELISTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribePortRangeListsResponseBodyPortRangeListsTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribePortRangeListsResponseBodyPortRangeLists : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePortRangeListsResponseBodyPortRangeLists& obj) { 
      DARABONBA_PTR_TO_JSON(AssociationCount, associationCount_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(MaxEntries, maxEntries_);
      DARABONBA_PTR_TO_JSON(PortRangeListId, portRangeListId_);
      DARABONBA_PTR_TO_JSON(PortRangeListName, portRangeListName_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePortRangeListsResponseBodyPortRangeLists& obj) { 
      DARABONBA_PTR_FROM_JSON(AssociationCount, associationCount_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(MaxEntries, maxEntries_);
      DARABONBA_PTR_FROM_JSON(PortRangeListId, portRangeListId_);
      DARABONBA_PTR_FROM_JSON(PortRangeListName, portRangeListName_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    DescribePortRangeListsResponseBodyPortRangeLists() = default ;
    DescribePortRangeListsResponseBodyPortRangeLists(const DescribePortRangeListsResponseBodyPortRangeLists &) = default ;
    DescribePortRangeListsResponseBodyPortRangeLists(DescribePortRangeListsResponseBodyPortRangeLists &&) = default ;
    DescribePortRangeListsResponseBodyPortRangeLists(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePortRangeListsResponseBodyPortRangeLists() = default ;
    DescribePortRangeListsResponseBodyPortRangeLists& operator=(const DescribePortRangeListsResponseBodyPortRangeLists &) = default ;
    DescribePortRangeListsResponseBodyPortRangeLists& operator=(DescribePortRangeListsResponseBodyPortRangeLists &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->associationCount_ != nullptr
        && this->creationTime_ != nullptr && this->description_ != nullptr && this->maxEntries_ != nullptr && this->portRangeListId_ != nullptr && this->portRangeListName_ != nullptr
        && this->resourceGroupId_ != nullptr && this->tags_ != nullptr; };
    // associationCount Field Functions 
    bool hasAssociationCount() const { return this->associationCount_ != nullptr;};
    void deleteAssociationCount() { this->associationCount_ = nullptr;};
    inline int32_t associationCount() const { DARABONBA_PTR_GET_DEFAULT(associationCount_, 0) };
    inline DescribePortRangeListsResponseBodyPortRangeLists& setAssociationCount(int32_t associationCount) { DARABONBA_PTR_SET_VALUE(associationCount_, associationCount) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline DescribePortRangeListsResponseBodyPortRangeLists& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribePortRangeListsResponseBodyPortRangeLists& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // maxEntries Field Functions 
    bool hasMaxEntries() const { return this->maxEntries_ != nullptr;};
    void deleteMaxEntries() { this->maxEntries_ = nullptr;};
    inline int32_t maxEntries() const { DARABONBA_PTR_GET_DEFAULT(maxEntries_, 0) };
    inline DescribePortRangeListsResponseBodyPortRangeLists& setMaxEntries(int32_t maxEntries) { DARABONBA_PTR_SET_VALUE(maxEntries_, maxEntries) };


    // portRangeListId Field Functions 
    bool hasPortRangeListId() const { return this->portRangeListId_ != nullptr;};
    void deletePortRangeListId() { this->portRangeListId_ = nullptr;};
    inline string portRangeListId() const { DARABONBA_PTR_GET_DEFAULT(portRangeListId_, "") };
    inline DescribePortRangeListsResponseBodyPortRangeLists& setPortRangeListId(string portRangeListId) { DARABONBA_PTR_SET_VALUE(portRangeListId_, portRangeListId) };


    // portRangeListName Field Functions 
    bool hasPortRangeListName() const { return this->portRangeListName_ != nullptr;};
    void deletePortRangeListName() { this->portRangeListName_ = nullptr;};
    inline string portRangeListName() const { DARABONBA_PTR_GET_DEFAULT(portRangeListName_, "") };
    inline DescribePortRangeListsResponseBodyPortRangeLists& setPortRangeListName(string portRangeListName) { DARABONBA_PTR_SET_VALUE(portRangeListName_, portRangeListName) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribePortRangeListsResponseBodyPortRangeLists& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::DescribePortRangeListsResponseBodyPortRangeListsTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::DescribePortRangeListsResponseBodyPortRangeListsTags>) };
    inline vector<Models::DescribePortRangeListsResponseBodyPortRangeListsTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::DescribePortRangeListsResponseBodyPortRangeListsTags>) };
    inline DescribePortRangeListsResponseBodyPortRangeLists& setTags(const vector<Models::DescribePortRangeListsResponseBodyPortRangeListsTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline DescribePortRangeListsResponseBodyPortRangeLists& setTags(vector<Models::DescribePortRangeListsResponseBodyPortRangeListsTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    // The number of associated resources.
    std::shared_ptr<int32_t> associationCount_ = nullptr;
    // The time when the port list was created.
    std::shared_ptr<string> creationTime_ = nullptr;
    // The description of the port list.
    std::shared_ptr<string> description_ = nullptr;
    // The maximum number of entries in the port list.
    std::shared_ptr<int32_t> maxEntries_ = nullptr;
    // The ID of the port list.
    std::shared_ptr<string> portRangeListId_ = nullptr;
    // The name of the port list.
    std::shared_ptr<string> portRangeListName_ = nullptr;
    // The ID of the resource group to which to assign the port list.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The tags of the port list.
    std::shared_ptr<vector<Models::DescribePortRangeListsResponseBodyPortRangeListsTags>> tags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
