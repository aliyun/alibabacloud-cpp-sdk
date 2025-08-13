// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDATASOURCEDATADOWNLOADURLRESPONSEBODYRESULTOBJECT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDATASOURCEDATADOWNLOADURLRESPONSEBODYRESULTOBJECT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeDataSourceDataDownloadUrlResponseBodyResultObject : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDataSourceDataDownloadUrlResponseBodyResultObject& obj) { 
      DARABONBA_PTR_TO_JSON(downloadFileUrl, downloadFileUrl_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDataSourceDataDownloadUrlResponseBodyResultObject& obj) { 
      DARABONBA_PTR_FROM_JSON(downloadFileUrl, downloadFileUrl_);
    };
    DescribeDataSourceDataDownloadUrlResponseBodyResultObject() = default ;
    DescribeDataSourceDataDownloadUrlResponseBodyResultObject(const DescribeDataSourceDataDownloadUrlResponseBodyResultObject &) = default ;
    DescribeDataSourceDataDownloadUrlResponseBodyResultObject(DescribeDataSourceDataDownloadUrlResponseBodyResultObject &&) = default ;
    DescribeDataSourceDataDownloadUrlResponseBodyResultObject(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDataSourceDataDownloadUrlResponseBodyResultObject() = default ;
    DescribeDataSourceDataDownloadUrlResponseBodyResultObject& operator=(const DescribeDataSourceDataDownloadUrlResponseBodyResultObject &) = default ;
    DescribeDataSourceDataDownloadUrlResponseBodyResultObject& operator=(DescribeDataSourceDataDownloadUrlResponseBodyResultObject &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->downloadFileUrl_ != nullptr; };
    // downloadFileUrl Field Functions 
    bool hasDownloadFileUrl() const { return this->downloadFileUrl_ != nullptr;};
    void deleteDownloadFileUrl() { this->downloadFileUrl_ = nullptr;};
    inline string downloadFileUrl() const { DARABONBA_PTR_GET_DEFAULT(downloadFileUrl_, "") };
    inline DescribeDataSourceDataDownloadUrlResponseBodyResultObject& setDownloadFileUrl(string downloadFileUrl) { DARABONBA_PTR_SET_VALUE(downloadFileUrl_, downloadFileUrl) };


  protected:
    // Download URL.
    std::shared_ptr<string> downloadFileUrl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
