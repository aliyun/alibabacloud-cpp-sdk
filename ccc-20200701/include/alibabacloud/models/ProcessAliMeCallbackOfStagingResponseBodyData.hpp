// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PROCESSALIMECALLBACKOFSTAGINGRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_PROCESSALIMECALLBACKOFSTAGINGRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class ProcessAliMeCallbackOfStagingResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ProcessAliMeCallbackOfStagingResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, ProcessAliMeCallbackOfStagingResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    ProcessAliMeCallbackOfStagingResponseBodyData() = default ;
    ProcessAliMeCallbackOfStagingResponseBodyData(const ProcessAliMeCallbackOfStagingResponseBodyData &) = default ;
    ProcessAliMeCallbackOfStagingResponseBodyData(ProcessAliMeCallbackOfStagingResponseBodyData &&) = default ;
    ProcessAliMeCallbackOfStagingResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ProcessAliMeCallbackOfStagingResponseBodyData() = default ;
    ProcessAliMeCallbackOfStagingResponseBodyData& operator=(const ProcessAliMeCallbackOfStagingResponseBodyData &) = default ;
    ProcessAliMeCallbackOfStagingResponseBodyData& operator=(ProcessAliMeCallbackOfStagingResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->result_ == nullptr; };
    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline string result() const { DARABONBA_PTR_GET_DEFAULT(result_, "") };
    inline ProcessAliMeCallbackOfStagingResponseBodyData& setResult(string result) { DARABONBA_PTR_SET_VALUE(result_, result) };


  protected:
    std::shared_ptr<string> result_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
