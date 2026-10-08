// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTALIYUNREGIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTALIYUNREGIONRESPONSEBODY_HPP_
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
  class ListAliyunRegionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAliyunRegionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RegionEntityList, regionEntityList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAliyunRegionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RegionEntityList, regionEntityList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListAliyunRegionResponseBody() = default ;
    ListAliyunRegionResponseBody(const ListAliyunRegionResponseBody &) = default ;
    ListAliyunRegionResponseBody(ListAliyunRegionResponseBody &&) = default ;
    ListAliyunRegionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAliyunRegionResponseBody() = default ;
    ListAliyunRegionResponseBody& operator=(const ListAliyunRegionResponseBody &) = default ;
    ListAliyunRegionResponseBody& operator=(ListAliyunRegionResponseBody &&) = default ;
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
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Name, name_);
        };
        friend void from_json(const Darabonba::Json& j, RegionEntity& obj) { 
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
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
        virtual bool empty() const override { return this->id_ == nullptr
        && this->name_ == nullptr; };
        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline RegionEntity& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline RegionEntity& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      protected:
        shared_ptr<string> id_ {};
        shared_ptr<string> name_ {};
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
    inline ListAliyunRegionResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListAliyunRegionResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // regionEntityList Field Functions 
    bool hasRegionEntityList() const { return this->regionEntityList_ != nullptr;};
    void deleteRegionEntityList() { this->regionEntityList_ = nullptr;};
    inline const ListAliyunRegionResponseBody::RegionEntityList & getRegionEntityList() const { DARABONBA_PTR_GET_CONST(regionEntityList_, ListAliyunRegionResponseBody::RegionEntityList) };
    inline ListAliyunRegionResponseBody::RegionEntityList getRegionEntityList() { DARABONBA_PTR_GET(regionEntityList_, ListAliyunRegionResponseBody::RegionEntityList) };
    inline ListAliyunRegionResponseBody& setRegionEntityList(const ListAliyunRegionResponseBody::RegionEntityList & regionEntityList) { DARABONBA_PTR_SET_VALUE(regionEntityList_, regionEntityList) };
    inline ListAliyunRegionResponseBody& setRegionEntityList(ListAliyunRegionResponseBody::RegionEntityList && regionEntityList) { DARABONBA_PTR_SET_RVALUE(regionEntityList_, regionEntityList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAliyunRegionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The HTTP status code that is returned.
    shared_ptr<int32_t> code_ {};
    // The message that is returned.
    shared_ptr<string> message_ {};
    shared_ptr<ListAliyunRegionResponseBody::RegionEntityList> regionEntityList_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
