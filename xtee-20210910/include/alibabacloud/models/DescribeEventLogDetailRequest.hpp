// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEVENTLOGDETAILREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEVENTLOGDETAILREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeEventLogDetailRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEventLogDetailRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(regId, regId_);
      DARABONBA_PTR_TO_JSON(reqIdByLog, reqIdByLog_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEventLogDetailRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(regId, regId_);
      DARABONBA_PTR_FROM_JSON(reqIdByLog, reqIdByLog_);
    };
    DescribeEventLogDetailRequest() = default ;
    DescribeEventLogDetailRequest(const DescribeEventLogDetailRequest &) = default ;
    DescribeEventLogDetailRequest(DescribeEventLogDetailRequest &&) = default ;
    DescribeEventLogDetailRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEventLogDetailRequest() = default ;
    DescribeEventLogDetailRequest& operator=(const DescribeEventLogDetailRequest &) = default ;
    DescribeEventLogDetailRequest& operator=(DescribeEventLogDetailRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr
        && return this->regId_ == nullptr && return this->reqIdByLog_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeEventLogDetailRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // regId Field Functions 
    bool hasRegId() const { return this->regId_ != nullptr;};
    void deleteRegId() { this->regId_ = nullptr;};
    inline string regId() const { DARABONBA_PTR_GET_DEFAULT(regId_, "") };
    inline DescribeEventLogDetailRequest& setRegId(string regId) { DARABONBA_PTR_SET_VALUE(regId_, regId) };


    // reqIdByLog Field Functions 
    bool hasReqIdByLog() const { return this->reqIdByLog_ != nullptr;};
    void deleteReqIdByLog() { this->reqIdByLog_ = nullptr;};
    inline string reqIdByLog() const { DARABONBA_PTR_GET_DEFAULT(reqIdByLog_, "") };
    inline DescribeEventLogDetailRequest& setReqIdByLog(string reqIdByLog) { DARABONBA_PTR_SET_VALUE(reqIdByLog_, reqIdByLog) };


  protected:
    // Set the language type for requests and received messages, default value is **zh**. Values:
    // - **zh**: Chinese
    // - **en**: English
    std::shared_ptr<string> lang_ = nullptr;
    // Region code
    std::shared_ptr<string> regId_ = nullptr;
    // Log details.
    // 
    // This parameter is required.
    std::shared_ptr<string> reqIdByLog_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
