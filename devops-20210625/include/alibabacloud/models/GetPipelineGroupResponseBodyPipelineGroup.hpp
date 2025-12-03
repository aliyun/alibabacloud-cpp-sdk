// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPIPELINEGROUPRESPONSEBODYPIPELINEGROUP_HPP_
#define ALIBABACLOUD_MODELS_GETPIPELINEGROUPRESPONSEBODYPIPELINEGROUP_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class GetPipelineGroupResponseBodyPipelineGroup : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPipelineGroupResponseBodyPipelineGroup& obj) { 
      DARABONBA_PTR_TO_JSON(createTime, createTime_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(name, name_);
    };
    friend void from_json(const Darabonba::Json& j, GetPipelineGroupResponseBodyPipelineGroup& obj) { 
      DARABONBA_PTR_FROM_JSON(createTime, createTime_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(name, name_);
    };
    GetPipelineGroupResponseBodyPipelineGroup() = default ;
    GetPipelineGroupResponseBodyPipelineGroup(const GetPipelineGroupResponseBodyPipelineGroup &) = default ;
    GetPipelineGroupResponseBodyPipelineGroup(GetPipelineGroupResponseBodyPipelineGroup &&) = default ;
    GetPipelineGroupResponseBodyPipelineGroup(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPipelineGroupResponseBodyPipelineGroup() = default ;
    GetPipelineGroupResponseBodyPipelineGroup& operator=(const GetPipelineGroupResponseBodyPipelineGroup &) = default ;
    GetPipelineGroupResponseBodyPipelineGroup& operator=(GetPipelineGroupResponseBodyPipelineGroup &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && return this->id_ == nullptr && return this->name_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline GetPipelineGroupResponseBodyPipelineGroup& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline GetPipelineGroupResponseBodyPipelineGroup& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetPipelineGroupResponseBodyPipelineGroup& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    std::shared_ptr<int64_t> createTime_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
