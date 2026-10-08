// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYMIGRATEREGIONLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYMIGRATEREGIONLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class QueryMigrateRegionListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryMigrateRegionListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RegionEntityList, regionEntityList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryMigrateRegionListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RegionEntityList, regionEntityList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    QueryMigrateRegionListResponseBody() = default ;
    QueryMigrateRegionListResponseBody(const QueryMigrateRegionListResponseBody &) = default ;
    QueryMigrateRegionListResponseBody(QueryMigrateRegionListResponseBody &&) = default ;
    QueryMigrateRegionListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryMigrateRegionListResponseBody() = default ;
    QueryMigrateRegionListResponseBody& operator=(const QueryMigrateRegionListResponseBody &) = default ;
    QueryMigrateRegionListResponseBody& operator=(QueryMigrateRegionListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RegionEntityList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RegionEntityList& obj) { 
        DARABONBA_PTR_TO_JSON(RegionEntity, regionEntity_);
      };
      friend void from_json(const Darabonba::Json& j, RegionEntityList& obj) { 
        DARABONBA_PTR_FROM_JSON(RegionEntity, regionEntity_);
      };
      RegionEntityList() = default ;
      RegionEntityList(const RegionEntityList &) = default ;
      RegionEntityList(RegionEntityList &&) = default ;
      RegionEntityList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RegionEntityList() = default ;
      RegionEntityList& operator=(const RegionEntityList &) = default ;
      RegionEntityList& operator=(RegionEntityList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class RegionEntity : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RegionEntity& obj) { 
          DARABONBA_PTR_TO_JSON(RegionName, regionName_);
          DARABONBA_PTR_TO_JSON(RegionNo, regionNo_);
        };
        friend void from_json(const Darabonba::Json& j, RegionEntity& obj) { 
          DARABONBA_PTR_FROM_JSON(RegionName, regionName_);
          DARABONBA_PTR_FROM_JSON(RegionNo, regionNo_);
        };
        RegionEntity() = default ;
        RegionEntity(const RegionEntity &) = default ;
        RegionEntity(RegionEntity &&) = default ;
        RegionEntity(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RegionEntity() = default ;
        RegionEntity& operator=(const RegionEntity &) = default ;
        RegionEntity& operator=(RegionEntity &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->regionName_ == nullptr
        && this->regionNo_ == nullptr; };
        // regionName Field Functions 
        bool hasRegionName() const { return this->regionName_ != nullptr;};
        void deleteRegionName() { this->regionName_ = nullptr;};
        inline string getRegionName() const { DARABONBA_PTR_GET_DEFAULT(regionName_, "") };
        inline RegionEntity& setRegionName(string regionName) { DARABONBA_PTR_SET_VALUE(regionName_, regionName) };


        // regionNo Field Functions 
        bool hasRegionNo() const { return this->regionNo_ != nullptr;};
        void deleteRegionNo() { this->regionNo_ = nullptr;};
        inline string getRegionNo() const { DARABONBA_PTR_GET_DEFAULT(regionNo_, "") };
        inline RegionEntity& setRegionNo(string regionNo) { DARABONBA_PTR_SET_VALUE(regionNo_, regionNo) };


      protected:
        shared_ptr<string> regionName_ {};
        shared_ptr<string> regionNo_ {};
      };

      virtual bool empty() const override { return this->regionEntity_ == nullptr; };
      // regionEntity Field Functions 
      bool hasRegionEntity() const { return this->regionEntity_ != nullptr;};
      void deleteRegionEntity() { this->regionEntity_ = nullptr;};
      inline const vector<RegionEntityList::RegionEntity> & getRegionEntity() const { DARABONBA_PTR_GET_CONST(regionEntity_, vector<RegionEntityList::RegionEntity>) };
      inline vector<RegionEntityList::RegionEntity> getRegionEntity() { DARABONBA_PTR_GET(regionEntity_, vector<RegionEntityList::RegionEntity>) };
      inline RegionEntityList& setRegionEntity(const vector<RegionEntityList::RegionEntity> & regionEntity) { DARABONBA_PTR_SET_VALUE(regionEntity_, regionEntity) };
      inline RegionEntityList& setRegionEntity(vector<RegionEntityList::RegionEntity> && regionEntity) { DARABONBA_PTR_SET_RVALUE(regionEntity_, regionEntity) };


    protected:
      shared_ptr<vector<RegionEntityList::RegionEntity>> regionEntity_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->regionEntityList_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline QueryMigrateRegionListResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QueryMigrateRegionListResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // regionEntityList Field Functions 
    bool hasRegionEntityList() const { return this->regionEntityList_ != nullptr;};
    void deleteRegionEntityList() { this->regionEntityList_ = nullptr;};
    inline const QueryMigrateRegionListResponseBody::RegionEntityList & getRegionEntityList() const { DARABONBA_PTR_GET_CONST(regionEntityList_, QueryMigrateRegionListResponseBody::RegionEntityList) };
    inline QueryMigrateRegionListResponseBody::RegionEntityList getRegionEntityList() { DARABONBA_PTR_GET(regionEntityList_, QueryMigrateRegionListResponseBody::RegionEntityList) };
    inline QueryMigrateRegionListResponseBody& setRegionEntityList(const QueryMigrateRegionListResponseBody::RegionEntityList & regionEntityList) { DARABONBA_PTR_SET_VALUE(regionEntityList_, regionEntityList) };
    inline QueryMigrateRegionListResponseBody& setRegionEntityList(QueryMigrateRegionListResponseBody::RegionEntityList && regionEntityList) { DARABONBA_PTR_SET_RVALUE(regionEntityList_, regionEntityList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryMigrateRegionListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The HTTP status code that is returned.
    shared_ptr<int32_t> code_ {};
    // The message that is returned.
    shared_ptr<string> message_ {};
    shared_ptr<QueryMigrateRegionListResponseBody::RegionEntityList> regionEntityList_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
