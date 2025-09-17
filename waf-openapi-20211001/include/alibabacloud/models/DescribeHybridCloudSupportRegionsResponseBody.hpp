// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHYBRIDCLOUDSUPPORTREGIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHYBRIDCLOUDSUPPORTREGIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeHybridCloudSupportRegionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHybridCloudSupportRegionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SupportRegions, supportRegions_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHybridCloudSupportRegionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SupportRegions, supportRegions_);
    };
    DescribeHybridCloudSupportRegionsResponseBody() = default ;
    DescribeHybridCloudSupportRegionsResponseBody(const DescribeHybridCloudSupportRegionsResponseBody &) = default ;
    DescribeHybridCloudSupportRegionsResponseBody(DescribeHybridCloudSupportRegionsResponseBody &&) = default ;
    DescribeHybridCloudSupportRegionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHybridCloudSupportRegionsResponseBody() = default ;
    DescribeHybridCloudSupportRegionsResponseBody& operator=(const DescribeHybridCloudSupportRegionsResponseBody &) = default ;
    DescribeHybridCloudSupportRegionsResponseBody& operator=(DescribeHybridCloudSupportRegionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->supportRegions_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeHybridCloudSupportRegionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // supportRegions Field Functions 
    bool hasSupportRegions() const { return this->supportRegions_ != nullptr;};
    void deleteSupportRegions() { this->supportRegions_ = nullptr;};
    inline const vector<string> & supportRegions() const { DARABONBA_PTR_GET_CONST(supportRegions_, vector<string>) };
    inline vector<string> supportRegions() { DARABONBA_PTR_GET(supportRegions_, vector<string>) };
    inline DescribeHybridCloudSupportRegionsResponseBody& setSupportRegions(const vector<string> & supportRegions) { DARABONBA_PTR_SET_VALUE(supportRegions_, supportRegions) };
    inline DescribeHybridCloudSupportRegionsResponseBody& setSupportRegions(vector<string> && supportRegions) { DARABONBA_PTR_SET_RVALUE(supportRegions_, supportRegions) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<vector<string>> supportRegions_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
