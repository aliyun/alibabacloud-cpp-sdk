// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESWIMMINGLANEGROUPRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_UPDATESWIMMINGLANEGROUPRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateSwimmingLaneGroupResponseBodyDataApplicationList.hpp>
#include <alibabacloud/models/UpdateSwimmingLaneGroupResponseBodyDataEntryApplication.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class UpdateSwimmingLaneGroupResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateSwimmingLaneGroupResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationList, applicationList_);
      DARABONBA_PTR_TO_JSON(EntryApplication, entryApplication_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NamespaceId, namespaceId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateSwimmingLaneGroupResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationList, applicationList_);
      DARABONBA_PTR_FROM_JSON(EntryApplication, entryApplication_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NamespaceId, namespaceId_);
    };
    UpdateSwimmingLaneGroupResponseBodyData() = default ;
    UpdateSwimmingLaneGroupResponseBodyData(const UpdateSwimmingLaneGroupResponseBodyData &) = default ;
    UpdateSwimmingLaneGroupResponseBodyData(UpdateSwimmingLaneGroupResponseBodyData &&) = default ;
    UpdateSwimmingLaneGroupResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateSwimmingLaneGroupResponseBodyData() = default ;
    UpdateSwimmingLaneGroupResponseBodyData& operator=(const UpdateSwimmingLaneGroupResponseBodyData &) = default ;
    UpdateSwimmingLaneGroupResponseBodyData& operator=(UpdateSwimmingLaneGroupResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationList_ == nullptr
        && return this->entryApplication_ == nullptr && return this->id_ == nullptr && return this->name_ == nullptr && return this->namespaceId_ == nullptr; };
    // applicationList Field Functions 
    bool hasApplicationList() const { return this->applicationList_ != nullptr;};
    void deleteApplicationList() { this->applicationList_ = nullptr;};
    inline const vector<Models::UpdateSwimmingLaneGroupResponseBodyDataApplicationList> & applicationList() const { DARABONBA_PTR_GET_CONST(applicationList_, vector<Models::UpdateSwimmingLaneGroupResponseBodyDataApplicationList>) };
    inline vector<Models::UpdateSwimmingLaneGroupResponseBodyDataApplicationList> applicationList() { DARABONBA_PTR_GET(applicationList_, vector<Models::UpdateSwimmingLaneGroupResponseBodyDataApplicationList>) };
    inline UpdateSwimmingLaneGroupResponseBodyData& setApplicationList(const vector<Models::UpdateSwimmingLaneGroupResponseBodyDataApplicationList> & applicationList) { DARABONBA_PTR_SET_VALUE(applicationList_, applicationList) };
    inline UpdateSwimmingLaneGroupResponseBodyData& setApplicationList(vector<Models::UpdateSwimmingLaneGroupResponseBodyDataApplicationList> && applicationList) { DARABONBA_PTR_SET_RVALUE(applicationList_, applicationList) };


    // entryApplication Field Functions 
    bool hasEntryApplication() const { return this->entryApplication_ != nullptr;};
    void deleteEntryApplication() { this->entryApplication_ = nullptr;};
    inline const Models::UpdateSwimmingLaneGroupResponseBodyDataEntryApplication & entryApplication() const { DARABONBA_PTR_GET_CONST(entryApplication_, Models::UpdateSwimmingLaneGroupResponseBodyDataEntryApplication) };
    inline Models::UpdateSwimmingLaneGroupResponseBodyDataEntryApplication entryApplication() { DARABONBA_PTR_GET(entryApplication_, Models::UpdateSwimmingLaneGroupResponseBodyDataEntryApplication) };
    inline UpdateSwimmingLaneGroupResponseBodyData& setEntryApplication(const Models::UpdateSwimmingLaneGroupResponseBodyDataEntryApplication & entryApplication) { DARABONBA_PTR_SET_VALUE(entryApplication_, entryApplication) };
    inline UpdateSwimmingLaneGroupResponseBodyData& setEntryApplication(Models::UpdateSwimmingLaneGroupResponseBodyDataEntryApplication && entryApplication) { DARABONBA_PTR_SET_RVALUE(entryApplication_, entryApplication) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline UpdateSwimmingLaneGroupResponseBodyData& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateSwimmingLaneGroupResponseBodyData& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // namespaceId Field Functions 
    bool hasNamespaceId() const { return this->namespaceId_ != nullptr;};
    void deleteNamespaceId() { this->namespaceId_ = nullptr;};
    inline string namespaceId() const { DARABONBA_PTR_GET_DEFAULT(namespaceId_, "") };
    inline UpdateSwimmingLaneGroupResponseBodyData& setNamespaceId(string namespaceId) { DARABONBA_PTR_SET_VALUE(namespaceId_, namespaceId) };


  protected:
    // The list of applications related to the lane group.
    std::shared_ptr<vector<Models::UpdateSwimmingLaneGroupResponseBodyDataApplicationList>> applicationList_ = nullptr;
    // The EDAS ingress gateway information.
    std::shared_ptr<Models::UpdateSwimmingLaneGroupResponseBodyDataEntryApplication> entryApplication_ = nullptr;
    // The ID of the lane group.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The name of the lane group.
    std::shared_ptr<string> name_ = nullptr;
    // The ID of the namespace.
    std::shared_ptr<string> namespaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
