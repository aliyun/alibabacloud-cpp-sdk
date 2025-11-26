// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEBATCHREPEATJOBRESPONSEBODYJOBGROUP_HPP_
#define ALIBABACLOUD_MODELS_CREATEBATCHREPEATJOBRESPONSEBODYJOBGROUP_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class CreateBatchRepeatJobResponseBodyJobGroup : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateBatchRepeatJobResponseBodyJobGroup& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(MinConcurrency, minConcurrency_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(RingingDuration, ringingDuration_);
    };
    friend void from_json(const Darabonba::Json& j, CreateBatchRepeatJobResponseBodyJobGroup& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(MinConcurrency, minConcurrency_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(RingingDuration, ringingDuration_);
    };
    CreateBatchRepeatJobResponseBodyJobGroup() = default ;
    CreateBatchRepeatJobResponseBodyJobGroup(const CreateBatchRepeatJobResponseBodyJobGroup &) = default ;
    CreateBatchRepeatJobResponseBodyJobGroup(CreateBatchRepeatJobResponseBodyJobGroup &&) = default ;
    CreateBatchRepeatJobResponseBodyJobGroup(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateBatchRepeatJobResponseBodyJobGroup() = default ;
    CreateBatchRepeatJobResponseBodyJobGroup& operator=(const CreateBatchRepeatJobResponseBodyJobGroup &) = default ;
    CreateBatchRepeatJobResponseBodyJobGroup& operator=(CreateBatchRepeatJobResponseBodyJobGroup &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->id_ == nullptr
        && return this->minConcurrency_ == nullptr && return this->priority_ == nullptr && return this->ringingDuration_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline CreateBatchRepeatJobResponseBodyJobGroup& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // minConcurrency Field Functions 
    bool hasMinConcurrency() const { return this->minConcurrency_ != nullptr;};
    void deleteMinConcurrency() { this->minConcurrency_ = nullptr;};
    inline int64_t minConcurrency() const { DARABONBA_PTR_GET_DEFAULT(minConcurrency_, 0L) };
    inline CreateBatchRepeatJobResponseBodyJobGroup& setMinConcurrency(int64_t minConcurrency) { DARABONBA_PTR_SET_VALUE(minConcurrency_, minConcurrency) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline string priority() const { DARABONBA_PTR_GET_DEFAULT(priority_, "") };
    inline CreateBatchRepeatJobResponseBodyJobGroup& setPriority(string priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // ringingDuration Field Functions 
    bool hasRingingDuration() const { return this->ringingDuration_ != nullptr;};
    void deleteRingingDuration() { this->ringingDuration_ = nullptr;};
    inline int64_t ringingDuration() const { DARABONBA_PTR_GET_DEFAULT(ringingDuration_, 0L) };
    inline CreateBatchRepeatJobResponseBodyJobGroup& setRingingDuration(int64_t ringingDuration) { DARABONBA_PTR_SET_VALUE(ringingDuration_, ringingDuration) };


  protected:
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<int64_t> minConcurrency_ = nullptr;
    std::shared_ptr<string> priority_ = nullptr;
    std::shared_ptr<int64_t> ringingDuration_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
