// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTWORKFLOWRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTWORKFLOWRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace XrEngine20221111
{
namespace Models
{
  class ListWorkflowResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListWorkflowResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpCode, httpCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListWorkflowResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpCode, httpCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListWorkflowResponseBody() = default ;
    ListWorkflowResponseBody(const ListWorkflowResponseBody &) = default ;
    ListWorkflowResponseBody(ListWorkflowResponseBody &&) = default ;
    ListWorkflowResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListWorkflowResponseBody() = default ;
    ListWorkflowResponseBody& operator=(const ListWorkflowResponseBody &) = default ;
    ListWorkflowResponseBody& operator=(ListWorkflowResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(HumanPose, humanPose_);
        DARABONBA_PTR_TO_JSON(Mannequins, mannequins_);
        DARABONBA_PTR_TO_JSON(Object, object_);
        DARABONBA_PTR_TO_JSON(ObjectGeneration, objectGeneration_);
        DARABONBA_PTR_TO_JSON(Scene, scene_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(HumanPose, humanPose_);
        DARABONBA_PTR_FROM_JSON(Mannequins, mannequins_);
        DARABONBA_PTR_FROM_JSON(Object, object_);
        DARABONBA_PTR_FROM_JSON(ObjectGeneration, objectGeneration_);
        DARABONBA_PTR_FROM_JSON(Scene, scene_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Scene : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Scene& obj) { 
          DARABONBA_PTR_TO_JSON(BizUsage, bizUsage_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(ObjectType, objectType_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, Scene& obj) { 
          DARABONBA_PTR_FROM_JSON(BizUsage, bizUsage_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(ObjectType, objectType_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        Scene() = default ;
        Scene(const Scene &) = default ;
        Scene(Scene &&) = default ;
        Scene(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Scene() = default ;
        Scene& operator=(const Scene &) = default ;
        Scene& operator=(Scene &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->bizUsage_ == nullptr
        && this->id_ == nullptr && this->name_ == nullptr && this->objectType_ == nullptr && this->status_ == nullptr; };
        // bizUsage Field Functions 
        bool hasBizUsage() const { return this->bizUsage_ != nullptr;};
        void deleteBizUsage() { this->bizUsage_ = nullptr;};
        inline string getBizUsage() const { DARABONBA_PTR_GET_DEFAULT(bizUsage_, "") };
        inline Scene& setBizUsage(string bizUsage) { DARABONBA_PTR_SET_VALUE(bizUsage_, bizUsage) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline Scene& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Scene& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // objectType Field Functions 
        bool hasObjectType() const { return this->objectType_ != nullptr;};
        void deleteObjectType() { this->objectType_ = nullptr;};
        inline string getObjectType() const { DARABONBA_PTR_GET_DEFAULT(objectType_, "") };
        inline Scene& setObjectType(string objectType) { DARABONBA_PTR_SET_VALUE(objectType_, objectType) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline int64_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0L) };
        inline Scene& setStatus(int64_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        shared_ptr<string> bizUsage_ {};
        shared_ptr<int64_t> id_ {};
        shared_ptr<string> name_ {};
        shared_ptr<string> objectType_ {};
        shared_ptr<int64_t> status_ {};
      };

      class ObjectGeneration : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ObjectGeneration& obj) { 
          DARABONBA_PTR_TO_JSON(BizUsage, bizUsage_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(ObjectType, objectType_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, ObjectGeneration& obj) { 
          DARABONBA_PTR_FROM_JSON(BizUsage, bizUsage_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(ObjectType, objectType_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        ObjectGeneration() = default ;
        ObjectGeneration(const ObjectGeneration &) = default ;
        ObjectGeneration(ObjectGeneration &&) = default ;
        ObjectGeneration(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ObjectGeneration() = default ;
        ObjectGeneration& operator=(const ObjectGeneration &) = default ;
        ObjectGeneration& operator=(ObjectGeneration &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->bizUsage_ == nullptr
        && this->id_ == nullptr && this->name_ == nullptr && this->objectType_ == nullptr && this->status_ == nullptr; };
        // bizUsage Field Functions 
        bool hasBizUsage() const { return this->bizUsage_ != nullptr;};
        void deleteBizUsage() { this->bizUsage_ = nullptr;};
        inline string getBizUsage() const { DARABONBA_PTR_GET_DEFAULT(bizUsage_, "") };
        inline ObjectGeneration& setBizUsage(string bizUsage) { DARABONBA_PTR_SET_VALUE(bizUsage_, bizUsage) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline ObjectGeneration& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline ObjectGeneration& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // objectType Field Functions 
        bool hasObjectType() const { return this->objectType_ != nullptr;};
        void deleteObjectType() { this->objectType_ = nullptr;};
        inline string getObjectType() const { DARABONBA_PTR_GET_DEFAULT(objectType_, "") };
        inline ObjectGeneration& setObjectType(string objectType) { DARABONBA_PTR_SET_VALUE(objectType_, objectType) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline int64_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0L) };
        inline ObjectGeneration& setStatus(int64_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        shared_ptr<string> bizUsage_ {};
        shared_ptr<int64_t> id_ {};
        shared_ptr<string> name_ {};
        shared_ptr<string> objectType_ {};
        shared_ptr<int64_t> status_ {};
      };

      class Object : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Object& obj) { 
          DARABONBA_PTR_TO_JSON(BizUsage, bizUsage_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(ObjectType, objectType_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, Object& obj) { 
          DARABONBA_PTR_FROM_JSON(BizUsage, bizUsage_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(ObjectType, objectType_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        Object() = default ;
        Object(const Object &) = default ;
        Object(Object &&) = default ;
        Object(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Object() = default ;
        Object& operator=(const Object &) = default ;
        Object& operator=(Object &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->bizUsage_ == nullptr
        && this->id_ == nullptr && this->name_ == nullptr && this->objectType_ == nullptr && this->status_ == nullptr; };
        // bizUsage Field Functions 
        bool hasBizUsage() const { return this->bizUsage_ != nullptr;};
        void deleteBizUsage() { this->bizUsage_ = nullptr;};
        inline string getBizUsage() const { DARABONBA_PTR_GET_DEFAULT(bizUsage_, "") };
        inline Object& setBizUsage(string bizUsage) { DARABONBA_PTR_SET_VALUE(bizUsage_, bizUsage) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline Object& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Object& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // objectType Field Functions 
        bool hasObjectType() const { return this->objectType_ != nullptr;};
        void deleteObjectType() { this->objectType_ = nullptr;};
        inline string getObjectType() const { DARABONBA_PTR_GET_DEFAULT(objectType_, "") };
        inline Object& setObjectType(string objectType) { DARABONBA_PTR_SET_VALUE(objectType_, objectType) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline int64_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0L) };
        inline Object& setStatus(int64_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        shared_ptr<string> bizUsage_ {};
        shared_ptr<int64_t> id_ {};
        shared_ptr<string> name_ {};
        shared_ptr<string> objectType_ {};
        shared_ptr<int64_t> status_ {};
      };

      class Mannequins : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Mannequins& obj) { 
          DARABONBA_PTR_TO_JSON(BizUsage, bizUsage_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(ObjectType, objectType_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, Mannequins& obj) { 
          DARABONBA_PTR_FROM_JSON(BizUsage, bizUsage_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(ObjectType, objectType_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        Mannequins() = default ;
        Mannequins(const Mannequins &) = default ;
        Mannequins(Mannequins &&) = default ;
        Mannequins(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Mannequins() = default ;
        Mannequins& operator=(const Mannequins &) = default ;
        Mannequins& operator=(Mannequins &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->bizUsage_ == nullptr
        && this->id_ == nullptr && this->name_ == nullptr && this->objectType_ == nullptr && this->status_ == nullptr; };
        // bizUsage Field Functions 
        bool hasBizUsage() const { return this->bizUsage_ != nullptr;};
        void deleteBizUsage() { this->bizUsage_ = nullptr;};
        inline string getBizUsage() const { DARABONBA_PTR_GET_DEFAULT(bizUsage_, "") };
        inline Mannequins& setBizUsage(string bizUsage) { DARABONBA_PTR_SET_VALUE(bizUsage_, bizUsage) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline Mannequins& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Mannequins& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // objectType Field Functions 
        bool hasObjectType() const { return this->objectType_ != nullptr;};
        void deleteObjectType() { this->objectType_ = nullptr;};
        inline string getObjectType() const { DARABONBA_PTR_GET_DEFAULT(objectType_, "") };
        inline Mannequins& setObjectType(string objectType) { DARABONBA_PTR_SET_VALUE(objectType_, objectType) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline int64_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0L) };
        inline Mannequins& setStatus(int64_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        shared_ptr<string> bizUsage_ {};
        shared_ptr<int64_t> id_ {};
        shared_ptr<string> name_ {};
        shared_ptr<string> objectType_ {};
        shared_ptr<int64_t> status_ {};
      };

      class HumanPose : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const HumanPose& obj) { 
          DARABONBA_PTR_TO_JSON(BizUsage, bizUsage_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(ObjectType, objectType_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, HumanPose& obj) { 
          DARABONBA_PTR_FROM_JSON(BizUsage, bizUsage_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(ObjectType, objectType_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        HumanPose() = default ;
        HumanPose(const HumanPose &) = default ;
        HumanPose(HumanPose &&) = default ;
        HumanPose(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~HumanPose() = default ;
        HumanPose& operator=(const HumanPose &) = default ;
        HumanPose& operator=(HumanPose &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->bizUsage_ == nullptr
        && this->id_ == nullptr && this->name_ == nullptr && this->objectType_ == nullptr && this->status_ == nullptr; };
        // bizUsage Field Functions 
        bool hasBizUsage() const { return this->bizUsage_ != nullptr;};
        void deleteBizUsage() { this->bizUsage_ = nullptr;};
        inline string getBizUsage() const { DARABONBA_PTR_GET_DEFAULT(bizUsage_, "") };
        inline HumanPose& setBizUsage(string bizUsage) { DARABONBA_PTR_SET_VALUE(bizUsage_, bizUsage) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline HumanPose& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline HumanPose& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // objectType Field Functions 
        bool hasObjectType() const { return this->objectType_ != nullptr;};
        void deleteObjectType() { this->objectType_ = nullptr;};
        inline string getObjectType() const { DARABONBA_PTR_GET_DEFAULT(objectType_, "") };
        inline HumanPose& setObjectType(string objectType) { DARABONBA_PTR_SET_VALUE(objectType_, objectType) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline int64_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0L) };
        inline HumanPose& setStatus(int64_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        shared_ptr<string> bizUsage_ {};
        shared_ptr<int64_t> id_ {};
        shared_ptr<string> name_ {};
        shared_ptr<string> objectType_ {};
        shared_ptr<int64_t> status_ {};
      };

      virtual bool empty() const override { return this->humanPose_ == nullptr
        && this->mannequins_ == nullptr && this->object_ == nullptr && this->objectGeneration_ == nullptr && this->scene_ == nullptr; };
      // humanPose Field Functions 
      bool hasHumanPose() const { return this->humanPose_ != nullptr;};
      void deleteHumanPose() { this->humanPose_ = nullptr;};
      inline const vector<Data::HumanPose> & getHumanPose() const { DARABONBA_PTR_GET_CONST(humanPose_, vector<Data::HumanPose>) };
      inline vector<Data::HumanPose> getHumanPose() { DARABONBA_PTR_GET(humanPose_, vector<Data::HumanPose>) };
      inline Data& setHumanPose(const vector<Data::HumanPose> & humanPose) { DARABONBA_PTR_SET_VALUE(humanPose_, humanPose) };
      inline Data& setHumanPose(vector<Data::HumanPose> && humanPose) { DARABONBA_PTR_SET_RVALUE(humanPose_, humanPose) };


      // mannequins Field Functions 
      bool hasMannequins() const { return this->mannequins_ != nullptr;};
      void deleteMannequins() { this->mannequins_ = nullptr;};
      inline const vector<Data::Mannequins> & getMannequins() const { DARABONBA_PTR_GET_CONST(mannequins_, vector<Data::Mannequins>) };
      inline vector<Data::Mannequins> getMannequins() { DARABONBA_PTR_GET(mannequins_, vector<Data::Mannequins>) };
      inline Data& setMannequins(const vector<Data::Mannequins> & mannequins) { DARABONBA_PTR_SET_VALUE(mannequins_, mannequins) };
      inline Data& setMannequins(vector<Data::Mannequins> && mannequins) { DARABONBA_PTR_SET_RVALUE(mannequins_, mannequins) };


      // object Field Functions 
      bool hasObject() const { return this->object_ != nullptr;};
      void deleteObject() { this->object_ = nullptr;};
      inline const vector<Data::Object> & getObject() const { DARABONBA_PTR_GET_CONST(object_, vector<Data::Object>) };
      inline vector<Data::Object> getObject() { DARABONBA_PTR_GET(object_, vector<Data::Object>) };
      inline Data& setObject(const vector<Data::Object> & object) { DARABONBA_PTR_SET_VALUE(object_, object) };
      inline Data& setObject(vector<Data::Object> && object) { DARABONBA_PTR_SET_RVALUE(object_, object) };


      // objectGeneration Field Functions 
      bool hasObjectGeneration() const { return this->objectGeneration_ != nullptr;};
      void deleteObjectGeneration() { this->objectGeneration_ = nullptr;};
      inline const vector<Data::ObjectGeneration> & getObjectGeneration() const { DARABONBA_PTR_GET_CONST(objectGeneration_, vector<Data::ObjectGeneration>) };
      inline vector<Data::ObjectGeneration> getObjectGeneration() { DARABONBA_PTR_GET(objectGeneration_, vector<Data::ObjectGeneration>) };
      inline Data& setObjectGeneration(const vector<Data::ObjectGeneration> & objectGeneration) { DARABONBA_PTR_SET_VALUE(objectGeneration_, objectGeneration) };
      inline Data& setObjectGeneration(vector<Data::ObjectGeneration> && objectGeneration) { DARABONBA_PTR_SET_RVALUE(objectGeneration_, objectGeneration) };


      // scene Field Functions 
      bool hasScene() const { return this->scene_ != nullptr;};
      void deleteScene() { this->scene_ = nullptr;};
      inline const vector<Data::Scene> & getScene() const { DARABONBA_PTR_GET_CONST(scene_, vector<Data::Scene>) };
      inline vector<Data::Scene> getScene() { DARABONBA_PTR_GET(scene_, vector<Data::Scene>) };
      inline Data& setScene(const vector<Data::Scene> & scene) { DARABONBA_PTR_SET_VALUE(scene_, scene) };
      inline Data& setScene(vector<Data::Scene> && scene) { DARABONBA_PTR_SET_RVALUE(scene_, scene) };


    protected:
      shared_ptr<vector<Data::HumanPose>> humanPose_ {};
      shared_ptr<vector<Data::Mannequins>> mannequins_ {};
      shared_ptr<vector<Data::Object>> object_ {};
      shared_ptr<vector<Data::ObjectGeneration>> objectGeneration_ {};
      shared_ptr<vector<Data::Scene>> scene_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->httpCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListWorkflowResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListWorkflowResponseBody::Data) };
    inline ListWorkflowResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListWorkflowResponseBody::Data) };
    inline ListWorkflowResponseBody& setData(const ListWorkflowResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListWorkflowResponseBody& setData(ListWorkflowResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpCode Field Functions 
    bool hasHttpCode() const { return this->httpCode_ != nullptr;};
    void deleteHttpCode() { this->httpCode_ = nullptr;};
    inline int64_t getHttpCode() const { DARABONBA_PTR_GET_DEFAULT(httpCode_, 0L) };
    inline ListWorkflowResponseBody& setHttpCode(int64_t httpCode) { DARABONBA_PTR_SET_VALUE(httpCode_, httpCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListWorkflowResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListWorkflowResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListWorkflowResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<ListWorkflowResponseBody::Data> data_ {};
    shared_ptr<int64_t> httpCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace XrEngine20221111
#endif
