// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_URLASYNCMODERATIONRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_URLASYNCMODERATIONRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220302
{
namespace Models
{
  class UrlAsyncModerationResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UrlAsyncModerationResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(DataId, dataId_);
      DARABONBA_PTR_TO_JSON(ReqId, reqId_);
    };
    friend void from_json(const Darabonba::Json& j, UrlAsyncModerationResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(DataId, dataId_);
      DARABONBA_PTR_FROM_JSON(ReqId, reqId_);
    };
    UrlAsyncModerationResponseBodyData() = default ;
    UrlAsyncModerationResponseBodyData(const UrlAsyncModerationResponseBodyData &) = default ;
    UrlAsyncModerationResponseBodyData(UrlAsyncModerationResponseBodyData &&) = default ;
    UrlAsyncModerationResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UrlAsyncModerationResponseBodyData() = default ;
    UrlAsyncModerationResponseBodyData& operator=(const UrlAsyncModerationResponseBodyData &) = default ;
    UrlAsyncModerationResponseBodyData& operator=(UrlAsyncModerationResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dataId_ != nullptr
        && this->reqId_ != nullptr; };
    // dataId Field Functions 
    bool hasDataId() const { return this->dataId_ != nullptr;};
    void deleteDataId() { this->dataId_ = nullptr;};
    inline string dataId() const { DARABONBA_PTR_GET_DEFAULT(dataId_, "") };
    inline UrlAsyncModerationResponseBodyData& setDataId(string dataId) { DARABONBA_PTR_SET_VALUE(dataId_, dataId) };


    // reqId Field Functions 
    bool hasReqId() const { return this->reqId_ != nullptr;};
    void deleteReqId() { this->reqId_ = nullptr;};
    inline string reqId() const { DARABONBA_PTR_GET_DEFAULT(reqId_, "") };
    inline UrlAsyncModerationResponseBodyData& setReqId(string reqId) { DARABONBA_PTR_SET_VALUE(reqId_, reqId) };


  protected:
    // The ID of the moderated object.
    std::shared_ptr<string> dataId_ = nullptr;
    // The reqId field returned by the Url Async Moderation API.
    std::shared_ptr<string> reqId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220302
#endif
