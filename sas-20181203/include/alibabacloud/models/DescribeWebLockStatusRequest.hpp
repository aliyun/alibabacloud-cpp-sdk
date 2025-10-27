// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEWEBLOCKSTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEWEBLOCKSTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeWebLockStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeWebLockStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(From, from_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(SourceIp, sourceIp_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeWebLockStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(From, from_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(SourceIp, sourceIp_);
    };
    DescribeWebLockStatusRequest() = default ;
    DescribeWebLockStatusRequest(const DescribeWebLockStatusRequest &) = default ;
    DescribeWebLockStatusRequest(DescribeWebLockStatusRequest &&) = default ;
    DescribeWebLockStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeWebLockStatusRequest() = default ;
    DescribeWebLockStatusRequest& operator=(const DescribeWebLockStatusRequest &) = default ;
    DescribeWebLockStatusRequest& operator=(DescribeWebLockStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->from_ == nullptr
        && return this->lang_ == nullptr && return this->sourceIp_ == nullptr; };
    // from Field Functions 
    bool hasFrom() const { return this->from_ != nullptr;};
    void deleteFrom() { this->from_ = nullptr;};
    inline string from() const { DARABONBA_PTR_GET_DEFAULT(from_, "") };
    inline DescribeWebLockStatusRequest& setFrom(string from) { DARABONBA_PTR_SET_VALUE(from_, from) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeWebLockStatusRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // sourceIp Field Functions 
    bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
    void deleteSourceIp() { this->sourceIp_ = nullptr;};
    inline string sourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
    inline DescribeWebLockStatusRequest& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


  protected:
    // The ID of the request source. Set the value to sas.
    std::shared_ptr<string> from_ = nullptr;
    // The language of the content within the request and response. Default value: **zh**. Valid values:
    // 
    // *   **zh**: Chinese
    // *   **en**: English
    std::shared_ptr<string> lang_ = nullptr;
    // The source IP address of the request.
    std::shared_ptr<string> sourceIp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
