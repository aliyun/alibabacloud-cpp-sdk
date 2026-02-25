// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCUSTOMENTITIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCUSTOMENTITIESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class ListCustomEntitiesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCustomEntitiesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CustomEntities, customEntities_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListCustomEntitiesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CustomEntities, customEntities_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListCustomEntitiesResponseBody() = default ;
    ListCustomEntitiesResponseBody(const ListCustomEntitiesResponseBody &) = default ;
    ListCustomEntitiesResponseBody(ListCustomEntitiesResponseBody &&) = default ;
    ListCustomEntitiesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCustomEntitiesResponseBody() = default ;
    ListCustomEntitiesResponseBody& operator=(const ListCustomEntitiesResponseBody &) = default ;
    ListCustomEntitiesResponseBody& operator=(ListCustomEntitiesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CustomEntities : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CustomEntities& obj) { 
        DARABONBA_PTR_TO_JSON(CustomEntity, customEntity_);
      };
      friend void from_json(const Darabonba::Json& j, CustomEntities& obj) { 
        DARABONBA_PTR_FROM_JSON(CustomEntity, customEntity_);
      };
      CustomEntities() = default ;
      CustomEntities(const CustomEntities &) = default ;
      CustomEntities(CustomEntities &&) = default ;
      CustomEntities(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CustomEntities() = default ;
      CustomEntities& operator=(const CustomEntities &) = default ;
      CustomEntities& operator=(CustomEntities &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class CustomEntity : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CustomEntity& obj) { 
          DARABONBA_PTR_TO_JSON(CustomEntityId, customEntityId_);
          DARABONBA_PTR_TO_JSON(CustomEntityInfo, customEntityInfo_);
          DARABONBA_PTR_TO_JSON(CustomEntityName, customEntityName_);
        };
        friend void from_json(const Darabonba::Json& j, CustomEntity& obj) { 
          DARABONBA_PTR_FROM_JSON(CustomEntityId, customEntityId_);
          DARABONBA_PTR_FROM_JSON(CustomEntityInfo, customEntityInfo_);
          DARABONBA_PTR_FROM_JSON(CustomEntityName, customEntityName_);
        };
        CustomEntity() = default ;
        CustomEntity(const CustomEntity &) = default ;
        CustomEntity(CustomEntity &&) = default ;
        CustomEntity(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CustomEntity() = default ;
        CustomEntity& operator=(const CustomEntity &) = default ;
        CustomEntity& operator=(CustomEntity &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->customEntityId_ == nullptr
        && this->customEntityInfo_ == nullptr && this->customEntityName_ == nullptr; };
        // customEntityId Field Functions 
        bool hasCustomEntityId() const { return this->customEntityId_ != nullptr;};
        void deleteCustomEntityId() { this->customEntityId_ = nullptr;};
        inline string getCustomEntityId() const { DARABONBA_PTR_GET_DEFAULT(customEntityId_, "") };
        inline CustomEntity& setCustomEntityId(string customEntityId) { DARABONBA_PTR_SET_VALUE(customEntityId_, customEntityId) };


        // customEntityInfo Field Functions 
        bool hasCustomEntityInfo() const { return this->customEntityInfo_ != nullptr;};
        void deleteCustomEntityInfo() { this->customEntityInfo_ = nullptr;};
        inline string getCustomEntityInfo() const { DARABONBA_PTR_GET_DEFAULT(customEntityInfo_, "") };
        inline CustomEntity& setCustomEntityInfo(string customEntityInfo) { DARABONBA_PTR_SET_VALUE(customEntityInfo_, customEntityInfo) };


        // customEntityName Field Functions 
        bool hasCustomEntityName() const { return this->customEntityName_ != nullptr;};
        void deleteCustomEntityName() { this->customEntityName_ = nullptr;};
        inline string getCustomEntityName() const { DARABONBA_PTR_GET_DEFAULT(customEntityName_, "") };
        inline CustomEntity& setCustomEntityName(string customEntityName) { DARABONBA_PTR_SET_VALUE(customEntityName_, customEntityName) };


      protected:
        shared_ptr<string> customEntityId_ {};
        shared_ptr<string> customEntityInfo_ {};
        shared_ptr<string> customEntityName_ {};
      };

      virtual bool empty() const override { return this->customEntity_ == nullptr; };
      // customEntity Field Functions 
      bool hasCustomEntity() const { return this->customEntity_ != nullptr;};
      void deleteCustomEntity() { this->customEntity_ = nullptr;};
      inline const vector<CustomEntities::CustomEntity> & getCustomEntity() const { DARABONBA_PTR_GET_CONST(customEntity_, vector<CustomEntities::CustomEntity>) };
      inline vector<CustomEntities::CustomEntity> getCustomEntity() { DARABONBA_PTR_GET(customEntity_, vector<CustomEntities::CustomEntity>) };
      inline CustomEntities& setCustomEntity(const vector<CustomEntities::CustomEntity> & customEntity) { DARABONBA_PTR_SET_VALUE(customEntity_, customEntity) };
      inline CustomEntities& setCustomEntity(vector<CustomEntities::CustomEntity> && customEntity) { DARABONBA_PTR_SET_RVALUE(customEntity_, customEntity) };


    protected:
      shared_ptr<vector<CustomEntities::CustomEntity>> customEntity_ {};
    };

    virtual bool empty() const override { return this->customEntities_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // customEntities Field Functions 
    bool hasCustomEntities() const { return this->customEntities_ != nullptr;};
    void deleteCustomEntities() { this->customEntities_ = nullptr;};
    inline const ListCustomEntitiesResponseBody::CustomEntities & getCustomEntities() const { DARABONBA_PTR_GET_CONST(customEntities_, ListCustomEntitiesResponseBody::CustomEntities) };
    inline ListCustomEntitiesResponseBody::CustomEntities getCustomEntities() { DARABONBA_PTR_GET(customEntities_, ListCustomEntitiesResponseBody::CustomEntities) };
    inline ListCustomEntitiesResponseBody& setCustomEntities(const ListCustomEntitiesResponseBody::CustomEntities & customEntities) { DARABONBA_PTR_SET_VALUE(customEntities_, customEntities) };
    inline ListCustomEntitiesResponseBody& setCustomEntities(ListCustomEntitiesResponseBody::CustomEntities && customEntities) { DARABONBA_PTR_SET_RVALUE(customEntities_, customEntities) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListCustomEntitiesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListCustomEntitiesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListCustomEntitiesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListCustomEntitiesResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<ListCustomEntitiesResponseBody::CustomEntities> customEntities_ {};
    shared_ptr<int32_t> pageNumber_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
