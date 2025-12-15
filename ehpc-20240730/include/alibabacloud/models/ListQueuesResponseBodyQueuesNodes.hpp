// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTQUEUESRESPONSEBODYQUEUESNODES_HPP_
#define ALIBABACLOUD_MODELS_LISTQUEUESRESPONSEBODYQUEUESNODES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EHPC20240730
{
namespace Models
{
  class ListQueuesResponseBodyQueuesNodes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListQueuesResponseBodyQueuesNodes& obj) { 
      DARABONBA_PTR_TO_JSON(CreatingCounts, creatingCounts_);
      DARABONBA_PTR_TO_JSON(ExceptionCounts, exceptionCounts_);
      DARABONBA_PTR_TO_JSON(RunningCounts, runningCounts_);
    };
    friend void from_json(const Darabonba::Json& j, ListQueuesResponseBodyQueuesNodes& obj) { 
      DARABONBA_PTR_FROM_JSON(CreatingCounts, creatingCounts_);
      DARABONBA_PTR_FROM_JSON(ExceptionCounts, exceptionCounts_);
      DARABONBA_PTR_FROM_JSON(RunningCounts, runningCounts_);
    };
    ListQueuesResponseBodyQueuesNodes() = default ;
    ListQueuesResponseBodyQueuesNodes(const ListQueuesResponseBodyQueuesNodes &) = default ;
    ListQueuesResponseBodyQueuesNodes(ListQueuesResponseBodyQueuesNodes &&) = default ;
    ListQueuesResponseBodyQueuesNodes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListQueuesResponseBodyQueuesNodes() = default ;
    ListQueuesResponseBodyQueuesNodes& operator=(const ListQueuesResponseBodyQueuesNodes &) = default ;
    ListQueuesResponseBodyQueuesNodes& operator=(ListQueuesResponseBodyQueuesNodes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->creatingCounts_ == nullptr
        && return this->exceptionCounts_ == nullptr && return this->runningCounts_ == nullptr; };
    // creatingCounts Field Functions 
    bool hasCreatingCounts() const { return this->creatingCounts_ != nullptr;};
    void deleteCreatingCounts() { this->creatingCounts_ = nullptr;};
    inline int32_t creatingCounts() const { DARABONBA_PTR_GET_DEFAULT(creatingCounts_, 0) };
    inline ListQueuesResponseBodyQueuesNodes& setCreatingCounts(int32_t creatingCounts) { DARABONBA_PTR_SET_VALUE(creatingCounts_, creatingCounts) };


    // exceptionCounts Field Functions 
    bool hasExceptionCounts() const { return this->exceptionCounts_ != nullptr;};
    void deleteExceptionCounts() { this->exceptionCounts_ = nullptr;};
    inline int32_t exceptionCounts() const { DARABONBA_PTR_GET_DEFAULT(exceptionCounts_, 0) };
    inline ListQueuesResponseBodyQueuesNodes& setExceptionCounts(int32_t exceptionCounts) { DARABONBA_PTR_SET_VALUE(exceptionCounts_, exceptionCounts) };


    // runningCounts Field Functions 
    bool hasRunningCounts() const { return this->runningCounts_ != nullptr;};
    void deleteRunningCounts() { this->runningCounts_ = nullptr;};
    inline int32_t runningCounts() const { DARABONBA_PTR_GET_DEFAULT(runningCounts_, 0) };
    inline ListQueuesResponseBodyQueuesNodes& setRunningCounts(int32_t runningCounts) { DARABONBA_PTR_SET_VALUE(runningCounts_, runningCounts) };


  protected:
    // The number of compute nodes that are not ready.
    std::shared_ptr<int32_t> creatingCounts_ = nullptr;
    // The number of malfunctioning compute nodes.
    std::shared_ptr<int32_t> exceptionCounts_ = nullptr;
    // The number of running compute nodes.
    std::shared_ptr<int32_t> runningCounts_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EHPC20240730
#endif
