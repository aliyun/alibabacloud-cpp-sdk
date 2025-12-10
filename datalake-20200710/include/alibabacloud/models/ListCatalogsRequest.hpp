// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCATALOGSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTCATALOGSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataLake20200710
{
namespace Models
{
  class ListCatalogsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCatalogsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(IdPattern, idPattern_);
      DARABONBA_PTR_TO_JSON(NextPageToken, nextPageToken_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, ListCatalogsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(IdPattern, idPattern_);
      DARABONBA_PTR_FROM_JSON(NextPageToken, nextPageToken_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
    };
    ListCatalogsRequest() = default ;
    ListCatalogsRequest(const ListCatalogsRequest &) = default ;
    ListCatalogsRequest(ListCatalogsRequest &&) = default ;
    ListCatalogsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCatalogsRequest() = default ;
    ListCatalogsRequest& operator=(const ListCatalogsRequest &) = default ;
    ListCatalogsRequest& operator=(ListCatalogsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->idPattern_ == nullptr
        && return this->nextPageToken_ == nullptr && return this->pageSize_ == nullptr; };
    // idPattern Field Functions 
    bool hasIdPattern() const { return this->idPattern_ != nullptr;};
    void deleteIdPattern() { this->idPattern_ = nullptr;};
    inline string idPattern() const { DARABONBA_PTR_GET_DEFAULT(idPattern_, "") };
    inline ListCatalogsRequest& setIdPattern(string idPattern) { DARABONBA_PTR_SET_VALUE(idPattern_, idPattern) };


    // nextPageToken Field Functions 
    bool hasNextPageToken() const { return this->nextPageToken_ != nullptr;};
    void deleteNextPageToken() { this->nextPageToken_ = nullptr;};
    inline string nextPageToken() const { DARABONBA_PTR_GET_DEFAULT(nextPageToken_, "") };
    inline ListCatalogsRequest& setNextPageToken(string nextPageToken) { DARABONBA_PTR_SET_VALUE(nextPageToken_, nextPageToken) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListCatalogsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    // Regular matching of CatalogId
    std::shared_ptr<string> idPattern_ = nullptr;
    // The page turning token, which is returned from the returned result. If none is returned, an empty string or\\"\\"
    std::shared_ptr<string> nextPageToken_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataLake20200710
#endif
