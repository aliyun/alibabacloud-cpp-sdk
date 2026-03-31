// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPOLICIESSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTPOLICIESSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ram20150501
{
namespace Models
{
  class ListPoliciesShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPoliciesShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Marker, marker_);
      DARABONBA_PTR_TO_JSON(MaxItems, maxItems_);
      DARABONBA_PTR_TO_JSON(PolicyType, policyType_);
      DARABONBA_PTR_TO_JSON(Tag, tagShrink_);
    };
    friend void from_json(const Darabonba::Json& j, ListPoliciesShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Marker, marker_);
      DARABONBA_PTR_FROM_JSON(MaxItems, maxItems_);
      DARABONBA_PTR_FROM_JSON(PolicyType, policyType_);
      DARABONBA_PTR_FROM_JSON(Tag, tagShrink_);
    };
    ListPoliciesShrinkRequest() = default ;
    ListPoliciesShrinkRequest(const ListPoliciesShrinkRequest &) = default ;
    ListPoliciesShrinkRequest(ListPoliciesShrinkRequest &&) = default ;
    ListPoliciesShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPoliciesShrinkRequest() = default ;
    ListPoliciesShrinkRequest& operator=(const ListPoliciesShrinkRequest &) = default ;
    ListPoliciesShrinkRequest& operator=(ListPoliciesShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->marker_ == nullptr
        && this->maxItems_ == nullptr && this->policyType_ == nullptr && this->tagShrink_ == nullptr; };
    // marker Field Functions 
    bool hasMarker() const { return this->marker_ != nullptr;};
    void deleteMarker() { this->marker_ = nullptr;};
    inline string getMarker() const { DARABONBA_PTR_GET_DEFAULT(marker_, "") };
    inline ListPoliciesShrinkRequest& setMarker(string marker) { DARABONBA_PTR_SET_VALUE(marker_, marker) };


    // maxItems Field Functions 
    bool hasMaxItems() const { return this->maxItems_ != nullptr;};
    void deleteMaxItems() { this->maxItems_ = nullptr;};
    inline int32_t getMaxItems() const { DARABONBA_PTR_GET_DEFAULT(maxItems_, 0) };
    inline ListPoliciesShrinkRequest& setMaxItems(int32_t maxItems) { DARABONBA_PTR_SET_VALUE(maxItems_, maxItems) };


    // policyType Field Functions 
    bool hasPolicyType() const { return this->policyType_ != nullptr;};
    void deletePolicyType() { this->policyType_ = nullptr;};
    inline string getPolicyType() const { DARABONBA_PTR_GET_DEFAULT(policyType_, "") };
    inline ListPoliciesShrinkRequest& setPolicyType(string policyType) { DARABONBA_PTR_SET_VALUE(policyType_, policyType) };


    // tagShrink Field Functions 
    bool hasTagShrink() const { return this->tagShrink_ != nullptr;};
    void deleteTagShrink() { this->tagShrink_ = nullptr;};
    inline string getTagShrink() const { DARABONBA_PTR_GET_DEFAULT(tagShrink_, "") };
    inline ListPoliciesShrinkRequest& setTagShrink(string tagShrink) { DARABONBA_PTR_SET_VALUE(tagShrink_, tagShrink) };


  protected:
    // The `marker`. If part of a previous response is truncated, you can use this parameter to obtain the truncated part.
    shared_ptr<string> marker_ {};
    // The number of entries to return. If a response is truncated because it reaches the value of `MaxItems`, the value of `IsTruncated` will be `true`.
    // 
    // Valid values: 1 to 1000. Default value: 100.
    shared_ptr<int32_t> maxItems_ {};
    // The type of the policies. Valid values: `System` and `Custom`. If you do not specify the parameter, all policies are returned.``
    shared_ptr<string> policyType_ {};
    // The tags.
    shared_ptr<string> tagShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ram20150501
#endif
