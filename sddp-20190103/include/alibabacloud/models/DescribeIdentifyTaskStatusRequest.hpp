// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIDENTIFYTASKSTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIDENTIFYTASKSTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sddp20190103
{
namespace Models
{
  class DescribeIdentifyTaskStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeIdentifyTaskStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeIdentifyTaskStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
    };
    DescribeIdentifyTaskStatusRequest() = default ;
    DescribeIdentifyTaskStatusRequest(const DescribeIdentifyTaskStatusRequest &) = default ;
    DescribeIdentifyTaskStatusRequest(DescribeIdentifyTaskStatusRequest &&) = default ;
    DescribeIdentifyTaskStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeIdentifyTaskStatusRequest() = default ;
    DescribeIdentifyTaskStatusRequest& operator=(const DescribeIdentifyTaskStatusRequest &) = default ;
    DescribeIdentifyTaskStatusRequest& operator=(DescribeIdentifyTaskStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->id_ == nullptr
        && return this->lang_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline DescribeIdentifyTaskStatusRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeIdentifyTaskStatusRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


  protected:
    // Task ID, obtained from the ID field in the response after calling CreateScanTask or ScanOssObjectV1.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> id_ = nullptr;
    // Language type for request and response messages, default is **zh_cn**. Values:
    // - **zh_cn**: Chinese (Simplified)
    // - **en_us**: English (United States)
    std::shared_ptr<string> lang_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sddp20190103
#endif
