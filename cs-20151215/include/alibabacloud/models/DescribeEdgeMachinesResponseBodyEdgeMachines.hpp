// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEDGEMACHINESRESPONSEBODYEDGEMACHINES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEDGEMACHINESRESPONSEBODYEDGEMACHINES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class DescribeEdgeMachinesResponseBodyEdgeMachines : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEdgeMachinesResponseBodyEdgeMachines& obj) { 
      DARABONBA_PTR_TO_JSON(active_time, activeTime_);
      DARABONBA_PTR_TO_JSON(created, created_);
      DARABONBA_PTR_TO_JSON(edge_machine_id, edgeMachineId_);
      DARABONBA_PTR_TO_JSON(hostname, hostname_);
      DARABONBA_PTR_TO_JSON(life_state, lifeState_);
      DARABONBA_PTR_TO_JSON(model, model_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(online_state, onlineState_);
      DARABONBA_PTR_TO_JSON(sn, sn_);
      DARABONBA_PTR_TO_JSON(updated, updated_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEdgeMachinesResponseBodyEdgeMachines& obj) { 
      DARABONBA_PTR_FROM_JSON(active_time, activeTime_);
      DARABONBA_PTR_FROM_JSON(created, created_);
      DARABONBA_PTR_FROM_JSON(edge_machine_id, edgeMachineId_);
      DARABONBA_PTR_FROM_JSON(hostname, hostname_);
      DARABONBA_PTR_FROM_JSON(life_state, lifeState_);
      DARABONBA_PTR_FROM_JSON(model, model_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(online_state, onlineState_);
      DARABONBA_PTR_FROM_JSON(sn, sn_);
      DARABONBA_PTR_FROM_JSON(updated, updated_);
    };
    DescribeEdgeMachinesResponseBodyEdgeMachines() = default ;
    DescribeEdgeMachinesResponseBodyEdgeMachines(const DescribeEdgeMachinesResponseBodyEdgeMachines &) = default ;
    DescribeEdgeMachinesResponseBodyEdgeMachines(DescribeEdgeMachinesResponseBodyEdgeMachines &&) = default ;
    DescribeEdgeMachinesResponseBodyEdgeMachines(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEdgeMachinesResponseBodyEdgeMachines() = default ;
    DescribeEdgeMachinesResponseBodyEdgeMachines& operator=(const DescribeEdgeMachinesResponseBodyEdgeMachines &) = default ;
    DescribeEdgeMachinesResponseBodyEdgeMachines& operator=(DescribeEdgeMachinesResponseBodyEdgeMachines &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->activeTime_ != nullptr
        && this->created_ != nullptr && this->edgeMachineId_ != nullptr && this->hostname_ != nullptr && this->lifeState_ != nullptr && this->model_ != nullptr
        && this->name_ != nullptr && this->onlineState_ != nullptr && this->sn_ != nullptr && this->updated_ != nullptr; };
    // activeTime Field Functions 
    bool hasActiveTime() const { return this->activeTime_ != nullptr;};
    void deleteActiveTime() { this->activeTime_ = nullptr;};
    inline string activeTime() const { DARABONBA_PTR_GET_DEFAULT(activeTime_, "") };
    inline DescribeEdgeMachinesResponseBodyEdgeMachines& setActiveTime(string activeTime) { DARABONBA_PTR_SET_VALUE(activeTime_, activeTime) };


    // created Field Functions 
    bool hasCreated() const { return this->created_ != nullptr;};
    void deleteCreated() { this->created_ = nullptr;};
    inline string created() const { DARABONBA_PTR_GET_DEFAULT(created_, "") };
    inline DescribeEdgeMachinesResponseBodyEdgeMachines& setCreated(string created) { DARABONBA_PTR_SET_VALUE(created_, created) };


    // edgeMachineId Field Functions 
    bool hasEdgeMachineId() const { return this->edgeMachineId_ != nullptr;};
    void deleteEdgeMachineId() { this->edgeMachineId_ = nullptr;};
    inline string edgeMachineId() const { DARABONBA_PTR_GET_DEFAULT(edgeMachineId_, "") };
    inline DescribeEdgeMachinesResponseBodyEdgeMachines& setEdgeMachineId(string edgeMachineId) { DARABONBA_PTR_SET_VALUE(edgeMachineId_, edgeMachineId) };


    // hostname Field Functions 
    bool hasHostname() const { return this->hostname_ != nullptr;};
    void deleteHostname() { this->hostname_ = nullptr;};
    inline string hostname() const { DARABONBA_PTR_GET_DEFAULT(hostname_, "") };
    inline DescribeEdgeMachinesResponseBodyEdgeMachines& setHostname(string hostname) { DARABONBA_PTR_SET_VALUE(hostname_, hostname) };


    // lifeState Field Functions 
    bool hasLifeState() const { return this->lifeState_ != nullptr;};
    void deleteLifeState() { this->lifeState_ = nullptr;};
    inline string lifeState() const { DARABONBA_PTR_GET_DEFAULT(lifeState_, "") };
    inline DescribeEdgeMachinesResponseBodyEdgeMachines& setLifeState(string lifeState) { DARABONBA_PTR_SET_VALUE(lifeState_, lifeState) };


    // model Field Functions 
    bool hasModel() const { return this->model_ != nullptr;};
    void deleteModel() { this->model_ = nullptr;};
    inline string model() const { DARABONBA_PTR_GET_DEFAULT(model_, "") };
    inline DescribeEdgeMachinesResponseBodyEdgeMachines& setModel(string model) { DARABONBA_PTR_SET_VALUE(model_, model) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeEdgeMachinesResponseBodyEdgeMachines& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // onlineState Field Functions 
    bool hasOnlineState() const { return this->onlineState_ != nullptr;};
    void deleteOnlineState() { this->onlineState_ = nullptr;};
    inline string onlineState() const { DARABONBA_PTR_GET_DEFAULT(onlineState_, "") };
    inline DescribeEdgeMachinesResponseBodyEdgeMachines& setOnlineState(string onlineState) { DARABONBA_PTR_SET_VALUE(onlineState_, onlineState) };


    // sn Field Functions 
    bool hasSn() const { return this->sn_ != nullptr;};
    void deleteSn() { this->sn_ = nullptr;};
    inline string sn() const { DARABONBA_PTR_GET_DEFAULT(sn_, "") };
    inline DescribeEdgeMachinesResponseBodyEdgeMachines& setSn(string sn) { DARABONBA_PTR_SET_VALUE(sn_, sn) };


    // updated Field Functions 
    bool hasUpdated() const { return this->updated_ != nullptr;};
    void deleteUpdated() { this->updated_ = nullptr;};
    inline string updated() const { DARABONBA_PTR_GET_DEFAULT(updated_, "") };
    inline DescribeEdgeMachinesResponseBodyEdgeMachines& setUpdated(string updated) { DARABONBA_PTR_SET_VALUE(updated_, updated) };


  protected:
    // The time when the cloud-native box was activated.
    std::shared_ptr<string> activeTime_ = nullptr;
    // The time when the cloud-native box was created.
    std::shared_ptr<string> created_ = nullptr;
    // The device ID.
    std::shared_ptr<string> edgeMachineId_ = nullptr;
    // The `hostname` of the cloud-native box.
    std::shared_ptr<string> hostname_ = nullptr;
    // The lifecycle of the cloud-native box.
    std::shared_ptr<string> lifeState_ = nullptr;
    // The model of the cloud-native box.
    std::shared_ptr<string> model_ = nullptr;
    // The machine name.
    std::shared_ptr<string> name_ = nullptr;
    // The status of the cloud-native box.
    std::shared_ptr<string> onlineState_ = nullptr;
    // The serial number.
    std::shared_ptr<string> sn_ = nullptr;
    // The time when the cloud-native box was last updated.
    std::shared_ptr<string> updated_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
