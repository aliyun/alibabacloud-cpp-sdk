// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPRODUCTPUBLICATIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTPRODUCTPUBLICATIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class ListProductPublicationsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListProductPublicationsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(portalName, portalName_);
    };
    friend void from_json(const Darabonba::Json& j, ListProductPublicationsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(portalName, portalName_);
    };
    ListProductPublicationsRequest() = default ;
    ListProductPublicationsRequest(const ListProductPublicationsRequest &) = default ;
    ListProductPublicationsRequest(ListProductPublicationsRequest &&) = default ;
    ListProductPublicationsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListProductPublicationsRequest() = default ;
    ListProductPublicationsRequest& operator=(const ListProductPublicationsRequest &) = default ;
    ListProductPublicationsRequest& operator=(ListProductPublicationsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->portalName_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListProductPublicationsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListProductPublicationsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // portalName Field Functions 
    bool hasPortalName() const { return this->portalName_ != nullptr;};
    void deletePortalName() { this->portalName_ = nullptr;};
    inline string getPortalName() const { DARABONBA_PTR_GET_DEFAULT(portalName_, "") };
    inline ListProductPublicationsRequest& setPortalName(string portalName) { DARABONBA_PTR_SET_VALUE(portalName_, portalName) };


  protected:
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The name of the portal to which the API product is published.
    shared_ptr<string> portalName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
