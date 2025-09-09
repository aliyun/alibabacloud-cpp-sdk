// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECUSTOMLINEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECUSTOMLINEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeCustomLineRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCustomLineRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(LineId, lineId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCustomLineRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(LineId, lineId_);
    };
    DescribeCustomLineRequest() = default ;
    DescribeCustomLineRequest(const DescribeCustomLineRequest &) = default ;
    DescribeCustomLineRequest(DescribeCustomLineRequest &&) = default ;
    DescribeCustomLineRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCustomLineRequest() = default ;
    DescribeCustomLineRequest& operator=(const DescribeCustomLineRequest &) = default ;
    DescribeCustomLineRequest& operator=(DescribeCustomLineRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->lang_ != nullptr
        && this->lineId_ != nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeCustomLineRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // lineId Field Functions 
    bool hasLineId() const { return this->lineId_ != nullptr;};
    void deleteLineId() { this->lineId_ = nullptr;};
    inline int64_t lineId() const { DARABONBA_PTR_GET_DEFAULT(lineId_, 0L) };
    inline DescribeCustomLineRequest& setLineId(int64_t lineId) { DARABONBA_PTR_SET_VALUE(lineId_, lineId) };


  protected:
    // The language of the content within the request and response. Default value: **zh**. Valid values:
    // 
    // *   **zh**: Chinese
    // *   **en**: English
    std::shared_ptr<string> lang_ = nullptr;
    // The unique ID of the custom line. You can call [DescribeCustomLines](https://www.alibabacloud.com/help/en/dns/api-alidns-2015-01-09-describecustomlines?spm=a2c63.p38356.help-menu-search-29697.d_0) operation to obtain the ID
    std::shared_ptr<int64_t> lineId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
