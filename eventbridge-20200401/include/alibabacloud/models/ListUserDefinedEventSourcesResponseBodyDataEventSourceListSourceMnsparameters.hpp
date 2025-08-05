// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERDEFINEDEVENTSOURCESRESPONSEBODYDATAEVENTSOURCELISTSOURCEMNSPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERDEFINEDEVENTSOURCESRESPONSEBODYDATAEVENTSOURCELISTSOURCEMNSPARAMETERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class ListUserDefinedEventSourcesResponseBodyDataEventSourceListSourceMNSParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUserDefinedEventSourcesResponseBodyDataEventSourceListSourceMNSParameters& obj) { 
      DARABONBA_PTR_TO_JSON(IsBase64Decode, isBase64Decode_);
      DARABONBA_PTR_TO_JSON(QueueName, queueName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ListUserDefinedEventSourcesResponseBodyDataEventSourceListSourceMNSParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(IsBase64Decode, isBase64Decode_);
      DARABONBA_PTR_FROM_JSON(QueueName, queueName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ListUserDefinedEventSourcesResponseBodyDataEventSourceListSourceMNSParameters() = default ;
    ListUserDefinedEventSourcesResponseBodyDataEventSourceListSourceMNSParameters(const ListUserDefinedEventSourcesResponseBodyDataEventSourceListSourceMNSParameters &) = default ;
    ListUserDefinedEventSourcesResponseBodyDataEventSourceListSourceMNSParameters(ListUserDefinedEventSourcesResponseBodyDataEventSourceListSourceMNSParameters &&) = default ;
    ListUserDefinedEventSourcesResponseBodyDataEventSourceListSourceMNSParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUserDefinedEventSourcesResponseBodyDataEventSourceListSourceMNSParameters() = default ;
    ListUserDefinedEventSourcesResponseBodyDataEventSourceListSourceMNSParameters& operator=(const ListUserDefinedEventSourcesResponseBodyDataEventSourceListSourceMNSParameters &) = default ;
    ListUserDefinedEventSourcesResponseBodyDataEventSourceListSourceMNSParameters& operator=(ListUserDefinedEventSourcesResponseBodyDataEventSourceListSourceMNSParameters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->isBase64Decode_ != nullptr
        && this->queueName_ != nullptr && this->regionId_ != nullptr; };
    // isBase64Decode Field Functions 
    bool hasIsBase64Decode() const { return this->isBase64Decode_ != nullptr;};
    void deleteIsBase64Decode() { this->isBase64Decode_ = nullptr;};
    inline bool isBase64Decode() const { DARABONBA_PTR_GET_DEFAULT(isBase64Decode_, false) };
    inline ListUserDefinedEventSourcesResponseBodyDataEventSourceListSourceMNSParameters& setIsBase64Decode(bool isBase64Decode) { DARABONBA_PTR_SET_VALUE(isBase64Decode_, isBase64Decode) };


    // queueName Field Functions 
    bool hasQueueName() const { return this->queueName_ != nullptr;};
    void deleteQueueName() { this->queueName_ = nullptr;};
    inline string queueName() const { DARABONBA_PTR_GET_DEFAULT(queueName_, "") };
    inline ListUserDefinedEventSourcesResponseBodyDataEventSourceListSourceMNSParameters& setQueueName(string queueName) { DARABONBA_PTR_SET_VALUE(queueName_, queueName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListUserDefinedEventSourcesResponseBodyDataEventSourceListSourceMNSParameters& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // Indicates whether Base64 decoding is enabled. By default, Base64 decoding is enabled.
    std::shared_ptr<bool> isBase64Decode_ = nullptr;
    // The name of the SMQ queue.
    std::shared_ptr<string> queueName_ = nullptr;
    // The ID of the region where the SMQ queue resides.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
