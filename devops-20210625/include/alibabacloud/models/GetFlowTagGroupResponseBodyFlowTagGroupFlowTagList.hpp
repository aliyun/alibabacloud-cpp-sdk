// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFLOWTAGGROUPRESPONSEBODYFLOWTAGGROUPFLOWTAGLIST_HPP_
#define ALIBABACLOUD_MODELS_GETFLOWTAGGROUPRESPONSEBODYFLOWTAGGROUPFLOWTAGLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class GetFlowTagGroupResponseBodyFlowTagGroupFlowTagList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFlowTagGroupResponseBodyFlowTagGroupFlowTagList& obj) { 
      DARABONBA_PTR_TO_JSON(color, color_);
      DARABONBA_PTR_TO_JSON(creatorAccountId, creatorAccountId_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(modiferAccountId, modiferAccountId_);
      DARABONBA_PTR_TO_JSON(name, name_);
    };
    friend void from_json(const Darabonba::Json& j, GetFlowTagGroupResponseBodyFlowTagGroupFlowTagList& obj) { 
      DARABONBA_PTR_FROM_JSON(color, color_);
      DARABONBA_PTR_FROM_JSON(creatorAccountId, creatorAccountId_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(modiferAccountId, modiferAccountId_);
      DARABONBA_PTR_FROM_JSON(name, name_);
    };
    GetFlowTagGroupResponseBodyFlowTagGroupFlowTagList() = default ;
    GetFlowTagGroupResponseBodyFlowTagGroupFlowTagList(const GetFlowTagGroupResponseBodyFlowTagGroupFlowTagList &) = default ;
    GetFlowTagGroupResponseBodyFlowTagGroupFlowTagList(GetFlowTagGroupResponseBodyFlowTagGroupFlowTagList &&) = default ;
    GetFlowTagGroupResponseBodyFlowTagGroupFlowTagList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFlowTagGroupResponseBodyFlowTagGroupFlowTagList() = default ;
    GetFlowTagGroupResponseBodyFlowTagGroupFlowTagList& operator=(const GetFlowTagGroupResponseBodyFlowTagGroupFlowTagList &) = default ;
    GetFlowTagGroupResponseBodyFlowTagGroupFlowTagList& operator=(GetFlowTagGroupResponseBodyFlowTagGroupFlowTagList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->color_ == nullptr
        && return this->creatorAccountId_ == nullptr && return this->id_ == nullptr && return this->modiferAccountId_ == nullptr && return this->name_ == nullptr; };
    // color Field Functions 
    bool hasColor() const { return this->color_ != nullptr;};
    void deleteColor() { this->color_ = nullptr;};
    inline string color() const { DARABONBA_PTR_GET_DEFAULT(color_, "") };
    inline GetFlowTagGroupResponseBodyFlowTagGroupFlowTagList& setColor(string color) { DARABONBA_PTR_SET_VALUE(color_, color) };


    // creatorAccountId Field Functions 
    bool hasCreatorAccountId() const { return this->creatorAccountId_ != nullptr;};
    void deleteCreatorAccountId() { this->creatorAccountId_ = nullptr;};
    inline string creatorAccountId() const { DARABONBA_PTR_GET_DEFAULT(creatorAccountId_, "") };
    inline GetFlowTagGroupResponseBodyFlowTagGroupFlowTagList& setCreatorAccountId(string creatorAccountId) { DARABONBA_PTR_SET_VALUE(creatorAccountId_, creatorAccountId) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline GetFlowTagGroupResponseBodyFlowTagGroupFlowTagList& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // modiferAccountId Field Functions 
    bool hasModiferAccountId() const { return this->modiferAccountId_ != nullptr;};
    void deleteModiferAccountId() { this->modiferAccountId_ = nullptr;};
    inline string modiferAccountId() const { DARABONBA_PTR_GET_DEFAULT(modiferAccountId_, "") };
    inline GetFlowTagGroupResponseBodyFlowTagGroupFlowTagList& setModiferAccountId(string modiferAccountId) { DARABONBA_PTR_SET_VALUE(modiferAccountId_, modiferAccountId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetFlowTagGroupResponseBodyFlowTagGroupFlowTagList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    std::shared_ptr<string> color_ = nullptr;
    std::shared_ptr<string> creatorAccountId_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<string> modiferAccountId_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
