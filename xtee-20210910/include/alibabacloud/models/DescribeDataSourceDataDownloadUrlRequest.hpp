// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDATASOURCEDATADOWNLOADURLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDATASOURCEDATADOWNLOADURLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeDataSourceDataDownloadUrlRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDataSourceDataDownloadUrlRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(dataSourceId, dataSourceId_);
      DARABONBA_PTR_TO_JSON(regId, regId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDataSourceDataDownloadUrlRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(dataSourceId, dataSourceId_);
      DARABONBA_PTR_FROM_JSON(regId, regId_);
    };
    DescribeDataSourceDataDownloadUrlRequest() = default ;
    DescribeDataSourceDataDownloadUrlRequest(const DescribeDataSourceDataDownloadUrlRequest &) = default ;
    DescribeDataSourceDataDownloadUrlRequest(DescribeDataSourceDataDownloadUrlRequest &&) = default ;
    DescribeDataSourceDataDownloadUrlRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDataSourceDataDownloadUrlRequest() = default ;
    DescribeDataSourceDataDownloadUrlRequest& operator=(const DescribeDataSourceDataDownloadUrlRequest &) = default ;
    DescribeDataSourceDataDownloadUrlRequest& operator=(DescribeDataSourceDataDownloadUrlRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr
        && this->dataSourceId_ == nullptr && this->regId_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeDataSourceDataDownloadUrlRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // dataSourceId Field Functions 
    bool hasDataSourceId() const { return this->dataSourceId_ != nullptr;};
    void deleteDataSourceId() { this->dataSourceId_ = nullptr;};
    inline int64_t getDataSourceId() const { DARABONBA_PTR_GET_DEFAULT(dataSourceId_, 0L) };
    inline DescribeDataSourceDataDownloadUrlRequest& setDataSourceId(int64_t dataSourceId) { DARABONBA_PTR_SET_VALUE(dataSourceId_, dataSourceId) };


    // regId Field Functions 
    bool hasRegId() const { return this->regId_ != nullptr;};
    void deleteRegId() { this->regId_ = nullptr;};
    inline string getRegId() const { DARABONBA_PTR_GET_DEFAULT(regId_, "") };
    inline DescribeDataSourceDataDownloadUrlRequest& setRegId(string regId) { DARABONBA_PTR_SET_VALUE(regId_, regId) };


  protected:
    // Sets the language type for requests and received messages, default value is **zh**. Values:
    // - **zh**: Chinese
    // - **en**: English
    shared_ptr<string> lang_ {};
    // Data source ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> dataSourceId_ {};
    // Region code
    // 
    // This parameter is required.
    shared_ptr<string> regId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
