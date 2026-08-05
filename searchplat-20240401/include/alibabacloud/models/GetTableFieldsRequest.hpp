// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTABLEFIELDSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETTABLEFIELDSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchplat20240401
{
namespace Models
{
  class GetTableFieldsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTableFieldsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(params, params_);
      DARABONBA_PTR_TO_JSON(rawType, rawType_);
      DARABONBA_PTR_TO_JSON(regionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, GetTableFieldsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(params, params_);
      DARABONBA_PTR_FROM_JSON(rawType, rawType_);
      DARABONBA_PTR_FROM_JSON(regionId, regionId_);
    };
    GetTableFieldsRequest() = default ;
    GetTableFieldsRequest(const GetTableFieldsRequest &) = default ;
    GetTableFieldsRequest(GetTableFieldsRequest &&) = default ;
    GetTableFieldsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTableFieldsRequest() = default ;
    GetTableFieldsRequest& operator=(const GetTableFieldsRequest &) = default ;
    GetTableFieldsRequest& operator=(GetTableFieldsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->params_ == nullptr
        && this->rawType_ == nullptr && this->regionId_ == nullptr; };
    // params Field Functions 
    bool hasParams() const { return this->params_ != nullptr;};
    void deleteParams() { this->params_ = nullptr;};
    inline string getParams() const { DARABONBA_PTR_GET_DEFAULT(params_, "") };
    inline GetTableFieldsRequest& setParams(string params) { DARABONBA_PTR_SET_VALUE(params_, params) };


    // rawType Field Functions 
    bool hasRawType() const { return this->rawType_ != nullptr;};
    void deleteRawType() { this->rawType_ = nullptr;};
    inline bool getRawType() const { DARABONBA_PTR_GET_DEFAULT(rawType_, false) };
    inline GetTableFieldsRequest& setRawType(bool rawType) { DARABONBA_PTR_SET_VALUE(rawType_, rawType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetTableFieldsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The data source parameters.
    // 
    // This parameter is required.
    shared_ptr<string> params_ {};
    // Specifies whether to return the original field types of the data source.
    shared_ptr<bool> rawType_ {};
    // The region ID.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchplat20240401
#endif
