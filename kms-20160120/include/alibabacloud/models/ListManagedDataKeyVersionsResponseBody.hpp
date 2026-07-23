// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMANAGEDDATAKEYVERSIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTMANAGEDDATAKEYVERSIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Kms20160120
{
namespace Models
{
  class ListManagedDataKeyVersionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListManagedDataKeyVersionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataKeyName, dataKeyName_);
      DARABONBA_PTR_TO_JSON(ManagedDataKeyVersions, managedDataKeyVersions_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListManagedDataKeyVersionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataKeyName, dataKeyName_);
      DARABONBA_PTR_FROM_JSON(ManagedDataKeyVersions, managedDataKeyVersions_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListManagedDataKeyVersionsResponseBody() = default ;
    ListManagedDataKeyVersionsResponseBody(const ListManagedDataKeyVersionsResponseBody &) = default ;
    ListManagedDataKeyVersionsResponseBody(ListManagedDataKeyVersionsResponseBody &&) = default ;
    ListManagedDataKeyVersionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListManagedDataKeyVersionsResponseBody() = default ;
    ListManagedDataKeyVersionsResponseBody& operator=(const ListManagedDataKeyVersionsResponseBody &) = default ;
    ListManagedDataKeyVersionsResponseBody& operator=(ListManagedDataKeyVersionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ManagedDataKeyVersions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ManagedDataKeyVersions& obj) { 
        DARABONBA_PTR_TO_JSON(ManagedDataKeyVersion, managedDataKeyVersion_);
      };
      friend void from_json(const Darabonba::Json& j, ManagedDataKeyVersions& obj) { 
        DARABONBA_PTR_FROM_JSON(ManagedDataKeyVersion, managedDataKeyVersion_);
      };
      ManagedDataKeyVersions() = default ;
      ManagedDataKeyVersions(const ManagedDataKeyVersions &) = default ;
      ManagedDataKeyVersions(ManagedDataKeyVersions &&) = default ;
      ManagedDataKeyVersions(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ManagedDataKeyVersions() = default ;
      ManagedDataKeyVersions& operator=(const ManagedDataKeyVersions &) = default ;
      ManagedDataKeyVersions& operator=(ManagedDataKeyVersions &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ManagedDataKeyVersion : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ManagedDataKeyVersion& obj) { 
          DARABONBA_PTR_TO_JSON(DataKeyVersionId, dataKeyVersionId_);
          DARABONBA_PTR_TO_JSON(DataKeyVersionName, dataKeyVersionName_);
        };
        friend void from_json(const Darabonba::Json& j, ManagedDataKeyVersion& obj) { 
          DARABONBA_PTR_FROM_JSON(DataKeyVersionId, dataKeyVersionId_);
          DARABONBA_PTR_FROM_JSON(DataKeyVersionName, dataKeyVersionName_);
        };
        ManagedDataKeyVersion() = default ;
        ManagedDataKeyVersion(const ManagedDataKeyVersion &) = default ;
        ManagedDataKeyVersion(ManagedDataKeyVersion &&) = default ;
        ManagedDataKeyVersion(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ManagedDataKeyVersion() = default ;
        ManagedDataKeyVersion& operator=(const ManagedDataKeyVersion &) = default ;
        ManagedDataKeyVersion& operator=(ManagedDataKeyVersion &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->dataKeyVersionId_ == nullptr
        && this->dataKeyVersionName_ == nullptr; };
        // dataKeyVersionId Field Functions 
        bool hasDataKeyVersionId() const { return this->dataKeyVersionId_ != nullptr;};
        void deleteDataKeyVersionId() { this->dataKeyVersionId_ = nullptr;};
        inline string getDataKeyVersionId() const { DARABONBA_PTR_GET_DEFAULT(dataKeyVersionId_, "") };
        inline ManagedDataKeyVersion& setDataKeyVersionId(string dataKeyVersionId) { DARABONBA_PTR_SET_VALUE(dataKeyVersionId_, dataKeyVersionId) };


        // dataKeyVersionName Field Functions 
        bool hasDataKeyVersionName() const { return this->dataKeyVersionName_ != nullptr;};
        void deleteDataKeyVersionName() { this->dataKeyVersionName_ = nullptr;};
        inline string getDataKeyVersionName() const { DARABONBA_PTR_GET_DEFAULT(dataKeyVersionName_, "") };
        inline ManagedDataKeyVersion& setDataKeyVersionName(string dataKeyVersionName) { DARABONBA_PTR_SET_VALUE(dataKeyVersionName_, dataKeyVersionName) };


      protected:
        // The version number of the managed data key (DK).
        shared_ptr<string> dataKeyVersionId_ {};
        // The name of the credential that stores the key material of this managed data key (DK) version.
        shared_ptr<string> dataKeyVersionName_ {};
      };

      virtual bool empty() const override { return this->managedDataKeyVersion_ == nullptr; };
      // managedDataKeyVersion Field Functions 
      bool hasManagedDataKeyVersion() const { return this->managedDataKeyVersion_ != nullptr;};
      void deleteManagedDataKeyVersion() { this->managedDataKeyVersion_ = nullptr;};
      inline const vector<ManagedDataKeyVersions::ManagedDataKeyVersion> & getManagedDataKeyVersion() const { DARABONBA_PTR_GET_CONST(managedDataKeyVersion_, vector<ManagedDataKeyVersions::ManagedDataKeyVersion>) };
      inline vector<ManagedDataKeyVersions::ManagedDataKeyVersion> getManagedDataKeyVersion() { DARABONBA_PTR_GET(managedDataKeyVersion_, vector<ManagedDataKeyVersions::ManagedDataKeyVersion>) };
      inline ManagedDataKeyVersions& setManagedDataKeyVersion(const vector<ManagedDataKeyVersions::ManagedDataKeyVersion> & managedDataKeyVersion) { DARABONBA_PTR_SET_VALUE(managedDataKeyVersion_, managedDataKeyVersion) };
      inline ManagedDataKeyVersions& setManagedDataKeyVersion(vector<ManagedDataKeyVersions::ManagedDataKeyVersion> && managedDataKeyVersion) { DARABONBA_PTR_SET_RVALUE(managedDataKeyVersion_, managedDataKeyVersion) };


    protected:
      // The list of managed data key (DK) versions.
      shared_ptr<vector<ManagedDataKeyVersions::ManagedDataKeyVersion>> managedDataKeyVersion_ {};
    };

    virtual bool empty() const override { return this->dataKeyName_ == nullptr
        && this->managedDataKeyVersions_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // dataKeyName Field Functions 
    bool hasDataKeyName() const { return this->dataKeyName_ != nullptr;};
    void deleteDataKeyName() { this->dataKeyName_ = nullptr;};
    inline string getDataKeyName() const { DARABONBA_PTR_GET_DEFAULT(dataKeyName_, "") };
    inline ListManagedDataKeyVersionsResponseBody& setDataKeyName(string dataKeyName) { DARABONBA_PTR_SET_VALUE(dataKeyName_, dataKeyName) };


    // managedDataKeyVersions Field Functions 
    bool hasManagedDataKeyVersions() const { return this->managedDataKeyVersions_ != nullptr;};
    void deleteManagedDataKeyVersions() { this->managedDataKeyVersions_ = nullptr;};
    inline const ListManagedDataKeyVersionsResponseBody::ManagedDataKeyVersions & getManagedDataKeyVersions() const { DARABONBA_PTR_GET_CONST(managedDataKeyVersions_, ListManagedDataKeyVersionsResponseBody::ManagedDataKeyVersions) };
    inline ListManagedDataKeyVersionsResponseBody::ManagedDataKeyVersions getManagedDataKeyVersions() { DARABONBA_PTR_GET(managedDataKeyVersions_, ListManagedDataKeyVersionsResponseBody::ManagedDataKeyVersions) };
    inline ListManagedDataKeyVersionsResponseBody& setManagedDataKeyVersions(const ListManagedDataKeyVersionsResponseBody::ManagedDataKeyVersions & managedDataKeyVersions) { DARABONBA_PTR_SET_VALUE(managedDataKeyVersions_, managedDataKeyVersions) };
    inline ListManagedDataKeyVersionsResponseBody& setManagedDataKeyVersions(ListManagedDataKeyVersionsResponseBody::ManagedDataKeyVersions && managedDataKeyVersions) { DARABONBA_PTR_SET_RVALUE(managedDataKeyVersions_, managedDataKeyVersions) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListManagedDataKeyVersionsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListManagedDataKeyVersionsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListManagedDataKeyVersionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListManagedDataKeyVersionsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The name of the managed data key (DK).
    shared_ptr<string> dataKeyName_ {};
    // The managed data key (DK) version information.
    shared_ptr<ListManagedDataKeyVersionsResponseBody::ManagedDataKeyVersions> managedDataKeyVersions_ {};
    // The page number. The value must be an integer greater than 0. Default value: 1.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page. Valid values: 1 to 100. Default value: 10.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID. It is a unique identifier generated by Alibaba Cloud for the request and can be used to troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // The total number of entries.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kms20160120
#endif
