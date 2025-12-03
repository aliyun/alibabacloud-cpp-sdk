// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEREPOSITORYMEMBERREQUESTRELATEDINFOS_HPP_
#define ALIBABACLOUD_MODELS_UPDATEREPOSITORYMEMBERREQUESTRELATEDINFOS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class UpdateRepositoryMemberRequestRelatedInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateRepositoryMemberRequestRelatedInfos& obj) { 
      DARABONBA_PTR_TO_JSON(relatedId, relatedId_);
      DARABONBA_PTR_TO_JSON(sourceId, sourceId_);
      DARABONBA_PTR_TO_JSON(sourceType, sourceType_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateRepositoryMemberRequestRelatedInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(relatedId, relatedId_);
      DARABONBA_PTR_FROM_JSON(sourceId, sourceId_);
      DARABONBA_PTR_FROM_JSON(sourceType, sourceType_);
    };
    UpdateRepositoryMemberRequestRelatedInfos() = default ;
    UpdateRepositoryMemberRequestRelatedInfos(const UpdateRepositoryMemberRequestRelatedInfos &) = default ;
    UpdateRepositoryMemberRequestRelatedInfos(UpdateRepositoryMemberRequestRelatedInfos &&) = default ;
    UpdateRepositoryMemberRequestRelatedInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateRepositoryMemberRequestRelatedInfos() = default ;
    UpdateRepositoryMemberRequestRelatedInfos& operator=(const UpdateRepositoryMemberRequestRelatedInfos &) = default ;
    UpdateRepositoryMemberRequestRelatedInfos& operator=(UpdateRepositoryMemberRequestRelatedInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->relatedId_ == nullptr
        && return this->sourceId_ == nullptr && return this->sourceType_ == nullptr; };
    // relatedId Field Functions 
    bool hasRelatedId() const { return this->relatedId_ != nullptr;};
    void deleteRelatedId() { this->relatedId_ = nullptr;};
    inline string relatedId() const { DARABONBA_PTR_GET_DEFAULT(relatedId_, "") };
    inline UpdateRepositoryMemberRequestRelatedInfos& setRelatedId(string relatedId) { DARABONBA_PTR_SET_VALUE(relatedId_, relatedId) };


    // sourceId Field Functions 
    bool hasSourceId() const { return this->sourceId_ != nullptr;};
    void deleteSourceId() { this->sourceId_ = nullptr;};
    inline int64_t sourceId() const { DARABONBA_PTR_GET_DEFAULT(sourceId_, 0L) };
    inline UpdateRepositoryMemberRequestRelatedInfos& setSourceId(int64_t sourceId) { DARABONBA_PTR_SET_VALUE(sourceId_, sourceId) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string sourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline UpdateRepositoryMemberRequestRelatedInfos& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


  protected:
    std::shared_ptr<string> relatedId_ = nullptr;
    std::shared_ptr<int64_t> sourceId_ = nullptr;
    std::shared_ptr<string> sourceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
