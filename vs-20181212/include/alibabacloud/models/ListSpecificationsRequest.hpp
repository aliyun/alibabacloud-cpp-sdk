// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSPECIFICATIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSPECIFICATIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class ListSpecificationsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSpecificationsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Specification, specification_);
    };
    friend void from_json(const Darabonba::Json& j, ListSpecificationsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Specification, specification_);
    };
    ListSpecificationsRequest() = default ;
    ListSpecificationsRequest(const ListSpecificationsRequest &) = default ;
    ListSpecificationsRequest(ListSpecificationsRequest &&) = default ;
    ListSpecificationsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSpecificationsRequest() = default ;
    ListSpecificationsRequest& operator=(const ListSpecificationsRequest &) = default ;
    ListSpecificationsRequest& operator=(ListSpecificationsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->specification_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListSpecificationsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListSpecificationsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // specification Field Functions 
    bool hasSpecification() const { return this->specification_ != nullptr;};
    void deleteSpecification() { this->specification_ = nullptr;};
    inline string getSpecification() const { DARABONBA_PTR_GET_DEFAULT(specification_, "") };
    inline ListSpecificationsRequest& setSpecification(string specification) { DARABONBA_PTR_SET_VALUE(specification_, specification) };


  protected:
    shared_ptr<int32_t> pageNumber_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> specification_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
