// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSKILLSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSKILLSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20210602
{
namespace Models
{
  class ListSkillsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSkillsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(SkillChannel, skillChannel_);
      DARABONBA_PTR_TO_JSON(SkillIds, skillIds_);
      DARABONBA_PTR_TO_JSON(SupplierType, supplierType_);
    };
    friend void from_json(const Darabonba::Json& j, ListSkillsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(SkillChannel, skillChannel_);
      DARABONBA_PTR_FROM_JSON(SkillIds, skillIds_);
      DARABONBA_PTR_FROM_JSON(SupplierType, supplierType_);
    };
    ListSkillsRequest() = default ;
    ListSkillsRequest(const ListSkillsRequest &) = default ;
    ListSkillsRequest(ListSkillsRequest &&) = default ;
    ListSkillsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSkillsRequest() = default ;
    ListSkillsRequest& operator=(const ListSkillsRequest &) = default ;
    ListSkillsRequest& operator=(ListSkillsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->skillChannel_ == nullptr && this->skillIds_ == nullptr && this->supplierType_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListSkillsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListSkillsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // skillChannel Field Functions 
    bool hasSkillChannel() const { return this->skillChannel_ != nullptr;};
    void deleteSkillChannel() { this->skillChannel_ = nullptr;};
    inline string getSkillChannel() const { DARABONBA_PTR_GET_DEFAULT(skillChannel_, "") };
    inline ListSkillsRequest& setSkillChannel(string skillChannel) { DARABONBA_PTR_SET_VALUE(skillChannel_, skillChannel) };


    // skillIds Field Functions 
    bool hasSkillIds() const { return this->skillIds_ != nullptr;};
    void deleteSkillIds() { this->skillIds_ = nullptr;};
    inline const vector<string> & getSkillIds() const { DARABONBA_PTR_GET_CONST(skillIds_, vector<string>) };
    inline vector<string> getSkillIds() { DARABONBA_PTR_GET(skillIds_, vector<string>) };
    inline ListSkillsRequest& setSkillIds(const vector<string> & skillIds) { DARABONBA_PTR_SET_VALUE(skillIds_, skillIds) };
    inline ListSkillsRequest& setSkillIds(vector<string> && skillIds) { DARABONBA_PTR_SET_RVALUE(skillIds_, skillIds) };


    // supplierType Field Functions 
    bool hasSupplierType() const { return this->supplierType_ != nullptr;};
    void deleteSupplierType() { this->supplierType_ = nullptr;};
    inline string getSupplierType() const { DARABONBA_PTR_GET_DEFAULT(supplierType_, "") };
    inline ListSkillsRequest& setSupplierType(string supplierType) { DARABONBA_PTR_SET_VALUE(supplierType_, supplierType) };


  protected:
    // The page number of the current page in a paged query.
    shared_ptr<int32_t> pageNumber_ {};
    // The maximum number of rows per page in a paged query. Default value: 20.
    shared_ptr<int32_t> pageSize_ {};
    // The skill channel.
    // 
    // This parameter is required.
    shared_ptr<string> skillChannel_ {};
    // The list of skill IDs.
    shared_ptr<vector<string>> skillIds_ {};
    // The supply type.
    shared_ptr<string> supplierType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20210602
#endif
