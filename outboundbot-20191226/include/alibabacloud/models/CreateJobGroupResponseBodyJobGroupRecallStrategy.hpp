// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEJOBGROUPRESPONSEBODYJOBGROUPRECALLSTRATEGY_HPP_
#define ALIBABACLOUD_MODELS_CREATEJOBGROUPRESPONSEBODYJOBGROUPRECALLSTRATEGY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class CreateJobGroupResponseBodyJobGroupRecallStrategy : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateJobGroupResponseBodyJobGroupRecallStrategy& obj) { 
      DARABONBA_PTR_TO_JSON(EmptyNumberIgnore, emptyNumberIgnore_);
      DARABONBA_PTR_TO_JSON(InArrearsIgnore, inArrearsIgnore_);
      DARABONBA_PTR_TO_JSON(OutOfServiceIgnore, outOfServiceIgnore_);
    };
    friend void from_json(const Darabonba::Json& j, CreateJobGroupResponseBodyJobGroupRecallStrategy& obj) { 
      DARABONBA_PTR_FROM_JSON(EmptyNumberIgnore, emptyNumberIgnore_);
      DARABONBA_PTR_FROM_JSON(InArrearsIgnore, inArrearsIgnore_);
      DARABONBA_PTR_FROM_JSON(OutOfServiceIgnore, outOfServiceIgnore_);
    };
    CreateJobGroupResponseBodyJobGroupRecallStrategy() = default ;
    CreateJobGroupResponseBodyJobGroupRecallStrategy(const CreateJobGroupResponseBodyJobGroupRecallStrategy &) = default ;
    CreateJobGroupResponseBodyJobGroupRecallStrategy(CreateJobGroupResponseBodyJobGroupRecallStrategy &&) = default ;
    CreateJobGroupResponseBodyJobGroupRecallStrategy(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateJobGroupResponseBodyJobGroupRecallStrategy() = default ;
    CreateJobGroupResponseBodyJobGroupRecallStrategy& operator=(const CreateJobGroupResponseBodyJobGroupRecallStrategy &) = default ;
    CreateJobGroupResponseBodyJobGroupRecallStrategy& operator=(CreateJobGroupResponseBodyJobGroupRecallStrategy &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->emptyNumberIgnore_ == nullptr
        && return this->inArrearsIgnore_ == nullptr && return this->outOfServiceIgnore_ == nullptr; };
    // emptyNumberIgnore Field Functions 
    bool hasEmptyNumberIgnore() const { return this->emptyNumberIgnore_ != nullptr;};
    void deleteEmptyNumberIgnore() { this->emptyNumberIgnore_ = nullptr;};
    inline bool emptyNumberIgnore() const { DARABONBA_PTR_GET_DEFAULT(emptyNumberIgnore_, false) };
    inline CreateJobGroupResponseBodyJobGroupRecallStrategy& setEmptyNumberIgnore(bool emptyNumberIgnore) { DARABONBA_PTR_SET_VALUE(emptyNumberIgnore_, emptyNumberIgnore) };


    // inArrearsIgnore Field Functions 
    bool hasInArrearsIgnore() const { return this->inArrearsIgnore_ != nullptr;};
    void deleteInArrearsIgnore() { this->inArrearsIgnore_ = nullptr;};
    inline bool inArrearsIgnore() const { DARABONBA_PTR_GET_DEFAULT(inArrearsIgnore_, false) };
    inline CreateJobGroupResponseBodyJobGroupRecallStrategy& setInArrearsIgnore(bool inArrearsIgnore) { DARABONBA_PTR_SET_VALUE(inArrearsIgnore_, inArrearsIgnore) };


    // outOfServiceIgnore Field Functions 
    bool hasOutOfServiceIgnore() const { return this->outOfServiceIgnore_ != nullptr;};
    void deleteOutOfServiceIgnore() { this->outOfServiceIgnore_ = nullptr;};
    inline bool outOfServiceIgnore() const { DARABONBA_PTR_GET_DEFAULT(outOfServiceIgnore_, false) };
    inline CreateJobGroupResponseBodyJobGroupRecallStrategy& setOutOfServiceIgnore(bool outOfServiceIgnore) { DARABONBA_PTR_SET_VALUE(outOfServiceIgnore_, outOfServiceIgnore) };


  protected:
    std::shared_ptr<bool> emptyNumberIgnore_ = nullptr;
    std::shared_ptr<bool> inArrearsIgnore_ = nullptr;
    std::shared_ptr<bool> outOfServiceIgnore_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
