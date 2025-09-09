// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEORDERFORRDSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEORDERFORRDSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Drds20190123
{
namespace Models
{
  class CreateOrderForRdsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateOrderForRdsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Params, params_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateOrderForRdsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Params, params_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    CreateOrderForRdsRequest() = default ;
    CreateOrderForRdsRequest(const CreateOrderForRdsRequest &) = default ;
    CreateOrderForRdsRequest(CreateOrderForRdsRequest &&) = default ;
    CreateOrderForRdsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateOrderForRdsRequest() = default ;
    CreateOrderForRdsRequest& operator=(const CreateOrderForRdsRequest &) = default ;
    CreateOrderForRdsRequest& operator=(CreateOrderForRdsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->params_ != nullptr
        && this->regionId_ != nullptr; };
    // params Field Functions 
    bool hasParams() const { return this->params_ != nullptr;};
    void deleteParams() { this->params_ = nullptr;};
    inline string params() const { DARABONBA_PTR_GET_DEFAULT(params_, "") };
    inline CreateOrderForRdsRequest& setParams(string params) { DARABONBA_PTR_SET_VALUE(params_, params) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateOrderForRdsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The JSON string that contains the order details. For more information, see [CreateDBInstance](https://help.aliyun.com/document_detail/26228.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> params_ = nullptr;
    // The ID of the region.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Drds20190123
#endif
