// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEKEYWORDLIBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEKEYWORDLIBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220926
{
namespace Models
{
  class UpdateKeywordLibRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateKeywordLibRequest& obj) { 
      DARABONBA_PTR_TO_JSON(LibId, libId_);
      DARABONBA_PTR_TO_JSON(LibName, libName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateKeywordLibRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(LibId, libId_);
      DARABONBA_PTR_FROM_JSON(LibName, libName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    UpdateKeywordLibRequest() = default ;
    UpdateKeywordLibRequest(const UpdateKeywordLibRequest &) = default ;
    UpdateKeywordLibRequest(UpdateKeywordLibRequest &&) = default ;
    UpdateKeywordLibRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateKeywordLibRequest() = default ;
    UpdateKeywordLibRequest& operator=(const UpdateKeywordLibRequest &) = default ;
    UpdateKeywordLibRequest& operator=(UpdateKeywordLibRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->libId_ == nullptr
        && this->libName_ == nullptr && this->regionId_ == nullptr; };
    // libId Field Functions 
    bool hasLibId() const { return this->libId_ != nullptr;};
    void deleteLibId() { this->libId_ = nullptr;};
    inline string getLibId() const { DARABONBA_PTR_GET_DEFAULT(libId_, "") };
    inline UpdateKeywordLibRequest& setLibId(string libId) { DARABONBA_PTR_SET_VALUE(libId_, libId) };


    // libName Field Functions 
    bool hasLibName() const { return this->libName_ != nullptr;};
    void deleteLibName() { this->libName_ = nullptr;};
    inline string getLibName() const { DARABONBA_PTR_GET_DEFAULT(libName_, "") };
    inline UpdateKeywordLibRequest& setLibName(string libName) { DARABONBA_PTR_SET_VALUE(libName_, libName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateKeywordLibRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // Library ID.
    shared_ptr<string> libId_ {};
    // Keyword library name.
    shared_ptr<string> libName_ {};
    // Region ID.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220926
#endif
