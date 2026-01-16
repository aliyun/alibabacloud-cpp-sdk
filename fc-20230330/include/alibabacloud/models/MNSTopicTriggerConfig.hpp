// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MNSTOPICTRIGGERCONFIG_HPP_
#define ALIBABACLOUD_MODELS_MNSTOPICTRIGGERCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FC20230330
{
namespace Models
{
  class MNSTopicTriggerConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MNSTopicTriggerConfig& obj) { 
      DARABONBA_PTR_TO_JSON(filterTag, filterTag_);
      DARABONBA_PTR_TO_JSON(notifyContentFormat, notifyContentFormat_);
      DARABONBA_PTR_TO_JSON(notifyStrategy, notifyStrategy_);
    };
    friend void from_json(const Darabonba::Json& j, MNSTopicTriggerConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(filterTag, filterTag_);
      DARABONBA_PTR_FROM_JSON(notifyContentFormat, notifyContentFormat_);
      DARABONBA_PTR_FROM_JSON(notifyStrategy, notifyStrategy_);
    };
    MNSTopicTriggerConfig() = default ;
    MNSTopicTriggerConfig(const MNSTopicTriggerConfig &) = default ;
    MNSTopicTriggerConfig(MNSTopicTriggerConfig &&) = default ;
    MNSTopicTriggerConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MNSTopicTriggerConfig() = default ;
    MNSTopicTriggerConfig& operator=(const MNSTopicTriggerConfig &) = default ;
    MNSTopicTriggerConfig& operator=(MNSTopicTriggerConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->filterTag_ == nullptr
        && this->notifyContentFormat_ == nullptr && this->notifyStrategy_ == nullptr; };
    // filterTag Field Functions 
    bool hasFilterTag() const { return this->filterTag_ != nullptr;};
    void deleteFilterTag() { this->filterTag_ = nullptr;};
    inline string getFilterTag() const { DARABONBA_PTR_GET_DEFAULT(filterTag_, "") };
    inline MNSTopicTriggerConfig& setFilterTag(string filterTag) { DARABONBA_PTR_SET_VALUE(filterTag_, filterTag) };


    // notifyContentFormat Field Functions 
    bool hasNotifyContentFormat() const { return this->notifyContentFormat_ != nullptr;};
    void deleteNotifyContentFormat() { this->notifyContentFormat_ = nullptr;};
    inline string getNotifyContentFormat() const { DARABONBA_PTR_GET_DEFAULT(notifyContentFormat_, "") };
    inline MNSTopicTriggerConfig& setNotifyContentFormat(string notifyContentFormat) { DARABONBA_PTR_SET_VALUE(notifyContentFormat_, notifyContentFormat) };


    // notifyStrategy Field Functions 
    bool hasNotifyStrategy() const { return this->notifyStrategy_ != nullptr;};
    void deleteNotifyStrategy() { this->notifyStrategy_ = nullptr;};
    inline string getNotifyStrategy() const { DARABONBA_PTR_GET_DEFAULT(notifyStrategy_, "") };
    inline MNSTopicTriggerConfig& setNotifyStrategy(string notifyStrategy) { DARABONBA_PTR_SET_VALUE(notifyStrategy_, notifyStrategy) };


  protected:
    shared_ptr<string> filterTag_ {};
    shared_ptr<string> notifyContentFormat_ {};
    shared_ptr<string> notifyStrategy_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FC20230330
#endif
