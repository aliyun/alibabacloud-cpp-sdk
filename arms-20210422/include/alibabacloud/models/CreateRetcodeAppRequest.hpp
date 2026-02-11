// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATERETCODEAPPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATERETCODEAPPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20210422
{
namespace Models
{
  class CreateRetcodeAppRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRetcodeAppRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RetcodeAppName, retcodeAppName_);
      DARABONBA_PTR_TO_JSON(RetcodeAppType, retcodeAppType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRetcodeAppRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RetcodeAppName, retcodeAppName_);
      DARABONBA_PTR_FROM_JSON(RetcodeAppType, retcodeAppType_);
    };
    CreateRetcodeAppRequest() = default ;
    CreateRetcodeAppRequest(const CreateRetcodeAppRequest &) = default ;
    CreateRetcodeAppRequest(CreateRetcodeAppRequest &&) = default ;
    CreateRetcodeAppRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRetcodeAppRequest() = default ;
    CreateRetcodeAppRequest& operator=(const CreateRetcodeAppRequest &) = default ;
    CreateRetcodeAppRequest& operator=(CreateRetcodeAppRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->regionId_ == nullptr
        && this->retcodeAppName_ == nullptr && this->retcodeAppType_ == nullptr; };
    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateRetcodeAppRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // retcodeAppName Field Functions 
    bool hasRetcodeAppName() const { return this->retcodeAppName_ != nullptr;};
    void deleteRetcodeAppName() { this->retcodeAppName_ = nullptr;};
    inline string getRetcodeAppName() const { DARABONBA_PTR_GET_DEFAULT(retcodeAppName_, "") };
    inline CreateRetcodeAppRequest& setRetcodeAppName(string retcodeAppName) { DARABONBA_PTR_SET_VALUE(retcodeAppName_, retcodeAppName) };


    // retcodeAppType Field Functions 
    bool hasRetcodeAppType() const { return this->retcodeAppType_ != nullptr;};
    void deleteRetcodeAppType() { this->retcodeAppType_ = nullptr;};
    inline string getRetcodeAppType() const { DARABONBA_PTR_GET_DEFAULT(retcodeAppType_, "") };
    inline CreateRetcodeAppRequest& setRetcodeAppType(string retcodeAppType) { DARABONBA_PTR_SET_VALUE(retcodeAppType_, retcodeAppType) };


  protected:
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // This parameter is required.
    shared_ptr<string> retcodeAppName_ {};
    // This parameter is required.
    shared_ptr<string> retcodeAppType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20210422
#endif
