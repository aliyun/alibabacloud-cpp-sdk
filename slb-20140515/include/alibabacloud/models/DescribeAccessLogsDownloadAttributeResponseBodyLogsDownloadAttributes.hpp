// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEACCESSLOGSDOWNLOADATTRIBUTERESPONSEBODYLOGSDOWNLOADATTRIBUTES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEACCESSLOGSDOWNLOADATTRIBUTERESPONSEBODYLOGSDOWNLOADATTRIBUTES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeAccessLogsDownloadAttributeResponseBodyLogsDownloadAttributesLogsDownloadAttribute.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Slb20140515
{
namespace Models
{
  class DescribeAccessLogsDownloadAttributeResponseBodyLogsDownloadAttributes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAccessLogsDownloadAttributeResponseBodyLogsDownloadAttributes& obj) { 
      DARABONBA_PTR_TO_JSON(LogsDownloadAttribute, logsDownloadAttribute_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAccessLogsDownloadAttributeResponseBodyLogsDownloadAttributes& obj) { 
      DARABONBA_PTR_FROM_JSON(LogsDownloadAttribute, logsDownloadAttribute_);
    };
    DescribeAccessLogsDownloadAttributeResponseBodyLogsDownloadAttributes() = default ;
    DescribeAccessLogsDownloadAttributeResponseBodyLogsDownloadAttributes(const DescribeAccessLogsDownloadAttributeResponseBodyLogsDownloadAttributes &) = default ;
    DescribeAccessLogsDownloadAttributeResponseBodyLogsDownloadAttributes(DescribeAccessLogsDownloadAttributeResponseBodyLogsDownloadAttributes &&) = default ;
    DescribeAccessLogsDownloadAttributeResponseBodyLogsDownloadAttributes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAccessLogsDownloadAttributeResponseBodyLogsDownloadAttributes() = default ;
    DescribeAccessLogsDownloadAttributeResponseBodyLogsDownloadAttributes& operator=(const DescribeAccessLogsDownloadAttributeResponseBodyLogsDownloadAttributes &) = default ;
    DescribeAccessLogsDownloadAttributeResponseBodyLogsDownloadAttributes& operator=(DescribeAccessLogsDownloadAttributeResponseBodyLogsDownloadAttributes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->logsDownloadAttribute_ == nullptr; };
    // logsDownloadAttribute Field Functions 
    bool hasLogsDownloadAttribute() const { return this->logsDownloadAttribute_ != nullptr;};
    void deleteLogsDownloadAttribute() { this->logsDownloadAttribute_ = nullptr;};
    inline const vector<Models::DescribeAccessLogsDownloadAttributeResponseBodyLogsDownloadAttributesLogsDownloadAttribute> & logsDownloadAttribute() const { DARABONBA_PTR_GET_CONST(logsDownloadAttribute_, vector<Models::DescribeAccessLogsDownloadAttributeResponseBodyLogsDownloadAttributesLogsDownloadAttribute>) };
    inline vector<Models::DescribeAccessLogsDownloadAttributeResponseBodyLogsDownloadAttributesLogsDownloadAttribute> logsDownloadAttribute() { DARABONBA_PTR_GET(logsDownloadAttribute_, vector<Models::DescribeAccessLogsDownloadAttributeResponseBodyLogsDownloadAttributesLogsDownloadAttribute>) };
    inline DescribeAccessLogsDownloadAttributeResponseBodyLogsDownloadAttributes& setLogsDownloadAttribute(const vector<Models::DescribeAccessLogsDownloadAttributeResponseBodyLogsDownloadAttributesLogsDownloadAttribute> & logsDownloadAttribute) { DARABONBA_PTR_SET_VALUE(logsDownloadAttribute_, logsDownloadAttribute) };
    inline DescribeAccessLogsDownloadAttributeResponseBodyLogsDownloadAttributes& setLogsDownloadAttribute(vector<Models::DescribeAccessLogsDownloadAttributeResponseBodyLogsDownloadAttributesLogsDownloadAttribute> && logsDownloadAttribute) { DARABONBA_PTR_SET_RVALUE(logsDownloadAttribute_, logsDownloadAttribute) };


  protected:
    std::shared_ptr<vector<Models::DescribeAccessLogsDownloadAttributeResponseBodyLogsDownloadAttributesLogsDownloadAttribute>> logsDownloadAttribute_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Slb20140515
#endif
