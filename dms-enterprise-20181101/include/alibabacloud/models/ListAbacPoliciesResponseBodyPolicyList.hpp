// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTABACPOLICIESRESPONSEBODYPOLICYLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTABACPOLICIESRESPONSEBODYPOLICYLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListAbacPoliciesResponseBodyPolicyList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAbacPoliciesResponseBodyPolicyList& obj) { 
      DARABONBA_PTR_TO_JSON(AbacPolicyContent, abacPolicyContent_);
      DARABONBA_PTR_TO_JSON(AbacPolicyDesc, abacPolicyDesc_);
      DARABONBA_PTR_TO_JSON(AbacPolicyId, abacPolicyId_);
      DARABONBA_PTR_TO_JSON(AbacPolicyName, abacPolicyName_);
      DARABONBA_PTR_TO_JSON(AbacPolicySource, abacPolicySource_);
      DARABONBA_PTR_TO_JSON(CreatorId, creatorId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAbacPoliciesResponseBodyPolicyList& obj) { 
      DARABONBA_PTR_FROM_JSON(AbacPolicyContent, abacPolicyContent_);
      DARABONBA_PTR_FROM_JSON(AbacPolicyDesc, abacPolicyDesc_);
      DARABONBA_PTR_FROM_JSON(AbacPolicyId, abacPolicyId_);
      DARABONBA_PTR_FROM_JSON(AbacPolicyName, abacPolicyName_);
      DARABONBA_PTR_FROM_JSON(AbacPolicySource, abacPolicySource_);
      DARABONBA_PTR_FROM_JSON(CreatorId, creatorId_);
    };
    ListAbacPoliciesResponseBodyPolicyList() = default ;
    ListAbacPoliciesResponseBodyPolicyList(const ListAbacPoliciesResponseBodyPolicyList &) = default ;
    ListAbacPoliciesResponseBodyPolicyList(ListAbacPoliciesResponseBodyPolicyList &&) = default ;
    ListAbacPoliciesResponseBodyPolicyList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAbacPoliciesResponseBodyPolicyList() = default ;
    ListAbacPoliciesResponseBodyPolicyList& operator=(const ListAbacPoliciesResponseBodyPolicyList &) = default ;
    ListAbacPoliciesResponseBodyPolicyList& operator=(ListAbacPoliciesResponseBodyPolicyList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->abacPolicyContent_ != nullptr
        && this->abacPolicyDesc_ != nullptr && this->abacPolicyId_ != nullptr && this->abacPolicyName_ != nullptr && this->abacPolicySource_ != nullptr && this->creatorId_ != nullptr; };
    // abacPolicyContent Field Functions 
    bool hasAbacPolicyContent() const { return this->abacPolicyContent_ != nullptr;};
    void deleteAbacPolicyContent() { this->abacPolicyContent_ = nullptr;};
    inline string abacPolicyContent() const { DARABONBA_PTR_GET_DEFAULT(abacPolicyContent_, "") };
    inline ListAbacPoliciesResponseBodyPolicyList& setAbacPolicyContent(string abacPolicyContent) { DARABONBA_PTR_SET_VALUE(abacPolicyContent_, abacPolicyContent) };


    // abacPolicyDesc Field Functions 
    bool hasAbacPolicyDesc() const { return this->abacPolicyDesc_ != nullptr;};
    void deleteAbacPolicyDesc() { this->abacPolicyDesc_ = nullptr;};
    inline string abacPolicyDesc() const { DARABONBA_PTR_GET_DEFAULT(abacPolicyDesc_, "") };
    inline ListAbacPoliciesResponseBodyPolicyList& setAbacPolicyDesc(string abacPolicyDesc) { DARABONBA_PTR_SET_VALUE(abacPolicyDesc_, abacPolicyDesc) };


    // abacPolicyId Field Functions 
    bool hasAbacPolicyId() const { return this->abacPolicyId_ != nullptr;};
    void deleteAbacPolicyId() { this->abacPolicyId_ = nullptr;};
    inline int64_t abacPolicyId() const { DARABONBA_PTR_GET_DEFAULT(abacPolicyId_, 0L) };
    inline ListAbacPoliciesResponseBodyPolicyList& setAbacPolicyId(int64_t abacPolicyId) { DARABONBA_PTR_SET_VALUE(abacPolicyId_, abacPolicyId) };


    // abacPolicyName Field Functions 
    bool hasAbacPolicyName() const { return this->abacPolicyName_ != nullptr;};
    void deleteAbacPolicyName() { this->abacPolicyName_ = nullptr;};
    inline string abacPolicyName() const { DARABONBA_PTR_GET_DEFAULT(abacPolicyName_, "") };
    inline ListAbacPoliciesResponseBodyPolicyList& setAbacPolicyName(string abacPolicyName) { DARABONBA_PTR_SET_VALUE(abacPolicyName_, abacPolicyName) };


    // abacPolicySource Field Functions 
    bool hasAbacPolicySource() const { return this->abacPolicySource_ != nullptr;};
    void deleteAbacPolicySource() { this->abacPolicySource_ = nullptr;};
    inline string abacPolicySource() const { DARABONBA_PTR_GET_DEFAULT(abacPolicySource_, "") };
    inline ListAbacPoliciesResponseBodyPolicyList& setAbacPolicySource(string abacPolicySource) { DARABONBA_PTR_SET_VALUE(abacPolicySource_, abacPolicySource) };


    // creatorId Field Functions 
    bool hasCreatorId() const { return this->creatorId_ != nullptr;};
    void deleteCreatorId() { this->creatorId_ = nullptr;};
    inline int64_t creatorId() const { DARABONBA_PTR_GET_DEFAULT(creatorId_, 0L) };
    inline ListAbacPoliciesResponseBodyPolicyList& setCreatorId(int64_t creatorId) { DARABONBA_PTR_SET_VALUE(creatorId_, creatorId) };


  protected:
    std::shared_ptr<string> abacPolicyContent_ = nullptr;
    std::shared_ptr<string> abacPolicyDesc_ = nullptr;
    std::shared_ptr<int64_t> abacPolicyId_ = nullptr;
    std::shared_ptr<string> abacPolicyName_ = nullptr;
    std::shared_ptr<string> abacPolicySource_ = nullptr;
    std::shared_ptr<int64_t> creatorId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
