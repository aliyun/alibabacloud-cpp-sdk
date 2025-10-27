// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IGNOREIDCPROBESCANRESULTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_IGNOREIDCPROBESCANRESULTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class IgnoreIdcProbeScanResultRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IgnoreIdcProbeScanResultRequest& obj) { 
      DARABONBA_PTR_TO_JSON(IgnoreAction, ignoreAction_);
      DARABONBA_PTR_TO_JSON(ScanResultIds, scanResultIds_);
    };
    friend void from_json(const Darabonba::Json& j, IgnoreIdcProbeScanResultRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(IgnoreAction, ignoreAction_);
      DARABONBA_PTR_FROM_JSON(ScanResultIds, scanResultIds_);
    };
    IgnoreIdcProbeScanResultRequest() = default ;
    IgnoreIdcProbeScanResultRequest(const IgnoreIdcProbeScanResultRequest &) = default ;
    IgnoreIdcProbeScanResultRequest(IgnoreIdcProbeScanResultRequest &&) = default ;
    IgnoreIdcProbeScanResultRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IgnoreIdcProbeScanResultRequest() = default ;
    IgnoreIdcProbeScanResultRequest& operator=(const IgnoreIdcProbeScanResultRequest &) = default ;
    IgnoreIdcProbeScanResultRequest& operator=(IgnoreIdcProbeScanResultRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ignoreAction_ == nullptr
        && return this->scanResultIds_ == nullptr; };
    // ignoreAction Field Functions 
    bool hasIgnoreAction() const { return this->ignoreAction_ != nullptr;};
    void deleteIgnoreAction() { this->ignoreAction_ = nullptr;};
    inline int32_t ignoreAction() const { DARABONBA_PTR_GET_DEFAULT(ignoreAction_, 0) };
    inline IgnoreIdcProbeScanResultRequest& setIgnoreAction(int32_t ignoreAction) { DARABONBA_PTR_SET_VALUE(ignoreAction_, ignoreAction) };


    // scanResultIds Field Functions 
    bool hasScanResultIds() const { return this->scanResultIds_ != nullptr;};
    void deleteScanResultIds() { this->scanResultIds_ = nullptr;};
    inline string scanResultIds() const { DARABONBA_PTR_GET_DEFAULT(scanResultIds_, "") };
    inline IgnoreIdcProbeScanResultRequest& setScanResultIds(string scanResultIds) { DARABONBA_PTR_SET_VALUE(scanResultIds_, scanResultIds) };


  protected:
    // The operation that you want to perform. Valid values:
    // 
    // *   **1**: adds the scan result to the whitelist.
    // *   **2**: ignores the scan result.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> ignoreAction_ = nullptr;
    // The ID of the scan result. Separate multiple IDs with commas (,).
    // 
    // >  You can call the [DescribeIdcProbeScanResultList](~~DescribeIdcProbeScanResultList~~) operation to query the ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> scanResultIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
