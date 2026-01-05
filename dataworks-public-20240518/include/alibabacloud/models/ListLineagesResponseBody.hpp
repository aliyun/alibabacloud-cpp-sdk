// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLINEAGESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTLINEAGESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/LineageEntity.hpp>
#include <vector>
#include <alibabacloud/models/LineageRelationship.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListLineagesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLineagesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PagingInfo, pagingInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListLineagesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PagingInfo, pagingInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListLineagesResponseBody() = default ;
    ListLineagesResponseBody(const ListLineagesResponseBody &) = default ;
    ListLineagesResponseBody(ListLineagesResponseBody &&) = default ;
    ListLineagesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLineagesResponseBody() = default ;
    ListLineagesResponseBody& operator=(const ListLineagesResponseBody &) = default ;
    ListLineagesResponseBody& operator=(ListLineagesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PagingInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PagingInfo& obj) { 
        DARABONBA_PTR_TO_JSON(Lineages, lineages_);
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, PagingInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(Lineages, lineages_);
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      PagingInfo() = default ;
      PagingInfo(const PagingInfo &) = default ;
      PagingInfo(PagingInfo &&) = default ;
      PagingInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PagingInfo() = default ;
      PagingInfo& operator=(const PagingInfo &) = default ;
      PagingInfo& operator=(PagingInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Lineages : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Lineages& obj) { 
          DARABONBA_PTR_TO_JSON(DstEntity, dstEntity_);
          DARABONBA_PTR_TO_JSON(Relationships, relationships_);
          DARABONBA_PTR_TO_JSON(SrcEntity, srcEntity_);
        };
        friend void from_json(const Darabonba::Json& j, Lineages& obj) { 
          DARABONBA_PTR_FROM_JSON(DstEntity, dstEntity_);
          DARABONBA_PTR_FROM_JSON(Relationships, relationships_);
          DARABONBA_PTR_FROM_JSON(SrcEntity, srcEntity_);
        };
        Lineages() = default ;
        Lineages(const Lineages &) = default ;
        Lineages(Lineages &&) = default ;
        Lineages(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Lineages() = default ;
        Lineages& operator=(const Lineages &) = default ;
        Lineages& operator=(Lineages &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->dstEntity_ == nullptr
        && this->relationships_ == nullptr && this->srcEntity_ == nullptr; };
        // dstEntity Field Functions 
        bool hasDstEntity() const { return this->dstEntity_ != nullptr;};
        void deleteDstEntity() { this->dstEntity_ = nullptr;};
        inline const LineageEntity & getDstEntity() const { DARABONBA_PTR_GET_CONST(dstEntity_, LineageEntity) };
        inline LineageEntity getDstEntity() { DARABONBA_PTR_GET(dstEntity_, LineageEntity) };
        inline Lineages& setDstEntity(const LineageEntity & dstEntity) { DARABONBA_PTR_SET_VALUE(dstEntity_, dstEntity) };
        inline Lineages& setDstEntity(LineageEntity && dstEntity) { DARABONBA_PTR_SET_RVALUE(dstEntity_, dstEntity) };


        // relationships Field Functions 
        bool hasRelationships() const { return this->relationships_ != nullptr;};
        void deleteRelationships() { this->relationships_ = nullptr;};
        inline const vector<LineageRelationship> & getRelationships() const { DARABONBA_PTR_GET_CONST(relationships_, vector<LineageRelationship>) };
        inline vector<LineageRelationship> getRelationships() { DARABONBA_PTR_GET(relationships_, vector<LineageRelationship>) };
        inline Lineages& setRelationships(const vector<LineageRelationship> & relationships) { DARABONBA_PTR_SET_VALUE(relationships_, relationships) };
        inline Lineages& setRelationships(vector<LineageRelationship> && relationships) { DARABONBA_PTR_SET_RVALUE(relationships_, relationships) };


        // srcEntity Field Functions 
        bool hasSrcEntity() const { return this->srcEntity_ != nullptr;};
        void deleteSrcEntity() { this->srcEntity_ = nullptr;};
        inline const LineageEntity & getSrcEntity() const { DARABONBA_PTR_GET_CONST(srcEntity_, LineageEntity) };
        inline LineageEntity getSrcEntity() { DARABONBA_PTR_GET(srcEntity_, LineageEntity) };
        inline Lineages& setSrcEntity(const LineageEntity & srcEntity) { DARABONBA_PTR_SET_VALUE(srcEntity_, srcEntity) };
        inline Lineages& setSrcEntity(LineageEntity && srcEntity) { DARABONBA_PTR_SET_RVALUE(srcEntity_, srcEntity) };


      protected:
        shared_ptr<LineageEntity> dstEntity_ {};
        shared_ptr<vector<LineageRelationship>> relationships_ {};
        shared_ptr<LineageEntity> srcEntity_ {};
      };

      virtual bool empty() const override { return this->lineages_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // lineages Field Functions 
      bool hasLineages() const { return this->lineages_ != nullptr;};
      void deleteLineages() { this->lineages_ = nullptr;};
      inline const vector<PagingInfo::Lineages> & getLineages() const { DARABONBA_PTR_GET_CONST(lineages_, vector<PagingInfo::Lineages>) };
      inline vector<PagingInfo::Lineages> getLineages() { DARABONBA_PTR_GET(lineages_, vector<PagingInfo::Lineages>) };
      inline PagingInfo& setLineages(const vector<PagingInfo::Lineages> & lineages) { DARABONBA_PTR_SET_VALUE(lineages_, lineages) };
      inline PagingInfo& setLineages(vector<PagingInfo::Lineages> && lineages) { DARABONBA_PTR_SET_RVALUE(lineages_, lineages) };


      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
      inline PagingInfo& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline PagingInfo& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
      inline PagingInfo& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      shared_ptr<vector<PagingInfo::Lineages>> lineages_ {};
      shared_ptr<int32_t> pageNumber_ {};
      shared_ptr<int32_t> pageSize_ {};
      shared_ptr<int64_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->pagingInfo_ == nullptr
        && this->requestId_ == nullptr && this->success_ == nullptr; };
    // pagingInfo Field Functions 
    bool hasPagingInfo() const { return this->pagingInfo_ != nullptr;};
    void deletePagingInfo() { this->pagingInfo_ = nullptr;};
    inline const ListLineagesResponseBody::PagingInfo & getPagingInfo() const { DARABONBA_PTR_GET_CONST(pagingInfo_, ListLineagesResponseBody::PagingInfo) };
    inline ListLineagesResponseBody::PagingInfo getPagingInfo() { DARABONBA_PTR_GET(pagingInfo_, ListLineagesResponseBody::PagingInfo) };
    inline ListLineagesResponseBody& setPagingInfo(const ListLineagesResponseBody::PagingInfo & pagingInfo) { DARABONBA_PTR_SET_VALUE(pagingInfo_, pagingInfo) };
    inline ListLineagesResponseBody& setPagingInfo(ListLineagesResponseBody::PagingInfo && pagingInfo) { DARABONBA_PTR_SET_RVALUE(pagingInfo_, pagingInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListLineagesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListLineagesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<ListLineagesResponseBody::PagingInfo> pagingInfo_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
