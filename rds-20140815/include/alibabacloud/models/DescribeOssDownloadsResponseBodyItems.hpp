// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEOSSDOWNLOADSRESPONSEBODYITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEOSSDOWNLOADSRESPONSEBODYITEMS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeOssDownloadsResponseBodyItemsOssDownload.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeOssDownloadsResponseBodyItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeOssDownloadsResponseBodyItems& obj) { 
      DARABONBA_PTR_TO_JSON(OssDownload, ossDownload_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeOssDownloadsResponseBodyItems& obj) { 
      DARABONBA_PTR_FROM_JSON(OssDownload, ossDownload_);
    };
    DescribeOssDownloadsResponseBodyItems() = default ;
    DescribeOssDownloadsResponseBodyItems(const DescribeOssDownloadsResponseBodyItems &) = default ;
    DescribeOssDownloadsResponseBodyItems(DescribeOssDownloadsResponseBodyItems &&) = default ;
    DescribeOssDownloadsResponseBodyItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeOssDownloadsResponseBodyItems() = default ;
    DescribeOssDownloadsResponseBodyItems& operator=(const DescribeOssDownloadsResponseBodyItems &) = default ;
    DescribeOssDownloadsResponseBodyItems& operator=(DescribeOssDownloadsResponseBodyItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ossDownload_ == nullptr; };
    // ossDownload Field Functions 
    bool hasOssDownload() const { return this->ossDownload_ != nullptr;};
    void deleteOssDownload() { this->ossDownload_ = nullptr;};
    inline const vector<Models::DescribeOssDownloadsResponseBodyItemsOssDownload> & ossDownload() const { DARABONBA_PTR_GET_CONST(ossDownload_, vector<Models::DescribeOssDownloadsResponseBodyItemsOssDownload>) };
    inline vector<Models::DescribeOssDownloadsResponseBodyItemsOssDownload> ossDownload() { DARABONBA_PTR_GET(ossDownload_, vector<Models::DescribeOssDownloadsResponseBodyItemsOssDownload>) };
    inline DescribeOssDownloadsResponseBodyItems& setOssDownload(const vector<Models::DescribeOssDownloadsResponseBodyItemsOssDownload> & ossDownload) { DARABONBA_PTR_SET_VALUE(ossDownload_, ossDownload) };
    inline DescribeOssDownloadsResponseBodyItems& setOssDownload(vector<Models::DescribeOssDownloadsResponseBodyItemsOssDownload> && ossDownload) { DARABONBA_PTR_SET_RVALUE(ossDownload_, ossDownload) };


  protected:
    std::shared_ptr<vector<Models::DescribeOssDownloadsResponseBodyItemsOssDownload>> ossDownload_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
