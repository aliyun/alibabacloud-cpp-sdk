// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLOCATIONSERVICEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTLOCATIONSERVICEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace XrEngine20221111
{
namespace Models
{
  class ListLocationServiceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLocationServiceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Current, current_);
      DARABONBA_PTR_TO_JSON(JwtToken, jwtToken_);
      DARABONBA_PTR_TO_JSON(Size, size_);
      DARABONBA_PTR_TO_JSON(Sort, sort_);
      DARABONBA_PTR_TO_JSON(SortField, sortField_);
    };
    friend void from_json(const Darabonba::Json& j, ListLocationServiceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Current, current_);
      DARABONBA_PTR_FROM_JSON(JwtToken, jwtToken_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
      DARABONBA_PTR_FROM_JSON(Sort, sort_);
      DARABONBA_PTR_FROM_JSON(SortField, sortField_);
    };
    ListLocationServiceRequest() = default ;
    ListLocationServiceRequest(const ListLocationServiceRequest &) = default ;
    ListLocationServiceRequest(ListLocationServiceRequest &&) = default ;
    ListLocationServiceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLocationServiceRequest() = default ;
    ListLocationServiceRequest& operator=(const ListLocationServiceRequest &) = default ;
    ListLocationServiceRequest& operator=(ListLocationServiceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->current_ == nullptr
        && this->jwtToken_ == nullptr && this->size_ == nullptr && this->sort_ == nullptr && this->sortField_ == nullptr; };
    // current Field Functions 
    bool hasCurrent() const { return this->current_ != nullptr;};
    void deleteCurrent() { this->current_ = nullptr;};
    inline int32_t getCurrent() const { DARABONBA_PTR_GET_DEFAULT(current_, 0) };
    inline ListLocationServiceRequest& setCurrent(int32_t current) { DARABONBA_PTR_SET_VALUE(current_, current) };


    // jwtToken Field Functions 
    bool hasJwtToken() const { return this->jwtToken_ != nullptr;};
    void deleteJwtToken() { this->jwtToken_ = nullptr;};
    inline string getJwtToken() const { DARABONBA_PTR_GET_DEFAULT(jwtToken_, "") };
    inline ListLocationServiceRequest& setJwtToken(string jwtToken) { DARABONBA_PTR_SET_VALUE(jwtToken_, jwtToken) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int32_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0) };
    inline ListLocationServiceRequest& setSize(int32_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // sort Field Functions 
    bool hasSort() const { return this->sort_ != nullptr;};
    void deleteSort() { this->sort_ = nullptr;};
    inline string getSort() const { DARABONBA_PTR_GET_DEFAULT(sort_, "") };
    inline ListLocationServiceRequest& setSort(string sort) { DARABONBA_PTR_SET_VALUE(sort_, sort) };


    // sortField Field Functions 
    bool hasSortField() const { return this->sortField_ != nullptr;};
    void deleteSortField() { this->sortField_ = nullptr;};
    inline string getSortField() const { DARABONBA_PTR_GET_DEFAULT(sortField_, "") };
    inline ListLocationServiceRequest& setSortField(string sortField) { DARABONBA_PTR_SET_VALUE(sortField_, sortField) };


  protected:
    shared_ptr<int32_t> current_ {};
    shared_ptr<string> jwtToken_ {};
    shared_ptr<int32_t> size_ {};
    shared_ptr<string> sort_ {};
    shared_ptr<string> sortField_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace XrEngine20221111
#endif
