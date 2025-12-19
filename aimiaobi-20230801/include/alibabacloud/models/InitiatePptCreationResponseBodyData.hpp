// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INITIATEPPTCREATIONRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_INITIATEPPTCREATIONRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class InitiatePptCreationResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InitiatePptCreationResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AppKey, appKey_);
      DARABONBA_PTR_TO_JSON(Code, code_);
    };
    friend void from_json(const Darabonba::Json& j, InitiatePptCreationResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AppKey, appKey_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
    };
    InitiatePptCreationResponseBodyData() = default ;
    InitiatePptCreationResponseBodyData(const InitiatePptCreationResponseBodyData &) = default ;
    InitiatePptCreationResponseBodyData(InitiatePptCreationResponseBodyData &&) = default ;
    InitiatePptCreationResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InitiatePptCreationResponseBodyData() = default ;
    InitiatePptCreationResponseBodyData& operator=(const InitiatePptCreationResponseBodyData &) = default ;
    InitiatePptCreationResponseBodyData& operator=(InitiatePptCreationResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appKey_ == nullptr
        && return this->code_ == nullptr; };
    // appKey Field Functions 
    bool hasAppKey() const { return this->appKey_ != nullptr;};
    void deleteAppKey() { this->appKey_ = nullptr;};
    inline string appKey() const { DARABONBA_PTR_GET_DEFAULT(appKey_, "") };
    inline InitiatePptCreationResponseBodyData& setAppKey(string appKey) { DARABONBA_PTR_SET_VALUE(appKey_, appKey) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline InitiatePptCreationResponseBodyData& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


  protected:
    // AppKey
    std::shared_ptr<string> appKey_ = nullptr;
    // Code
    std::shared_ptr<string> code_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
