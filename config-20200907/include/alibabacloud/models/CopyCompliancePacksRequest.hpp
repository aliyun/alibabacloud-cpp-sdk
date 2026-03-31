// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COPYCOMPLIANCEPACKSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_COPYCOMPLIANCEPACKSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class CopyCompliancePacksRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CopyCompliancePacksRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DesAggregatorIds, desAggregatorIds_);
      DARABONBA_PTR_TO_JSON(SrcAggregatorId, srcAggregatorId_);
      DARABONBA_PTR_TO_JSON(SrcCompliancePackIds, srcCompliancePackIds_);
    };
    friend void from_json(const Darabonba::Json& j, CopyCompliancePacksRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DesAggregatorIds, desAggregatorIds_);
      DARABONBA_PTR_FROM_JSON(SrcAggregatorId, srcAggregatorId_);
      DARABONBA_PTR_FROM_JSON(SrcCompliancePackIds, srcCompliancePackIds_);
    };
    CopyCompliancePacksRequest() = default ;
    CopyCompliancePacksRequest(const CopyCompliancePacksRequest &) = default ;
    CopyCompliancePacksRequest(CopyCompliancePacksRequest &&) = default ;
    CopyCompliancePacksRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CopyCompliancePacksRequest() = default ;
    CopyCompliancePacksRequest& operator=(const CopyCompliancePacksRequest &) = default ;
    CopyCompliancePacksRequest& operator=(CopyCompliancePacksRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->desAggregatorIds_ == nullptr
        && this->srcAggregatorId_ == nullptr && this->srcCompliancePackIds_ == nullptr; };
    // desAggregatorIds Field Functions 
    bool hasDesAggregatorIds() const { return this->desAggregatorIds_ != nullptr;};
    void deleteDesAggregatorIds() { this->desAggregatorIds_ = nullptr;};
    inline string getDesAggregatorIds() const { DARABONBA_PTR_GET_DEFAULT(desAggregatorIds_, "") };
    inline CopyCompliancePacksRequest& setDesAggregatorIds(string desAggregatorIds) { DARABONBA_PTR_SET_VALUE(desAggregatorIds_, desAggregatorIds) };


    // srcAggregatorId Field Functions 
    bool hasSrcAggregatorId() const { return this->srcAggregatorId_ != nullptr;};
    void deleteSrcAggregatorId() { this->srcAggregatorId_ = nullptr;};
    inline string getSrcAggregatorId() const { DARABONBA_PTR_GET_DEFAULT(srcAggregatorId_, "") };
    inline CopyCompliancePacksRequest& setSrcAggregatorId(string srcAggregatorId) { DARABONBA_PTR_SET_VALUE(srcAggregatorId_, srcAggregatorId) };


    // srcCompliancePackIds Field Functions 
    bool hasSrcCompliancePackIds() const { return this->srcCompliancePackIds_ != nullptr;};
    void deleteSrcCompliancePackIds() { this->srcCompliancePackIds_ = nullptr;};
    inline string getSrcCompliancePackIds() const { DARABONBA_PTR_GET_DEFAULT(srcCompliancePackIds_, "") };
    inline CopyCompliancePacksRequest& setSrcCompliancePackIds(string srcCompliancePackIds) { DARABONBA_PTR_SET_VALUE(srcCompliancePackIds_, srcCompliancePackIds) };


  protected:
    // The IDs of the destination account groups into which the compliance packages are replicated. Separate multiple account group IDs with commas (,).
    // 
    // > If this parameter is left empty, the compliance packages are replicated to the current account group.
    shared_ptr<string> desAggregatorIds_ {};
    // The ID of the account group to which the compliance packages belong.
    // 
    // For more information about how to obtain the ID of an account group, see [ListAggregators](https://help.aliyun.com/document_detail/255797.html).
    shared_ptr<string> srcAggregatorId_ {};
    // The IDs of the compliance packages. Separate multiple compliance package IDs with commas (,).
    // 
    // For more information about how to obtain the ID of a compliance package, see [ListCompliancePacks](https://help.aliyun.com/document_detail/263332.html).
    // 
    // This parameter is required.
    shared_ptr<string> srcCompliancePackIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
