// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGRAPH4INVESTIGATIONONLINEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGRAPH4INVESTIGATIONONLINEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeGraph4InvestigationOnlineRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGraph4InvestigationOnlineRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AnomalyId, anomalyId_);
      DARABONBA_PTR_TO_JSON(AnomalyUuid, anomalyUuid_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(VertexId, vertexId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGraph4InvestigationOnlineRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AnomalyId, anomalyId_);
      DARABONBA_PTR_FROM_JSON(AnomalyUuid, anomalyUuid_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(VertexId, vertexId_);
    };
    DescribeGraph4InvestigationOnlineRequest() = default ;
    DescribeGraph4InvestigationOnlineRequest(const DescribeGraph4InvestigationOnlineRequest &) = default ;
    DescribeGraph4InvestigationOnlineRequest(DescribeGraph4InvestigationOnlineRequest &&) = default ;
    DescribeGraph4InvestigationOnlineRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGraph4InvestigationOnlineRequest() = default ;
    DescribeGraph4InvestigationOnlineRequest& operator=(const DescribeGraph4InvestigationOnlineRequest &) = default ;
    DescribeGraph4InvestigationOnlineRequest& operator=(DescribeGraph4InvestigationOnlineRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->anomalyId_ == nullptr
        && this->anomalyUuid_ == nullptr && this->lang_ == nullptr && this->namespace_ == nullptr && this->vertexId_ == nullptr; };
    // anomalyId Field Functions 
    bool hasAnomalyId() const { return this->anomalyId_ != nullptr;};
    void deleteAnomalyId() { this->anomalyId_ = nullptr;};
    inline string getAnomalyId() const { DARABONBA_PTR_GET_DEFAULT(anomalyId_, "") };
    inline DescribeGraph4InvestigationOnlineRequest& setAnomalyId(string anomalyId) { DARABONBA_PTR_SET_VALUE(anomalyId_, anomalyId) };


    // anomalyUuid Field Functions 
    bool hasAnomalyUuid() const { return this->anomalyUuid_ != nullptr;};
    void deleteAnomalyUuid() { this->anomalyUuid_ = nullptr;};
    inline string getAnomalyUuid() const { DARABONBA_PTR_GET_DEFAULT(anomalyUuid_, "") };
    inline DescribeGraph4InvestigationOnlineRequest& setAnomalyUuid(string anomalyUuid) { DARABONBA_PTR_SET_VALUE(anomalyUuid_, anomalyUuid) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeGraph4InvestigationOnlineRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline DescribeGraph4InvestigationOnlineRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // vertexId Field Functions 
    bool hasVertexId() const { return this->vertexId_ != nullptr;};
    void deleteVertexId() { this->vertexId_ = nullptr;};
    inline string getVertexId() const { DARABONBA_PTR_GET_DEFAULT(vertexId_, "") };
    inline DescribeGraph4InvestigationOnlineRequest& setVertexId(string vertexId) { DARABONBA_PTR_SET_VALUE(vertexId_, vertexId) };


  protected:
    // The ID of the alert event. You can call [DescribeSuspEvents](~~DescribeSuspEvents~~) to obtain the alert event ID, with the value path being: data.SuspEvents[index].UniqueInfo.
    shared_ptr<string> anomalyId_ {};
    // The UUID of the alert event asset. You can call [DescribeSuspEvents](~~DescribeSuspEvents~~) to obtain the asset UUID, with the value path being: data.SuspEvents[index].Uuid.
    shared_ptr<string> anomalyUuid_ {};
    // Sets the language type for the request and response messages. The default is **zh**. Values:
    // 
    // - **zh**: Chinese
    // - **en**: English
    shared_ptr<string> lang_ {};
    // The namespace of the graph, which is fixed as: hundun_dc_online.
    // 
    // This parameter is required.
    shared_ptr<string> namespace_ {};
    // Vertex ID. This does not need to be proactively provided.
    shared_ptr<string> vertexId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
