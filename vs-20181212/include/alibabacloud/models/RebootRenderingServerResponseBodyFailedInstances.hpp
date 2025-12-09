// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REBOOTRENDERINGSERVERRESPONSEBODYFAILEDINSTANCES_HPP_
#define ALIBABACLOUD_MODELS_REBOOTRENDERINGSERVERRESPONSEBODYFAILEDINSTANCES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class RebootRenderingServerResponseBodyFailedInstances : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RebootRenderingServerResponseBodyFailedInstances& obj) { 
      DARABONBA_PTR_TO_JSON(ErrCode, errCode_);
      DARABONBA_PTR_TO_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_TO_JSON(RenderingInstanceId, renderingInstanceId_);
    };
    friend void from_json(const Darabonba::Json& j, RebootRenderingServerResponseBodyFailedInstances& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrCode, errCode_);
      DARABONBA_PTR_FROM_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_FROM_JSON(RenderingInstanceId, renderingInstanceId_);
    };
    RebootRenderingServerResponseBodyFailedInstances() = default ;
    RebootRenderingServerResponseBodyFailedInstances(const RebootRenderingServerResponseBodyFailedInstances &) = default ;
    RebootRenderingServerResponseBodyFailedInstances(RebootRenderingServerResponseBodyFailedInstances &&) = default ;
    RebootRenderingServerResponseBodyFailedInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RebootRenderingServerResponseBodyFailedInstances() = default ;
    RebootRenderingServerResponseBodyFailedInstances& operator=(const RebootRenderingServerResponseBodyFailedInstances &) = default ;
    RebootRenderingServerResponseBodyFailedInstances& operator=(RebootRenderingServerResponseBodyFailedInstances &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->errCode_ == nullptr
        && return this->errMessage_ == nullptr && return this->renderingInstanceId_ == nullptr; };
    // errCode Field Functions 
    bool hasErrCode() const { return this->errCode_ != nullptr;};
    void deleteErrCode() { this->errCode_ = nullptr;};
    inline int32_t errCode() const { DARABONBA_PTR_GET_DEFAULT(errCode_, 0) };
    inline RebootRenderingServerResponseBodyFailedInstances& setErrCode(int32_t errCode) { DARABONBA_PTR_SET_VALUE(errCode_, errCode) };


    // errMessage Field Functions 
    bool hasErrMessage() const { return this->errMessage_ != nullptr;};
    void deleteErrMessage() { this->errMessage_ = nullptr;};
    inline string errMessage() const { DARABONBA_PTR_GET_DEFAULT(errMessage_, "") };
    inline RebootRenderingServerResponseBodyFailedInstances& setErrMessage(string errMessage) { DARABONBA_PTR_SET_VALUE(errMessage_, errMessage) };


    // renderingInstanceId Field Functions 
    bool hasRenderingInstanceId() const { return this->renderingInstanceId_ != nullptr;};
    void deleteRenderingInstanceId() { this->renderingInstanceId_ = nullptr;};
    inline string renderingInstanceId() const { DARABONBA_PTR_GET_DEFAULT(renderingInstanceId_, "") };
    inline RebootRenderingServerResponseBodyFailedInstances& setRenderingInstanceId(string renderingInstanceId) { DARABONBA_PTR_SET_VALUE(renderingInstanceId_, renderingInstanceId) };


  protected:
    std::shared_ptr<int32_t> errCode_ = nullptr;
    std::shared_ptr<string> errMessage_ = nullptr;
    std::shared_ptr<string> renderingInstanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
