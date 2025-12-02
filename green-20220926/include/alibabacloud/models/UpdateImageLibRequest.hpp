// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEIMAGELIBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEIMAGELIBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220926
{
namespace Models
{
  class UpdateImageLibRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateImageLibRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(FreeInspection, freeInspection_);
      DARABONBA_PTR_TO_JSON(LibId, libId_);
      DARABONBA_PTR_TO_JSON(LibName, libName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateImageLibRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(FreeInspection, freeInspection_);
      DARABONBA_PTR_FROM_JSON(LibId, libId_);
      DARABONBA_PTR_FROM_JSON(LibName, libName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    UpdateImageLibRequest() = default ;
    UpdateImageLibRequest(const UpdateImageLibRequest &) = default ;
    UpdateImageLibRequest(UpdateImageLibRequest &&) = default ;
    UpdateImageLibRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateImageLibRequest() = default ;
    UpdateImageLibRequest& operator=(const UpdateImageLibRequest &) = default ;
    UpdateImageLibRequest& operator=(UpdateImageLibRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->comment_ == nullptr
        && return this->freeInspection_ == nullptr && return this->libId_ == nullptr && return this->libName_ == nullptr && return this->regionId_ == nullptr; };
    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string comment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline UpdateImageLibRequest& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // freeInspection Field Functions 
    bool hasFreeInspection() const { return this->freeInspection_ != nullptr;};
    void deleteFreeInspection() { this->freeInspection_ = nullptr;};
    inline int32_t freeInspection() const { DARABONBA_PTR_GET_DEFAULT(freeInspection_, 0) };
    inline UpdateImageLibRequest& setFreeInspection(int32_t freeInspection) { DARABONBA_PTR_SET_VALUE(freeInspection_, freeInspection) };


    // libId Field Functions 
    bool hasLibId() const { return this->libId_ != nullptr;};
    void deleteLibId() { this->libId_ = nullptr;};
    inline string libId() const { DARABONBA_PTR_GET_DEFAULT(libId_, "") };
    inline UpdateImageLibRequest& setLibId(string libId) { DARABONBA_PTR_SET_VALUE(libId_, libId) };


    // libName Field Functions 
    bool hasLibName() const { return this->libName_ != nullptr;};
    void deleteLibName() { this->libName_ = nullptr;};
    inline string libName() const { DARABONBA_PTR_GET_DEFAULT(libName_, "") };
    inline UpdateImageLibRequest& setLibName(string libName) { DARABONBA_PTR_SET_VALUE(libName_, libName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateImageLibRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // Comment information for the library.
    std::shared_ptr<string> comment_ = nullptr;
    // Exemption from review configuration.
    std::shared_ptr<int32_t> freeInspection_ = nullptr;
    // Library ID.
    std::shared_ptr<string> libId_ = nullptr;
    // Library name.
    std::shared_ptr<string> libName_ = nullptr;
    // Region ID.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220926
#endif
