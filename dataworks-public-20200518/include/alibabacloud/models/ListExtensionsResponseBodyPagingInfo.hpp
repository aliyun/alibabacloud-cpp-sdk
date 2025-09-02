// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEXTENSIONSRESPONSEBODYPAGINGINFO_HPP_
#define ALIBABACLOUD_MODELS_LISTEXTENSIONSRESPONSEBODYPAGINGINFO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListExtensionsResponseBodyPagingInfoExtensions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class ListExtensionsResponseBodyPagingInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListExtensionsResponseBodyPagingInfo& obj) { 
      DARABONBA_PTR_TO_JSON(Extensions, extensions_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListExtensionsResponseBodyPagingInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(Extensions, extensions_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListExtensionsResponseBodyPagingInfo() = default ;
    ListExtensionsResponseBodyPagingInfo(const ListExtensionsResponseBodyPagingInfo &) = default ;
    ListExtensionsResponseBodyPagingInfo(ListExtensionsResponseBodyPagingInfo &&) = default ;
    ListExtensionsResponseBodyPagingInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListExtensionsResponseBodyPagingInfo() = default ;
    ListExtensionsResponseBodyPagingInfo& operator=(const ListExtensionsResponseBodyPagingInfo &) = default ;
    ListExtensionsResponseBodyPagingInfo& operator=(ListExtensionsResponseBodyPagingInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->extensions_ != nullptr
        && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->totalCount_ != nullptr; };
    // extensions Field Functions 
    bool hasExtensions() const { return this->extensions_ != nullptr;};
    void deleteExtensions() { this->extensions_ = nullptr;};
    inline const vector<Models::ListExtensionsResponseBodyPagingInfoExtensions> & extensions() const { DARABONBA_PTR_GET_CONST(extensions_, vector<Models::ListExtensionsResponseBodyPagingInfoExtensions>) };
    inline vector<Models::ListExtensionsResponseBodyPagingInfoExtensions> extensions() { DARABONBA_PTR_GET(extensions_, vector<Models::ListExtensionsResponseBodyPagingInfoExtensions>) };
    inline ListExtensionsResponseBodyPagingInfo& setExtensions(const vector<Models::ListExtensionsResponseBodyPagingInfoExtensions> & extensions) { DARABONBA_PTR_SET_VALUE(extensions_, extensions) };
    inline ListExtensionsResponseBodyPagingInfo& setExtensions(vector<Models::ListExtensionsResponseBodyPagingInfoExtensions> && extensions) { DARABONBA_PTR_SET_RVALUE(extensions_, extensions) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListExtensionsResponseBodyPagingInfo& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListExtensionsResponseBodyPagingInfo& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListExtensionsResponseBodyPagingInfo& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The list of extensions.
    std::shared_ptr<vector<Models::ListExtensionsResponseBodyPagingInfoExtensions>> extensions_ = nullptr;
    // The page number.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
