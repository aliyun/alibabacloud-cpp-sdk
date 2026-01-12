// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FINDSVCMAPBINDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_FINDSVCMAPBINDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace XrEngine20221111
{
namespace Models
{
  class FindSvcMapBindRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FindSvcMapBindRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Current, current_);
      DARABONBA_PTR_TO_JSON(JwtToken, jwtToken_);
      DARABONBA_PTR_TO_JSON(Size, size_);
      DARABONBA_PTR_TO_JSON(Sort, sort_);
      DARABONBA_PTR_TO_JSON(SortField, sortField_);
      DARABONBA_PTR_TO_JSON(SvcId, svcId_);
    };
    friend void from_json(const Darabonba::Json& j, FindSvcMapBindRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Current, current_);
      DARABONBA_PTR_FROM_JSON(JwtToken, jwtToken_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
      DARABONBA_PTR_FROM_JSON(Sort, sort_);
      DARABONBA_PTR_FROM_JSON(SortField, sortField_);
      DARABONBA_PTR_FROM_JSON(SvcId, svcId_);
    };
    FindSvcMapBindRequest() = default ;
    FindSvcMapBindRequest(const FindSvcMapBindRequest &) = default ;
    FindSvcMapBindRequest(FindSvcMapBindRequest &&) = default ;
    FindSvcMapBindRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FindSvcMapBindRequest() = default ;
    FindSvcMapBindRequest& operator=(const FindSvcMapBindRequest &) = default ;
    FindSvcMapBindRequest& operator=(FindSvcMapBindRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->current_ == nullptr
        && this->jwtToken_ == nullptr && this->size_ == nullptr && this->sort_ == nullptr && this->sortField_ == nullptr && this->svcId_ == nullptr; };
    // current Field Functions 
    bool hasCurrent() const { return this->current_ != nullptr;};
    void deleteCurrent() { this->current_ = nullptr;};
    inline int32_t getCurrent() const { DARABONBA_PTR_GET_DEFAULT(current_, 0) };
    inline FindSvcMapBindRequest& setCurrent(int32_t current) { DARABONBA_PTR_SET_VALUE(current_, current) };


    // jwtToken Field Functions 
    bool hasJwtToken() const { return this->jwtToken_ != nullptr;};
    void deleteJwtToken() { this->jwtToken_ = nullptr;};
    inline string getJwtToken() const { DARABONBA_PTR_GET_DEFAULT(jwtToken_, "") };
    inline FindSvcMapBindRequest& setJwtToken(string jwtToken) { DARABONBA_PTR_SET_VALUE(jwtToken_, jwtToken) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int32_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0) };
    inline FindSvcMapBindRequest& setSize(int32_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // sort Field Functions 
    bool hasSort() const { return this->sort_ != nullptr;};
    void deleteSort() { this->sort_ = nullptr;};
    inline string getSort() const { DARABONBA_PTR_GET_DEFAULT(sort_, "") };
    inline FindSvcMapBindRequest& setSort(string sort) { DARABONBA_PTR_SET_VALUE(sort_, sort) };


    // sortField Field Functions 
    bool hasSortField() const { return this->sortField_ != nullptr;};
    void deleteSortField() { this->sortField_ = nullptr;};
    inline string getSortField() const { DARABONBA_PTR_GET_DEFAULT(sortField_, "") };
    inline FindSvcMapBindRequest& setSortField(string sortField) { DARABONBA_PTR_SET_VALUE(sortField_, sortField) };


    // svcId Field Functions 
    bool hasSvcId() const { return this->svcId_ != nullptr;};
    void deleteSvcId() { this->svcId_ = nullptr;};
    inline int64_t getSvcId() const { DARABONBA_PTR_GET_DEFAULT(svcId_, 0L) };
    inline FindSvcMapBindRequest& setSvcId(int64_t svcId) { DARABONBA_PTR_SET_VALUE(svcId_, svcId) };


  protected:
    shared_ptr<int32_t> current_ {};
    shared_ptr<string> jwtToken_ {};
    shared_ptr<int32_t> size_ {};
    shared_ptr<string> sort_ {};
    shared_ptr<string> sortField_ {};
    shared_ptr<int64_t> svcId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace XrEngine20221111
#endif
