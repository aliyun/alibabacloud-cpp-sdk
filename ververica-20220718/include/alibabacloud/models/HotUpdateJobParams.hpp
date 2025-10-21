// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HOTUPDATEJOBPARAMS_HPP_
#define ALIBABACLOUD_MODELS_HOTUPDATEJOBPARAMS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RescaleJobParam.hpp>
#include <alibabacloud/models/UpdateJobConfigParam.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ververica20220718
{
namespace Models
{
  class HotUpdateJobParams : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HotUpdateJobParams& obj) { 
      DARABONBA_PTR_TO_JSON(rescaleJobParam, rescaleJobParam_);
      DARABONBA_PTR_TO_JSON(updateJobConfigParam, updateJobConfigParam_);
    };
    friend void from_json(const Darabonba::Json& j, HotUpdateJobParams& obj) { 
      DARABONBA_PTR_FROM_JSON(rescaleJobParam, rescaleJobParam_);
      DARABONBA_PTR_FROM_JSON(updateJobConfigParam, updateJobConfigParam_);
    };
    HotUpdateJobParams() = default ;
    HotUpdateJobParams(const HotUpdateJobParams &) = default ;
    HotUpdateJobParams(HotUpdateJobParams &&) = default ;
    HotUpdateJobParams(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HotUpdateJobParams() = default ;
    HotUpdateJobParams& operator=(const HotUpdateJobParams &) = default ;
    HotUpdateJobParams& operator=(HotUpdateJobParams &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->rescaleJobParam_ == nullptr
        && return this->updateJobConfigParam_ == nullptr; };
    // rescaleJobParam Field Functions 
    bool hasRescaleJobParam() const { return this->rescaleJobParam_ != nullptr;};
    void deleteRescaleJobParam() { this->rescaleJobParam_ = nullptr;};
    inline const RescaleJobParam & rescaleJobParam() const { DARABONBA_PTR_GET_CONST(rescaleJobParam_, RescaleJobParam) };
    inline RescaleJobParam rescaleJobParam() { DARABONBA_PTR_GET(rescaleJobParam_, RescaleJobParam) };
    inline HotUpdateJobParams& setRescaleJobParam(const RescaleJobParam & rescaleJobParam) { DARABONBA_PTR_SET_VALUE(rescaleJobParam_, rescaleJobParam) };
    inline HotUpdateJobParams& setRescaleJobParam(RescaleJobParam && rescaleJobParam) { DARABONBA_PTR_SET_RVALUE(rescaleJobParam_, rescaleJobParam) };


    // updateJobConfigParam Field Functions 
    bool hasUpdateJobConfigParam() const { return this->updateJobConfigParam_ != nullptr;};
    void deleteUpdateJobConfigParam() { this->updateJobConfigParam_ = nullptr;};
    inline const UpdateJobConfigParam & updateJobConfigParam() const { DARABONBA_PTR_GET_CONST(updateJobConfigParam_, UpdateJobConfigParam) };
    inline UpdateJobConfigParam updateJobConfigParam() { DARABONBA_PTR_GET(updateJobConfigParam_, UpdateJobConfigParam) };
    inline HotUpdateJobParams& setUpdateJobConfigParam(const UpdateJobConfigParam & updateJobConfigParam) { DARABONBA_PTR_SET_VALUE(updateJobConfigParam_, updateJobConfigParam) };
    inline HotUpdateJobParams& setUpdateJobConfigParam(UpdateJobConfigParam && updateJobConfigParam) { DARABONBA_PTR_SET_RVALUE(updateJobConfigParam_, updateJobConfigParam) };


  protected:
    std::shared_ptr<RescaleJobParam> rescaleJobParam_ = nullptr;
    std::shared_ptr<UpdateJobConfigParam> updateJobConfigParam_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ververica20220718
#endif
