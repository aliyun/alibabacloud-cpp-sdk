// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PROGRESSCONTROLREQUESTOPENPROGRESSCONTROLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PROGRESSCONTROLREQUESTOPENPROGRESSCONTROLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class ProgressControlRequestOpenProgressControlRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ProgressControlRequestOpenProgressControlRequest& obj) { 
      DARABONBA_ANY_TO_JSON(ExtendInfo, extendInfo_);
      DARABONBA_PTR_TO_JSON(Progress, progress_);
    };
    friend void from_json(const Darabonba::Json& j, ProgressControlRequestOpenProgressControlRequest& obj) { 
      DARABONBA_ANY_FROM_JSON(ExtendInfo, extendInfo_);
      DARABONBA_PTR_FROM_JSON(Progress, progress_);
    };
    ProgressControlRequestOpenProgressControlRequest() = default ;
    ProgressControlRequestOpenProgressControlRequest(const ProgressControlRequestOpenProgressControlRequest &) = default ;
    ProgressControlRequestOpenProgressControlRequest(ProgressControlRequestOpenProgressControlRequest &&) = default ;
    ProgressControlRequestOpenProgressControlRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ProgressControlRequestOpenProgressControlRequest() = default ;
    ProgressControlRequestOpenProgressControlRequest& operator=(const ProgressControlRequestOpenProgressControlRequest &) = default ;
    ProgressControlRequestOpenProgressControlRequest& operator=(ProgressControlRequestOpenProgressControlRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->extendInfo_ != nullptr
        && this->progress_ != nullptr; };
    // extendInfo Field Functions 
    bool hasExtendInfo() const { return this->extendInfo_ != nullptr;};
    void deleteExtendInfo() { this->extendInfo_ = nullptr;};
    inline     const Darabonba::Json & extendInfo() const { DARABONBA_GET(extendInfo_) };
    Darabonba::Json & extendInfo() { DARABONBA_GET(extendInfo_) };
    inline ProgressControlRequestOpenProgressControlRequest& setExtendInfo(const Darabonba::Json & extendInfo) { DARABONBA_SET_VALUE(extendInfo_, extendInfo) };
    inline ProgressControlRequestOpenProgressControlRequest& setExtendInfo(Darabonba::Json & extendInfo) { DARABONBA_SET_RVALUE(extendInfo_, extendInfo) };


    // progress Field Functions 
    bool hasProgress() const { return this->progress_ != nullptr;};
    void deleteProgress() { this->progress_ = nullptr;};
    inline int32_t progress() const { DARABONBA_PTR_GET_DEFAULT(progress_, 0) };
    inline ProgressControlRequestOpenProgressControlRequest& setProgress(int32_t progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


  protected:
    Darabonba::Json extendInfo_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> progress_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
