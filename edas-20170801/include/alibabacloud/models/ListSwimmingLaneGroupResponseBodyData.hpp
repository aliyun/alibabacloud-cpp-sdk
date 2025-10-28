// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSWIMMINGLANEGROUPRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTSWIMMINGLANEGROUPRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListSwimmingLaneGroupResponseBodyDataApplicationList.hpp>
#include <alibabacloud/models/ListSwimmingLaneGroupResponseBodyDataEntryApplication.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class ListSwimmingLaneGroupResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSwimmingLaneGroupResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationList, applicationList_);
      DARABONBA_PTR_TO_JSON(EntryApplication, entryApplication_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NamespaceId, namespaceId_);
    };
    friend void from_json(const Darabonba::Json& j, ListSwimmingLaneGroupResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationList, applicationList_);
      DARABONBA_PTR_FROM_JSON(EntryApplication, entryApplication_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NamespaceId, namespaceId_);
    };
    ListSwimmingLaneGroupResponseBodyData() = default ;
    ListSwimmingLaneGroupResponseBodyData(const ListSwimmingLaneGroupResponseBodyData &) = default ;
    ListSwimmingLaneGroupResponseBodyData(ListSwimmingLaneGroupResponseBodyData &&) = default ;
    ListSwimmingLaneGroupResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSwimmingLaneGroupResponseBodyData() = default ;
    ListSwimmingLaneGroupResponseBodyData& operator=(const ListSwimmingLaneGroupResponseBodyData &) = default ;
    ListSwimmingLaneGroupResponseBodyData& operator=(ListSwimmingLaneGroupResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationList_ == nullptr
        && return this->entryApplication_ == nullptr && return this->id_ == nullptr && return this->name_ == nullptr && return this->namespaceId_ == nullptr; };
    // applicationList Field Functions 
    bool hasApplicationList() const { return this->applicationList_ != nullptr;};
    void deleteApplicationList() { this->applicationList_ = nullptr;};
    inline const vector<Models::ListSwimmingLaneGroupResponseBodyDataApplicationList> & applicationList() const { DARABONBA_PTR_GET_CONST(applicationList_, vector<Models::ListSwimmingLaneGroupResponseBodyDataApplicationList>) };
    inline vector<Models::ListSwimmingLaneGroupResponseBodyDataApplicationList> applicationList() { DARABONBA_PTR_GET(applicationList_, vector<Models::ListSwimmingLaneGroupResponseBodyDataApplicationList>) };
    inline ListSwimmingLaneGroupResponseBodyData& setApplicationList(const vector<Models::ListSwimmingLaneGroupResponseBodyDataApplicationList> & applicationList) { DARABONBA_PTR_SET_VALUE(applicationList_, applicationList) };
    inline ListSwimmingLaneGroupResponseBodyData& setApplicationList(vector<Models::ListSwimmingLaneGroupResponseBodyDataApplicationList> && applicationList) { DARABONBA_PTR_SET_RVALUE(applicationList_, applicationList) };


    // entryApplication Field Functions 
    bool hasEntryApplication() const { return this->entryApplication_ != nullptr;};
    void deleteEntryApplication() { this->entryApplication_ = nullptr;};
    inline const Models::ListSwimmingLaneGroupResponseBodyDataEntryApplication & entryApplication() const { DARABONBA_PTR_GET_CONST(entryApplication_, Models::ListSwimmingLaneGroupResponseBodyDataEntryApplication) };
    inline Models::ListSwimmingLaneGroupResponseBodyDataEntryApplication entryApplication() { DARABONBA_PTR_GET(entryApplication_, Models::ListSwimmingLaneGroupResponseBodyDataEntryApplication) };
    inline ListSwimmingLaneGroupResponseBodyData& setEntryApplication(const Models::ListSwimmingLaneGroupResponseBodyDataEntryApplication & entryApplication) { DARABONBA_PTR_SET_VALUE(entryApplication_, entryApplication) };
    inline ListSwimmingLaneGroupResponseBodyData& setEntryApplication(Models::ListSwimmingLaneGroupResponseBodyDataEntryApplication && entryApplication) { DARABONBA_PTR_SET_RVALUE(entryApplication_, entryApplication) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ListSwimmingLaneGroupResponseBodyData& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListSwimmingLaneGroupResponseBodyData& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // namespaceId Field Functions 
    bool hasNamespaceId() const { return this->namespaceId_ != nullptr;};
    void deleteNamespaceId() { this->namespaceId_ = nullptr;};
    inline string namespaceId() const { DARABONBA_PTR_GET_DEFAULT(namespaceId_, "") };
    inline ListSwimmingLaneGroupResponseBodyData& setNamespaceId(string namespaceId) { DARABONBA_PTR_SET_VALUE(namespaceId_, namespaceId) };


  protected:
    // The applications that are related to the lane group.
    std::shared_ptr<vector<Models::ListSwimmingLaneGroupResponseBodyDataApplicationList>> applicationList_ = nullptr;
    // The information about the Enterprise Distributed Application Service (EDAS) ingress gateway.
    std::shared_ptr<Models::ListSwimmingLaneGroupResponseBodyDataEntryApplication> entryApplication_ = nullptr;
    // The ID of the lane group.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The name of the lane group.
    std::shared_ptr<string> name_ = nullptr;
    // The ID of the microservices namespace.
    std::shared_ptr<string> namespaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
