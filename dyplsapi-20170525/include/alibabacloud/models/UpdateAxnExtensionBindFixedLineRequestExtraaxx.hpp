// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEAXNEXTENSIONBINDFIXEDLINEREQUESTEXTRAAXX_HPP_
#define ALIBABACLOUD_MODELS_UPDATEAXNEXTENSIONBINDFIXEDLINEREQUESTEXTRAAXX_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyplsapi20170525
{
namespace Models
{
  class UpdateAxnExtensionBindFixedLineRequestExtraaxx : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAxnExtensionBindFixedLineRequestExtraaxx& obj) { 
      DARABONBA_PTR_TO_JSON(Callback, callback_);
      DARABONBA_PTR_TO_JSON(Callrecording, callrecording_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAxnExtensionBindFixedLineRequestExtraaxx& obj) { 
      DARABONBA_PTR_FROM_JSON(Callback, callback_);
      DARABONBA_PTR_FROM_JSON(Callrecording, callrecording_);
    };
    UpdateAxnExtensionBindFixedLineRequestExtraaxx() = default ;
    UpdateAxnExtensionBindFixedLineRequestExtraaxx(const UpdateAxnExtensionBindFixedLineRequestExtraaxx &) = default ;
    UpdateAxnExtensionBindFixedLineRequestExtraaxx(UpdateAxnExtensionBindFixedLineRequestExtraaxx &&) = default ;
    UpdateAxnExtensionBindFixedLineRequestExtraaxx(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAxnExtensionBindFixedLineRequestExtraaxx() = default ;
    UpdateAxnExtensionBindFixedLineRequestExtraaxx& operator=(const UpdateAxnExtensionBindFixedLineRequestExtraaxx &) = default ;
    UpdateAxnExtensionBindFixedLineRequestExtraaxx& operator=(UpdateAxnExtensionBindFixedLineRequestExtraaxx &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->callback_ == nullptr
        && return this->callrecording_ == nullptr; };
    // callback Field Functions 
    bool hasCallback() const { return this->callback_ != nullptr;};
    void deleteCallback() { this->callback_ = nullptr;};
    inline string callback() const { DARABONBA_PTR_GET_DEFAULT(callback_, "") };
    inline UpdateAxnExtensionBindFixedLineRequestExtraaxx& setCallback(string callback) { DARABONBA_PTR_SET_VALUE(callback_, callback) };


    // callrecording Field Functions 
    bool hasCallrecording() const { return this->callrecording_ != nullptr;};
    void deleteCallrecording() { this->callrecording_ = nullptr;};
    inline string callrecording() const { DARABONBA_PTR_GET_DEFAULT(callrecording_, "") };
    inline UpdateAxnExtensionBindFixedLineRequestExtraaxx& setCallrecording(string callrecording) { DARABONBA_PTR_SET_VALUE(callrecording_, callrecording) };


  protected:
    // 可选。 A通过X呼叫，即A主叫X，仅下列值有效。默认是0。 0：不能外呼 1：接续最近的B号码
    std::shared_ptr<string> callback_ = nullptr;
    // 录音控制，仅下列值有效。默认是0（不开通录音功能）。 0：不录音 1：录音
    std::shared_ptr<string> callrecording_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyplsapi20170525
#endif
