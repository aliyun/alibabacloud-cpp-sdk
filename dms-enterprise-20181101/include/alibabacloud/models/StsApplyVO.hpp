// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STSAPPLYVO_HPP_
#define ALIBABACLOUD_MODELS_STSAPPLYVO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class StsApplyVO : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StsApplyVO& obj) { 
      DARABONBA_PTR_TO_JSON(AliyunId, aliyunId_);
      DARABONBA_PTR_TO_JSON(Duration, duration_);
    };
    friend void from_json(const Darabonba::Json& j, StsApplyVO& obj) { 
      DARABONBA_PTR_FROM_JSON(AliyunId, aliyunId_);
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
    };
    StsApplyVO() = default ;
    StsApplyVO(const StsApplyVO &) = default ;
    StsApplyVO(StsApplyVO &&) = default ;
    StsApplyVO(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StsApplyVO() = default ;
    StsApplyVO& operator=(const StsApplyVO &) = default ;
    StsApplyVO& operator=(StsApplyVO &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aliyunId_ == nullptr
        && this->duration_ == nullptr; };
    // aliyunId Field Functions 
    bool hasAliyunId() const { return this->aliyunId_ != nullptr;};
    void deleteAliyunId() { this->aliyunId_ = nullptr;};
    inline string getAliyunId() const { DARABONBA_PTR_GET_DEFAULT(aliyunId_, "") };
    inline StsApplyVO& setAliyunId(string aliyunId) { DARABONBA_PTR_SET_VALUE(aliyunId_, aliyunId) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline int64_t getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0L) };
    inline StsApplyVO& setDuration(int64_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


  protected:
    shared_ptr<string> aliyunId_ {};
    shared_ptr<int64_t> duration_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
