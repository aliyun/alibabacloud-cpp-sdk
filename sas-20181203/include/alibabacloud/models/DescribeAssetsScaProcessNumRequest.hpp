// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEASSETSSCAPROCESSNUMREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEASSETSSCAPROCESSNUMREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeAssetsScaProcessNumRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAssetsScaProcessNumRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizType, bizType_);
      DARABONBA_PTR_TO_JSON(UuidList, uuidList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAssetsScaProcessNumRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizType, bizType_);
      DARABONBA_PTR_FROM_JSON(UuidList, uuidList_);
    };
    DescribeAssetsScaProcessNumRequest() = default ;
    DescribeAssetsScaProcessNumRequest(const DescribeAssetsScaProcessNumRequest &) = default ;
    DescribeAssetsScaProcessNumRequest(DescribeAssetsScaProcessNumRequest &&) = default ;
    DescribeAssetsScaProcessNumRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAssetsScaProcessNumRequest() = default ;
    DescribeAssetsScaProcessNumRequest& operator=(const DescribeAssetsScaProcessNumRequest &) = default ;
    DescribeAssetsScaProcessNumRequest& operator=(DescribeAssetsScaProcessNumRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizType_ == nullptr
        && return this->uuidList_ == nullptr; };
    // bizType Field Functions 
    bool hasBizType() const { return this->bizType_ != nullptr;};
    void deleteBizType() { this->bizType_ = nullptr;};
    inline string bizType() const { DARABONBA_PTR_GET_DEFAULT(bizType_, "") };
    inline DescribeAssetsScaProcessNumRequest& setBizType(string bizType) { DARABONBA_PTR_SET_VALUE(bizType_, bizType) };


    // uuidList Field Functions 
    bool hasUuidList() const { return this->uuidList_ != nullptr;};
    void deleteUuidList() { this->uuidList_ = nullptr;};
    inline const vector<string> & uuidList() const { DARABONBA_PTR_GET_CONST(uuidList_, vector<string>) };
    inline vector<string> uuidList() { DARABONBA_PTR_GET(uuidList_, vector<string>) };
    inline DescribeAssetsScaProcessNumRequest& setUuidList(const vector<string> & uuidList) { DARABONBA_PTR_SET_VALUE(uuidList_, uuidList) };
    inline DescribeAssetsScaProcessNumRequest& setUuidList(vector<string> && uuidList) { DARABONBA_PTR_SET_RVALUE(uuidList_, uuidList) };


  protected:
    // The type of the application process. Default value: java. Valid values:
    // 
    // *   **java**
    // *   **php**
    std::shared_ptr<string> bizType_ = nullptr;
    // The UUIDs of the servers.
    // 
    // This parameter is required.
    std::shared_ptr<vector<string>> uuidList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
