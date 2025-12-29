// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMPORTHOTELCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_IMPORTHOTELCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieip_1_0
{
namespace Models
{
  class ImportHotelConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImportHotelConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(HotelId, hotelId_);
      DARABONBA_PTR_TO_JSON(ImportHotelConfig, importHotelConfig_);
    };
    friend void from_json(const Darabonba::Json& j, ImportHotelConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(HotelId, hotelId_);
      DARABONBA_PTR_FROM_JSON(ImportHotelConfig, importHotelConfig_);
    };
    ImportHotelConfigRequest() = default ;
    ImportHotelConfigRequest(const ImportHotelConfigRequest &) = default ;
    ImportHotelConfigRequest(ImportHotelConfigRequest &&) = default ;
    ImportHotelConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImportHotelConfigRequest() = default ;
    ImportHotelConfigRequest& operator=(const ImportHotelConfigRequest &) = default ;
    ImportHotelConfigRequest& operator=(ImportHotelConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ImportHotelConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ImportHotelConfig& obj) { 
        DARABONBA_PTR_TO_JSON(RcuCustomScenes, rcuCustomScenes_);
      };
      friend void from_json(const Darabonba::Json& j, ImportHotelConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(RcuCustomScenes, rcuCustomScenes_);
      };
      ImportHotelConfig() = default ;
      ImportHotelConfig(const ImportHotelConfig &) = default ;
      ImportHotelConfig(ImportHotelConfig &&) = default ;
      ImportHotelConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ImportHotelConfig() = default ;
      ImportHotelConfig& operator=(const ImportHotelConfig &) = default ;
      ImportHotelConfig& operator=(ImportHotelConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class RcuCustomScenes : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RcuCustomScenes& obj) { 
          DARABONBA_PTR_TO_JSON(CorpusList, corpusList_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(Icon, icon_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(SceneId, sceneId_);
        };
        friend void from_json(const Darabonba::Json& j, RcuCustomScenes& obj) { 
          DARABONBA_PTR_FROM_JSON(CorpusList, corpusList_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(Icon, icon_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(SceneId, sceneId_);
        };
        RcuCustomScenes() = default ;
        RcuCustomScenes(const RcuCustomScenes &) = default ;
        RcuCustomScenes(RcuCustomScenes &&) = default ;
        RcuCustomScenes(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RcuCustomScenes() = default ;
        RcuCustomScenes& operator=(const RcuCustomScenes &) = default ;
        RcuCustomScenes& operator=(RcuCustomScenes &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->corpusList_ == nullptr
        && this->description_ == nullptr && this->icon_ == nullptr && this->name_ == nullptr && this->sceneId_ == nullptr; };
        // corpusList Field Functions 
        bool hasCorpusList() const { return this->corpusList_ != nullptr;};
        void deleteCorpusList() { this->corpusList_ = nullptr;};
        inline const vector<string> & getCorpusList() const { DARABONBA_PTR_GET_CONST(corpusList_, vector<string>) };
        inline vector<string> getCorpusList() { DARABONBA_PTR_GET(corpusList_, vector<string>) };
        inline RcuCustomScenes& setCorpusList(const vector<string> & corpusList) { DARABONBA_PTR_SET_VALUE(corpusList_, corpusList) };
        inline RcuCustomScenes& setCorpusList(vector<string> && corpusList) { DARABONBA_PTR_SET_RVALUE(corpusList_, corpusList) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline RcuCustomScenes& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // icon Field Functions 
        bool hasIcon() const { return this->icon_ != nullptr;};
        void deleteIcon() { this->icon_ = nullptr;};
        inline string getIcon() const { DARABONBA_PTR_GET_DEFAULT(icon_, "") };
        inline RcuCustomScenes& setIcon(string icon) { DARABONBA_PTR_SET_VALUE(icon_, icon) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline RcuCustomScenes& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // sceneId Field Functions 
        bool hasSceneId() const { return this->sceneId_ != nullptr;};
        void deleteSceneId() { this->sceneId_ = nullptr;};
        inline string getSceneId() const { DARABONBA_PTR_GET_DEFAULT(sceneId_, "") };
        inline RcuCustomScenes& setSceneId(string sceneId) { DARABONBA_PTR_SET_VALUE(sceneId_, sceneId) };


      protected:
        // This parameter is required.
        shared_ptr<vector<string>> corpusList_ {};
        shared_ptr<string> description_ {};
        shared_ptr<string> icon_ {};
        // This parameter is required.
        shared_ptr<string> name_ {};
        // This parameter is required.
        shared_ptr<string> sceneId_ {};
      };

      virtual bool empty() const override { return this->rcuCustomScenes_ == nullptr; };
      // rcuCustomScenes Field Functions 
      bool hasRcuCustomScenes() const { return this->rcuCustomScenes_ != nullptr;};
      void deleteRcuCustomScenes() { this->rcuCustomScenes_ = nullptr;};
      inline const vector<ImportHotelConfig::RcuCustomScenes> & getRcuCustomScenes() const { DARABONBA_PTR_GET_CONST(rcuCustomScenes_, vector<ImportHotelConfig::RcuCustomScenes>) };
      inline vector<ImportHotelConfig::RcuCustomScenes> getRcuCustomScenes() { DARABONBA_PTR_GET(rcuCustomScenes_, vector<ImportHotelConfig::RcuCustomScenes>) };
      inline ImportHotelConfig& setRcuCustomScenes(const vector<ImportHotelConfig::RcuCustomScenes> & rcuCustomScenes) { DARABONBA_PTR_SET_VALUE(rcuCustomScenes_, rcuCustomScenes) };
      inline ImportHotelConfig& setRcuCustomScenes(vector<ImportHotelConfig::RcuCustomScenes> && rcuCustomScenes) { DARABONBA_PTR_SET_RVALUE(rcuCustomScenes_, rcuCustomScenes) };


    protected:
      shared_ptr<vector<ImportHotelConfig::RcuCustomScenes>> rcuCustomScenes_ {};
    };

    virtual bool empty() const override { return this->hotelId_ == nullptr
        && this->importHotelConfig_ == nullptr; };
    // hotelId Field Functions 
    bool hasHotelId() const { return this->hotelId_ != nullptr;};
    void deleteHotelId() { this->hotelId_ = nullptr;};
    inline string getHotelId() const { DARABONBA_PTR_GET_DEFAULT(hotelId_, "") };
    inline ImportHotelConfigRequest& setHotelId(string hotelId) { DARABONBA_PTR_SET_VALUE(hotelId_, hotelId) };


    // importHotelConfig Field Functions 
    bool hasImportHotelConfig() const { return this->importHotelConfig_ != nullptr;};
    void deleteImportHotelConfig() { this->importHotelConfig_ = nullptr;};
    inline const ImportHotelConfigRequest::ImportHotelConfig & getImportHotelConfig() const { DARABONBA_PTR_GET_CONST(importHotelConfig_, ImportHotelConfigRequest::ImportHotelConfig) };
    inline ImportHotelConfigRequest::ImportHotelConfig getImportHotelConfig() { DARABONBA_PTR_GET(importHotelConfig_, ImportHotelConfigRequest::ImportHotelConfig) };
    inline ImportHotelConfigRequest& setImportHotelConfig(const ImportHotelConfigRequest::ImportHotelConfig & importHotelConfig) { DARABONBA_PTR_SET_VALUE(importHotelConfig_, importHotelConfig) };
    inline ImportHotelConfigRequest& setImportHotelConfig(ImportHotelConfigRequest::ImportHotelConfig && importHotelConfig) { DARABONBA_PTR_SET_RVALUE(importHotelConfig_, importHotelConfig) };


  protected:
    // This parameter is required.
    shared_ptr<string> hotelId_ {};
    // This parameter is required.
    shared_ptr<ImportHotelConfigRequest::ImportHotelConfig> importHotelConfig_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieip_1_0
#endif
