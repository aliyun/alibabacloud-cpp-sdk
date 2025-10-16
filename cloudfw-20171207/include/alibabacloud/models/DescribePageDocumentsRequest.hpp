// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPAGEDOCUMENTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPAGEDOCUMENTSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribePageDocumentsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePageDocumentsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(PageName, pageName_);
      DARABONBA_PTR_TO_JSON(SourceCode, sourceCode_);
      DARABONBA_PTR_TO_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_TO_JSON(TabName, tabName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePageDocumentsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(PageName, pageName_);
      DARABONBA_PTR_FROM_JSON(SourceCode, sourceCode_);
      DARABONBA_PTR_FROM_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_FROM_JSON(TabName, tabName_);
    };
    DescribePageDocumentsRequest() = default ;
    DescribePageDocumentsRequest(const DescribePageDocumentsRequest &) = default ;
    DescribePageDocumentsRequest(DescribePageDocumentsRequest &&) = default ;
    DescribePageDocumentsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePageDocumentsRequest() = default ;
    DescribePageDocumentsRequest& operator=(const DescribePageDocumentsRequest &) = default ;
    DescribePageDocumentsRequest& operator=(DescribePageDocumentsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr
        && return this->pageName_ == nullptr && return this->sourceCode_ == nullptr && return this->sourceIp_ == nullptr && return this->tabName_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribePageDocumentsRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // pageName Field Functions 
    bool hasPageName() const { return this->pageName_ != nullptr;};
    void deletePageName() { this->pageName_ = nullptr;};
    inline string pageName() const { DARABONBA_PTR_GET_DEFAULT(pageName_, "") };
    inline DescribePageDocumentsRequest& setPageName(string pageName) { DARABONBA_PTR_SET_VALUE(pageName_, pageName) };


    // sourceCode Field Functions 
    bool hasSourceCode() const { return this->sourceCode_ != nullptr;};
    void deleteSourceCode() { this->sourceCode_ = nullptr;};
    inline string sourceCode() const { DARABONBA_PTR_GET_DEFAULT(sourceCode_, "") };
    inline DescribePageDocumentsRequest& setSourceCode(string sourceCode) { DARABONBA_PTR_SET_VALUE(sourceCode_, sourceCode) };


    // sourceIp Field Functions 
    bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
    void deleteSourceIp() { this->sourceIp_ = nullptr;};
    inline string sourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
    inline DescribePageDocumentsRequest& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


    // tabName Field Functions 
    bool hasTabName() const { return this->tabName_ != nullptr;};
    void deleteTabName() { this->tabName_ = nullptr;};
    inline string tabName() const { DARABONBA_PTR_GET_DEFAULT(tabName_, "") };
    inline DescribePageDocumentsRequest& setTabName(string tabName) { DARABONBA_PTR_SET_VALUE(tabName_, tabName) };


  protected:
    std::shared_ptr<string> lang_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> pageName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> sourceCode_ = nullptr;
    std::shared_ptr<string> sourceIp_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> tabName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
