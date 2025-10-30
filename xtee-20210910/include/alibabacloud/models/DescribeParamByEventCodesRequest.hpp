// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPARAMBYEVENTCODESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPARAMBYEVENTCODESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeParamByEventCodesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeParamByEventCodesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(eventCodes, eventCodes_);
      DARABONBA_PTR_TO_JSON(parma, parma_);
      DARABONBA_PTR_TO_JSON(regId, regId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeParamByEventCodesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(eventCodes, eventCodes_);
      DARABONBA_PTR_FROM_JSON(parma, parma_);
      DARABONBA_PTR_FROM_JSON(regId, regId_);
    };
    DescribeParamByEventCodesRequest() = default ;
    DescribeParamByEventCodesRequest(const DescribeParamByEventCodesRequest &) = default ;
    DescribeParamByEventCodesRequest(DescribeParamByEventCodesRequest &&) = default ;
    DescribeParamByEventCodesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeParamByEventCodesRequest() = default ;
    DescribeParamByEventCodesRequest& operator=(const DescribeParamByEventCodesRequest &) = default ;
    DescribeParamByEventCodesRequest& operator=(DescribeParamByEventCodesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr
        && return this->eventCodes_ == nullptr && return this->parma_ == nullptr && return this->regId_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeParamByEventCodesRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // eventCodes Field Functions 
    bool hasEventCodes() const { return this->eventCodes_ != nullptr;};
    void deleteEventCodes() { this->eventCodes_ = nullptr;};
    inline string eventCodes() const { DARABONBA_PTR_GET_DEFAULT(eventCodes_, "") };
    inline DescribeParamByEventCodesRequest& setEventCodes(string eventCodes) { DARABONBA_PTR_SET_VALUE(eventCodes_, eventCodes) };


    // parma Field Functions 
    bool hasParma() const { return this->parma_ != nullptr;};
    void deleteParma() { this->parma_ = nullptr;};
    inline string parma() const { DARABONBA_PTR_GET_DEFAULT(parma_, "") };
    inline DescribeParamByEventCodesRequest& setParma(string parma) { DARABONBA_PTR_SET_VALUE(parma_, parma) };


    // regId Field Functions 
    bool hasRegId() const { return this->regId_ != nullptr;};
    void deleteRegId() { this->regId_ = nullptr;};
    inline string regId() const { DARABONBA_PTR_GET_DEFAULT(regId_, "") };
    inline DescribeParamByEventCodesRequest& setRegId(string regId) { DARABONBA_PTR_SET_VALUE(regId_, regId) };


  protected:
    // Set the language type for request and response, default value is **zh**. Values:
    // - **zh**: Chinese
    // - **en**: English
    std::shared_ptr<string> lang_ = nullptr;
    // Event code.
    // 
    // This parameter is required.
    std::shared_ptr<string> eventCodes_ = nullptr;
    // Query condition
    std::shared_ptr<string> parma_ = nullptr;
    // Region code
    std::shared_ptr<string> regId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
