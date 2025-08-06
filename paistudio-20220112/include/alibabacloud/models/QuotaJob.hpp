// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUOTAJOB_HPP_
#define ALIBABACLOUD_MODELS_QUOTAJOB_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20220112
{
namespace Models
{
  class QuotaJob : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QuotaJob& obj) { 
      DARABONBA_PTR_TO_JSON(Queuing, queuing_);
      DARABONBA_PTR_TO_JSON(Running, running_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, QuotaJob& obj) { 
      DARABONBA_PTR_FROM_JSON(Queuing, queuing_);
      DARABONBA_PTR_FROM_JSON(Running, running_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    QuotaJob() = default ;
    QuotaJob(const QuotaJob &) = default ;
    QuotaJob(QuotaJob &&) = default ;
    QuotaJob(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QuotaJob() = default ;
    QuotaJob& operator=(const QuotaJob &) = default ;
    QuotaJob& operator=(QuotaJob &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->queuing_ != nullptr
        && this->running_ != nullptr && this->total_ != nullptr; };
    // queuing Field Functions 
    bool hasQueuing() const { return this->queuing_ != nullptr;};
    void deleteQueuing() { this->queuing_ = nullptr;};
    inline int64_t queuing() const { DARABONBA_PTR_GET_DEFAULT(queuing_, 0L) };
    inline QuotaJob& setQueuing(int64_t queuing) { DARABONBA_PTR_SET_VALUE(queuing_, queuing) };


    // running Field Functions 
    bool hasRunning() const { return this->running_ != nullptr;};
    void deleteRunning() { this->running_ = nullptr;};
    inline int64_t running() const { DARABONBA_PTR_GET_DEFAULT(running_, 0L) };
    inline QuotaJob& setRunning(int64_t running) { DARABONBA_PTR_SET_VALUE(running_, running) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline QuotaJob& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    std::shared_ptr<int64_t> queuing_ = nullptr;
    std::shared_ptr<int64_t> running_ = nullptr;
    std::shared_ptr<int64_t> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif
