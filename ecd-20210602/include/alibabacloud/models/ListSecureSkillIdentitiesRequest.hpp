// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSECURESKILLIDENTITIESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSECURESKILLIDENTITIESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20210602
{
namespace Models
{
  class ListSecureSkillIdentitiesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSecureSkillIdentitiesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(SkillChannel, skillChannel_);
    };
    friend void from_json(const Darabonba::Json& j, ListSecureSkillIdentitiesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(SkillChannel, skillChannel_);
    };
    ListSecureSkillIdentitiesRequest() = default ;
    ListSecureSkillIdentitiesRequest(const ListSecureSkillIdentitiesRequest &) = default ;
    ListSecureSkillIdentitiesRequest(ListSecureSkillIdentitiesRequest &&) = default ;
    ListSecureSkillIdentitiesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSecureSkillIdentitiesRequest() = default ;
    ListSecureSkillIdentitiesRequest& operator=(const ListSecureSkillIdentitiesRequest &) = default ;
    ListSecureSkillIdentitiesRequest& operator=(ListSecureSkillIdentitiesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->skillChannel_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListSecureSkillIdentitiesRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListSecureSkillIdentitiesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // skillChannel Field Functions 
    bool hasSkillChannel() const { return this->skillChannel_ != nullptr;};
    void deleteSkillChannel() { this->skillChannel_ = nullptr;};
    inline string getSkillChannel() const { DARABONBA_PTR_GET_DEFAULT(skillChannel_, "") };
    inline ListSecureSkillIdentitiesRequest& setSkillChannel(string skillChannel) { DARABONBA_PTR_SET_VALUE(skillChannel_, skillChannel) };


  protected:
    // The current page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page. Default value: 20.
    shared_ptr<int32_t> pageSize_ {};
    // The skill channel. Valid values:
    // 
    // - ENTERPRISE: Enterprise edition.
    // - BUSINESS: Business edition.
    // 
    // This parameter is required.
    shared_ptr<string> skillChannel_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20210602
#endif
