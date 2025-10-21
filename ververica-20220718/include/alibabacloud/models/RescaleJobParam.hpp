// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESCALEJOBPARAM_HPP_
#define ALIBABACLOUD_MODELS_RESCALEJOBPARAM_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ververica20220718
{
namespace Models
{
  class RescaleJobParam : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RescaleJobParam& obj) { 
      DARABONBA_PTR_TO_JSON(jobParallelism, jobParallelism_);
    };
    friend void from_json(const Darabonba::Json& j, RescaleJobParam& obj) { 
      DARABONBA_PTR_FROM_JSON(jobParallelism, jobParallelism_);
    };
    RescaleJobParam() = default ;
    RescaleJobParam(const RescaleJobParam &) = default ;
    RescaleJobParam(RescaleJobParam &&) = default ;
    RescaleJobParam(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RescaleJobParam() = default ;
    RescaleJobParam& operator=(const RescaleJobParam &) = default ;
    RescaleJobParam& operator=(RescaleJobParam &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->jobParallelism_ == nullptr; };
    // jobParallelism Field Functions 
    bool hasJobParallelism() const { return this->jobParallelism_ != nullptr;};
    void deleteJobParallelism() { this->jobParallelism_ = nullptr;};
    inline int64_t jobParallelism() const { DARABONBA_PTR_GET_DEFAULT(jobParallelism_, 0L) };
    inline RescaleJobParam& setJobParallelism(int64_t jobParallelism) { DARABONBA_PTR_SET_VALUE(jobParallelism_, jobParallelism) };


  protected:
    std::shared_ptr<int64_t> jobParallelism_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ververica20220718
#endif
