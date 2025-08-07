// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPOOLREQUESTRESOURCELIMITS_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPOOLREQUESTRESOURCELIMITS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EhpcInstant20230701
{
namespace Models
{
  class UpdatePoolRequestResourceLimits : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdatePoolRequestResourceLimits& obj) { 
      DARABONBA_PTR_TO_JSON(MaxExectorNum, maxExectorNum_);
    };
    friend void from_json(const Darabonba::Json& j, UpdatePoolRequestResourceLimits& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxExectorNum, maxExectorNum_);
    };
    UpdatePoolRequestResourceLimits() = default ;
    UpdatePoolRequestResourceLimits(const UpdatePoolRequestResourceLimits &) = default ;
    UpdatePoolRequestResourceLimits(UpdatePoolRequestResourceLimits &&) = default ;
    UpdatePoolRequestResourceLimits(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdatePoolRequestResourceLimits() = default ;
    UpdatePoolRequestResourceLimits& operator=(const UpdatePoolRequestResourceLimits &) = default ;
    UpdatePoolRequestResourceLimits& operator=(UpdatePoolRequestResourceLimits &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->maxExectorNum_ != nullptr; };
    // maxExectorNum Field Functions 
    bool hasMaxExectorNum() const { return this->maxExectorNum_ != nullptr;};
    void deleteMaxExectorNum() { this->maxExectorNum_ = nullptr;};
    inline int32_t maxExectorNum() const { DARABONBA_PTR_GET_DEFAULT(maxExectorNum_, 0) };
    inline UpdatePoolRequestResourceLimits& setMaxExectorNum(int32_t maxExectorNum) { DARABONBA_PTR_SET_VALUE(maxExectorNum_, maxExectorNum) };


  protected:
    std::shared_ptr<int32_t> maxExectorNum_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EhpcInstant20230701
#endif
