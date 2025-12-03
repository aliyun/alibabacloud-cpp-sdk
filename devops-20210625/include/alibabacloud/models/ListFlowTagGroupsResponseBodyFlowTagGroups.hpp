// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTFLOWTAGGROUPSRESPONSEBODYFLOWTAGGROUPS_HPP_
#define ALIBABACLOUD_MODELS_LISTFLOWTAGGROUPSRESPONSEBODYFLOWTAGGROUPS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class ListFlowTagGroupsResponseBodyFlowTagGroups : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListFlowTagGroupsResponseBodyFlowTagGroups& obj) { 
      DARABONBA_PTR_TO_JSON(creatorAccountId, creatorAccountId_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(modiferAccountId, modiferAccountId_);
      DARABONBA_PTR_TO_JSON(name, name_);
    };
    friend void from_json(const Darabonba::Json& j, ListFlowTagGroupsResponseBodyFlowTagGroups& obj) { 
      DARABONBA_PTR_FROM_JSON(creatorAccountId, creatorAccountId_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(modiferAccountId, modiferAccountId_);
      DARABONBA_PTR_FROM_JSON(name, name_);
    };
    ListFlowTagGroupsResponseBodyFlowTagGroups() = default ;
    ListFlowTagGroupsResponseBodyFlowTagGroups(const ListFlowTagGroupsResponseBodyFlowTagGroups &) = default ;
    ListFlowTagGroupsResponseBodyFlowTagGroups(ListFlowTagGroupsResponseBodyFlowTagGroups &&) = default ;
    ListFlowTagGroupsResponseBodyFlowTagGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListFlowTagGroupsResponseBodyFlowTagGroups() = default ;
    ListFlowTagGroupsResponseBodyFlowTagGroups& operator=(const ListFlowTagGroupsResponseBodyFlowTagGroups &) = default ;
    ListFlowTagGroupsResponseBodyFlowTagGroups& operator=(ListFlowTagGroupsResponseBodyFlowTagGroups &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->creatorAccountId_ == nullptr
        && return this->id_ == nullptr && return this->modiferAccountId_ == nullptr && return this->name_ == nullptr; };
    // creatorAccountId Field Functions 
    bool hasCreatorAccountId() const { return this->creatorAccountId_ != nullptr;};
    void deleteCreatorAccountId() { this->creatorAccountId_ = nullptr;};
    inline string creatorAccountId() const { DARABONBA_PTR_GET_DEFAULT(creatorAccountId_, "") };
    inline ListFlowTagGroupsResponseBodyFlowTagGroups& setCreatorAccountId(string creatorAccountId) { DARABONBA_PTR_SET_VALUE(creatorAccountId_, creatorAccountId) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ListFlowTagGroupsResponseBodyFlowTagGroups& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // modiferAccountId Field Functions 
    bool hasModiferAccountId() const { return this->modiferAccountId_ != nullptr;};
    void deleteModiferAccountId() { this->modiferAccountId_ = nullptr;};
    inline string modiferAccountId() const { DARABONBA_PTR_GET_DEFAULT(modiferAccountId_, "") };
    inline ListFlowTagGroupsResponseBodyFlowTagGroups& setModiferAccountId(string modiferAccountId) { DARABONBA_PTR_SET_VALUE(modiferAccountId_, modiferAccountId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListFlowTagGroupsResponseBodyFlowTagGroups& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    std::shared_ptr<string> creatorAccountId_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<string> modiferAccountId_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
