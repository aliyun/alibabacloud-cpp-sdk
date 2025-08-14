// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CANCELVIDEOTASKRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_CANCELVIDEOTASKRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Avatar20220130
{
namespace Models
{
  class CancelVideoTaskResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CancelVideoTaskResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(FailReason, failReason_);
      DARABONBA_PTR_TO_JSON(IsCancel, isCancel_);
      DARABONBA_PTR_TO_JSON(TaskUuid, taskUuid_);
    };
    friend void from_json(const Darabonba::Json& j, CancelVideoTaskResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(FailReason, failReason_);
      DARABONBA_PTR_FROM_JSON(IsCancel, isCancel_);
      DARABONBA_PTR_FROM_JSON(TaskUuid, taskUuid_);
    };
    CancelVideoTaskResponseBodyData() = default ;
    CancelVideoTaskResponseBodyData(const CancelVideoTaskResponseBodyData &) = default ;
    CancelVideoTaskResponseBodyData(CancelVideoTaskResponseBodyData &&) = default ;
    CancelVideoTaskResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CancelVideoTaskResponseBodyData() = default ;
    CancelVideoTaskResponseBodyData& operator=(const CancelVideoTaskResponseBodyData &) = default ;
    CancelVideoTaskResponseBodyData& operator=(CancelVideoTaskResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->failReason_ != nullptr
        && this->isCancel_ != nullptr && this->taskUuid_ != nullptr; };
    // failReason Field Functions 
    bool hasFailReason() const { return this->failReason_ != nullptr;};
    void deleteFailReason() { this->failReason_ = nullptr;};
    inline string failReason() const { DARABONBA_PTR_GET_DEFAULT(failReason_, "") };
    inline CancelVideoTaskResponseBodyData& setFailReason(string failReason) { DARABONBA_PTR_SET_VALUE(failReason_, failReason) };


    // isCancel Field Functions 
    bool hasIsCancel() const { return this->isCancel_ != nullptr;};
    void deleteIsCancel() { this->isCancel_ = nullptr;};
    inline bool isCancel() const { DARABONBA_PTR_GET_DEFAULT(isCancel_, false) };
    inline CancelVideoTaskResponseBodyData& setIsCancel(bool isCancel) { DARABONBA_PTR_SET_VALUE(isCancel_, isCancel) };


    // taskUuid Field Functions 
    bool hasTaskUuid() const { return this->taskUuid_ != nullptr;};
    void deleteTaskUuid() { this->taskUuid_ = nullptr;};
    inline string taskUuid() const { DARABONBA_PTR_GET_DEFAULT(taskUuid_, "") };
    inline CancelVideoTaskResponseBodyData& setTaskUuid(string taskUuid) { DARABONBA_PTR_SET_VALUE(taskUuid_, taskUuid) };


  protected:
    std::shared_ptr<string> failReason_ = nullptr;
    std::shared_ptr<bool> isCancel_ = nullptr;
    std::shared_ptr<string> taskUuid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Avatar20220130
#endif
