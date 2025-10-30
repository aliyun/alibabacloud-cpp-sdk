// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENAMELISTDOWNLOADURLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENAMELISTDOWNLOADURLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeNameListDownloadUrlRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNameListDownloadUrlRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(regId, regId_);
      DARABONBA_PTR_TO_JSON(variableId, variableId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNameListDownloadUrlRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(regId, regId_);
      DARABONBA_PTR_FROM_JSON(variableId, variableId_);
    };
    DescribeNameListDownloadUrlRequest() = default ;
    DescribeNameListDownloadUrlRequest(const DescribeNameListDownloadUrlRequest &) = default ;
    DescribeNameListDownloadUrlRequest(DescribeNameListDownloadUrlRequest &&) = default ;
    DescribeNameListDownloadUrlRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNameListDownloadUrlRequest() = default ;
    DescribeNameListDownloadUrlRequest& operator=(const DescribeNameListDownloadUrlRequest &) = default ;
    DescribeNameListDownloadUrlRequest& operator=(DescribeNameListDownloadUrlRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr
        && return this->regId_ == nullptr && return this->variableId_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeNameListDownloadUrlRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // regId Field Functions 
    bool hasRegId() const { return this->regId_ != nullptr;};
    void deleteRegId() { this->regId_ = nullptr;};
    inline string regId() const { DARABONBA_PTR_GET_DEFAULT(regId_, "") };
    inline DescribeNameListDownloadUrlRequest& setRegId(string regId) { DARABONBA_PTR_SET_VALUE(regId_, regId) };


    // variableId Field Functions 
    bool hasVariableId() const { return this->variableId_ != nullptr;};
    void deleteVariableId() { this->variableId_ = nullptr;};
    inline int64_t variableId() const { DARABONBA_PTR_GET_DEFAULT(variableId_, 0L) };
    inline DescribeNameListDownloadUrlRequest& setVariableId(int64_t variableId) { DARABONBA_PTR_SET_VALUE(variableId_, variableId) };


  protected:
    // Set the language type for requests and received messages, default value is **zh**. Values:
    // - **zh**: Chinese
    // - **en**: English
    std::shared_ptr<string> lang_ = nullptr;
    // Region code
    std::shared_ptr<string> regId_ = nullptr;
    // Variable ID.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> variableId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
