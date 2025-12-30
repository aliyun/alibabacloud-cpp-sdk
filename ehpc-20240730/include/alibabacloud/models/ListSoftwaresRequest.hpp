// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSOFTWARESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSOFTWARESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class OsInfos : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const OsInfos& obj) { 
        DARABONBA_PTR_TO_JSON(Architecture, architecture_);
        DARABONBA_PTR_TO_JSON(OsTag, osTag_);
      };
      friend void from_json(const Darabonba::Json& j, OsInfos& obj) { 
        DARABONBA_PTR_FROM_JSON(Architecture, architecture_);
        DARABONBA_PTR_FROM_JSON(OsTag, osTag_);
      };
      OsInfos() = default ;
      OsInfos(const OsInfos &) = default ;
      OsInfos(OsInfos &&) = default ;
      OsInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~OsInfos() = default ;
      OsInfos& operator=(const OsInfos &) = default ;
      OsInfos& operator=(OsInfos &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->architecture_ == nullptr
        && this->osTag_ == nullptr; };
      // architecture Field Functions 
      bool hasArchitecture() const { return this->architecture_ != nullptr;};
      void deleteArchitecture() { this->architecture_ = nullptr;};
      inline string getArchitecture() const { DARABONBA_PTR_GET_DEFAULT(architecture_, "") };
      inline OsInfos& setArchitecture(string architecture) { DARABONBA_PTR_SET_VALUE(architecture_, architecture) };


      // osTag Field Functions 
      bool hasOsTag() const { return this->osTag_ != nullptr;};
      void deleteOsTag() { this->osTag_ = nullptr;};
      inline string getOsTag() const { DARABONBA_PTR_GET_DEFAULT(osTag_, "") };
      inline OsInfos& setOsTag(string osTag) { DARABONBA_PTR_SET_VALUE(osTag_, osTag) };


    protected:
      // The OS architecture. Valid values:
      // 
      // *   x86_64
      // *   arm64
      shared_ptr<string> architecture_ {};
      // The image tag.
      shared_ptr<string> osTag_ {};
    };

    virtual bool empty() const override { return this->category_ == nullptr
        && this->clusterId_ == nullptr && this->name_ == nullptr && this->osInfos_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr; };
    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline ListSoftwaresRequest& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline ListSoftwaresRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListSoftwaresRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // osInfos Field Functions 
    bool hasOsInfos() const { return this->osInfos_ != nullptr;};
    void deleteOsInfos() { this->osInfos_ = nullptr;};
    inline const vector<ListSoftwaresRequest::OsInfos> & getOsInfos() const { DARABONBA_PTR_GET_CONST(osInfos_, vector<ListSoftwaresRequest::OsInfos>) };
    inline vector<ListSoftwaresRequest::OsInfos> getOsInfos() { DARABONBA_PTR_GET(osInfos_, vector<ListSoftwaresRequest::OsInfos>) };
    inline ListSoftwaresRequest& setOsInfos(const vector<ListSoftwaresRequest::OsInfos> & osInfos) { DARABONBA_PTR_SET_VALUE(osInfos_, osInfos) };
    inline ListSoftwaresRequest& setOsInfos(vector<ListSoftwaresRequest::OsInfos> && osInfos) { DARABONBA_PTR_SET_RVALUE(osInfos_, osInfos) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline string getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, "") };
    inline ListSoftwaresRequest& setPageNumber(string pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline ListSoftwaresRequest& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    // The application category.
    shared_ptr<string> category_ {};
    // The cluster ID.
    shared_ptr<string> clusterId_ {};
    // The software name.
    shared_ptr<string> name_ {};
    // The operating system (OS) information.
    shared_ptr<vector<ListSoftwaresRequest::OsInfos>> osInfos_ {};
    // The page number.
    shared_ptr<string> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<string> pageSize_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EHPC20240730
#endif
