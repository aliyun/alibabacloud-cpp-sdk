// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEREQUESTHITREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEREQUESTHITREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeRequestHitRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRequestHitRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(regId, regId_);
      DARABONBA_PTR_TO_JSON(sRequestId, sRequestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRequestHitRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(regId, regId_);
      DARABONBA_PTR_FROM_JSON(sRequestId, sRequestId_);
    };
    DescribeRequestHitRequest() = default ;
    DescribeRequestHitRequest(const DescribeRequestHitRequest &) = default ;
    DescribeRequestHitRequest(DescribeRequestHitRequest &&) = default ;
    DescribeRequestHitRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRequestHitRequest() = default ;
    DescribeRequestHitRequest& operator=(const DescribeRequestHitRequest &) = default ;
    DescribeRequestHitRequest& operator=(DescribeRequestHitRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr
        && this->regId_ == nullptr && this->sRequestId_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeRequestHitRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // regId Field Functions 
    bool hasRegId() const { return this->regId_ != nullptr;};
    void deleteRegId() { this->regId_ = nullptr;};
    inline string getRegId() const { DARABONBA_PTR_GET_DEFAULT(regId_, "") };
    inline DescribeRequestHitRequest& setRegId(string regId) { DARABONBA_PTR_SET_VALUE(regId_, regId) };


    // sRequestId Field Functions 
    bool hasSRequestId() const { return this->sRequestId_ != nullptr;};
    void deleteSRequestId() { this->sRequestId_ = nullptr;};
    inline string getSRequestId() const { DARABONBA_PTR_GET_DEFAULT(sRequestId_, "") };
    inline DescribeRequestHitRequest& setSRequestId(string sRequestId) { DARABONBA_PTR_SET_VALUE(sRequestId_, sRequestId) };


  protected:
    // Sets the language type for requests and received messages, default value is **zh**. Values:
    // - **zh**: Chinese
    // - **en**: English
    shared_ptr<string> lang_ {};
    // Region code
    shared_ptr<string> regId_ {};
    // Request ID.
    // 
    // This parameter is required.
    shared_ptr<string> sRequestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
