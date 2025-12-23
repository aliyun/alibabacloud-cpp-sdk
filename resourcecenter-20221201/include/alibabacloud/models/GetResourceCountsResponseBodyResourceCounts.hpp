// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRESOURCECOUNTSRESPONSEBODYRESOURCECOUNTS_HPP_
#define ALIBABACLOUD_MODELS_GETRESOURCECOUNTSRESPONSEBODYRESOURCECOUNTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceCenter20221201
{
namespace Models
{
  class GetResourceCountsResponseBodyResourceCounts : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetResourceCountsResponseBodyResourceCounts& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
    };
    friend void from_json(const Darabonba::Json& j, GetResourceCountsResponseBodyResourceCounts& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
    };
    GetResourceCountsResponseBodyResourceCounts() = default ;
    GetResourceCountsResponseBodyResourceCounts(const GetResourceCountsResponseBodyResourceCounts &) = default ;
    GetResourceCountsResponseBodyResourceCounts(GetResourceCountsResponseBodyResourceCounts &&) = default ;
    GetResourceCountsResponseBodyResourceCounts(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetResourceCountsResponseBodyResourceCounts() = default ;
    GetResourceCountsResponseBodyResourceCounts& operator=(const GetResourceCountsResponseBodyResourceCounts &) = default ;
    GetResourceCountsResponseBodyResourceCounts& operator=(GetResourceCountsResponseBodyResourceCounts &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->count_ == nullptr
        && return this->groupName_ == nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int64_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
    inline GetResourceCountsResponseBodyResourceCounts& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline GetResourceCountsResponseBodyResourceCounts& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


  protected:
    // The number of resources.
    std::shared_ptr<int64_t> count_ = nullptr;
    // The group name.
    std::shared_ptr<string> groupName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceCenter20221201
#endif
