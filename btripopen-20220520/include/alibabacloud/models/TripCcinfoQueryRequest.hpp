// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRIPCCINFOQUERYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_TRIPCCINFOQUERYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class TripCCInfoQueryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TripCCInfoQueryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(business_instance_id, businessInstanceId_);
      DARABONBA_PTR_TO_JSON(node_id, nodeId_);
      DARABONBA_PTR_TO_JSON(third_business_id, thirdBusinessId_);
    };
    friend void from_json(const Darabonba::Json& j, TripCCInfoQueryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(business_instance_id, businessInstanceId_);
      DARABONBA_PTR_FROM_JSON(node_id, nodeId_);
      DARABONBA_PTR_FROM_JSON(third_business_id, thirdBusinessId_);
    };
    TripCCInfoQueryRequest() = default ;
    TripCCInfoQueryRequest(const TripCCInfoQueryRequest &) = default ;
    TripCCInfoQueryRequest(TripCCInfoQueryRequest &&) = default ;
    TripCCInfoQueryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TripCCInfoQueryRequest() = default ;
    TripCCInfoQueryRequest& operator=(const TripCCInfoQueryRequest &) = default ;
    TripCCInfoQueryRequest& operator=(TripCCInfoQueryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->businessInstanceId_ != nullptr
        && this->nodeId_ != nullptr && this->thirdBusinessId_ != nullptr; };
    // businessInstanceId Field Functions 
    bool hasBusinessInstanceId() const { return this->businessInstanceId_ != nullptr;};
    void deleteBusinessInstanceId() { this->businessInstanceId_ = nullptr;};
    inline string businessInstanceId() const { DARABONBA_PTR_GET_DEFAULT(businessInstanceId_, "") };
    inline TripCCInfoQueryRequest& setBusinessInstanceId(string businessInstanceId) { DARABONBA_PTR_SET_VALUE(businessInstanceId_, businessInstanceId) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string nodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline TripCCInfoQueryRequest& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // thirdBusinessId Field Functions 
    bool hasThirdBusinessId() const { return this->thirdBusinessId_ != nullptr;};
    void deleteThirdBusinessId() { this->thirdBusinessId_ = nullptr;};
    inline string thirdBusinessId() const { DARABONBA_PTR_GET_DEFAULT(thirdBusinessId_, "") };
    inline TripCCInfoQueryRequest& setThirdBusinessId(string thirdBusinessId) { DARABONBA_PTR_SET_VALUE(thirdBusinessId_, thirdBusinessId) };


  protected:
    std::shared_ptr<string> businessInstanceId_ = nullptr;
    std::shared_ptr<string> nodeId_ = nullptr;
    std::shared_ptr<string> thirdBusinessId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
