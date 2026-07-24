// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEIMAGELIBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEIMAGELIBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220926
{
namespace Models
{
  class CreateImageLibRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateImageLibRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(LibName, libName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateImageLibRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(LibName, libName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    CreateImageLibRequest() = default ;
    CreateImageLibRequest(const CreateImageLibRequest &) = default ;
    CreateImageLibRequest(CreateImageLibRequest &&) = default ;
    CreateImageLibRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateImageLibRequest() = default ;
    CreateImageLibRequest& operator=(const CreateImageLibRequest &) = default ;
    CreateImageLibRequest& operator=(CreateImageLibRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->comment_ == nullptr
        && this->libName_ == nullptr && this->regionId_ == nullptr; };
    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline CreateImageLibRequest& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // libName Field Functions 
    bool hasLibName() const { return this->libName_ != nullptr;};
    void deleteLibName() { this->libName_ = nullptr;};
    inline string getLibName() const { DARABONBA_PTR_GET_DEFAULT(libName_, "") };
    inline CreateImageLibRequest& setLibName(string libName) { DARABONBA_PTR_SET_VALUE(libName_, libName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateImageLibRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The remarks.
    shared_ptr<string> comment_ {};
    // The name of the image library.
    shared_ptr<string> libName_ {};
    // The region ID.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220926
#endif
