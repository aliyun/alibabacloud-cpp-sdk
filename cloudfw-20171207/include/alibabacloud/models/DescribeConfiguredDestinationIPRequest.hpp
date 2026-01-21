// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECONFIGUREDDESTINATIONIPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECONFIGUREDDESTINATIONIPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeConfiguredDestinationIPRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeConfiguredDestinationIPRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(DestinationIP, destinationIP_);
      DARABONBA_PTR_TO_JSON(DestinationISP, destinationISP_);
      DARABONBA_PTR_TO_JSON(DestinationRegion, destinationRegion_);
      DARABONBA_PTR_TO_JSON(Direction, direction_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(SourceCode, sourceCode_);
      DARABONBA_PTR_TO_JSON(SourceIp, sourceIp_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeConfiguredDestinationIPRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(DestinationIP, destinationIP_);
      DARABONBA_PTR_FROM_JSON(DestinationISP, destinationISP_);
      DARABONBA_PTR_FROM_JSON(DestinationRegion, destinationRegion_);
      DARABONBA_PTR_FROM_JSON(Direction, direction_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(SourceCode, sourceCode_);
      DARABONBA_PTR_FROM_JSON(SourceIp, sourceIp_);
    };
    DescribeConfiguredDestinationIPRequest() = default ;
    DescribeConfiguredDestinationIPRequest(const DescribeConfiguredDestinationIPRequest &) = default ;
    DescribeConfiguredDestinationIPRequest(DescribeConfiguredDestinationIPRequest &&) = default ;
    DescribeConfiguredDestinationIPRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeConfiguredDestinationIPRequest() = default ;
    DescribeConfiguredDestinationIPRequest& operator=(const DescribeConfiguredDestinationIPRequest &) = default ;
    DescribeConfiguredDestinationIPRequest& operator=(DescribeConfiguredDestinationIPRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->destinationIP_ == nullptr && this->destinationISP_ == nullptr && this->destinationRegion_ == nullptr && this->direction_ == nullptr && this->groupName_ == nullptr
        && this->lang_ == nullptr && this->pageSize_ == nullptr && this->sourceCode_ == nullptr && this->sourceIp_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline string getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, "") };
    inline DescribeConfiguredDestinationIPRequest& setCurrentPage(string currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // destinationIP Field Functions 
    bool hasDestinationIP() const { return this->destinationIP_ != nullptr;};
    void deleteDestinationIP() { this->destinationIP_ = nullptr;};
    inline string getDestinationIP() const { DARABONBA_PTR_GET_DEFAULT(destinationIP_, "") };
    inline DescribeConfiguredDestinationIPRequest& setDestinationIP(string destinationIP) { DARABONBA_PTR_SET_VALUE(destinationIP_, destinationIP) };


    // destinationISP Field Functions 
    bool hasDestinationISP() const { return this->destinationISP_ != nullptr;};
    void deleteDestinationISP() { this->destinationISP_ = nullptr;};
    inline string getDestinationISP() const { DARABONBA_PTR_GET_DEFAULT(destinationISP_, "") };
    inline DescribeConfiguredDestinationIPRequest& setDestinationISP(string destinationISP) { DARABONBA_PTR_SET_VALUE(destinationISP_, destinationISP) };


    // destinationRegion Field Functions 
    bool hasDestinationRegion() const { return this->destinationRegion_ != nullptr;};
    void deleteDestinationRegion() { this->destinationRegion_ = nullptr;};
    inline string getDestinationRegion() const { DARABONBA_PTR_GET_DEFAULT(destinationRegion_, "") };
    inline DescribeConfiguredDestinationIPRequest& setDestinationRegion(string destinationRegion) { DARABONBA_PTR_SET_VALUE(destinationRegion_, destinationRegion) };


    // direction Field Functions 
    bool hasDirection() const { return this->direction_ != nullptr;};
    void deleteDirection() { this->direction_ = nullptr;};
    inline string getDirection() const { DARABONBA_PTR_GET_DEFAULT(direction_, "") };
    inline DescribeConfiguredDestinationIPRequest& setDirection(string direction) { DARABONBA_PTR_SET_VALUE(direction_, direction) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline DescribeConfiguredDestinationIPRequest& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeConfiguredDestinationIPRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline DescribeConfiguredDestinationIPRequest& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // sourceCode Field Functions 
    bool hasSourceCode() const { return this->sourceCode_ != nullptr;};
    void deleteSourceCode() { this->sourceCode_ = nullptr;};
    inline string getSourceCode() const { DARABONBA_PTR_GET_DEFAULT(sourceCode_, "") };
    inline DescribeConfiguredDestinationIPRequest& setSourceCode(string sourceCode) { DARABONBA_PTR_SET_VALUE(sourceCode_, sourceCode) };


    // sourceIp Field Functions 
    bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
    void deleteSourceIp() { this->sourceIp_ = nullptr;};
    inline string getSourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
    inline DescribeConfiguredDestinationIPRequest& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


  protected:
    shared_ptr<string> currentPage_ {};
    shared_ptr<string> destinationIP_ {};
    shared_ptr<string> destinationISP_ {};
    shared_ptr<string> destinationRegion_ {};
    // This parameter is required.
    shared_ptr<string> direction_ {};
    // This parameter is required.
    shared_ptr<string> groupName_ {};
    shared_ptr<string> lang_ {};
    shared_ptr<string> pageSize_ {};
    // This parameter is required.
    shared_ptr<string> sourceCode_ {};
    shared_ptr<string> sourceIp_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
