// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUBLISHFEATUREVIEWTABLEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PUBLISHFEATUREVIEWTABLEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiFeatureStore20230621
{
namespace Models
{
  class PublishFeatureViewTableRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PublishFeatureViewTableRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Config, config_);
      DARABONBA_PTR_TO_JSON(EventTime, eventTime_);
      DARABONBA_PTR_TO_JSON(Mode, mode_);
      DARABONBA_PTR_TO_JSON(OfflineToOnline, offlineToOnline_);
      DARABONBA_PTR_TO_JSON(Partitions, partitions_);
    };
    friend void from_json(const Darabonba::Json& j, PublishFeatureViewTableRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Config, config_);
      DARABONBA_PTR_FROM_JSON(EventTime, eventTime_);
      DARABONBA_PTR_FROM_JSON(Mode, mode_);
      DARABONBA_PTR_FROM_JSON(OfflineToOnline, offlineToOnline_);
      DARABONBA_PTR_FROM_JSON(Partitions, partitions_);
    };
    PublishFeatureViewTableRequest() = default ;
    PublishFeatureViewTableRequest(const PublishFeatureViewTableRequest &) = default ;
    PublishFeatureViewTableRequest(PublishFeatureViewTableRequest &&) = default ;
    PublishFeatureViewTableRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PublishFeatureViewTableRequest() = default ;
    PublishFeatureViewTableRequest& operator=(const PublishFeatureViewTableRequest &) = default ;
    PublishFeatureViewTableRequest& operator=(PublishFeatureViewTableRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->config_ == nullptr
        && return this->eventTime_ == nullptr && return this->mode_ == nullptr && return this->offlineToOnline_ == nullptr && return this->partitions_ == nullptr; };
    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline string config() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
    inline PublishFeatureViewTableRequest& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


    // eventTime Field Functions 
    bool hasEventTime() const { return this->eventTime_ != nullptr;};
    void deleteEventTime() { this->eventTime_ = nullptr;};
    inline string eventTime() const { DARABONBA_PTR_GET_DEFAULT(eventTime_, "") };
    inline PublishFeatureViewTableRequest& setEventTime(string eventTime) { DARABONBA_PTR_SET_VALUE(eventTime_, eventTime) };


    // mode Field Functions 
    bool hasMode() const { return this->mode_ != nullptr;};
    void deleteMode() { this->mode_ = nullptr;};
    inline string mode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
    inline PublishFeatureViewTableRequest& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


    // offlineToOnline Field Functions 
    bool hasOfflineToOnline() const { return this->offlineToOnline_ != nullptr;};
    void deleteOfflineToOnline() { this->offlineToOnline_ = nullptr;};
    inline bool offlineToOnline() const { DARABONBA_PTR_GET_DEFAULT(offlineToOnline_, false) };
    inline PublishFeatureViewTableRequest& setOfflineToOnline(bool offlineToOnline) { DARABONBA_PTR_SET_VALUE(offlineToOnline_, offlineToOnline) };


    // partitions Field Functions 
    bool hasPartitions() const { return this->partitions_ != nullptr;};
    void deletePartitions() { this->partitions_ = nullptr;};
    inline const map<string, Darabonba::Json> & partitions() const { DARABONBA_PTR_GET_CONST(partitions_, map<string, Darabonba::Json>) };
    inline map<string, Darabonba::Json> partitions() { DARABONBA_PTR_GET(partitions_, map<string, Darabonba::Json>) };
    inline PublishFeatureViewTableRequest& setPartitions(const map<string, Darabonba::Json> & partitions) { DARABONBA_PTR_SET_VALUE(partitions_, partitions) };
    inline PublishFeatureViewTableRequest& setPartitions(map<string, Darabonba::Json> && partitions) { DARABONBA_PTR_SET_RVALUE(partitions_, partitions) };


  protected:
    std::shared_ptr<string> config_ = nullptr;
    std::shared_ptr<string> eventTime_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> mode_ = nullptr;
    // This parameter is required.
    std::shared_ptr<bool> offlineToOnline_ = nullptr;
    std::shared_ptr<map<string, Darabonba::Json>> partitions_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiFeatureStore20230621
#endif
