// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PRELOADREGIONSDGRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_PRELOADREGIONSDGRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/PreloadRegionSDGResponseBodyDataResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class PreloadRegionSDGResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PreloadRegionSDGResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, PreloadRegionSDGResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    PreloadRegionSDGResponseBodyData() = default ;
    PreloadRegionSDGResponseBodyData(const PreloadRegionSDGResponseBodyData &) = default ;
    PreloadRegionSDGResponseBodyData(PreloadRegionSDGResponseBodyData &&) = default ;
    PreloadRegionSDGResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PreloadRegionSDGResponseBodyData() = default ;
    PreloadRegionSDGResponseBodyData& operator=(const PreloadRegionSDGResponseBodyData &) = default ;
    PreloadRegionSDGResponseBodyData& operator=(PreloadRegionSDGResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->message_ != nullptr
        && this->result_ != nullptr && this->success_ != nullptr; };
    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline PreloadRegionSDGResponseBodyData& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const Models::PreloadRegionSDGResponseBodyDataResult & result() const { DARABONBA_PTR_GET_CONST(result_, Models::PreloadRegionSDGResponseBodyDataResult) };
    inline Models::PreloadRegionSDGResponseBodyDataResult result() { DARABONBA_PTR_GET(result_, Models::PreloadRegionSDGResponseBodyDataResult) };
    inline PreloadRegionSDGResponseBodyData& setResult(const Models::PreloadRegionSDGResponseBodyDataResult & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline PreloadRegionSDGResponseBodyData& setResult(Models::PreloadRegionSDGResponseBodyDataResult && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline PreloadRegionSDGResponseBodyData& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The message returned.
    std::shared_ptr<string> message_ = nullptr;
    // The execution result of the synchronization request.
    std::shared_ptr<Models::PreloadRegionSDGResponseBodyDataResult> result_ = nullptr;
    // Indicates whether all tasks are successful. Valid values:
    // 
    // *   true: All tasks are successful.
    // *   false: Failed tasks exist.
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
