// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSECRETVERSIONIDSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSECRETVERSIONIDSRESPONSEBODY_HPP_
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
  class ListSecretVersionIdsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSecretVersionIdsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SecretName, secretName_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(VersionIds, versionIds_);
    };
    friend void from_json(const Darabonba::Json& j, ListSecretVersionIdsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SecretName, secretName_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(VersionIds, versionIds_);
    };
    ListSecretVersionIdsResponseBody() = default ;
    ListSecretVersionIdsResponseBody(const ListSecretVersionIdsResponseBody &) = default ;
    ListSecretVersionIdsResponseBody(ListSecretVersionIdsResponseBody &&) = default ;
    ListSecretVersionIdsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSecretVersionIdsResponseBody() = default ;
    ListSecretVersionIdsResponseBody& operator=(const ListSecretVersionIdsResponseBody &) = default ;
    ListSecretVersionIdsResponseBody& operator=(ListSecretVersionIdsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class VersionIds : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const VersionIds& obj) { 
        DARABONBA_PTR_TO_JSON(VersionId, versionId_);
      };
      friend void from_json(const Darabonba::Json& j, VersionIds& obj) { 
        DARABONBA_PTR_FROM_JSON(VersionId, versionId_);
      };
      VersionIds() = default ;
      VersionIds(const VersionIds &) = default ;
      VersionIds(VersionIds &&) = default ;
      VersionIds(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~VersionIds() = default ;
      VersionIds& operator=(const VersionIds &) = default ;
      VersionIds& operator=(VersionIds &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class VersionId : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const VersionId& obj) { 
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(VersionId, versionId_);
          DARABONBA_PTR_TO_JSON(VersionStages, versionStages_);
        };
        friend void from_json(const Darabonba::Json& j, VersionId& obj) { 
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(VersionId, versionId_);
          DARABONBA_PTR_FROM_JSON(VersionStages, versionStages_);
        };
        VersionId() = default ;
        VersionId(const VersionId &) = default ;
        VersionId(VersionId &&) = default ;
        VersionId(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~VersionId() = default ;
        VersionId& operator=(const VersionId &) = default ;
        VersionId& operator=(VersionId &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class VersionStages : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const VersionStages& obj) { 
            DARABONBA_PTR_TO_JSON(VersionStage, versionStage_);
          };
          friend void from_json(const Darabonba::Json& j, VersionStages& obj) { 
            DARABONBA_PTR_FROM_JSON(VersionStage, versionStage_);
          };
          VersionStages() = default ;
          VersionStages(const VersionStages &) = default ;
          VersionStages(VersionStages &&) = default ;
          VersionStages(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~VersionStages() = default ;
          VersionStages& operator=(const VersionStages &) = default ;
          VersionStages& operator=(VersionStages &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->versionStage_ == nullptr; };
          // versionStage Field Functions 
          bool hasVersionStage() const { return this->versionStage_ != nullptr;};
          void deleteVersionStage() { this->versionStage_ = nullptr;};
          inline const vector<string> & getVersionStage() const { DARABONBA_PTR_GET_CONST(versionStage_, vector<string>) };
          inline vector<string> getVersionStage() { DARABONBA_PTR_GET(versionStage_, vector<string>) };
          inline VersionStages& setVersionStage(const vector<string> & versionStage) { DARABONBA_PTR_SET_VALUE(versionStage_, versionStage) };
          inline VersionStages& setVersionStage(vector<string> && versionStage) { DARABONBA_PTR_SET_RVALUE(versionStage_, versionStage) };


        protected:
          shared_ptr<vector<string>> versionStage_ {};
        };

        virtual bool empty() const override { return this->createTime_ == nullptr
        && this->versionId_ == nullptr && this->versionStages_ == nullptr; };
        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline VersionId& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // versionId Field Functions 
        bool hasVersionId() const { return this->versionId_ != nullptr;};
        void deleteVersionId() { this->versionId_ = nullptr;};
        inline string getVersionId() const { DARABONBA_PTR_GET_DEFAULT(versionId_, "") };
        inline VersionId& setVersionId(string versionId) { DARABONBA_PTR_SET_VALUE(versionId_, versionId) };


        // versionStages Field Functions 
        bool hasVersionStages() const { return this->versionStages_ != nullptr;};
        void deleteVersionStages() { this->versionStages_ = nullptr;};
        inline const VersionId::VersionStages & getVersionStages() const { DARABONBA_PTR_GET_CONST(versionStages_, VersionId::VersionStages) };
        inline VersionId::VersionStages getVersionStages() { DARABONBA_PTR_GET(versionStages_, VersionId::VersionStages) };
        inline VersionId& setVersionStages(const VersionId::VersionStages & versionStages) { DARABONBA_PTR_SET_VALUE(versionStages_, versionStages) };
        inline VersionId& setVersionStages(VersionId::VersionStages && versionStages) { DARABONBA_PTR_SET_RVALUE(versionStages_, versionStages) };


      protected:
        shared_ptr<string> createTime_ {};
        shared_ptr<string> versionId_ {};
        shared_ptr<VersionId::VersionStages> versionStages_ {};
      };

      virtual bool empty() const override { return this->versionId_ == nullptr; };
      // versionId Field Functions 
      bool hasVersionId() const { return this->versionId_ != nullptr;};
      void deleteVersionId() { this->versionId_ = nullptr;};
      inline const vector<VersionIds::VersionId> & getVersionId() const { DARABONBA_PTR_GET_CONST(versionId_, vector<VersionIds::VersionId>) };
      inline vector<VersionIds::VersionId> getVersionId() { DARABONBA_PTR_GET(versionId_, vector<VersionIds::VersionId>) };
      inline VersionIds& setVersionId(const vector<VersionIds::VersionId> & versionId) { DARABONBA_PTR_SET_VALUE(versionId_, versionId) };
      inline VersionIds& setVersionId(vector<VersionIds::VersionId> && versionId) { DARABONBA_PTR_SET_RVALUE(versionId_, versionId) };


    protected:
      shared_ptr<vector<VersionIds::VersionId>> versionId_ {};
    };

    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->secretName_ == nullptr && this->totalCount_ == nullptr && this->versionIds_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListSecretVersionIdsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListSecretVersionIdsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListSecretVersionIdsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // secretName Field Functions 
    bool hasSecretName() const { return this->secretName_ != nullptr;};
    void deleteSecretName() { this->secretName_ = nullptr;};
    inline string getSecretName() const { DARABONBA_PTR_GET_DEFAULT(secretName_, "") };
    inline ListSecretVersionIdsResponseBody& setSecretName(string secretName) { DARABONBA_PTR_SET_VALUE(secretName_, secretName) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListSecretVersionIdsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // versionIds Field Functions 
    bool hasVersionIds() const { return this->versionIds_ != nullptr;};
    void deleteVersionIds() { this->versionIds_ = nullptr;};
    inline const ListSecretVersionIdsResponseBody::VersionIds & getVersionIds() const { DARABONBA_PTR_GET_CONST(versionIds_, ListSecretVersionIdsResponseBody::VersionIds) };
    inline ListSecretVersionIdsResponseBody::VersionIds getVersionIds() { DARABONBA_PTR_GET(versionIds_, ListSecretVersionIdsResponseBody::VersionIds) };
    inline ListSecretVersionIdsResponseBody& setVersionIds(const ListSecretVersionIdsResponseBody::VersionIds & versionIds) { DARABONBA_PTR_SET_VALUE(versionIds_, versionIds) };
    inline ListSecretVersionIdsResponseBody& setVersionIds(ListSecretVersionIdsResponseBody::VersionIds && versionIds) { DARABONBA_PTR_SET_RVALUE(versionIds_, versionIds) };


  protected:
    // The page number of the returned page.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries returned on each page.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the request, which is a unique identifier generated by Alibaba Cloud. You can use this ID to troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // The name of the credential.
    shared_ptr<string> secretName_ {};
    // The total number of entries.
    shared_ptr<int32_t> totalCount_ {};
    shared_ptr<ListSecretVersionIdsResponseBody::VersionIds> versionIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kms20160120
#endif
