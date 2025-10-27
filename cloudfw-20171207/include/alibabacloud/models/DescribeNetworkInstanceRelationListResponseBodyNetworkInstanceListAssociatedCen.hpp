// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENETWORKINSTANCERELATIONLISTRESPONSEBODYNETWORKINSTANCELISTASSOCIATEDCEN_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENETWORKINSTANCERELATIONLISTRESPONSEBODYNETWORKINSTANCELISTASSOCIATEDCEN_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeNetworkInstanceRelationListResponseBodyNetworkInstanceListAssociatedCen : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNetworkInstanceRelationListResponseBodyNetworkInstanceListAssociatedCen& obj) { 
      DARABONBA_PTR_TO_JSON(AttachmentId, attachmentId_);
      DARABONBA_PTR_TO_JSON(AttachmentName, attachmentName_);
      DARABONBA_PTR_TO_JSON(CenId, cenId_);
      DARABONBA_PTR_TO_JSON(CenName, cenName_);
      DARABONBA_PTR_TO_JSON(TransitRouterType, transitRouterType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNetworkInstanceRelationListResponseBodyNetworkInstanceListAssociatedCen& obj) { 
      DARABONBA_PTR_FROM_JSON(AttachmentId, attachmentId_);
      DARABONBA_PTR_FROM_JSON(AttachmentName, attachmentName_);
      DARABONBA_PTR_FROM_JSON(CenId, cenId_);
      DARABONBA_PTR_FROM_JSON(CenName, cenName_);
      DARABONBA_PTR_FROM_JSON(TransitRouterType, transitRouterType_);
    };
    DescribeNetworkInstanceRelationListResponseBodyNetworkInstanceListAssociatedCen() = default ;
    DescribeNetworkInstanceRelationListResponseBodyNetworkInstanceListAssociatedCen(const DescribeNetworkInstanceRelationListResponseBodyNetworkInstanceListAssociatedCen &) = default ;
    DescribeNetworkInstanceRelationListResponseBodyNetworkInstanceListAssociatedCen(DescribeNetworkInstanceRelationListResponseBodyNetworkInstanceListAssociatedCen &&) = default ;
    DescribeNetworkInstanceRelationListResponseBodyNetworkInstanceListAssociatedCen(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNetworkInstanceRelationListResponseBodyNetworkInstanceListAssociatedCen() = default ;
    DescribeNetworkInstanceRelationListResponseBodyNetworkInstanceListAssociatedCen& operator=(const DescribeNetworkInstanceRelationListResponseBodyNetworkInstanceListAssociatedCen &) = default ;
    DescribeNetworkInstanceRelationListResponseBodyNetworkInstanceListAssociatedCen& operator=(DescribeNetworkInstanceRelationListResponseBodyNetworkInstanceListAssociatedCen &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->attachmentId_ == nullptr
        && return this->attachmentName_ == nullptr && return this->cenId_ == nullptr && return this->cenName_ == nullptr && return this->transitRouterType_ == nullptr; };
    // attachmentId Field Functions 
    bool hasAttachmentId() const { return this->attachmentId_ != nullptr;};
    void deleteAttachmentId() { this->attachmentId_ = nullptr;};
    inline string attachmentId() const { DARABONBA_PTR_GET_DEFAULT(attachmentId_, "") };
    inline DescribeNetworkInstanceRelationListResponseBodyNetworkInstanceListAssociatedCen& setAttachmentId(string attachmentId) { DARABONBA_PTR_SET_VALUE(attachmentId_, attachmentId) };


    // attachmentName Field Functions 
    bool hasAttachmentName() const { return this->attachmentName_ != nullptr;};
    void deleteAttachmentName() { this->attachmentName_ = nullptr;};
    inline string attachmentName() const { DARABONBA_PTR_GET_DEFAULT(attachmentName_, "") };
    inline DescribeNetworkInstanceRelationListResponseBodyNetworkInstanceListAssociatedCen& setAttachmentName(string attachmentName) { DARABONBA_PTR_SET_VALUE(attachmentName_, attachmentName) };


    // cenId Field Functions 
    bool hasCenId() const { return this->cenId_ != nullptr;};
    void deleteCenId() { this->cenId_ = nullptr;};
    inline string cenId() const { DARABONBA_PTR_GET_DEFAULT(cenId_, "") };
    inline DescribeNetworkInstanceRelationListResponseBodyNetworkInstanceListAssociatedCen& setCenId(string cenId) { DARABONBA_PTR_SET_VALUE(cenId_, cenId) };


    // cenName Field Functions 
    bool hasCenName() const { return this->cenName_ != nullptr;};
    void deleteCenName() { this->cenName_ = nullptr;};
    inline string cenName() const { DARABONBA_PTR_GET_DEFAULT(cenName_, "") };
    inline DescribeNetworkInstanceRelationListResponseBodyNetworkInstanceListAssociatedCen& setCenName(string cenName) { DARABONBA_PTR_SET_VALUE(cenName_, cenName) };


    // transitRouterType Field Functions 
    bool hasTransitRouterType() const { return this->transitRouterType_ != nullptr;};
    void deleteTransitRouterType() { this->transitRouterType_ = nullptr;};
    inline string transitRouterType() const { DARABONBA_PTR_GET_DEFAULT(transitRouterType_, "") };
    inline DescribeNetworkInstanceRelationListResponseBodyNetworkInstanceListAssociatedCen& setTransitRouterType(string transitRouterType) { DARABONBA_PTR_SET_VALUE(transitRouterType_, transitRouterType) };


  protected:
    std::shared_ptr<string> attachmentId_ = nullptr;
    std::shared_ptr<string> attachmentName_ = nullptr;
    std::shared_ptr<string> cenId_ = nullptr;
    std::shared_ptr<string> cenName_ = nullptr;
    std::shared_ptr<string> transitRouterType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
