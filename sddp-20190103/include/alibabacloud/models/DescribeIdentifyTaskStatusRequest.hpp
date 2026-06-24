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
        && this->lang_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline DescribeIdentifyTaskStatusRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeIdentifyTaskStatusRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


  protected:
    // The ID of the task. Obtain this ID from the Id field in the response from calling the CreateScanTask or ScanOssObjectV1 operation.
    // 
    // This parameter is required.
    shared_ptr<int64_t> id_ {};
    // The language of the request and response. Default value: **zh_cn**. Valid values:
    // 
    // - **zh_cn**: Simplified Chinese
    // 
    // - **en_us**: U.S. English
    shared_ptr<string> lang_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sddp20190103
#endif
