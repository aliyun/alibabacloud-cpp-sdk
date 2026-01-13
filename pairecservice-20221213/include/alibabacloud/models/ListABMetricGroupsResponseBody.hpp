// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTABMETRICGROUPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTABMETRICGROUPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class ListABMetricGroupsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListABMetricGroupsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ABMetricGroups, ABMetricGroups_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListABMetricGroupsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ABMetricGroups, ABMetricGroups_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListABMetricGroupsResponseBody() = default ;
    ListABMetricGroupsResponseBody(const ListABMetricGroupsResponseBody &) = default ;
    ListABMetricGroupsResponseBody(ListABMetricGroupsResponseBody &&) = default ;
    ListABMetricGroupsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListABMetricGroupsResponseBody() = default ;
    ListABMetricGroupsResponseBody& operator=(const ListABMetricGroupsResponseBody &) = default ;
    ListABMetricGroupsResponseBody& operator=(ListABMetricGroupsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ABMetricGroups : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ABMetricGroups& obj) { 
        DARABONBA_PTR_TO_JSON(ABMetricGroupId, ABMetricGroupId_);
        DARABONBA_PTR_TO_JSON(ABMetricIds, ABMetricIds_);
        DARABONBA_PTR_TO_JSON(ABMetricNames, ABMetricNames_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Owner, owner_);
        DARABONBA_PTR_TO_JSON(Realtime, realtime_);
        DARABONBA_PTR_TO_JSON(SceneId, sceneId_);
      };
      friend void from_json(const Darabonba::Json& j, ABMetricGroups& obj) { 
        DARABONBA_PTR_FROM_JSON(ABMetricGroupId, ABMetricGroupId_);
        DARABONBA_PTR_FROM_JSON(ABMetricIds, ABMetricIds_);
        DARABONBA_PTR_FROM_JSON(ABMetricNames, ABMetricNames_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Owner, owner_);
        DARABONBA_PTR_FROM_JSON(Realtime, realtime_);
        DARABONBA_PTR_FROM_JSON(SceneId, sceneId_);
      };
      ABMetricGroups() = default ;
      ABMetricGroups(const ABMetricGroups &) = default ;
      ABMetricGroups(ABMetricGroups &&) = default ;
      ABMetricGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ABMetricGroups() = default ;
      ABMetricGroups& operator=(const ABMetricGroups &) = default ;
      ABMetricGroups& operator=(ABMetricGroups &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->ABMetricGroupId_ == nullptr
        && this->ABMetricIds_ == nullptr && this->ABMetricNames_ == nullptr && this->description_ == nullptr && this->name_ == nullptr && this->owner_ == nullptr
        && this->realtime_ == nullptr && this->sceneId_ == nullptr; };
      // ABMetricGroupId Field Functions 
      bool hasABMetricGroupId() const { return this->ABMetricGroupId_ != nullptr;};
      void deleteABMetricGroupId() { this->ABMetricGroupId_ = nullptr;};
      inline string getABMetricGroupId() const { DARABONBA_PTR_GET_DEFAULT(ABMetricGroupId_, "") };
      inline ABMetricGroups& setABMetricGroupId(string ABMetricGroupId) { DARABONBA_PTR_SET_VALUE(ABMetricGroupId_, ABMetricGroupId) };


      // ABMetricIds Field Functions 
      bool hasABMetricIds() const { return this->ABMetricIds_ != nullptr;};
      void deleteABMetricIds() { this->ABMetricIds_ = nullptr;};
      inline string getABMetricIds() const { DARABONBA_PTR_GET_DEFAULT(ABMetricIds_, "") };
      inline ABMetricGroups& setABMetricIds(string ABMetricIds) { DARABONBA_PTR_SET_VALUE(ABMetricIds_, ABMetricIds) };


      // ABMetricNames Field Functions 
      bool hasABMetricNames() const { return this->ABMetricNames_ != nullptr;};
      void deleteABMetricNames() { this->ABMetricNames_ = nullptr;};
      inline string getABMetricNames() const { DARABONBA_PTR_GET_DEFAULT(ABMetricNames_, "") };
      inline ABMetricGroups& setABMetricNames(string ABMetricNames) { DARABONBA_PTR_SET_VALUE(ABMetricNames_, ABMetricNames) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline ABMetricGroups& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline ABMetricGroups& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // owner Field Functions 
      bool hasOwner() const { return this->owner_ != nullptr;};
      void deleteOwner() { this->owner_ = nullptr;};
      inline string getOwner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
      inline ABMetricGroups& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


      // realtime Field Functions 
      bool hasRealtime() const { return this->realtime_ != nullptr;};
      void deleteRealtime() { this->realtime_ = nullptr;};
      inline bool getRealtime() const { DARABONBA_PTR_GET_DEFAULT(realtime_, false) };
      inline ABMetricGroups& setRealtime(bool realtime) { DARABONBA_PTR_SET_VALUE(realtime_, realtime) };


      // sceneId Field Functions 
      bool hasSceneId() const { return this->sceneId_ != nullptr;};
      void deleteSceneId() { this->sceneId_ = nullptr;};
      inline string getSceneId() const { DARABONBA_PTR_GET_DEFAULT(sceneId_, "") };
      inline ABMetricGroups& setSceneId(string sceneId) { DARABONBA_PTR_SET_VALUE(sceneId_, sceneId) };


    protected:
      shared_ptr<string> ABMetricGroupId_ {};
      shared_ptr<string> ABMetricIds_ {};
      shared_ptr<string> ABMetricNames_ {};
      shared_ptr<string> description_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> owner_ {};
      shared_ptr<bool> realtime_ {};
      shared_ptr<string> sceneId_ {};
    };

    virtual bool empty() const override { return this->ABMetricGroups_ == nullptr
        && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // ABMetricGroups Field Functions 
    bool hasABMetricGroups() const { return this->ABMetricGroups_ != nullptr;};
    void deleteABMetricGroups() { this->ABMetricGroups_ = nullptr;};
    inline const vector<ListABMetricGroupsResponseBody::ABMetricGroups> & getABMetricGroups() const { DARABONBA_PTR_GET_CONST(ABMetricGroups_, vector<ListABMetricGroupsResponseBody::ABMetricGroups>) };
    inline vector<ListABMetricGroupsResponseBody::ABMetricGroups> getABMetricGroups() { DARABONBA_PTR_GET(ABMetricGroups_, vector<ListABMetricGroupsResponseBody::ABMetricGroups>) };
    inline ListABMetricGroupsResponseBody& setABMetricGroups(const vector<ListABMetricGroupsResponseBody::ABMetricGroups> & aBMetricGroups) { DARABONBA_PTR_SET_VALUE(ABMetricGroups_, aBMetricGroups) };
    inline ListABMetricGroupsResponseBody& setABMetricGroups(vector<ListABMetricGroupsResponseBody::ABMetricGroups> && aBMetricGroups) { DARABONBA_PTR_SET_RVALUE(ABMetricGroups_, aBMetricGroups) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListABMetricGroupsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListABMetricGroupsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<vector<ListABMetricGroupsResponseBody::ABMetricGroups>> ABMetricGroups_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
