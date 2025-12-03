// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFLOWTAGGROUPRESPONSEBODYFLOWTAGGROUP_HPP_
#define ALIBABACLOUD_MODELS_GETFLOWTAGGROUPRESPONSEBODYFLOWTAGGROUP_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetFlowTagGroupResponseBodyFlowTagGroupFlowTagList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class GetFlowTagGroupResponseBodyFlowTagGroup : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFlowTagGroupResponseBodyFlowTagGroup& obj) { 
      DARABONBA_PTR_TO_JSON(creatorAccountId, creatorAccountId_);
      DARABONBA_PTR_TO_JSON(flowTagList, flowTagList_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(modiferAccountId, modiferAccountId_);
      DARABONBA_PTR_TO_JSON(name, name_);
    };
    friend void from_json(const Darabonba::Json& j, GetFlowTagGroupResponseBodyFlowTagGroup& obj) { 
      DARABONBA_PTR_FROM_JSON(creatorAccountId, creatorAccountId_);
      DARABONBA_PTR_FROM_JSON(flowTagList, flowTagList_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(modiferAccountId, modiferAccountId_);
      DARABONBA_PTR_FROM_JSON(name, name_);
    };
    GetFlowTagGroupResponseBodyFlowTagGroup() = default ;
    GetFlowTagGroupResponseBodyFlowTagGroup(const GetFlowTagGroupResponseBodyFlowTagGroup &) = default ;
    GetFlowTagGroupResponseBodyFlowTagGroup(GetFlowTagGroupResponseBodyFlowTagGroup &&) = default ;
    GetFlowTagGroupResponseBodyFlowTagGroup(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFlowTagGroupResponseBodyFlowTagGroup() = default ;
    GetFlowTagGroupResponseBodyFlowTagGroup& operator=(const GetFlowTagGroupResponseBodyFlowTagGroup &) = default ;
    GetFlowTagGroupResponseBodyFlowTagGroup& operator=(GetFlowTagGroupResponseBodyFlowTagGroup &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->creatorAccountId_ == nullptr
        && return this->flowTagList_ == nullptr && return this->id_ == nullptr && return this->modiferAccountId_ == nullptr && return this->name_ == nullptr; };
    // creatorAccountId Field Functions 
    bool hasCreatorAccountId() const { return this->creatorAccountId_ != nullptr;};
    void deleteCreatorAccountId() { this->creatorAccountId_ = nullptr;};
    inline string creatorAccountId() const { DARABONBA_PTR_GET_DEFAULT(creatorAccountId_, "") };
    inline GetFlowTagGroupResponseBodyFlowTagGroup& setCreatorAccountId(string creatorAccountId) { DARABONBA_PTR_SET_VALUE(creatorAccountId_, creatorAccountId) };


    // flowTagList Field Functions 
    bool hasFlowTagList() const { return this->flowTagList_ != nullptr;};
    void deleteFlowTagList() { this->flowTagList_ = nullptr;};
    inline const vector<Models::GetFlowTagGroupResponseBodyFlowTagGroupFlowTagList> & flowTagList() const { DARABONBA_PTR_GET_CONST(flowTagList_, vector<Models::GetFlowTagGroupResponseBodyFlowTagGroupFlowTagList>) };
    inline vector<Models::GetFlowTagGroupResponseBodyFlowTagGroupFlowTagList> flowTagList() { DARABONBA_PTR_GET(flowTagList_, vector<Models::GetFlowTagGroupResponseBodyFlowTagGroupFlowTagList>) };
    inline GetFlowTagGroupResponseBodyFlowTagGroup& setFlowTagList(const vector<Models::GetFlowTagGroupResponseBodyFlowTagGroupFlowTagList> & flowTagList) { DARABONBA_PTR_SET_VALUE(flowTagList_, flowTagList) };
    inline GetFlowTagGroupResponseBodyFlowTagGroup& setFlowTagList(vector<Models::GetFlowTagGroupResponseBodyFlowTagGroupFlowTagList> && flowTagList) { DARABONBA_PTR_SET_RVALUE(flowTagList_, flowTagList) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline GetFlowTagGroupResponseBodyFlowTagGroup& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // modiferAccountId Field Functions 
    bool hasModiferAccountId() const { return this->modiferAccountId_ != nullptr;};
    void deleteModiferAccountId() { this->modiferAccountId_ = nullptr;};
    inline string modiferAccountId() const { DARABONBA_PTR_GET_DEFAULT(modiferAccountId_, "") };
    inline GetFlowTagGroupResponseBodyFlowTagGroup& setModiferAccountId(string modiferAccountId) { DARABONBA_PTR_SET_VALUE(modiferAccountId_, modiferAccountId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetFlowTagGroupResponseBodyFlowTagGroup& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    std::shared_ptr<string> creatorAccountId_ = nullptr;
    std::shared_ptr<vector<Models::GetFlowTagGroupResponseBodyFlowTagGroupFlowTagList>> flowTagList_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<string> modiferAccountId_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
