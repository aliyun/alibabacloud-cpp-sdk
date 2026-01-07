// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTGATEWAYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTGATEWAYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eas20210701
{
namespace Models
{
  class ListGatewayResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListGatewayResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Gateways, gateways_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListGatewayResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Gateways, gateways_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListGatewayResponseBody() = default ;
    ListGatewayResponseBody(const ListGatewayResponseBody &) = default ;
    ListGatewayResponseBody(ListGatewayResponseBody &&) = default ;
    ListGatewayResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListGatewayResponseBody() = default ;
    ListGatewayResponseBody& operator=(const ListGatewayResponseBody &) = default ;
    ListGatewayResponseBody& operator=(ListGatewayResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Gateways : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Gateways& obj) { 
        DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(GatewayId, gatewayId_);
        DARABONBA_PTR_TO_JSON(GatewayName, gatewayName_);
        DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
        DARABONBA_PTR_TO_JSON(InternetDomain, internetDomain_);
        DARABONBA_PTR_TO_JSON(InternetEnabled, internetEnabled_);
        DARABONBA_PTR_TO_JSON(IntranetDomain, intranetDomain_);
        DARABONBA_PTR_TO_JSON(IntranetEnabled, intranetEnabled_);
        DARABONBA_PTR_TO_JSON(IsDefault, isDefault_);
        DARABONBA_PTR_TO_JSON(Labels, labels_);
        DARABONBA_PTR_TO_JSON(Replicas, replicas_);
        DARABONBA_PTR_TO_JSON(SSLRedirectionEnabled, SSLRedirectionEnabled_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      };
      friend void from_json(const Darabonba::Json& j, Gateways& obj) { 
        DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(GatewayId, gatewayId_);
        DARABONBA_PTR_FROM_JSON(GatewayName, gatewayName_);
        DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
        DARABONBA_PTR_FROM_JSON(InternetDomain, internetDomain_);
        DARABONBA_PTR_FROM_JSON(InternetEnabled, internetEnabled_);
        DARABONBA_PTR_FROM_JSON(IntranetDomain, intranetDomain_);
        DARABONBA_PTR_FROM_JSON(IntranetEnabled, intranetEnabled_);
        DARABONBA_PTR_FROM_JSON(IsDefault, isDefault_);
        DARABONBA_PTR_FROM_JSON(Labels, labels_);
        DARABONBA_PTR_FROM_JSON(Replicas, replicas_);
        DARABONBA_PTR_FROM_JSON(SSLRedirectionEnabled, SSLRedirectionEnabled_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      };
      Gateways() = default ;
      Gateways(const Gateways &) = default ;
      Gateways(Gateways &&) = default ;
      Gateways(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Gateways() = default ;
      Gateways& operator=(const Gateways &) = default ;
      Gateways& operator=(Gateways &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Labels : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Labels& obj) { 
          DARABONBA_PTR_TO_JSON(LabelKey, labelKey_);
          DARABONBA_PTR_TO_JSON(LabelValue, labelValue_);
        };
        friend void from_json(const Darabonba::Json& j, Labels& obj) { 
          DARABONBA_PTR_FROM_JSON(LabelKey, labelKey_);
          DARABONBA_PTR_FROM_JSON(LabelValue, labelValue_);
        };
        Labels() = default ;
        Labels(const Labels &) = default ;
        Labels(Labels &&) = default ;
        Labels(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Labels() = default ;
        Labels& operator=(const Labels &) = default ;
        Labels& operator=(Labels &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->labelKey_ == nullptr
        && this->labelValue_ == nullptr; };
        // labelKey Field Functions 
        bool hasLabelKey() const { return this->labelKey_ != nullptr;};
        void deleteLabelKey() { this->labelKey_ = nullptr;};
        inline string getLabelKey() const { DARABONBA_PTR_GET_DEFAULT(labelKey_, "") };
        inline Labels& setLabelKey(string labelKey) { DARABONBA_PTR_SET_VALUE(labelKey_, labelKey) };


        // labelValue Field Functions 
        bool hasLabelValue() const { return this->labelValue_ != nullptr;};
        void deleteLabelValue() { this->labelValue_ = nullptr;};
        inline string getLabelValue() const { DARABONBA_PTR_GET_DEFAULT(labelValue_, "") };
        inline Labels& setLabelValue(string labelValue) { DARABONBA_PTR_SET_VALUE(labelValue_, labelValue) };


      protected:
        shared_ptr<string> labelKey_ {};
        shared_ptr<string> labelValue_ {};
      };

      virtual bool empty() const override { return this->chargeType_ == nullptr
        && this->createTime_ == nullptr && this->gatewayId_ == nullptr && this->gatewayName_ == nullptr && this->instanceType_ == nullptr && this->internetDomain_ == nullptr
        && this->internetEnabled_ == nullptr && this->intranetDomain_ == nullptr && this->intranetEnabled_ == nullptr && this->isDefault_ == nullptr && this->labels_ == nullptr
        && this->replicas_ == nullptr && this->SSLRedirectionEnabled_ == nullptr && this->status_ == nullptr && this->updateTime_ == nullptr; };
      // chargeType Field Functions 
      bool hasChargeType() const { return this->chargeType_ != nullptr;};
      void deleteChargeType() { this->chargeType_ = nullptr;};
      inline string getChargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
      inline Gateways& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Gateways& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // gatewayId Field Functions 
      bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
      void deleteGatewayId() { this->gatewayId_ = nullptr;};
      inline string getGatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, "") };
      inline Gateways& setGatewayId(string gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


      // gatewayName Field Functions 
      bool hasGatewayName() const { return this->gatewayName_ != nullptr;};
      void deleteGatewayName() { this->gatewayName_ = nullptr;};
      inline string getGatewayName() const { DARABONBA_PTR_GET_DEFAULT(gatewayName_, "") };
      inline Gateways& setGatewayName(string gatewayName) { DARABONBA_PTR_SET_VALUE(gatewayName_, gatewayName) };


      // instanceType Field Functions 
      bool hasInstanceType() const { return this->instanceType_ != nullptr;};
      void deleteInstanceType() { this->instanceType_ = nullptr;};
      inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
      inline Gateways& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


      // internetDomain Field Functions 
      bool hasInternetDomain() const { return this->internetDomain_ != nullptr;};
      void deleteInternetDomain() { this->internetDomain_ = nullptr;};
      inline string getInternetDomain() const { DARABONBA_PTR_GET_DEFAULT(internetDomain_, "") };
      inline Gateways& setInternetDomain(string internetDomain) { DARABONBA_PTR_SET_VALUE(internetDomain_, internetDomain) };


      // internetEnabled Field Functions 
      bool hasInternetEnabled() const { return this->internetEnabled_ != nullptr;};
      void deleteInternetEnabled() { this->internetEnabled_ = nullptr;};
      inline bool getInternetEnabled() const { DARABONBA_PTR_GET_DEFAULT(internetEnabled_, false) };
      inline Gateways& setInternetEnabled(bool internetEnabled) { DARABONBA_PTR_SET_VALUE(internetEnabled_, internetEnabled) };


      // intranetDomain Field Functions 
      bool hasIntranetDomain() const { return this->intranetDomain_ != nullptr;};
      void deleteIntranetDomain() { this->intranetDomain_ = nullptr;};
      inline string getIntranetDomain() const { DARABONBA_PTR_GET_DEFAULT(intranetDomain_, "") };
      inline Gateways& setIntranetDomain(string intranetDomain) { DARABONBA_PTR_SET_VALUE(intranetDomain_, intranetDomain) };


      // intranetEnabled Field Functions 
      bool hasIntranetEnabled() const { return this->intranetEnabled_ != nullptr;};
      void deleteIntranetEnabled() { this->intranetEnabled_ = nullptr;};
      inline bool getIntranetEnabled() const { DARABONBA_PTR_GET_DEFAULT(intranetEnabled_, false) };
      inline Gateways& setIntranetEnabled(bool intranetEnabled) { DARABONBA_PTR_SET_VALUE(intranetEnabled_, intranetEnabled) };


      // isDefault Field Functions 
      bool hasIsDefault() const { return this->isDefault_ != nullptr;};
      void deleteIsDefault() { this->isDefault_ = nullptr;};
      inline bool getIsDefault() const { DARABONBA_PTR_GET_DEFAULT(isDefault_, false) };
      inline Gateways& setIsDefault(bool isDefault) { DARABONBA_PTR_SET_VALUE(isDefault_, isDefault) };


      // labels Field Functions 
      bool hasLabels() const { return this->labels_ != nullptr;};
      void deleteLabels() { this->labels_ = nullptr;};
      inline const vector<Gateways::Labels> & getLabels() const { DARABONBA_PTR_GET_CONST(labels_, vector<Gateways::Labels>) };
      inline vector<Gateways::Labels> getLabels() { DARABONBA_PTR_GET(labels_, vector<Gateways::Labels>) };
      inline Gateways& setLabels(const vector<Gateways::Labels> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
      inline Gateways& setLabels(vector<Gateways::Labels> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


      // replicas Field Functions 
      bool hasReplicas() const { return this->replicas_ != nullptr;};
      void deleteReplicas() { this->replicas_ = nullptr;};
      inline int32_t getReplicas() const { DARABONBA_PTR_GET_DEFAULT(replicas_, 0) };
      inline Gateways& setReplicas(int32_t replicas) { DARABONBA_PTR_SET_VALUE(replicas_, replicas) };


      // SSLRedirectionEnabled Field Functions 
      bool hasSSLRedirectionEnabled() const { return this->SSLRedirectionEnabled_ != nullptr;};
      void deleteSSLRedirectionEnabled() { this->SSLRedirectionEnabled_ = nullptr;};
      inline bool getSSLRedirectionEnabled() const { DARABONBA_PTR_GET_DEFAULT(SSLRedirectionEnabled_, false) };
      inline Gateways& setSSLRedirectionEnabled(bool SSLRedirectionEnabled) { DARABONBA_PTR_SET_VALUE(SSLRedirectionEnabled_, SSLRedirectionEnabled) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Gateways& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
      inline Gateways& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    protected:
      // The billing method. Valid values:
      // 
      // *   PrePaid: subscription.
      // *   PostPaid: pay-as-you-go.
      shared_ptr<string> chargeType_ {};
      // The time when the private gateway was created. The time is displayed in UTC.
      shared_ptr<string> createTime_ {};
      // The private gateway ID.
      shared_ptr<string> gatewayId_ {};
      // The private gateway alias.
      shared_ptr<string> gatewayName_ {};
      // The type of instances used for the private gateway.
      shared_ptr<string> instanceType_ {};
      // The public endpoint.
      shared_ptr<string> internetDomain_ {};
      // Indicates whether Internet access is enabled.
      shared_ptr<bool> internetEnabled_ {};
      // The internal endpoint.
      shared_ptr<string> intranetDomain_ {};
      shared_ptr<bool> intranetEnabled_ {};
      // Indicates whether it is the default private gateway.
      shared_ptr<bool> isDefault_ {};
      shared_ptr<vector<Gateways::Labels>> labels_ {};
      // The number of nodes in the private gateway.
      shared_ptr<int32_t> replicas_ {};
      // Specifies whether to enable HTTP to HTTPS redirection.
      shared_ptr<bool> SSLRedirectionEnabled_ {};
      // The state of the private gateway.
      // 
      // Valid values:
      // 
      // *   Creating
      // *   Stopped
      // *   Failed
      // *   Running
      // *   Deleted
      // *   Deleting
      // *   Waiting
      shared_ptr<string> status_ {};
      // The time when the private gateway was updated. The time is displayed in UTC.
      shared_ptr<string> updateTime_ {};
    };

    virtual bool empty() const override { return this->gateways_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // gateways Field Functions 
    bool hasGateways() const { return this->gateways_ != nullptr;};
    void deleteGateways() { this->gateways_ = nullptr;};
    inline const vector<ListGatewayResponseBody::Gateways> & getGateways() const { DARABONBA_PTR_GET_CONST(gateways_, vector<ListGatewayResponseBody::Gateways>) };
    inline vector<ListGatewayResponseBody::Gateways> getGateways() { DARABONBA_PTR_GET(gateways_, vector<ListGatewayResponseBody::Gateways>) };
    inline ListGatewayResponseBody& setGateways(const vector<ListGatewayResponseBody::Gateways> & gateways) { DARABONBA_PTR_SET_VALUE(gateways_, gateways) };
    inline ListGatewayResponseBody& setGateways(vector<ListGatewayResponseBody::Gateways> && gateways) { DARABONBA_PTR_SET_RVALUE(gateways_, gateways) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListGatewayResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListGatewayResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListGatewayResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListGatewayResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The private gateways.
    shared_ptr<vector<ListGatewayResponseBody::Gateways>> gateways_ {};
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of private gateways returned.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
