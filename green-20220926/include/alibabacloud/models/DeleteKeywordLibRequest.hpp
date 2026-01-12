// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEKEYWORDLIBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEKEYWORDLIBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220926
{
namespace Models
{
  class DeleteKeywordLibRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteKeywordLibRequest& obj) { 
      DARABONBA_PTR_TO_JSON(LibId, libId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteKeywordLibRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(LibId, libId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DeleteKeywordLibRequest() = default ;
    DeleteKeywordLibRequest(const DeleteKeywordLibRequest &) = default ;
    DeleteKeywordLibRequest(DeleteKeywordLibRequest &&) = default ;
    DeleteKeywordLibRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteKeywordLibRequest() = default ;
    DeleteKeywordLibRequest& operator=(const DeleteKeywordLibRequest &) = default ;
    DeleteKeywordLibRequest& operator=(DeleteKeywordLibRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->libId_ == nullptr
        && this->regionId_ == nullptr; };
    // libId Field Functions 
    bool hasLibId() const { return this->libId_ != nullptr;};
    void deleteLibId() { this->libId_ = nullptr;};
    inline string getLibId() const { DARABONBA_PTR_GET_DEFAULT(libId_, "") };
    inline DeleteKeywordLibRequest& setLibId(string libId) { DARABONBA_PTR_SET_VALUE(libId_, libId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeleteKeywordLibRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // Keyword library ID.
    shared_ptr<string> libId_ {};
    // Region ID.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220926
#endif
