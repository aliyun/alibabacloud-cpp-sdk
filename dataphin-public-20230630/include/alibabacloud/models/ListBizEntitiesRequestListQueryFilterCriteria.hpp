// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTBIZENTITIESREQUESTLISTQUERYFILTERCRITERIA_HPP_
#define ALIBABACLOUD_MODELS_LISTBIZENTITIESREQUESTLISTQUERYFILTERCRITERIA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ListBizEntitiesRequestListQueryFilterCriteria : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListBizEntitiesRequestListQueryFilterCriteria& obj) { 
      DARABONBA_PTR_TO_JSON(BizUnitIdList, bizUnitIdList_);
      DARABONBA_PTR_TO_JSON(BizUnitNameList, bizUnitNameList_);
      DARABONBA_PTR_TO_JSON(DataDomainIdList, dataDomainIdList_);
      DARABONBA_PTR_TO_JSON(DataDomainNameList, dataDomainNameList_);
      DARABONBA_PTR_TO_JSON(HasTableRef, hasTableRef_);
      DARABONBA_PTR_TO_JSON(OwnerUserIdList, ownerUserIdList_);
      DARABONBA_PTR_TO_JSON(StatusList, statusList_);
      DARABONBA_PTR_TO_JSON(SubTypeList, subTypeList_);
    };
    friend void from_json(const Darabonba::Json& j, ListBizEntitiesRequestListQueryFilterCriteria& obj) { 
      DARABONBA_PTR_FROM_JSON(BizUnitIdList, bizUnitIdList_);
      DARABONBA_PTR_FROM_JSON(BizUnitNameList, bizUnitNameList_);
      DARABONBA_PTR_FROM_JSON(DataDomainIdList, dataDomainIdList_);
      DARABONBA_PTR_FROM_JSON(DataDomainNameList, dataDomainNameList_);
      DARABONBA_PTR_FROM_JSON(HasTableRef, hasTableRef_);
      DARABONBA_PTR_FROM_JSON(OwnerUserIdList, ownerUserIdList_);
      DARABONBA_PTR_FROM_JSON(StatusList, statusList_);
      DARABONBA_PTR_FROM_JSON(SubTypeList, subTypeList_);
    };
    ListBizEntitiesRequestListQueryFilterCriteria() = default ;
    ListBizEntitiesRequestListQueryFilterCriteria(const ListBizEntitiesRequestListQueryFilterCriteria &) = default ;
    ListBizEntitiesRequestListQueryFilterCriteria(ListBizEntitiesRequestListQueryFilterCriteria &&) = default ;
    ListBizEntitiesRequestListQueryFilterCriteria(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListBizEntitiesRequestListQueryFilterCriteria() = default ;
    ListBizEntitiesRequestListQueryFilterCriteria& operator=(const ListBizEntitiesRequestListQueryFilterCriteria &) = default ;
    ListBizEntitiesRequestListQueryFilterCriteria& operator=(ListBizEntitiesRequestListQueryFilterCriteria &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizUnitIdList_ == nullptr
        && return this->bizUnitNameList_ == nullptr && return this->dataDomainIdList_ == nullptr && return this->dataDomainNameList_ == nullptr && return this->hasTableRef_ == nullptr && return this->ownerUserIdList_ == nullptr
        && return this->statusList_ == nullptr && return this->subTypeList_ == nullptr; };
    // bizUnitIdList Field Functions 
    bool hasBizUnitIdList() const { return this->bizUnitIdList_ != nullptr;};
    void deleteBizUnitIdList() { this->bizUnitIdList_ = nullptr;};
    inline const vector<int64_t> & bizUnitIdList() const { DARABONBA_PTR_GET_CONST(bizUnitIdList_, vector<int64_t>) };
    inline vector<int64_t> bizUnitIdList() { DARABONBA_PTR_GET(bizUnitIdList_, vector<int64_t>) };
    inline ListBizEntitiesRequestListQueryFilterCriteria& setBizUnitIdList(const vector<int64_t> & bizUnitIdList) { DARABONBA_PTR_SET_VALUE(bizUnitIdList_, bizUnitIdList) };
    inline ListBizEntitiesRequestListQueryFilterCriteria& setBizUnitIdList(vector<int64_t> && bizUnitIdList) { DARABONBA_PTR_SET_RVALUE(bizUnitIdList_, bizUnitIdList) };


    // bizUnitNameList Field Functions 
    bool hasBizUnitNameList() const { return this->bizUnitNameList_ != nullptr;};
    void deleteBizUnitNameList() { this->bizUnitNameList_ = nullptr;};
    inline const vector<string> & bizUnitNameList() const { DARABONBA_PTR_GET_CONST(bizUnitNameList_, vector<string>) };
    inline vector<string> bizUnitNameList() { DARABONBA_PTR_GET(bizUnitNameList_, vector<string>) };
    inline ListBizEntitiesRequestListQueryFilterCriteria& setBizUnitNameList(const vector<string> & bizUnitNameList) { DARABONBA_PTR_SET_VALUE(bizUnitNameList_, bizUnitNameList) };
    inline ListBizEntitiesRequestListQueryFilterCriteria& setBizUnitNameList(vector<string> && bizUnitNameList) { DARABONBA_PTR_SET_RVALUE(bizUnitNameList_, bizUnitNameList) };


    // dataDomainIdList Field Functions 
    bool hasDataDomainIdList() const { return this->dataDomainIdList_ != nullptr;};
    void deleteDataDomainIdList() { this->dataDomainIdList_ = nullptr;};
    inline const vector<int64_t> & dataDomainIdList() const { DARABONBA_PTR_GET_CONST(dataDomainIdList_, vector<int64_t>) };
    inline vector<int64_t> dataDomainIdList() { DARABONBA_PTR_GET(dataDomainIdList_, vector<int64_t>) };
    inline ListBizEntitiesRequestListQueryFilterCriteria& setDataDomainIdList(const vector<int64_t> & dataDomainIdList) { DARABONBA_PTR_SET_VALUE(dataDomainIdList_, dataDomainIdList) };
    inline ListBizEntitiesRequestListQueryFilterCriteria& setDataDomainIdList(vector<int64_t> && dataDomainIdList) { DARABONBA_PTR_SET_RVALUE(dataDomainIdList_, dataDomainIdList) };


    // dataDomainNameList Field Functions 
    bool hasDataDomainNameList() const { return this->dataDomainNameList_ != nullptr;};
    void deleteDataDomainNameList() { this->dataDomainNameList_ = nullptr;};
    inline const vector<string> & dataDomainNameList() const { DARABONBA_PTR_GET_CONST(dataDomainNameList_, vector<string>) };
    inline vector<string> dataDomainNameList() { DARABONBA_PTR_GET(dataDomainNameList_, vector<string>) };
    inline ListBizEntitiesRequestListQueryFilterCriteria& setDataDomainNameList(const vector<string> & dataDomainNameList) { DARABONBA_PTR_SET_VALUE(dataDomainNameList_, dataDomainNameList) };
    inline ListBizEntitiesRequestListQueryFilterCriteria& setDataDomainNameList(vector<string> && dataDomainNameList) { DARABONBA_PTR_SET_RVALUE(dataDomainNameList_, dataDomainNameList) };


    // hasTableRef Field Functions 
    bool hasHasTableRef() const { return this->hasTableRef_ != nullptr;};
    void deleteHasTableRef() { this->hasTableRef_ = nullptr;};
    inline bool hasTableRef() const { DARABONBA_PTR_GET_DEFAULT(hasTableRef_, false) };
    inline ListBizEntitiesRequestListQueryFilterCriteria& setHasTableRef(bool hasTableRef) { DARABONBA_PTR_SET_VALUE(hasTableRef_, hasTableRef) };


    // ownerUserIdList Field Functions 
    bool hasOwnerUserIdList() const { return this->ownerUserIdList_ != nullptr;};
    void deleteOwnerUserIdList() { this->ownerUserIdList_ = nullptr;};
    inline const vector<string> & ownerUserIdList() const { DARABONBA_PTR_GET_CONST(ownerUserIdList_, vector<string>) };
    inline vector<string> ownerUserIdList() { DARABONBA_PTR_GET(ownerUserIdList_, vector<string>) };
    inline ListBizEntitiesRequestListQueryFilterCriteria& setOwnerUserIdList(const vector<string> & ownerUserIdList) { DARABONBA_PTR_SET_VALUE(ownerUserIdList_, ownerUserIdList) };
    inline ListBizEntitiesRequestListQueryFilterCriteria& setOwnerUserIdList(vector<string> && ownerUserIdList) { DARABONBA_PTR_SET_RVALUE(ownerUserIdList_, ownerUserIdList) };


    // statusList Field Functions 
    bool hasStatusList() const { return this->statusList_ != nullptr;};
    void deleteStatusList() { this->statusList_ = nullptr;};
    inline const vector<string> & statusList() const { DARABONBA_PTR_GET_CONST(statusList_, vector<string>) };
    inline vector<string> statusList() { DARABONBA_PTR_GET(statusList_, vector<string>) };
    inline ListBizEntitiesRequestListQueryFilterCriteria& setStatusList(const vector<string> & statusList) { DARABONBA_PTR_SET_VALUE(statusList_, statusList) };
    inline ListBizEntitiesRequestListQueryFilterCriteria& setStatusList(vector<string> && statusList) { DARABONBA_PTR_SET_RVALUE(statusList_, statusList) };


    // subTypeList Field Functions 
    bool hasSubTypeList() const { return this->subTypeList_ != nullptr;};
    void deleteSubTypeList() { this->subTypeList_ = nullptr;};
    inline const vector<string> & subTypeList() const { DARABONBA_PTR_GET_CONST(subTypeList_, vector<string>) };
    inline vector<string> subTypeList() { DARABONBA_PTR_GET(subTypeList_, vector<string>) };
    inline ListBizEntitiesRequestListQueryFilterCriteria& setSubTypeList(const vector<string> & subTypeList) { DARABONBA_PTR_SET_VALUE(subTypeList_, subTypeList) };
    inline ListBizEntitiesRequestListQueryFilterCriteria& setSubTypeList(vector<string> && subTypeList) { DARABONBA_PTR_SET_RVALUE(subTypeList_, subTypeList) };


  protected:
    std::shared_ptr<vector<int64_t>> bizUnitIdList_ = nullptr;
    std::shared_ptr<vector<string>> bizUnitNameList_ = nullptr;
    std::shared_ptr<vector<int64_t>> dataDomainIdList_ = nullptr;
    std::shared_ptr<vector<string>> dataDomainNameList_ = nullptr;
    std::shared_ptr<bool> hasTableRef_ = nullptr;
    std::shared_ptr<vector<string>> ownerUserIdList_ = nullptr;
    std::shared_ptr<vector<string>> statusList_ = nullptr;
    std::shared_ptr<vector<string>> subTypeList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
