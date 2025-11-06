// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYDOMAINGROUPLISTRESPONSEBODYDATADOMAINGROUP_HPP_
#define ALIBABACLOUD_MODELS_QUERYDOMAINGROUPLISTRESPONSEBODYDATADOMAINGROUP_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180129
{
namespace Models
{
  class QueryDomainGroupListResponseBodyDataDomainGroup : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryDomainGroupListResponseBodyDataDomainGroup& obj) { 
      DARABONBA_PTR_TO_JSON(BeingDeleted, beingDeleted_);
      DARABONBA_PTR_TO_JSON(CreationDate, creationDate_);
      DARABONBA_PTR_TO_JSON(DomainGroupId, domainGroupId_);
      DARABONBA_PTR_TO_JSON(DomainGroupName, domainGroupName_);
      DARABONBA_PTR_TO_JSON(DomainGroupStatus, domainGroupStatus_);
      DARABONBA_PTR_TO_JSON(ModificationDate, modificationDate_);
      DARABONBA_PTR_TO_JSON(TotalNumber, totalNumber_);
    };
    friend void from_json(const Darabonba::Json& j, QueryDomainGroupListResponseBodyDataDomainGroup& obj) { 
      DARABONBA_PTR_FROM_JSON(BeingDeleted, beingDeleted_);
      DARABONBA_PTR_FROM_JSON(CreationDate, creationDate_);
      DARABONBA_PTR_FROM_JSON(DomainGroupId, domainGroupId_);
      DARABONBA_PTR_FROM_JSON(DomainGroupName, domainGroupName_);
      DARABONBA_PTR_FROM_JSON(DomainGroupStatus, domainGroupStatus_);
      DARABONBA_PTR_FROM_JSON(ModificationDate, modificationDate_);
      DARABONBA_PTR_FROM_JSON(TotalNumber, totalNumber_);
    };
    QueryDomainGroupListResponseBodyDataDomainGroup() = default ;
    QueryDomainGroupListResponseBodyDataDomainGroup(const QueryDomainGroupListResponseBodyDataDomainGroup &) = default ;
    QueryDomainGroupListResponseBodyDataDomainGroup(QueryDomainGroupListResponseBodyDataDomainGroup &&) = default ;
    QueryDomainGroupListResponseBodyDataDomainGroup(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryDomainGroupListResponseBodyDataDomainGroup() = default ;
    QueryDomainGroupListResponseBodyDataDomainGroup& operator=(const QueryDomainGroupListResponseBodyDataDomainGroup &) = default ;
    QueryDomainGroupListResponseBodyDataDomainGroup& operator=(QueryDomainGroupListResponseBodyDataDomainGroup &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->beingDeleted_ == nullptr
        && return this->creationDate_ == nullptr && return this->domainGroupId_ == nullptr && return this->domainGroupName_ == nullptr && return this->domainGroupStatus_ == nullptr && return this->modificationDate_ == nullptr
        && return this->totalNumber_ == nullptr; };
    // beingDeleted Field Functions 
    bool hasBeingDeleted() const { return this->beingDeleted_ != nullptr;};
    void deleteBeingDeleted() { this->beingDeleted_ = nullptr;};
    inline bool beingDeleted() const { DARABONBA_PTR_GET_DEFAULT(beingDeleted_, false) };
    inline QueryDomainGroupListResponseBodyDataDomainGroup& setBeingDeleted(bool beingDeleted) { DARABONBA_PTR_SET_VALUE(beingDeleted_, beingDeleted) };


    // creationDate Field Functions 
    bool hasCreationDate() const { return this->creationDate_ != nullptr;};
    void deleteCreationDate() { this->creationDate_ = nullptr;};
    inline string creationDate() const { DARABONBA_PTR_GET_DEFAULT(creationDate_, "") };
    inline QueryDomainGroupListResponseBodyDataDomainGroup& setCreationDate(string creationDate) { DARABONBA_PTR_SET_VALUE(creationDate_, creationDate) };


    // domainGroupId Field Functions 
    bool hasDomainGroupId() const { return this->domainGroupId_ != nullptr;};
    void deleteDomainGroupId() { this->domainGroupId_ = nullptr;};
    inline string domainGroupId() const { DARABONBA_PTR_GET_DEFAULT(domainGroupId_, "") };
    inline QueryDomainGroupListResponseBodyDataDomainGroup& setDomainGroupId(string domainGroupId) { DARABONBA_PTR_SET_VALUE(domainGroupId_, domainGroupId) };


    // domainGroupName Field Functions 
    bool hasDomainGroupName() const { return this->domainGroupName_ != nullptr;};
    void deleteDomainGroupName() { this->domainGroupName_ = nullptr;};
    inline string domainGroupName() const { DARABONBA_PTR_GET_DEFAULT(domainGroupName_, "") };
    inline QueryDomainGroupListResponseBodyDataDomainGroup& setDomainGroupName(string domainGroupName) { DARABONBA_PTR_SET_VALUE(domainGroupName_, domainGroupName) };


    // domainGroupStatus Field Functions 
    bool hasDomainGroupStatus() const { return this->domainGroupStatus_ != nullptr;};
    void deleteDomainGroupStatus() { this->domainGroupStatus_ = nullptr;};
    inline string domainGroupStatus() const { DARABONBA_PTR_GET_DEFAULT(domainGroupStatus_, "") };
    inline QueryDomainGroupListResponseBodyDataDomainGroup& setDomainGroupStatus(string domainGroupStatus) { DARABONBA_PTR_SET_VALUE(domainGroupStatus_, domainGroupStatus) };


    // modificationDate Field Functions 
    bool hasModificationDate() const { return this->modificationDate_ != nullptr;};
    void deleteModificationDate() { this->modificationDate_ = nullptr;};
    inline string modificationDate() const { DARABONBA_PTR_GET_DEFAULT(modificationDate_, "") };
    inline QueryDomainGroupListResponseBodyDataDomainGroup& setModificationDate(string modificationDate) { DARABONBA_PTR_SET_VALUE(modificationDate_, modificationDate) };


    // totalNumber Field Functions 
    bool hasTotalNumber() const { return this->totalNumber_ != nullptr;};
    void deleteTotalNumber() { this->totalNumber_ = nullptr;};
    inline int32_t totalNumber() const { DARABONBA_PTR_GET_DEFAULT(totalNumber_, 0) };
    inline QueryDomainGroupListResponseBodyDataDomainGroup& setTotalNumber(int32_t totalNumber) { DARABONBA_PTR_SET_VALUE(totalNumber_, totalNumber) };


  protected:
    std::shared_ptr<bool> beingDeleted_ = nullptr;
    std::shared_ptr<string> creationDate_ = nullptr;
    std::shared_ptr<string> domainGroupId_ = nullptr;
    std::shared_ptr<string> domainGroupName_ = nullptr;
    std::shared_ptr<string> domainGroupStatus_ = nullptr;
    std::shared_ptr<string> modificationDate_ = nullptr;
    std::shared_ptr<int32_t> totalNumber_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
