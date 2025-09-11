// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDATAFLOWSUBTASKREQUESTCONDITION_HPP_
#define ALIBABACLOUD_MODELS_CREATEDATAFLOWSUBTASKREQUESTCONDITION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class CreateDataFlowSubTaskRequestCondition : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDataFlowSubTaskRequestCondition& obj) { 
      DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_TO_JSON(Size, size_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDataFlowSubTaskRequestCondition& obj) { 
      DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
    };
    CreateDataFlowSubTaskRequestCondition() = default ;
    CreateDataFlowSubTaskRequestCondition(const CreateDataFlowSubTaskRequestCondition &) = default ;
    CreateDataFlowSubTaskRequestCondition(CreateDataFlowSubTaskRequestCondition &&) = default ;
    CreateDataFlowSubTaskRequestCondition(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDataFlowSubTaskRequestCondition() = default ;
    CreateDataFlowSubTaskRequestCondition& operator=(const CreateDataFlowSubTaskRequestCondition &) = default ;
    CreateDataFlowSubTaskRequestCondition& operator=(CreateDataFlowSubTaskRequestCondition &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->modifyTime_ != nullptr
        && this->size_ != nullptr; };
    // modifyTime Field Functions 
    bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
    void deleteModifyTime() { this->modifyTime_ = nullptr;};
    inline int64_t modifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, 0L) };
    inline CreateDataFlowSubTaskRequestCondition& setModifyTime(int64_t modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int64_t size() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
    inline CreateDataFlowSubTaskRequestCondition& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


  protected:
    // The modification time. The value must be a UNIX timestamp. Unit: ns.
    std::shared_ptr<int64_t> modifyTime_ = nullptr;
    // The file size. Unit: bytes.
    std::shared_ptr<int64_t> size_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
