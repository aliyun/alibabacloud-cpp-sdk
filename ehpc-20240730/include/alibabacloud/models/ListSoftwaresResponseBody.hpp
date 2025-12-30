// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSOFTWARESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSOFTWARESRESPONSEBODY_HPP_
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
  class ListSoftwaresResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSoftwaresResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AdditionalPackages, additionalPackages_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListSoftwaresResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AdditionalPackages, additionalPackages_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListSoftwaresResponseBody() = default ;
    ListSoftwaresResponseBody(const ListSoftwaresResponseBody &) = default ;
    ListSoftwaresResponseBody(ListSoftwaresResponseBody &&) = default ;
    ListSoftwaresResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSoftwaresResponseBody() = default ;
    ListSoftwaresResponseBody& operator=(const ListSoftwaresResponseBody &) = default ;
    ListSoftwaresResponseBody& operator=(ListSoftwaresResponseBody &&) = default ;
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
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(Icon, icon_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Versions, versions_);
        };
        friend void from_json(const Darabonba::Json& j, AdditionalPackageInfos& obj) { 
          DARABONBA_PTR_FROM_JSON(Category, category_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(Icon, icon_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Versions, versions_);
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
        class Versions : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Versions& obj) { 
            DARABONBA_PTR_TO_JSON(VersionInfos, versionInfos_);
          };
          friend void from_json(const Darabonba::Json& j, Versions& obj) { 
            DARABONBA_PTR_FROM_JSON(VersionInfos, versionInfos_);
          };
          Versions() = default ;
          Versions(const Versions &) = default ;
          Versions(Versions &&) = default ;
          Versions(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Versions() = default ;
          Versions& operator=(const Versions &) = default ;
          Versions& operator=(Versions &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class VersionInfos : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const VersionInfos& obj) { 
              DARABONBA_PTR_TO_JSON(Latest, latest_);
              DARABONBA_PTR_TO_JSON(SupportOs, supportOs_);
              DARABONBA_PTR_TO_JSON(Version, version_);
            };
            friend void from_json(const Darabonba::Json& j, VersionInfos& obj) { 
              DARABONBA_PTR_FROM_JSON(Latest, latest_);
              DARABONBA_PTR_FROM_JSON(SupportOs, supportOs_);
              DARABONBA_PTR_FROM_JSON(Version, version_);
            };
            VersionInfos() = default ;
            VersionInfos(const VersionInfos &) = default ;
            VersionInfos(VersionInfos &&) = default ;
            VersionInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~VersionInfos() = default ;
            VersionInfos& operator=(const VersionInfos &) = default ;
            VersionInfos& operator=(VersionInfos &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class SupportOs : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const SupportOs& obj) { 
                DARABONBA_PTR_TO_JSON(SupportOsInfos, supportOsInfos_);
              };
              friend void from_json(const Darabonba::Json& j, SupportOs& obj) { 
                DARABONBA_PTR_FROM_JSON(SupportOsInfos, supportOsInfos_);
              };
              SupportOs() = default ;
              SupportOs(const SupportOs &) = default ;
              SupportOs(SupportOs &&) = default ;
              SupportOs(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~SupportOs() = default ;
              SupportOs& operator=(const SupportOs &) = default ;
              SupportOs& operator=(SupportOs &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              class SupportOsInfos : public Darabonba::Model {
              public:
                friend void to_json(Darabonba::Json& j, const SupportOsInfos& obj) { 
                  DARABONBA_PTR_TO_JSON(Architecture, architecture_);
                  DARABONBA_PTR_TO_JSON(OsTag, osTag_);
                };
                friend void from_json(const Darabonba::Json& j, SupportOsInfos& obj) { 
                  DARABONBA_PTR_FROM_JSON(Architecture, architecture_);
                  DARABONBA_PTR_FROM_JSON(OsTag, osTag_);
                };
                SupportOsInfos() = default ;
                SupportOsInfos(const SupportOsInfos &) = default ;
                SupportOsInfos(SupportOsInfos &&) = default ;
                SupportOsInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
                virtual ~SupportOsInfos() = default ;
                SupportOsInfos& operator=(const SupportOsInfos &) = default ;
                SupportOsInfos& operator=(SupportOsInfos &&) = default ;
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
                inline SupportOsInfos& setArchitecture(string architecture) { DARABONBA_PTR_SET_VALUE(architecture_, architecture) };


                // osTag Field Functions 
                bool hasOsTag() const { return this->osTag_ != nullptr;};
                void deleteOsTag() { this->osTag_ = nullptr;};
                inline string getOsTag() const { DARABONBA_PTR_GET_DEFAULT(osTag_, "") };
                inline SupportOsInfos& setOsTag(string osTag) { DARABONBA_PTR_SET_VALUE(osTag_, osTag) };


              protected:
                // The OS architecture. Valid values:
                // 
                // *   x86_64
                // *   arm64
                shared_ptr<string> architecture_ {};
                // The image tag.
                shared_ptr<string> osTag_ {};
              };

              virtual bool empty() const override { return this->supportOsInfos_ == nullptr; };
              // supportOsInfos Field Functions 
              bool hasSupportOsInfos() const { return this->supportOsInfos_ != nullptr;};
              void deleteSupportOsInfos() { this->supportOsInfos_ = nullptr;};
              inline const vector<SupportOs::SupportOsInfos> & getSupportOsInfos() const { DARABONBA_PTR_GET_CONST(supportOsInfos_, vector<SupportOs::SupportOsInfos>) };
              inline vector<SupportOs::SupportOsInfos> getSupportOsInfos() { DARABONBA_PTR_GET(supportOsInfos_, vector<SupportOs::SupportOsInfos>) };
              inline SupportOs& setSupportOsInfos(const vector<SupportOs::SupportOsInfos> & supportOsInfos) { DARABONBA_PTR_SET_VALUE(supportOsInfos_, supportOsInfos) };
              inline SupportOs& setSupportOsInfos(vector<SupportOs::SupportOsInfos> && supportOsInfos) { DARABONBA_PTR_SET_RVALUE(supportOsInfos_, supportOsInfos) };


            protected:
              shared_ptr<vector<SupportOs::SupportOsInfos>> supportOsInfos_ {};
            };

            virtual bool empty() const override { return this->latest_ == nullptr
        && this->supportOs_ == nullptr && this->version_ == nullptr; };
            // latest Field Functions 
            bool hasLatest() const { return this->latest_ != nullptr;};
            void deleteLatest() { this->latest_ = nullptr;};
            inline string getLatest() const { DARABONBA_PTR_GET_DEFAULT(latest_, "") };
            inline VersionInfos& setLatest(string latest) { DARABONBA_PTR_SET_VALUE(latest_, latest) };


            // supportOs Field Functions 
            bool hasSupportOs() const { return this->supportOs_ != nullptr;};
            void deleteSupportOs() { this->supportOs_ = nullptr;};
            inline const VersionInfos::SupportOs & getSupportOs() const { DARABONBA_PTR_GET_CONST(supportOs_, VersionInfos::SupportOs) };
            inline VersionInfos::SupportOs getSupportOs() { DARABONBA_PTR_GET(supportOs_, VersionInfos::SupportOs) };
            inline VersionInfos& setSupportOs(const VersionInfos::SupportOs & supportOs) { DARABONBA_PTR_SET_VALUE(supportOs_, supportOs) };
            inline VersionInfos& setSupportOs(VersionInfos::SupportOs && supportOs) { DARABONBA_PTR_SET_RVALUE(supportOs_, supportOs) };


            // version Field Functions 
            bool hasVersion() const { return this->version_ != nullptr;};
            void deleteVersion() { this->version_ = nullptr;};
            inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
            inline VersionInfos& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


          protected:
            // Indicates whether the version is the latest.
            shared_ptr<string> latest_ {};
            // The information about the supported OSs.
            shared_ptr<VersionInfos::SupportOs> supportOs_ {};
            // The software version.
            shared_ptr<string> version_ {};
          };

          virtual bool empty() const override { return this->versionInfos_ == nullptr; };
          // versionInfos Field Functions 
          bool hasVersionInfos() const { return this->versionInfos_ != nullptr;};
          void deleteVersionInfos() { this->versionInfos_ = nullptr;};
          inline const vector<Versions::VersionInfos> & getVersionInfos() const { DARABONBA_PTR_GET_CONST(versionInfos_, vector<Versions::VersionInfos>) };
          inline vector<Versions::VersionInfos> getVersionInfos() { DARABONBA_PTR_GET(versionInfos_, vector<Versions::VersionInfos>) };
          inline Versions& setVersionInfos(const vector<Versions::VersionInfos> & versionInfos) { DARABONBA_PTR_SET_VALUE(versionInfos_, versionInfos) };
          inline Versions& setVersionInfos(vector<Versions::VersionInfos> && versionInfos) { DARABONBA_PTR_SET_RVALUE(versionInfos_, versionInfos) };


        protected:
          shared_ptr<vector<Versions::VersionInfos>> versionInfos_ {};
        };

        virtual bool empty() const override { return this->category_ == nullptr
        && this->description_ == nullptr && this->icon_ == nullptr && this->name_ == nullptr && this->versions_ == nullptr; };
        // category Field Functions 
        bool hasCategory() const { return this->category_ != nullptr;};
        void deleteCategory() { this->category_ = nullptr;};
        inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
        inline AdditionalPackageInfos& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


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


        // versions Field Functions 
        bool hasVersions() const { return this->versions_ != nullptr;};
        void deleteVersions() { this->versions_ = nullptr;};
        inline const AdditionalPackageInfos::Versions & getVersions() const { DARABONBA_PTR_GET_CONST(versions_, AdditionalPackageInfos::Versions) };
        inline AdditionalPackageInfos::Versions getVersions() { DARABONBA_PTR_GET(versions_, AdditionalPackageInfos::Versions) };
        inline AdditionalPackageInfos& setVersions(const AdditionalPackageInfos::Versions & versions) { DARABONBA_PTR_SET_VALUE(versions_, versions) };
        inline AdditionalPackageInfos& setVersions(AdditionalPackageInfos::Versions && versions) { DARABONBA_PTR_SET_RVALUE(versions_, versions) };


      protected:
        // The application category.
        shared_ptr<string> category_ {};
        // The software description.
        shared_ptr<string> description_ {};
        // The URL of the software icon.
        shared_ptr<string> icon_ {};
        // The software name.
        shared_ptr<string> name_ {};
        // The information about the software versions that can be installed in the cluster.
        shared_ptr<AdditionalPackageInfos::Versions> versions_ {};
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
    inline const ListSoftwaresResponseBody::AdditionalPackages & getAdditionalPackages() const { DARABONBA_PTR_GET_CONST(additionalPackages_, ListSoftwaresResponseBody::AdditionalPackages) };
    inline ListSoftwaresResponseBody::AdditionalPackages getAdditionalPackages() { DARABONBA_PTR_GET(additionalPackages_, ListSoftwaresResponseBody::AdditionalPackages) };
    inline ListSoftwaresResponseBody& setAdditionalPackages(const ListSoftwaresResponseBody::AdditionalPackages & additionalPackages) { DARABONBA_PTR_SET_VALUE(additionalPackages_, additionalPackages) };
    inline ListSoftwaresResponseBody& setAdditionalPackages(ListSoftwaresResponseBody::AdditionalPackages && additionalPackages) { DARABONBA_PTR_SET_RVALUE(additionalPackages_, additionalPackages) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline string getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, "") };
    inline ListSoftwaresResponseBody& setPageNumber(string pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline ListSoftwaresResponseBody& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListSoftwaresResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline string getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, "") };
    inline ListSoftwaresResponseBody& setTotalCount(string totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The information about the software that can be installed in the cluster.
    shared_ptr<ListSoftwaresResponseBody::AdditionalPackages> additionalPackages_ {};
    // The page number. Pages start from page 1. Default value: 1.
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
