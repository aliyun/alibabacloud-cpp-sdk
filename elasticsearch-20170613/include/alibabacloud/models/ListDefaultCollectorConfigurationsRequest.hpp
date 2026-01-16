// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDEFAULTCOLLECTORCONFIGURATIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTDEFAULTCOLLECTORCONFIGURATIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class ListDefaultCollectorConfigurationsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDefaultCollectorConfigurationsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(resType, resType_);
      DARABONBA_PTR_TO_JSON(resVersion, resVersion_);
      DARABONBA_PTR_TO_JSON(sourceType, sourceType_);
    };
    friend void from_json(const Darabonba::Json& j, ListDefaultCollectorConfigurationsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(resType, resType_);
      DARABONBA_PTR_FROM_JSON(resVersion, resVersion_);
      DARABONBA_PTR_FROM_JSON(sourceType, sourceType_);
    };
    ListDefaultCollectorConfigurationsRequest() = default ;
    ListDefaultCollectorConfigurationsRequest(const ListDefaultCollectorConfigurationsRequest &) = default ;
    ListDefaultCollectorConfigurationsRequest(ListDefaultCollectorConfigurationsRequest &&) = default ;
    ListDefaultCollectorConfigurationsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDefaultCollectorConfigurationsRequest() = default ;
    ListDefaultCollectorConfigurationsRequest& operator=(const ListDefaultCollectorConfigurationsRequest &) = default ;
    ListDefaultCollectorConfigurationsRequest& operator=(ListDefaultCollectorConfigurationsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->resType_ == nullptr
        && this->resVersion_ == nullptr && this->sourceType_ == nullptr; };
    // resType Field Functions 
    bool hasResType() const { return this->resType_ != nullptr;};
    void deleteResType() { this->resType_ = nullptr;};
    inline string getResType() const { DARABONBA_PTR_GET_DEFAULT(resType_, "") };
    inline ListDefaultCollectorConfigurationsRequest& setResType(string resType) { DARABONBA_PTR_SET_VALUE(resType_, resType) };


    // resVersion Field Functions 
    bool hasResVersion() const { return this->resVersion_ != nullptr;};
    void deleteResVersion() { this->resVersion_ = nullptr;};
    inline string getResVersion() const { DARABONBA_PTR_GET_DEFAULT(resVersion_, "") };
    inline ListDefaultCollectorConfigurationsRequest& setResVersion(string resVersion) { DARABONBA_PTR_SET_VALUE(resVersion_, resVersion) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline ListDefaultCollectorConfigurationsRequest& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


  protected:
    // The shipper type. Valid values:
    // 
    // *   fileBeat
    // *   metricBeat
    // *   heartBeat
    // *   auditBeat
    // 
    // This parameter is required.
    shared_ptr<string> resType_ {};
    // The shipper version. The shipper version varies based on the type of the machine on which the shipper is deployed. Valid values:
    // 
    // *   ECS: 6.8.5_with_community
    // *   ACK: 6.8.13_with_community
    // 
    // This parameter is required.
    shared_ptr<string> resVersion_ {};
    // The type of the machine on which the shipper is deployed. If you do not configure this parameter, the default configuration files of shippers deployed on all types of machines are returned. Valid values:
    // 
    // *   ECS: ECS instance
    // *   ACK: ACK cluster
    shared_ptr<string> sourceType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
