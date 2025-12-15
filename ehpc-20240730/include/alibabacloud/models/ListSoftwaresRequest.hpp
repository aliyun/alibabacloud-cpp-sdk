// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSOFTWARESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSOFTWARESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListSoftwaresRequestOsInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EHPC20240730
{
namespace Models
{
  class ListSoftwaresRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSoftwaresRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OsInfos, osInfos_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, ListSoftwaresRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OsInfos, osInfos_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
    };
    ListSoftwaresRequest() = default ;
    ListSoftwaresRequest(const ListSoftwaresRequest &) = default ;
    ListSoftwaresRequest(ListSoftwaresRequest &&) = default ;
    ListSoftwaresRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSoftwaresRequest() = default ;
    ListSoftwaresRequest& operator=(const ListSoftwaresRequest &) = default ;
    ListSoftwaresRequest& operator=(ListSoftwaresRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->category_ == nullptr
        && return this->clusterId_ == nullptr && return this->name_ == nullptr && return this->osInfos_ == nullptr && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr; };
    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string category() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline ListSoftwaresRequest& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline ListSoftwaresRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListSoftwaresRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // osInfos Field Functions 
    bool hasOsInfos() const { return this->osInfos_ != nullptr;};
    void deleteOsInfos() { this->osInfos_ = nullptr;};
    inline const vector<ListSoftwaresRequestOsInfos> & osInfos() const { DARABONBA_PTR_GET_CONST(osInfos_, vector<ListSoftwaresRequestOsInfos>) };
    inline vector<ListSoftwaresRequestOsInfos> osInfos() { DARABONBA_PTR_GET(osInfos_, vector<ListSoftwaresRequestOsInfos>) };
    inline ListSoftwaresRequest& setOsInfos(const vector<ListSoftwaresRequestOsInfos> & osInfos) { DARABONBA_PTR_SET_VALUE(osInfos_, osInfos) };
    inline ListSoftwaresRequest& setOsInfos(vector<ListSoftwaresRequestOsInfos> && osInfos) { DARABONBA_PTR_SET_RVALUE(osInfos_, osInfos) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline string pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, "") };
    inline ListSoftwaresRequest& setPageNumber(string pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline ListSoftwaresRequest& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    // The application category.
    std::shared_ptr<string> category_ = nullptr;
    // The cluster ID.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The software name.
    std::shared_ptr<string> name_ = nullptr;
    // The operating system (OS) information.
    std::shared_ptr<vector<ListSoftwaresRequestOsInfos>> osInfos_ = nullptr;
    // The page number.
    std::shared_ptr<string> pageNumber_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<string> pageSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EHPC20240730
#endif
