// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRIPTASKQUERYRESPONSEBODYMODULERECORDTASKS_HPP_
#define ALIBABACLOUD_MODELS_TRIPTASKQUERYRESPONSEBODYMODULERECORDTASKS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class TripTaskQueryResponseBodyModuleRecordTasks : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TripTaskQueryResponseBodyModuleRecordTasks& obj) { 
      DARABONBA_PTR_TO_JSON(actioner, actioner_);
      DARABONBA_PTR_TO_JSON(attributes, attributes_);
      DARABONBA_PTR_TO_JSON(gmt_create, gmtCreate_);
      DARABONBA_PTR_TO_JSON(gmt_finished, gmtFinished_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(node_id, nodeId_);
      DARABONBA_PTR_TO_JSON(out_result, outResult_);
      DARABONBA_PTR_TO_JSON(owner, owner_);
      DARABONBA_PTR_TO_JSON(status, status_);
    };
    friend void from_json(const Darabonba::Json& j, TripTaskQueryResponseBodyModuleRecordTasks& obj) { 
      DARABONBA_PTR_FROM_JSON(actioner, actioner_);
      DARABONBA_PTR_FROM_JSON(attributes, attributes_);
      DARABONBA_PTR_FROM_JSON(gmt_create, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(gmt_finished, gmtFinished_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(node_id, nodeId_);
      DARABONBA_PTR_FROM_JSON(out_result, outResult_);
      DARABONBA_PTR_FROM_JSON(owner, owner_);
      DARABONBA_PTR_FROM_JSON(status, status_);
    };
    TripTaskQueryResponseBodyModuleRecordTasks() = default ;
    TripTaskQueryResponseBodyModuleRecordTasks(const TripTaskQueryResponseBodyModuleRecordTasks &) = default ;
    TripTaskQueryResponseBodyModuleRecordTasks(TripTaskQueryResponseBodyModuleRecordTasks &&) = default ;
    TripTaskQueryResponseBodyModuleRecordTasks(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TripTaskQueryResponseBodyModuleRecordTasks() = default ;
    TripTaskQueryResponseBodyModuleRecordTasks& operator=(const TripTaskQueryResponseBodyModuleRecordTasks &) = default ;
    TripTaskQueryResponseBodyModuleRecordTasks& operator=(TripTaskQueryResponseBodyModuleRecordTasks &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->actioner_ != nullptr
        && this->attributes_ != nullptr && this->gmtCreate_ != nullptr && this->gmtFinished_ != nullptr && this->id_ != nullptr && this->nodeId_ != nullptr
        && this->outResult_ != nullptr && this->owner_ != nullptr && this->status_ != nullptr; };
    // actioner Field Functions 
    bool hasActioner() const { return this->actioner_ != nullptr;};
    void deleteActioner() { this->actioner_ = nullptr;};
    inline string actioner() const { DARABONBA_PTR_GET_DEFAULT(actioner_, "") };
    inline TripTaskQueryResponseBodyModuleRecordTasks& setActioner(string actioner) { DARABONBA_PTR_SET_VALUE(actioner_, actioner) };


    // attributes Field Functions 
    bool hasAttributes() const { return this->attributes_ != nullptr;};
    void deleteAttributes() { this->attributes_ = nullptr;};
    inline string attributes() const { DARABONBA_PTR_GET_DEFAULT(attributes_, "") };
    inline TripTaskQueryResponseBodyModuleRecordTasks& setAttributes(string attributes) { DARABONBA_PTR_SET_VALUE(attributes_, attributes) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline int64_t gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
    inline TripTaskQueryResponseBodyModuleRecordTasks& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtFinished Field Functions 
    bool hasGmtFinished() const { return this->gmtFinished_ != nullptr;};
    void deleteGmtFinished() { this->gmtFinished_ = nullptr;};
    inline int64_t gmtFinished() const { DARABONBA_PTR_GET_DEFAULT(gmtFinished_, 0L) };
    inline TripTaskQueryResponseBodyModuleRecordTasks& setGmtFinished(int64_t gmtFinished) { DARABONBA_PTR_SET_VALUE(gmtFinished_, gmtFinished) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline TripTaskQueryResponseBodyModuleRecordTasks& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string nodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline TripTaskQueryResponseBodyModuleRecordTasks& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // outResult Field Functions 
    bool hasOutResult() const { return this->outResult_ != nullptr;};
    void deleteOutResult() { this->outResult_ = nullptr;};
    inline string outResult() const { DARABONBA_PTR_GET_DEFAULT(outResult_, "") };
    inline TripTaskQueryResponseBodyModuleRecordTasks& setOutResult(string outResult) { DARABONBA_PTR_SET_VALUE(outResult_, outResult) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline string owner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
    inline TripTaskQueryResponseBodyModuleRecordTasks& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline TripTaskQueryResponseBodyModuleRecordTasks& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<string> actioner_ = nullptr;
    std::shared_ptr<string> attributes_ = nullptr;
    std::shared_ptr<int64_t> gmtCreate_ = nullptr;
    std::shared_ptr<int64_t> gmtFinished_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<string> nodeId_ = nullptr;
    std::shared_ptr<string> outResult_ = nullptr;
    std::shared_ptr<string> owner_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
