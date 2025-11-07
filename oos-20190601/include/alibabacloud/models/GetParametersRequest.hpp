// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPARAMETERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETPARAMETERSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
namespace Models
{
  class GetParametersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetParametersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Names, names_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, GetParametersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Names, names_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    GetParametersRequest() = default ;
    GetParametersRequest(const GetParametersRequest &) = default ;
    GetParametersRequest(GetParametersRequest &&) = default ;
    GetParametersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetParametersRequest() = default ;
    GetParametersRequest& operator=(const GetParametersRequest &) = default ;
    GetParametersRequest& operator=(GetParametersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->names_ == nullptr
        && return this->regionId_ == nullptr; };
    // names Field Functions 
    bool hasNames() const { return this->names_ != nullptr;};
    void deleteNames() { this->names_ = nullptr;};
    inline string names() const { DARABONBA_PTR_GET_DEFAULT(names_, "") };
    inline GetParametersRequest& setNames(string names) { DARABONBA_PTR_SET_VALUE(names_, names) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetParametersRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The names of the common parameters.
    // 
    // This parameter is required.
    std::shared_ptr<string> names_ = nullptr;
    // The ID of the region.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
