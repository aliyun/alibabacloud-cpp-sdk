// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTALLEDSOFTWARESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTALLEDSOFTWARESRESPONSEBODY_HPP_
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
  class ListInstalledSoftwaresResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstalledSoftwaresResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AdditionalPackages, additionalPackages_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstalledSoftwaresResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AdditionalPackages, additionalPackages_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListInstalledSoftwaresResponseBody() = default ;
    ListInstalledSoftwaresResponseBody(const ListInstalledSoftwaresResponseBody &) = default ;
    ListInstalledSoftwaresResponseBody(ListInstalledSoftwaresResponseBody &&) = default ;
    ListInstalledSoftwaresResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstalledSoftwaresResponseBody() = default ;
    ListInstalledSoftwaresResponseBody& operator=(const ListInstalledSoftwaresResponseBody &) = default ;
    ListInstalledSoftwaresResponseBody& operator=(ListInstalledSoftwaresResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AdditionalPackages : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AdditionalPackages& obj) { 
        DARABONBA_PTR_TO_JSON(AdditionalPackageInfos, additionalPackageInfos_);
      };
      friend void from_json(const Darabonba::Json& j, AdditionalPackages& obj) { 
        DARABONBA_PTR_FROM_JSON(AdditionalPackageInfos, additionalPackageInfos_);
      };
      AdditionalPackages() = default ;
      AdditionalPackages(const AdditionalPackages &) = default ;
      AdditionalPackages(AdditionalPackages &&) = default ;
      AdditionalPackages(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AdditionalPackages() = default ;
      AdditionalPackages& operator=(const AdditionalPackages &) = default ;
      AdditionalPackages& operator=(AdditionalPackages &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class AdditionalPackageInfos : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AdditionalPackageInfos& obj) { 
          DARABONBA_PTR_TO_JSON(Category, category_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(Icon, icon_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(Version, version_);
        };
        friend void from_json(const Darabonba::Json& j, AdditionalPackageInfos& obj) { 
          DARABONBA_PTR_FROM_JSON(Category, category_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(Icon, icon_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(Version, version_);
        };
        AdditionalPackageInfos() = default ;
        AdditionalPackageInfos(const AdditionalPackageInfos &) = default ;
        AdditionalPackageInfos(AdditionalPackageInfos &&) = default ;
        AdditionalPackageInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AdditionalPackageInfos() = default ;
        AdditionalPackageInfos& operator=(const AdditionalPackageInfos &) = default ;
        AdditionalPackageInfos& operator=(AdditionalPackageInfos &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->category_ == nullptr
        && this->createTime_ == nullptr && this->description_ == nullptr && this->icon_ == nullptr && this->name_ == nullptr && this->status_ == nullptr
        && this->version_ == nullptr; };
        // category Field Functions 
        bool hasCategory() const { return this->category_ != nullptr;};
        void deleteCategory() { this->category_ = nullptr;};
        inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
        inline AdditionalPackageInfos& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline AdditionalPackageInfos& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline AdditionalPackageInfos& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // icon Field Functions 
        bool hasIcon() const { return this->icon_ != nullptr;};
        void deleteIcon() { this->icon_ = nullptr;};
        inline string getIcon() const { DARABONBA_PTR_GET_DEFAULT(icon_, "") };
        inline AdditionalPackageInfos& setIcon(string icon) { DARABONBA_PTR_SET_VALUE(icon_, icon) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline AdditionalPackageInfos& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline AdditionalPackageInfos& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // version Field Functions 
        bool hasVersion() const { return this->version_ != nullptr;};
        void deleteVersion() { this->version_ = nullptr;};
        inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
        inline AdditionalPackageInfos& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


      protected:
        // The category into which the software falls.
        shared_ptr<string> category_ {};
        // The time when the software was installed.
        shared_ptr<string> createTime_ {};
        // The software description.
        shared_ptr<string> description_ {};
        // The URL of the software icon.
        shared_ptr<string> icon_ {};
        // The software name.
        shared_ptr<string> name_ {};
        // The installation status of the software.
        // 
        // Valid values:
        // 
        // *   Installed
        // *   Uninstalled
        // *   Installing
        // *   Exception
        shared_ptr<string> status_ {};
        // The software version.
        shared_ptr<string> version_ {};
      };

      virtual bool empty() const override { return this->additionalPackageInfos_ == nullptr; };
      // additionalPackageInfos Field Functions 
      bool hasAdditionalPackageInfos() const { return this->additionalPackageInfos_ != nullptr;};
      void deleteAdditionalPackageInfos() { this->additionalPackageInfos_ = nullptr;};
      inline const vector<AdditionalPackages::AdditionalPackageInfos> & getAdditionalPackageInfos() const { DARABONBA_PTR_GET_CONST(additionalPackageInfos_, vector<AdditionalPackages::AdditionalPackageInfos>) };
      inline vector<AdditionalPackages::AdditionalPackageInfos> getAdditionalPackageInfos() { DARABONBA_PTR_GET(additionalPackageInfos_, vector<AdditionalPackages::AdditionalPackageInfos>) };
      inline AdditionalPackages& setAdditionalPackageInfos(const vector<AdditionalPackages::AdditionalPackageInfos> & additionalPackageInfos) { DARABONBA_PTR_SET_VALUE(additionalPackageInfos_, additionalPackageInfos) };
      inline AdditionalPackages& setAdditionalPackageInfos(vector<AdditionalPackages::AdditionalPackageInfos> && additionalPackageInfos) { DARABONBA_PTR_SET_RVALUE(additionalPackageInfos_, additionalPackageInfos) };


    protected:
      shared_ptr<vector<AdditionalPackages::AdditionalPackageInfos>> additionalPackageInfos_ {};
    };

    virtual bool empty() const override { return this->additionalPackages_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // additionalPackages Field Functions 
    bool hasAdditionalPackages() const { return this->additionalPackages_ != nullptr;};
    void deleteAdditionalPackages() { this->additionalPackages_ = nullptr;};
    inline const ListInstalledSoftwaresResponseBody::AdditionalPackages & getAdditionalPackages() const { DARABONBA_PTR_GET_CONST(additionalPackages_, ListInstalledSoftwaresResponseBody::AdditionalPackages) };
    inline ListInstalledSoftwaresResponseBody::AdditionalPackages getAdditionalPackages() { DARABONBA_PTR_GET(additionalPackages_, ListInstalledSoftwaresResponseBody::AdditionalPackages) };
    inline ListInstalledSoftwaresResponseBody& setAdditionalPackages(const ListInstalledSoftwaresResponseBody::AdditionalPackages & additionalPackages) { DARABONBA_PTR_SET_VALUE(additionalPackages_, additionalPackages) };
    inline ListInstalledSoftwaresResponseBody& setAdditionalPackages(ListInstalledSoftwaresResponseBody::AdditionalPackages && additionalPackages) { DARABONBA_PTR_SET_RVALUE(additionalPackages_, additionalPackages) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline string getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, "") };
    inline ListInstalledSoftwaresResponseBody& setPageNumber(string pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline ListInstalledSoftwaresResponseBody& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListInstalledSoftwaresResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline string getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, "") };
    inline ListInstalledSoftwaresResponseBody& setTotalCount(string totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The list of installed software.
    shared_ptr<ListInstalledSoftwaresResponseBody::AdditionalPackages> additionalPackages_ {};
    // The page number of the returned page.
    shared_ptr<string> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<string> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<string> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EHPC20240730
#endif
