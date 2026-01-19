// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDATASOURCEFIELDSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDATASOURCEFIELDSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeDataSourceFieldsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDataSourceFieldsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(dataSourceCode, dataSourceCode_);
      DARABONBA_PTR_TO_JSON(regId, regId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDataSourceFieldsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(dataSourceCode, dataSourceCode_);
      DARABONBA_PTR_FROM_JSON(regId, regId_);
    };
    DescribeDataSourceFieldsRequest() = default ;
    DescribeDataSourceFieldsRequest(const DescribeDataSourceFieldsRequest &) = default ;
    DescribeDataSourceFieldsRequest(DescribeDataSourceFieldsRequest &&) = default ;
    DescribeDataSourceFieldsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDataSourceFieldsRequest() = default ;
    DescribeDataSourceFieldsRequest& operator=(const DescribeDataSourceFieldsRequest &) = default ;
    DescribeDataSourceFieldsRequest& operator=(DescribeDataSourceFieldsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr
        && this->dataSourceCode_ == nullptr && this->regId_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeDataSourceFieldsRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // dataSourceCode Field Functions 
    bool hasDataSourceCode() const { return this->dataSourceCode_ != nullptr;};
    void deleteDataSourceCode() { this->dataSourceCode_ = nullptr;};
    inline string getDataSourceCode() const { DARABONBA_PTR_GET_DEFAULT(dataSourceCode_, "") };
    inline DescribeDataSourceFieldsRequest& setDataSourceCode(string dataSourceCode) { DARABONBA_PTR_SET_VALUE(dataSourceCode_, dataSourceCode) };


    // regId Field Functions 
    bool hasRegId() const { return this->regId_ != nullptr;};
    void deleteRegId() { this->regId_ = nullptr;};
    inline string getRegId() const { DARABONBA_PTR_GET_DEFAULT(regId_, "") };
    inline DescribeDataSourceFieldsRequest& setRegId(string regId) { DARABONBA_PTR_SET_VALUE(regId_, regId) };


  protected:
    // Set the language type for requests and received messages, default value is **zh**. Values:
    // - **zh**: Chinese
    // - **en**: English
    shared_ptr<string> lang_ {};
    // Data source code
    // 
    // This parameter is required.
    shared_ptr<string> dataSourceCode_ {};
    // Region code
    // 
    // This parameter is required.
    shared_ptr<string> regId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
