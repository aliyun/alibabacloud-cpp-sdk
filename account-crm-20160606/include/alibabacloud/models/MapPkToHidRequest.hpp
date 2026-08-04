// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MAPPKTOHIDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MAPPKTOHIDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AccountCrm20160606
{
namespace Models
{
  class MapPkToHidRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MapPkToHidRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(MappingScenes, mappingScenes_);
      DARABONBA_PTR_TO_JSON(Pk, pk_);
    };
    friend void from_json(const Darabonba::Json& j, MapPkToHidRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(MappingScenes, mappingScenes_);
      DARABONBA_PTR_FROM_JSON(Pk, pk_);
    };
    MapPkToHidRequest() = default ;
    MapPkToHidRequest(const MapPkToHidRequest &) = default ;
    MapPkToHidRequest(MapPkToHidRequest &&) = default ;
    MapPkToHidRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MapPkToHidRequest() = default ;
    MapPkToHidRequest& operator=(const MapPkToHidRequest &) = default ;
    MapPkToHidRequest& operator=(MapPkToHidRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appName_ == nullptr
        && this->mappingScenes_ == nullptr && this->pk_ == nullptr; };
    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline MapPkToHidRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // mappingScenes Field Functions 
    bool hasMappingScenes() const { return this->mappingScenes_ != nullptr;};
    void deleteMappingScenes() { this->mappingScenes_ = nullptr;};
    inline string getMappingScenes() const { DARABONBA_PTR_GET_DEFAULT(mappingScenes_, "") };
    inline MapPkToHidRequest& setMappingScenes(string mappingScenes) { DARABONBA_PTR_SET_VALUE(mappingScenes_, mappingScenes) };


    // pk Field Functions 
    bool hasPk() const { return this->pk_ != nullptr;};
    void deletePk() { this->pk_ = nullptr;};
    inline string getPk() const { DARABONBA_PTR_GET_DEFAULT(pk_, "") };
    inline MapPkToHidRequest& setPk(string pk) { DARABONBA_PTR_SET_VALUE(pk_, pk) };


  protected:
    // This parameter is required.
    shared_ptr<string> appName_ {};
    // This parameter is required.
    shared_ptr<string> mappingScenes_ {};
    // This parameter is required.
    shared_ptr<string> pk_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AccountCrm20160606
#endif
