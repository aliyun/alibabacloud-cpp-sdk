// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEQOSRULESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEQOSRULESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeQosRulesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeQosRulesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(QosRules, qosRules_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeQosRulesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(QosRules, qosRules_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeQosRulesResponseBody() = default ;
    DescribeQosRulesResponseBody(const DescribeQosRulesResponseBody &) = default ;
    DescribeQosRulesResponseBody(DescribeQosRulesResponseBody &&) = default ;
    DescribeQosRulesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeQosRulesResponseBody() = default ;
    DescribeQosRulesResponseBody& operator=(const DescribeQosRulesResponseBody &) = default ;
    DescribeQosRulesResponseBody& operator=(DescribeQosRulesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class QosRules : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const QosRules& obj) { 
        DARABONBA_PTR_TO_JSON(DesktopCount, desktopCount_);
        DARABONBA_PTR_TO_JSON(Download, download_);
        DARABONBA_PTR_TO_JSON(NetworkPackageId, networkPackageId_);
        DARABONBA_PTR_TO_JSON(QosRuleId, qosRuleId_);
        DARABONBA_PTR_TO_JSON(QosRuleName, qosRuleName_);
        DARABONBA_PTR_TO_JSON(Upload, upload_);
      };
      friend void from_json(const Darabonba::Json& j, QosRules& obj) { 
        DARABONBA_PTR_FROM_JSON(DesktopCount, desktopCount_);
        DARABONBA_PTR_FROM_JSON(Download, download_);
        DARABONBA_PTR_FROM_JSON(NetworkPackageId, networkPackageId_);
        DARABONBA_PTR_FROM_JSON(QosRuleId, qosRuleId_);
        DARABONBA_PTR_FROM_JSON(QosRuleName, qosRuleName_);
        DARABONBA_PTR_FROM_JSON(Upload, upload_);
      };
      QosRules() = default ;
      QosRules(const QosRules &) = default ;
      QosRules(QosRules &&) = default ;
      QosRules(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~QosRules() = default ;
      QosRules& operator=(const QosRules &) = default ;
      QosRules& operator=(QosRules &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->desktopCount_ == nullptr
        && this->download_ == nullptr && this->networkPackageId_ == nullptr && this->qosRuleId_ == nullptr && this->qosRuleName_ == nullptr && this->upload_ == nullptr; };
      // desktopCount Field Functions 
      bool hasDesktopCount() const { return this->desktopCount_ != nullptr;};
      void deleteDesktopCount() { this->desktopCount_ = nullptr;};
      inline string getDesktopCount() const { DARABONBA_PTR_GET_DEFAULT(desktopCount_, "") };
      inline QosRules& setDesktopCount(string desktopCount) { DARABONBA_PTR_SET_VALUE(desktopCount_, desktopCount) };


      // download Field Functions 
      bool hasDownload() const { return this->download_ != nullptr;};
      void deleteDownload() { this->download_ = nullptr;};
      inline string getDownload() const { DARABONBA_PTR_GET_DEFAULT(download_, "") };
      inline QosRules& setDownload(string download) { DARABONBA_PTR_SET_VALUE(download_, download) };


      // networkPackageId Field Functions 
      bool hasNetworkPackageId() const { return this->networkPackageId_ != nullptr;};
      void deleteNetworkPackageId() { this->networkPackageId_ = nullptr;};
      inline string getNetworkPackageId() const { DARABONBA_PTR_GET_DEFAULT(networkPackageId_, "") };
      inline QosRules& setNetworkPackageId(string networkPackageId) { DARABONBA_PTR_SET_VALUE(networkPackageId_, networkPackageId) };


      // qosRuleId Field Functions 
      bool hasQosRuleId() const { return this->qosRuleId_ != nullptr;};
      void deleteQosRuleId() { this->qosRuleId_ = nullptr;};
      inline string getQosRuleId() const { DARABONBA_PTR_GET_DEFAULT(qosRuleId_, "") };
      inline QosRules& setQosRuleId(string qosRuleId) { DARABONBA_PTR_SET_VALUE(qosRuleId_, qosRuleId) };


      // qosRuleName Field Functions 
      bool hasQosRuleName() const { return this->qosRuleName_ != nullptr;};
      void deleteQosRuleName() { this->qosRuleName_ = nullptr;};
      inline string getQosRuleName() const { DARABONBA_PTR_GET_DEFAULT(qosRuleName_, "") };
      inline QosRules& setQosRuleName(string qosRuleName) { DARABONBA_PTR_SET_VALUE(qosRuleName_, qosRuleName) };


      // upload Field Functions 
      bool hasUpload() const { return this->upload_ != nullptr;};
      void deleteUpload() { this->upload_ = nullptr;};
      inline string getUpload() const { DARABONBA_PTR_GET_DEFAULT(upload_, "") };
      inline QosRules& setUpload(string upload) { DARABONBA_PTR_SET_VALUE(upload_, upload) };


    protected:
      shared_ptr<string> desktopCount_ {};
      shared_ptr<string> download_ {};
      shared_ptr<string> networkPackageId_ {};
      shared_ptr<string> qosRuleId_ {};
      shared_ptr<string> qosRuleName_ {};
      shared_ptr<string> upload_ {};
    };

    virtual bool empty() const override { return this->qosRules_ == nullptr
        && this->requestId_ == nullptr; };
    // qosRules Field Functions 
    bool hasQosRules() const { return this->qosRules_ != nullptr;};
    void deleteQosRules() { this->qosRules_ = nullptr;};
    inline const vector<DescribeQosRulesResponseBody::QosRules> & getQosRules() const { DARABONBA_PTR_GET_CONST(qosRules_, vector<DescribeQosRulesResponseBody::QosRules>) };
    inline vector<DescribeQosRulesResponseBody::QosRules> getQosRules() { DARABONBA_PTR_GET(qosRules_, vector<DescribeQosRulesResponseBody::QosRules>) };
    inline DescribeQosRulesResponseBody& setQosRules(const vector<DescribeQosRulesResponseBody::QosRules> & qosRules) { DARABONBA_PTR_SET_VALUE(qosRules_, qosRules) };
    inline DescribeQosRulesResponseBody& setQosRules(vector<DescribeQosRulesResponseBody::QosRules> && qosRules) { DARABONBA_PTR_SET_RVALUE(qosRules_, qosRules) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeQosRulesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<DescribeQosRulesResponseBody::QosRules>> qosRules_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
