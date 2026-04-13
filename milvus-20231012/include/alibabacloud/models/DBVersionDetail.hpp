// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DBVERSIONDETAIL_HPP_
#define ALIBABACLOUD_MODELS_DBVERSIONDETAIL_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Milvus20231012
{
namespace Models
{
  class DBVersionDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DBVersionDetail& obj) { 
      DARABONBA_PTR_TO_JSON(specs, specs_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(version, version_);
    };
    friend void from_json(const Darabonba::Json& j, DBVersionDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(specs, specs_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(version, version_);
    };
    DBVersionDetail() = default ;
    DBVersionDetail(const DBVersionDetail &) = default ;
    DBVersionDetail(DBVersionDetail &&) = default ;
    DBVersionDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DBVersionDetail() = default ;
    DBVersionDetail& operator=(const DBVersionDetail &) = default ;
    DBVersionDetail& operator=(DBVersionDetail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Specs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Specs& obj) { 
        DARABONBA_PTR_TO_JSON(componentSpecs, componentSpecs_);
        DARABONBA_PTR_TO_JSON(isHA, isHA_);
        DARABONBA_PTR_TO_JSON(isStandalone, isStandalone_);
        DARABONBA_PTR_TO_JSON(isStandalonePro, isStandalonePro_);
        DARABONBA_PTR_TO_JSON(zoneMode, zoneMode_);
      };
      friend void from_json(const Darabonba::Json& j, Specs& obj) { 
        DARABONBA_PTR_FROM_JSON(componentSpecs, componentSpecs_);
        DARABONBA_PTR_FROM_JSON(isHA, isHA_);
        DARABONBA_PTR_FROM_JSON(isStandalone, isStandalone_);
        DARABONBA_PTR_FROM_JSON(isStandalonePro, isStandalonePro_);
        DARABONBA_PTR_FROM_JSON(zoneMode, zoneMode_);
      };
      Specs() = default ;
      Specs(const Specs &) = default ;
      Specs(Specs &&) = default ;
      Specs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Specs() = default ;
      Specs& operator=(const Specs &) = default ;
      Specs& operator=(Specs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ComponentSpecs : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ComponentSpecs& obj) { 
          DARABONBA_PTR_TO_JSON(defaultReplicas, defaultReplicas_);
          DARABONBA_PTR_TO_JSON(maxReplicas, maxReplicas_);
          DARABONBA_PTR_TO_JSON(minReplicas, minReplicas_);
          DARABONBA_PTR_TO_JSON(name, name_);
          DARABONBA_PTR_TO_JSON(specs, specs_);
          DARABONBA_PTR_TO_JSON(step, step_);
          DARABONBA_PTR_TO_JSON(type, type_);
        };
        friend void from_json(const Darabonba::Json& j, ComponentSpecs& obj) { 
          DARABONBA_PTR_FROM_JSON(defaultReplicas, defaultReplicas_);
          DARABONBA_PTR_FROM_JSON(maxReplicas, maxReplicas_);
          DARABONBA_PTR_FROM_JSON(minReplicas, minReplicas_);
          DARABONBA_PTR_FROM_JSON(name, name_);
          DARABONBA_PTR_FROM_JSON(specs, specs_);
          DARABONBA_PTR_FROM_JSON(step, step_);
          DARABONBA_PTR_FROM_JSON(type, type_);
        };
        ComponentSpecs() = default ;
        ComponentSpecs(const ComponentSpecs &) = default ;
        ComponentSpecs(ComponentSpecs &&) = default ;
        ComponentSpecs(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ComponentSpecs() = default ;
        ComponentSpecs& operator=(const ComponentSpecs &) = default ;
        ComponentSpecs& operator=(ComponentSpecs &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->defaultReplicas_ == nullptr
        && this->maxReplicas_ == nullptr && this->minReplicas_ == nullptr && this->name_ == nullptr && this->specs_ == nullptr && this->step_ == nullptr
        && this->type_ == nullptr; };
        // defaultReplicas Field Functions 
        bool hasDefaultReplicas() const { return this->defaultReplicas_ != nullptr;};
        void deleteDefaultReplicas() { this->defaultReplicas_ = nullptr;};
        inline int32_t getDefaultReplicas() const { DARABONBA_PTR_GET_DEFAULT(defaultReplicas_, 0) };
        inline ComponentSpecs& setDefaultReplicas(int32_t defaultReplicas) { DARABONBA_PTR_SET_VALUE(defaultReplicas_, defaultReplicas) };


        // maxReplicas Field Functions 
        bool hasMaxReplicas() const { return this->maxReplicas_ != nullptr;};
        void deleteMaxReplicas() { this->maxReplicas_ = nullptr;};
        inline int32_t getMaxReplicas() const { DARABONBA_PTR_GET_DEFAULT(maxReplicas_, 0) };
        inline ComponentSpecs& setMaxReplicas(int32_t maxReplicas) { DARABONBA_PTR_SET_VALUE(maxReplicas_, maxReplicas) };


        // minReplicas Field Functions 
        bool hasMinReplicas() const { return this->minReplicas_ != nullptr;};
        void deleteMinReplicas() { this->minReplicas_ = nullptr;};
        inline int32_t getMinReplicas() const { DARABONBA_PTR_GET_DEFAULT(minReplicas_, 0) };
        inline ComponentSpecs& setMinReplicas(int32_t minReplicas) { DARABONBA_PTR_SET_VALUE(minReplicas_, minReplicas) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline ComponentSpecs& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // specs Field Functions 
        bool hasSpecs() const { return this->specs_ != nullptr;};
        void deleteSpecs() { this->specs_ = nullptr;};
        inline const vector<string> & getSpecs() const { DARABONBA_PTR_GET_CONST(specs_, vector<string>) };
        inline vector<string> getSpecs() { DARABONBA_PTR_GET(specs_, vector<string>) };
        inline ComponentSpecs& setSpecs(const vector<string> & specs) { DARABONBA_PTR_SET_VALUE(specs_, specs) };
        inline ComponentSpecs& setSpecs(vector<string> && specs) { DARABONBA_PTR_SET_RVALUE(specs_, specs) };


        // step Field Functions 
        bool hasStep() const { return this->step_ != nullptr;};
        void deleteStep() { this->step_ = nullptr;};
        inline int32_t getStep() const { DARABONBA_PTR_GET_DEFAULT(step_, 0) };
        inline ComponentSpecs& setStep(int32_t step) { DARABONBA_PTR_SET_VALUE(step_, step) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline ComponentSpecs& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        shared_ptr<int32_t> defaultReplicas_ {};
        shared_ptr<int32_t> maxReplicas_ {};
        shared_ptr<int32_t> minReplicas_ {};
        shared_ptr<string> name_ {};
        shared_ptr<vector<string>> specs_ {};
        shared_ptr<int32_t> step_ {};
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->componentSpecs_ == nullptr
        && this->isHA_ == nullptr && this->isStandalone_ == nullptr && this->isStandalonePro_ == nullptr && this->zoneMode_ == nullptr; };
      // componentSpecs Field Functions 
      bool hasComponentSpecs() const { return this->componentSpecs_ != nullptr;};
      void deleteComponentSpecs() { this->componentSpecs_ = nullptr;};
      inline const vector<Specs::ComponentSpecs> & getComponentSpecs() const { DARABONBA_PTR_GET_CONST(componentSpecs_, vector<Specs::ComponentSpecs>) };
      inline vector<Specs::ComponentSpecs> getComponentSpecs() { DARABONBA_PTR_GET(componentSpecs_, vector<Specs::ComponentSpecs>) };
      inline Specs& setComponentSpecs(const vector<Specs::ComponentSpecs> & componentSpecs) { DARABONBA_PTR_SET_VALUE(componentSpecs_, componentSpecs) };
      inline Specs& setComponentSpecs(vector<Specs::ComponentSpecs> && componentSpecs) { DARABONBA_PTR_SET_RVALUE(componentSpecs_, componentSpecs) };


      // isHA Field Functions 
      bool hasIsHA() const { return this->isHA_ != nullptr;};
      void deleteIsHA() { this->isHA_ = nullptr;};
      inline bool getIsHA() const { DARABONBA_PTR_GET_DEFAULT(isHA_, false) };
      inline Specs& setIsHA(bool isHA) { DARABONBA_PTR_SET_VALUE(isHA_, isHA) };


      // isStandalone Field Functions 
      bool hasIsStandalone() const { return this->isStandalone_ != nullptr;};
      void deleteIsStandalone() { this->isStandalone_ = nullptr;};
      inline bool getIsStandalone() const { DARABONBA_PTR_GET_DEFAULT(isStandalone_, false) };
      inline Specs& setIsStandalone(bool isStandalone) { DARABONBA_PTR_SET_VALUE(isStandalone_, isStandalone) };


      // isStandalonePro Field Functions 
      bool hasIsStandalonePro() const { return this->isStandalonePro_ != nullptr;};
      void deleteIsStandalonePro() { this->isStandalonePro_ = nullptr;};
      inline bool getIsStandalonePro() const { DARABONBA_PTR_GET_DEFAULT(isStandalonePro_, false) };
      inline Specs& setIsStandalonePro(bool isStandalonePro) { DARABONBA_PTR_SET_VALUE(isStandalonePro_, isStandalonePro) };


      // zoneMode Field Functions 
      bool hasZoneMode() const { return this->zoneMode_ != nullptr;};
      void deleteZoneMode() { this->zoneMode_ = nullptr;};
      inline string getZoneMode() const { DARABONBA_PTR_GET_DEFAULT(zoneMode_, "") };
      inline Specs& setZoneMode(string zoneMode) { DARABONBA_PTR_SET_VALUE(zoneMode_, zoneMode) };


    protected:
      shared_ptr<vector<Specs::ComponentSpecs>> componentSpecs_ {};
      shared_ptr<bool> isHA_ {};
      shared_ptr<bool> isStandalone_ {};
      shared_ptr<bool> isStandalonePro_ {};
      shared_ptr<string> zoneMode_ {};
    };

    virtual bool empty() const override { return this->specs_ == nullptr
        && this->status_ == nullptr && this->version_ == nullptr; };
    // specs Field Functions 
    bool hasSpecs() const { return this->specs_ != nullptr;};
    void deleteSpecs() { this->specs_ = nullptr;};
    inline const vector<DBVersionDetail::Specs> & getSpecs() const { DARABONBA_PTR_GET_CONST(specs_, vector<DBVersionDetail::Specs>) };
    inline vector<DBVersionDetail::Specs> getSpecs() { DARABONBA_PTR_GET(specs_, vector<DBVersionDetail::Specs>) };
    inline DBVersionDetail& setSpecs(const vector<DBVersionDetail::Specs> & specs) { DARABONBA_PTR_SET_VALUE(specs_, specs) };
    inline DBVersionDetail& setSpecs(vector<DBVersionDetail::Specs> && specs) { DARABONBA_PTR_SET_RVALUE(specs_, specs) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DBVersionDetail& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline DBVersionDetail& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    shared_ptr<vector<DBVersionDetail::Specs>> specs_ {};
    shared_ptr<string> status_ {};
    shared_ptr<string> version_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Milvus20231012
#endif
