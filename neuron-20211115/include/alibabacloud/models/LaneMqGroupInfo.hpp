// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LANEMQGROUPINFO_HPP_
#define ALIBABACLOUD_MODELS_LANEMQGROUPINFO_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/MqGroup.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class LaneMqGroupInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const LaneMqGroupInfo& obj) { 
      DARABONBA_PTR_TO_JSON(allowClean, allowClean_);
      DARABONBA_PTR_TO_JSON(laneId, laneId_);
      DARABONBA_PTR_TO_JSON(laneName, laneName_);
      DARABONBA_PTR_TO_JSON(mqGroups, mqGroups_);
    };
    friend void from_json(const Darabonba::Json& j, LaneMqGroupInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(allowClean, allowClean_);
      DARABONBA_PTR_FROM_JSON(laneId, laneId_);
      DARABONBA_PTR_FROM_JSON(laneName, laneName_);
      DARABONBA_PTR_FROM_JSON(mqGroups, mqGroups_);
    };
    LaneMqGroupInfo() = default ;
    LaneMqGroupInfo(const LaneMqGroupInfo &) = default ;
    LaneMqGroupInfo(LaneMqGroupInfo &&) = default ;
    LaneMqGroupInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~LaneMqGroupInfo() = default ;
    LaneMqGroupInfo& operator=(const LaneMqGroupInfo &) = default ;
    LaneMqGroupInfo& operator=(LaneMqGroupInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->allowClean_ == nullptr
        && this->laneId_ == nullptr && this->laneName_ == nullptr && this->mqGroups_ == nullptr; };
    // allowClean Field Functions 
    bool hasAllowClean() const { return this->allowClean_ != nullptr;};
    void deleteAllowClean() { this->allowClean_ = nullptr;};
    inline bool getAllowClean() const { DARABONBA_PTR_GET_DEFAULT(allowClean_, false) };
    inline LaneMqGroupInfo& setAllowClean(bool allowClean) { DARABONBA_PTR_SET_VALUE(allowClean_, allowClean) };


    // laneId Field Functions 
    bool hasLaneId() const { return this->laneId_ != nullptr;};
    void deleteLaneId() { this->laneId_ = nullptr;};
    inline int64_t getLaneId() const { DARABONBA_PTR_GET_DEFAULT(laneId_, 0L) };
    inline LaneMqGroupInfo& setLaneId(int64_t laneId) { DARABONBA_PTR_SET_VALUE(laneId_, laneId) };


    // laneName Field Functions 
    bool hasLaneName() const { return this->laneName_ != nullptr;};
    void deleteLaneName() { this->laneName_ = nullptr;};
    inline string getLaneName() const { DARABONBA_PTR_GET_DEFAULT(laneName_, "") };
    inline LaneMqGroupInfo& setLaneName(string laneName) { DARABONBA_PTR_SET_VALUE(laneName_, laneName) };


    // mqGroups Field Functions 
    bool hasMqGroups() const { return this->mqGroups_ != nullptr;};
    void deleteMqGroups() { this->mqGroups_ = nullptr;};
    inline const MqGroup & getMqGroups() const { DARABONBA_PTR_GET_CONST(mqGroups_, MqGroup) };
    inline MqGroup getMqGroups() { DARABONBA_PTR_GET(mqGroups_, MqGroup) };
    inline LaneMqGroupInfo& setMqGroups(const MqGroup & mqGroups) { DARABONBA_PTR_SET_VALUE(mqGroups_, mqGroups) };
    inline LaneMqGroupInfo& setMqGroups(MqGroup && mqGroups) { DARABONBA_PTR_SET_RVALUE(mqGroups_, mqGroups) };


  protected:
    shared_ptr<bool> allowClean_ {};
    shared_ptr<int64_t> laneId_ {};
    shared_ptr<string> laneName_ {};
    shared_ptr<MqGroup> mqGroups_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
