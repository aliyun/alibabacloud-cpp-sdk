// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAGGREGATERESOURCEINVENTORYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETAGGREGATERESOURCEINVENTORYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class GetAggregateResourceInventoryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAggregateResourceInventoryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AggregatorId, aggregatorId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAggregateResourceInventoryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AggregatorId, aggregatorId_);
    };
    GetAggregateResourceInventoryRequest() = default ;
    GetAggregateResourceInventoryRequest(const GetAggregateResourceInventoryRequest &) = default ;
    GetAggregateResourceInventoryRequest(GetAggregateResourceInventoryRequest &&) = default ;
    GetAggregateResourceInventoryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAggregateResourceInventoryRequest() = default ;
    GetAggregateResourceInventoryRequest& operator=(const GetAggregateResourceInventoryRequest &) = default ;
    GetAggregateResourceInventoryRequest& operator=(GetAggregateResourceInventoryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aggregatorId_ == nullptr; };
    // aggregatorId Field Functions 
    bool hasAggregatorId() const { return this->aggregatorId_ != nullptr;};
    void deleteAggregatorId() { this->aggregatorId_ = nullptr;};
    inline string aggregatorId() const { DARABONBA_PTR_GET_DEFAULT(aggregatorId_, "") };
    inline GetAggregateResourceInventoryRequest& setAggregatorId(string aggregatorId) { DARABONBA_PTR_SET_VALUE(aggregatorId_, aggregatorId) };


  protected:
    // The ID of the account group.
    // 
    // For more information about how to obtain the ID of an account group, see [ListAggregators](https://help.aliyun.com/document_detail/255797.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> aggregatorId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
