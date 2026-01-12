// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPROJECTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTPROJECTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace XrEngine20221111
{
namespace Models
{
  class ListProjectRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListProjectRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizUsage, bizUsage_);
      DARABONBA_PTR_TO_JSON(Current, current_);
      DARABONBA_PTR_TO_JSON(ExcludedBizUsage, excludedBizUsage_);
      DARABONBA_PTR_TO_JSON(JwtToken, jwtToken_);
      DARABONBA_PTR_TO_JSON(Size, size_);
      DARABONBA_PTR_TO_JSON(SortField, sortField_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Title, title_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(WithSource, withSource_);
      DARABONBA_PTR_TO_JSON(WithUser, withUser_);
    };
    friend void from_json(const Darabonba::Json& j, ListProjectRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizUsage, bizUsage_);
      DARABONBA_PTR_FROM_JSON(Current, current_);
      DARABONBA_PTR_FROM_JSON(ExcludedBizUsage, excludedBizUsage_);
      DARABONBA_PTR_FROM_JSON(JwtToken, jwtToken_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
      DARABONBA_PTR_FROM_JSON(SortField, sortField_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(WithSource, withSource_);
      DARABONBA_PTR_FROM_JSON(WithUser, withUser_);
    };
    ListProjectRequest() = default ;
    ListProjectRequest(const ListProjectRequest &) = default ;
    ListProjectRequest(ListProjectRequest &&) = default ;
    ListProjectRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListProjectRequest() = default ;
    ListProjectRequest& operator=(const ListProjectRequest &) = default ;
    ListProjectRequest& operator=(ListProjectRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizUsage_ == nullptr
        && this->current_ == nullptr && this->excludedBizUsage_ == nullptr && this->jwtToken_ == nullptr && this->size_ == nullptr && this->sortField_ == nullptr
        && this->status_ == nullptr && this->title_ == nullptr && this->type_ == nullptr && this->withSource_ == nullptr && this->withUser_ == nullptr; };
    // bizUsage Field Functions 
    bool hasBizUsage() const { return this->bizUsage_ != nullptr;};
    void deleteBizUsage() { this->bizUsage_ = nullptr;};
    inline string getBizUsage() const { DARABONBA_PTR_GET_DEFAULT(bizUsage_, "") };
    inline ListProjectRequest& setBizUsage(string bizUsage) { DARABONBA_PTR_SET_VALUE(bizUsage_, bizUsage) };


    // current Field Functions 
    bool hasCurrent() const { return this->current_ != nullptr;};
    void deleteCurrent() { this->current_ = nullptr;};
    inline int32_t getCurrent() const { DARABONBA_PTR_GET_DEFAULT(current_, 0) };
    inline ListProjectRequest& setCurrent(int32_t current) { DARABONBA_PTR_SET_VALUE(current_, current) };


    // excludedBizUsage Field Functions 
    bool hasExcludedBizUsage() const { return this->excludedBizUsage_ != nullptr;};
    void deleteExcludedBizUsage() { this->excludedBizUsage_ = nullptr;};
    inline string getExcludedBizUsage() const { DARABONBA_PTR_GET_DEFAULT(excludedBizUsage_, "") };
    inline ListProjectRequest& setExcludedBizUsage(string excludedBizUsage) { DARABONBA_PTR_SET_VALUE(excludedBizUsage_, excludedBizUsage) };


    // jwtToken Field Functions 
    bool hasJwtToken() const { return this->jwtToken_ != nullptr;};
    void deleteJwtToken() { this->jwtToken_ = nullptr;};
    inline string getJwtToken() const { DARABONBA_PTR_GET_DEFAULT(jwtToken_, "") };
    inline ListProjectRequest& setJwtToken(string jwtToken) { DARABONBA_PTR_SET_VALUE(jwtToken_, jwtToken) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int32_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0) };
    inline ListProjectRequest& setSize(int32_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // sortField Field Functions 
    bool hasSortField() const { return this->sortField_ != nullptr;};
    void deleteSortField() { this->sortField_ = nullptr;};
    inline string getSortField() const { DARABONBA_PTR_GET_DEFAULT(sortField_, "") };
    inline ListProjectRequest& setSortField(string sortField) { DARABONBA_PTR_SET_VALUE(sortField_, sortField) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListProjectRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline ListProjectRequest& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListProjectRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // withSource Field Functions 
    bool hasWithSource() const { return this->withSource_ != nullptr;};
    void deleteWithSource() { this->withSource_ = nullptr;};
    inline bool getWithSource() const { DARABONBA_PTR_GET_DEFAULT(withSource_, false) };
    inline ListProjectRequest& setWithSource(bool withSource) { DARABONBA_PTR_SET_VALUE(withSource_, withSource) };


    // withUser Field Functions 
    bool hasWithUser() const { return this->withUser_ != nullptr;};
    void deleteWithUser() { this->withUser_ = nullptr;};
    inline bool getWithUser() const { DARABONBA_PTR_GET_DEFAULT(withUser_, false) };
    inline ListProjectRequest& setWithUser(bool withUser) { DARABONBA_PTR_SET_VALUE(withUser_, withUser) };


  protected:
    shared_ptr<string> bizUsage_ {};
    shared_ptr<int32_t> current_ {};
    shared_ptr<string> excludedBizUsage_ {};
    shared_ptr<string> jwtToken_ {};
    shared_ptr<int32_t> size_ {};
    shared_ptr<string> sortField_ {};
    shared_ptr<string> status_ {};
    shared_ptr<string> title_ {};
    shared_ptr<string> type_ {};
    shared_ptr<bool> withSource_ {};
    shared_ptr<bool> withUser_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace XrEngine20221111
#endif
