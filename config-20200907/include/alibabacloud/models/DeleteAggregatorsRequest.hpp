// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEAGGREGATORSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEAGGREGATORSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class DeleteAggregatorsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteAggregatorsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AggregatorIds, aggregatorIds_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteAggregatorsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AggregatorIds, aggregatorIds_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
    };
    DeleteAggregatorsRequest() = default ;
    DeleteAggregatorsRequest(const DeleteAggregatorsRequest &) = default ;
    DeleteAggregatorsRequest(DeleteAggregatorsRequest &&) = default ;
    DeleteAggregatorsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteAggregatorsRequest() = default ;
    DeleteAggregatorsRequest& operator=(const DeleteAggregatorsRequest &) = default ;
    DeleteAggregatorsRequest& operator=(DeleteAggregatorsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aggregatorIds_ == nullptr
        && return this->clientToken_ == nullptr; };
    // aggregatorIds Field Functions 
    bool hasAggregatorIds() const { return this->aggregatorIds_ != nullptr;};
    void deleteAggregatorIds() { this->aggregatorIds_ = nullptr;};
    inline string aggregatorIds() const { DARABONBA_PTR_GET_DEFAULT(aggregatorIds_, "") };
    inline DeleteAggregatorsRequest& setAggregatorIds(string aggregatorIds) { DARABONBA_PTR_SET_VALUE(aggregatorIds_, aggregatorIds) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline DeleteAggregatorsRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


  protected:
    // The ID of the account group. Separate multiple IDs with commas (,).
    // 
    // This parameter is required.
    std::shared_ptr<string> aggregatorIds_ = nullptr;
    // The client token that you want to use to ensure the idempotency of the request. You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters and cannot exceed 64 characters in length.
    std::shared_ptr<string> clientToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
